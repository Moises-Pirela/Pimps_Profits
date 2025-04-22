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
}
