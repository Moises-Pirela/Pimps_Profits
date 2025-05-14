// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityStorage.h"

#include "ComponentArray.h"
#include "UnrealEntity.h"
#include "PnP/PnP.h"
#include "PnP/Components/PnPComponentBase.h"

UEntityStorage::UEntityStorage()
{
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

	AvailableEntityId = 0;
	RecycledEntityId = -1;
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

	FComponentFlags emptySignature;
	UpdateEntityArchetype(entityId, emptySignature, pUnrealEntity->ComponentSignature);

	return entityId;
}

void UEntityStorage::DestroyEntity(int entityId)
{
	UUnrealEntity* entity = Entities[entityId];
	if (!entity)
		return;

	FComponentFlags oldSignature = entity->ComponentSignature;
	FComponentFlags emptySignature;
    
	UpdateEntityArchetype(entityId, oldSignature, emptySignature);
	
	entity->ComponentSignature.ForEachSetBit([this, entityId](int componentTypeId) {
		Components[componentTypeId].RemoveComponent(entityId);
	});

	Entities[entityId] = nullptr;
	RecycledEntityId = entityId;
}

void UEntityStorage::UpdateEntityArchetype(int32 entityId, FComponentFlags oldSignature, FComponentFlags newSignature)
{
    if (oldSignature.value == newSignature.value)
        return;

    UUnrealEntity* entity = Entities[entityId];
    if (!entity)
        return;

    int32 newArchetypeIndex = -1;
    if (newSignature.value != 0)
    {
        int32* existingArchetypeIndex = SignatureToArchetypeIndex.Find(newSignature.value);
        if (existingArchetypeIndex)
        {
            newArchetypeIndex = *existingArchetypeIndex;
        }
        else
        {
            newArchetypeIndex = Archetypes.AddDefaulted();
            FArchetype& newArchetype = Archetypes[newArchetypeIndex];
            newArchetype.Signature = newSignature;
            
            for (auto& Pair : ComponentTypeIdMap)
            {
                UClass* componentClass = Pair.Key;
                int32 componentTypeId = Pair.Value;
                
                if (newSignature.HasFlag(componentTypeId))
                {
                    newArchetype.ComponentArrays.Add(componentClass, TArray<UPnPComponentBase*>());
                }
            }
            
            SignatureToArchetypeIndex.Add(newSignature.value, newArchetypeIndex);
        }
    }

    if (oldSignature.value != 0)
    {
        int32* oldArchetypeIndex = SignatureToArchetypeIndex.Find(oldSignature.value);
        if (oldArchetypeIndex && *oldArchetypeIndex >= 0 && *oldArchetypeIndex < Archetypes.Num())
        {
            FArchetype& oldArchetype = Archetypes[*oldArchetypeIndex];
            
            int32 oldEntityIndex = oldArchetype.EntityIds.Find(entityId);
            if (oldEntityIndex != INDEX_NONE)
            {
                oldArchetype.EntityIds.RemoveAt(oldEntityIndex);
                
                for (auto& ComponentPair : oldArchetype.ComponentArrays)
                {
                    TArray<UPnPComponentBase*>& componentArray = ComponentPair.Value;
                    if (componentArray.IsValidIndex(oldEntityIndex))
                    {
                        componentArray.RemoveAt(oldEntityIndex);
                    }
                }
                
                // Optionally: Remove empty archetypes
                if (oldArchetype.EntityIds.Num() == 0)
                {
                    // If we want to remove empty archetypes, do it here
                    // For now, we'll keep them to avoid map reindexing complexity
                }
            }
        }
    }

    if (newArchetypeIndex != -1)
    {
        FArchetype& newArchetype = Archetypes[newArchetypeIndex];
        
        newArchetype.EntityIds.Add(entityId);
        
        for (auto& ComponentPair : newArchetype.ComponentArrays)
        {
            UClass* componentClass = ComponentPair.Key;
            TArray<UPnPComponentBase*>& componentArray = ComponentPair.Value;
            
            int32* componentTypeIdPtr = ComponentTypeIdMap.Find(componentClass);
            if (componentTypeIdPtr)
            {
                int32 componentTypeId = *componentTypeIdPtr;
                UPnPComponentBase* component = Components[componentTypeId].Components[entityId];
                
                if (component)
                {
                    componentArray.Add(component);
                }
                else
                {
                    componentArray.Add(nullptr);
                    UE_LOG(LogTemp, Warning, TEXT("Entity %d has signature for component %s but component is null"), 
                           entityId, *componentClass->GetName());
                }
            }
        }
    }

    entity->ComponentSignature = newSignature;
}
