// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "PnPInventoryComponent.generated.h"

class UInventoryItemConfig;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPInventoryComponent : public UPnPComponentBase
{
	GENERATED_BODY()

public:
	UPnPInventoryComponent();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int InventorySize;

protected:
	virtual void BeginPlay() override;

public:

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadOnly, Replicated)
	TArray<int> EquippedEntityIds;

	UPROPERTY(BlueprintReadOnly, Replicated)
	int CurrentEquippedIndex;

	UPROPERTY(BlueprintReadOnly, Replicated)
	int NextAvailableIndex;

	UFUNCTION(Server, Reliable)
	void ServerEquip(int slot, int entityId);

	UFUNCTION(Server, Reliable)
	void ServerAddEquippedItem(int slot, int entityId);

	UFUNCTION(Server, Reliable)
	void ServerRemoveEquippedItem(int slot, int entityId);
};
