#pragma once

#include "CoreMinimal.h"
#include "PnP/PnP.h"
#include "PnP/Components/PnPComponentBase.h"

#include "ComponentArray.generated.h"

USTRUCT(BlueprintType)
struct FComponentArray
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<UPnPComponentBase*> Components;

	FComponentArray()
	{
		Components.SetNum(STARTING_ENTITY_COUNT);
	}

	void AddComponent(UPnPComponentBase* component, int entityId)
	{
		Components[entityId] = component;
	}

	void RemoveComponent(int entityId)
	{
		Components[entityId] = nullptr;
	}
};
