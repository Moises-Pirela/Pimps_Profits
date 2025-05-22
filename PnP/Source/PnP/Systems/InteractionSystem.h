// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PnP/Core/SystemBase.h"
#include "InteractionSystem.generated.h"

/**
 * 
 */
UCLASS()
class PNP_API UInteractionSystem : public UPnPSystemBase
{
	GENERATED_BODY()

	virtual void Process(UEntityStorage* EntityStorage, float DeltaTime) override;
};
