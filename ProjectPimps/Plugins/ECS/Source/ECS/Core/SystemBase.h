// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityContainer.h"
#include "UObject/Object.h"
#include "SystemBase.generated.h"

/**
 * 
 */

UENUM()
enum ESystemTickType : int {
	SYSTEM_TICK,
	SYSTEM_POSTPROCESS,
	SYSTEM_FIXED_TICK,

	SYSTEM_MAX
};

UCLASS(Abstract)
class ECS_API USystemBase : public UObject {
	GENERATED_BODY()

public:
	virtual void Init(EntityContainer* entityContainer) PURE_VIRTUAL(USystemBase::Init, return;);
	
	virtual void Process(EntityContainer* entityContainer, float deltaTime) PURE_VIRTUAL(USystemBase::Process, return;);

	virtual ESystemTickType GetSystemTickType() PURE_VIRTUAL(USystemBase::GetSystemTickType, return ESystemTickType::SYSTEM_TICK;);
};
