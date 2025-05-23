// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityStorage.h"

#include "ComponentArray.h"
#include "EntitySubsystem.h"
#include "UnrealEntity.h"
#include "Archetypes/Archetype.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"
#include "PnP/PnP.h"
#include "PnP/Components/PnPComponentBase.h"
#include "PnP/Components/PnPInteractableComponent.h"
#include "PnP/Utils/Logger.h"

UEntityStorage::UEntityStorage()
{
}

void UEntityStorage::InitializeStorage()
{
	AvailableEntityId = 0;
	RecycledEntityId = -1;
    
	int idCounter = 0;
    
	for (TObjectIterator<UClass> It; It; ++It)
	{
		UClass* class_ = *It;
        
		if (class_->IsChildOf(UPnPComponentBase::StaticClass()) && class_ != UPnPComponentBase::StaticClass())
		{
			if (!ComponentTypeIdMap.Contains(class_))
			{
				ComponentTypeIdMap.Add(class_, idCounter++);
			}
		}
	}
    
	MAX_COMPONENT_TYPES = idCounter;
    
	Components.SetNum(MAX_COMPONENT_TYPES);
	Entities.SetNum(STARTING_ENTITY_COUNT);
    
	for (int i = 0; i < Components.Num(); i++)
	{
		Components[i].Components.SetNum(STARTING_ENTITY_COUNT);
	}
}

void UEntityStorage::SyncComponentToECS(UPnPComponentBase* Component, int32 EntityId)
{
	if (!Component || EntityId < 0 || EntityId >= Entities.Num())
		return;
        
	UClass* ComponentClass = Component->GetClass();
	int32* ComponentTypeIdPtr = ComponentTypeIdMap.Find(ComponentClass);
    
	if (!ComponentTypeIdPtr)
		return;
        
	int32 ComponentTypeId = *ComponentTypeIdPtr;
    
	Components[ComponentTypeId].Components[EntityId] = Component;
    
	UE_LOG(LogTemp, Log, TEXT("Synced component %s for entity %d"), 
		*ComponentClass->GetName(), EntityId);
}

int UEntityStorage::CreateEntity(UUnrealEntity* pUnrealEntity)
{
	int entityId = -1;

	if (RecycledEntityId == -1)
	{
		if (Entities.IsValidIndex(AvailableEntityId))
			entityId = AvailableEntityId++;
		else
		{
			Entities.SetNum(Entities.Num() + ADDITIONAL_ENTITY_COUNT);
			entityId = AvailableEntityId++;
		}
	}
	else
	{
		entityId = RecycledEntityId;
		RecycledEntityId = -1;
	}

	pUnrealEntity->EntityId = entityId;

	TArray<UPnPComponentBase*> components = pUnrealEntity->GetComponents();

	for (UPnPComponentBase* component : components)
	{
		UClass* componentClass = component->GetClass();

		if (ComponentTypeIdMap.Contains(componentClass))
		{
			int componentTypeId = ComponentTypeIdMap[componentClass];
			Components[componentTypeId].AddComponent(component, entityId);
			pUnrealEntity->ComponentSignature.AddFlag(componentTypeId);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Unregistered component type: %s"), *componentClass->GetName());
		}
	}

	pUnrealEntity->EntityFlags.AddFlag(ENTITY_STATE_ACTIVE);
	Entities[entityId] = pUnrealEntity;

	EnsureArchetypeExists(pUnrealEntity->ComponentSignature);
	AddEntityToMatchingArchetypes(entityId);

	return entityId;
}

void UEntityStorage::DestroyEntity(int entityId)
{
	UUnrealEntity* entity = Entities[entityId];
	if (!entity)
		return;
	
	entity->ComponentSignature.ForEachSetBit([this, entityId](int componentTypeId) {
		Components[componentTypeId].RemoveComponent(entityId);
	});

	Entities[entityId] = nullptr;
	RecycledEntityId = entityId;

	entity->GetOwner()->Destroy(true);
}

void UEntityStorage::UpdateEntityArchetype(int32 entityId, FComponentFlags oldSignature, FComponentFlags newSignature)
{
}

void UEntityStorage::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	UObject::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UEntityStorage, Entities);
	DOREPLIFETIME(UEntityStorage, Components);
	DOREPLIFETIME(UEntityStorage, Archetypes);
	DOREPLIFETIME(UEntityStorage, AvailableEntityId);
	DOREPLIFETIME(UEntityStorage, RecycledEntityId);
}

bool UEntityStorage::IsServer() const
{
	return GetWorld()->GetNetMode() != NM_Client;
}

bool UEntityStorage::IsClientEntity(int32 EntityId) const
{
	if (EntityId < 0 || EntityId >= Entities.Num() || !Entities[EntityId])
	{
		return false;
	}
    
	return Entities[EntityId]->OwnerClientId == GEngine->GetFirstLocalPlayerController(GetWorld())->PlayerState->GetPlayerId();
}

bool UEntityStorage::CanModifyEntity(int32 EntityId) const
{
	if (IsServer())
	{
		return true;
	}
    
	return IsClientEntity(EntityId);
}

void UEntityStorage::EnsureArchetypeExists(const FComponentFlags& Signature)
{
	if (SignatureToArchetypeIndex.Contains(Signature.value))
		return;

	int32 newIdx = Archetypes.AddDefaulted();
	FArchetype& newArchetype = Archetypes[newIdx];
	newArchetype.Signature = Signature;
    
	// Initialize component arrays for this signature
	for (auto& Pair : ComponentTypeIdMap)
	{
		UClass* componentClass = Pair.Key;
		int32 componentTypeId = Pair.Value;
        
		if (Signature.HasFlag(componentTypeId))
		{
			newArchetype.ComponentArrays.Add(componentClass, TArray<UPnPComponentBase*>());
		}
	}
    
	SignatureToArchetypeIndex.Add(Signature.value, newIdx);
    
	// Add all existing matching entities to this archetype
	for (int32 i = 0; i < Entities.Num(); ++i)
	{
		if (Entities[i] && Entities[i]->ComponentSignature.MatchesSignature(Signature))
		{
			newArchetype.EntityIds.Add(i);
		}
	}
}

void UEntityStorage::AddEntityToMatchingArchetypes(int32 EntityId)
{
	UUnrealEntity* entity = Entities[EntityId];
	if (!entity)
		return;

	for (FArchetype& archetype : Archetypes)
	{
		if (entity->ComponentSignature.MatchesSignature(archetype.Signature))
		{
			if (!archetype.EntityIds.Contains(EntityId))
			{
				archetype.EntityIds.Add(EntityId);
                
				for (auto& ComponentPair : archetype.ComponentArrays)
				{
					UClass* componentClass = ComponentPair.Key;
					int32* componentTypeId = ComponentTypeIdMap.Find(componentClass);
                    
					if (componentTypeId)
					{
						UPnPComponentBase* component = Components[*componentTypeId].Components[EntityId];
						ComponentPair.Value.Add(component);
					}
				}
			}
		}
	}
}