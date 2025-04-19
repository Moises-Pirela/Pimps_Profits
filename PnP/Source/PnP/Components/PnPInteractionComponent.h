// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "PnPInteractionComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPInteractionComponent : public UPnPComponentBase
{
	GENERATED_BODY()

public:
	UPnPInteractionComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float delta_time, ELevelTick tick_type,
	                           FActorComponentTickFunction* this_tick_function) override;
};
