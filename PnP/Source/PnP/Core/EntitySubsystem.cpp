// Fill out your copyright notice in the Description page of Project Settings.


#include "EntitySubsystem.h"

void UEntitySubsystem::Initialize(FSubsystemCollectionBase& pCollection)
{
	Super::Initialize(pCollection);
}

void UEntitySubsystem::Tick(float pDeltaTime)
{
	Super::Tick(pDeltaTime);
}

TStatId UEntitySubsystem::GetStatId() const
{
	return TStatId();
}
