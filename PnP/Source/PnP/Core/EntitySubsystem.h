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
	UPROPERTY(Replicated)
	UEntityStorage* EntityStorage;

	virtual void Initialize(FSubsystemCollectionBase& pCollection) override;
	virtual void Tick(float pDeltaTime) override;
	virtual TStatId GetStatId() const override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerCreateEntity(UUnrealEntity* EntityTemplate);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerDestroyEntity(int32 EntityId);

	template <typename T>
T* GetComponent(int32 entityID)
{
    // First try to get it from storage
    if (!EntityStorage || !EntityStorage->Entities.IsValidIndex(entityID))
    {
        return nullptr;
    }
    
    // Get the actual entity actor
    UUnrealEntity* entity = EntityStorage->Entities[entityID];
    if (!entity || !entity->GetOwner())
    {
        return nullptr;
    }
    
    // Get the component directly from the actor - this ensures we get the replicated instance
    return entity->GetOwner()->FindComponentByClass<T>();
}

};
