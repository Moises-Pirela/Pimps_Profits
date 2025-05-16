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
	//PROPERTIES
	UPROPERTY()
	TMap<UClass*, int> ComponentTypeIdMap;
	
	UPROPERTY(Replicated)
	TArray<FComponentArray> Components;
	UPROPERTY(Replicated)
	TArray<UUnrealEntity*> Entities;
	UPROPERTY(Replicated)
	TArray<FArchetype> Archetypes;
	
	UPROPERTY()
	TMap<uint32, int32> SignatureToArchetypeIndex;

	//FUNC
	UEntityStorage();
	int CreateEntity(UUnrealEntity* pUnrealEntity);
	void DestroyEntity(int entityId);
	void UpdateEntityArchetype(int32 entityId, FComponentFlags oldSignature, FComponentFlags newSignature);

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	bool IsServer() const;
	bool IsClientEntity(int32 EntityId) const;
	bool CanModifyEntity(int32 EntityId) const;

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

	void InitializeStorage();
	void SyncComponentToECS(UPnPComponentBase* Component, int32 EntityId);

private:

	//PROPERTIES
	UPROPERTY(Replicated)
	int AvailableEntityId;
	UPROPERTY(Replicated)
	int RecycledEntityId;
};




