// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PnP/Core/SystemBase.h"
#include "DamageSystem.generated.h"

/**
 * 
 */
UCLASS()
class PNP_API UDamageSystem : public UPnPSystemBase
{
	GENERATED_BODY()

	virtual void Process(UEntityStorage* EntityStorage, float DeltaTime) override;
};
