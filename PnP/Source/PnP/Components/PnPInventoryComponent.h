// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "PnPInventoryComponent.generated.h"

static constexpr int MAX_ITEMS = 10;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPInventoryComponent : public UPnPComponentBase
{
	GENERATED_BODY()

public:
	UPnPInventoryComponent();

protected:
	virtual void BeginPlay() override;

public:

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadOnly, Replicated)
	TArray<int> EquippedEntityIds;

	UPROPERTY(blueprintReadOnly, Replicated)
	int CurrentEquippedIndex;

	UFUNCTION(Server, Reliable)
	void ServerEquip(int slot, int entityId);
};
