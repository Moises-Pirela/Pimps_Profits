// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
};
