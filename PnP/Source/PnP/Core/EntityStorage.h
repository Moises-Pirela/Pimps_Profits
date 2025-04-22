// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EntityStorage.generated.h"

struct FComponentArray;
class UUnrealEntity;
class UPnPComponentBase;
/**
 * 
 */



UCLASS()
class PNP_API UEntityStorage : public UObject
{
	GENERATED_BODY()

public:
	//FIELD
	UPROPERTY()
	TMap<UClass*, int> ComponentTypeIdMap;
	UPROPERTY()
	TArray<FComponentArray> Components;
	UPROPERTY()
	TArray<UUnrealEntity*> Entities;

	//FUNC
	UEntityStorage();
	int CreateEntity(UUnrealEntity* pUnrealEntity);
	void DestroyEntity(int entityId);

private:
	int AvailableEntityId;
	int RecycledEntityId;
};
