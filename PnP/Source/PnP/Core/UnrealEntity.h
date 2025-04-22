// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Flags.h"
#include "Components/ActorComponent.h"
#include "UnrealEntity.generated.h"

class UPnPComponentBase;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UUnrealEntity : public UActorComponent
{
	GENERATED_BODY()

public:
	UUnrealEntity();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Entity, meta = (AllowPrivateAccess = "true"))
	int EntityId;

	UFUNCTION(BlueprintCallable)
	TArray<UPnPComponentBase*> GetComponents() const;

	UPROPERTY()
	FEntityFlags EntityFlags;
	UPROPERTY()
	FComponentFlags ComponentSignature;
	

protected:
	virtual void BeginPlay() override;
};
