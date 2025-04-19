// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PnPComponentBase.generated.h"


UCLASS(Abstract, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPComponentBase : public UActorComponent
{
	GENERATED_BODY()

public:
	UPnPComponentBase(){};
};
