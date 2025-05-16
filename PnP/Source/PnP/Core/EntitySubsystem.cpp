// Fill out your copyright notice in the Description page of Project Settings.


#include "EntitySubsystem.h"

#include "Net/UnrealNetwork.h"

void UEntitySubsystem::Initialize(FSubsystemCollectionBase& pCollection)
{
	Super::Initialize(pCollection);

	EntityStorage = NewObject<UEntityStorage>(this);
	EntityStorage->InitializeStorage();
}

void UEntitySubsystem::Tick(float pDeltaTime)
{
	Super::Tick(pDeltaTime);
}

TStatId UEntitySubsystem::GetStatId() const
{
	return TStatId();
}

void UEntitySubsystem::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UEntitySubsystem, EntityStorage);
}

void UEntitySubsystem::ServerCreateEntity_Implementation(UUnrealEntity* EntityTemplate)
{
	if (EntityStorage && EntityTemplate)
	{
		EntityStorage->CreateEntity(EntityTemplate);
	}
}

bool UEntitySubsystem::ServerCreateEntity_Validate(UUnrealEntity* EntityTemplate)
{
	return true;
}

void UEntitySubsystem::ServerDestroyEntity_Implementation(int32 EntityId)
{
	if (EntityStorage && EntityId >= 0)
	{
		EntityStorage->DestroyEntity(EntityId);
	}
}

bool UEntitySubsystem::ServerDestroyEntity_Validate(int32 EntityId)
{
	return true;
}
