// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityView.h"
#include "Flags.h"
#include "UObject/Object.h"
#include "EntityStorage.generated.h"

class UEntityStorage;
struct FComponentArray;
class UUnrealEntity;
class UPnPComponentBase;
struct FArchetype;
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
	
	UPROPERTY()
	TArray<FArchetype> Archetypes;
	UPROPERTY()
	TMap<uint32, int32> SignatureToArchetypeIndex;

	//FUNC
	UEntityStorage();
	int CreateEntity(UUnrealEntity* pUnrealEntity);
	void DestroyEntity(int entityId);
	void UpdateEntityArchetype(int32 entityId, FComponentFlags oldSignature, FComponentFlags newSignature);

	template<typename... ComponentTypes>
	FEntityView GetEntitiesWith()
	{
		FComponentFlags signature;
		(signature.AddFlag(ComponentTypeIdMap[ComponentTypes::StaticClass()]), ...);
        
		// O(1) lookup for matching archetype
		int32* archetypeIdx = SignatureToArchetypeIndex.Find(signature.value);
		if (archetypeIdx)
		{
			return FEntityView(&Archetypes[*archetypeIdx]);
		}
        
		return FEntityView(nullptr); // Empty view
	}

private:
	int AvailableEntityId;
	int RecycledEntityId;
};


