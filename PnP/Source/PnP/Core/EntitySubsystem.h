// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ComponentArray.h"
#include "EntityStorage.h"
#include "Subsystems/WorldSubsystem.h"
#include "EntitySubsystem.generated.h"

class UEntityStorage;
/**
 * 
 */
UCLASS()
class PNP_API UEntitySubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UEntityStorage* EntityStorage;

	virtual void Initialize(FSubsystemCollectionBase& pCollection) override;
	virtual void Tick(float pDeltaTime) override;
	virtual TStatId GetStatId() const override;

	template <typename T>
	T* GetComponent(int32 entityID)
	{
		UClass* _componentClass = T::StaticClass();
		int32    _componentTypeId = *EntityStorage->ComponentTypeIdMap.Find(_componentClass);

		return static_cast<T*>(EntityStorage->Components[_componentTypeId].Components[entityID]);
	}
};
