// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityView.h"
#include "Flags.h"
#include "Archetypes/Archetype.h"
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
	void EnsureArchetypeExists(const FComponentFlags& Signature);
	void AddEntityToMatchingArchetypes(int32 EntityId);
	void InitializeStorage();
	void SyncComponentToECS(UPnPComponentBase* Component, int32 EntityId);

	template <typename... ComponentTypes>
	FEntityView GetEntitiesWith()
	{
		FComponentFlags signature;

		// Check if all component types are registered first
		bool bAllComponentsRegistered = true;
		((bAllComponentsRegistered = bAllComponentsRegistered && ComponentTypeIdMap.Contains(
			ComponentTypes::StaticClass())), ...);

		if (!bAllComponentsRegistered)
		{
			UE_LOG(LogTemp, Warning, TEXT("GetEntitiesWith: One or more component types not registered"));
			return FEntityView(nullptr);
		}

		// Build signature
		(signature.AddFlag(ComponentTypeIdMap[ComponentTypes::StaticClass()]), ...);

		// Ensure the archetype exists for this signature
		EnsureArchetypeExists(signature);

		// Now we know the archetype exists, so look it up
		int32* archetypeIdx = SignatureToArchetypeIndex.Find(signature.value);
		if (archetypeIdx)
		{
			return FEntityView(&Archetypes[*archetypeIdx]);
		}

		// This should never happen after EnsureArchetypeExists
		UE_LOG(LogTemp, Error, TEXT("Failed to find archetype after ensuring it exists"));
		return FEntityView(nullptr);
	}

	UFUNCTION(BlueprintCallable)
	FComponentFlags BuildSignature(const TArray<UClass*>& ComponentClasses)
	{
		return FComponentFlags::FromComponentClasses(ComponentClasses, ComponentTypeIdMap);
	}

	// Template version for compile-time safety
	template<typename... ComponentTypes>
	FComponentFlags BuildSignature()
	{
		return FComponentFlags::FromComponentTypes<ComponentTypes...>(ComponentTypeIdMap);
	}

	// Quick archetype creation
	UFUNCTION(BlueprintCallable)
	int32 FindOrCreateArchetype(const TArray<UClass*>& ComponentClasses)
	{
		FComponentFlags signature = BuildSignature(ComponentClasses);
        
		int32* existingIdx = SignatureToArchetypeIndex.Find(signature.value);
		if (existingIdx)
		{
			return *existingIdx;
		}

		// Create new archetype
		int32 newIdx = Archetypes.AddDefaulted();
		FArchetype& newArchetype = Archetypes[newIdx];
		newArchetype.Signature = signature;
        
		SignatureToArchetypeIndex.Add(signature.value, newIdx);
		return newIdx;
	}

private:

	//PROPERTIES
	UPROPERTY(Replicated)
	int AvailableEntityId;
	UPROPERTY(Replicated)
	int RecycledEntityId;
};




