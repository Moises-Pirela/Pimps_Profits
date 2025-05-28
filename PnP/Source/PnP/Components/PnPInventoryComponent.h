// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "PnPInventoryComponent.generated.h"

class UInventoryItemConfig;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryUpdated, int32, Slot, UInventoryItemConfig*, ItemConfig);


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
	void HandleItemEquippedVisuals(int32 Slot, AActor* ItemActor);

	UFUNCTION(Server, Reliable)
	void ServerUnequipCurrent();

	UPROPERTY(BlueprintReadOnly, Replicated)
	TArray<TObjectPtr<AActor>> EquippedActors;

	UPROPERTY(BlueprintReadOnly, Replicated)
	int CurrentEquippedIndex;

	UPROPERTY(BlueprintReadOnly, Replicated)
	int NextAvailableIndex;

	UFUNCTION(Server, Reliable)
	void ServerEquip(int slot, int entityId);

	UFUNCTION(Server, Reliable)
	void ServerAddEquippedItem(int slot, AActor* itemActor);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastItemEquipped(int32 Slot, AActor* ItemActor);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastItemUnequipped(int32 pSlot);

	UPROPERTY(BlueprintAssignable)
	FInventoryUpdated OnInventoryUpdated;


	UFUNCTION(Server, Reliable)
	void ServerRemoveEquippedItem(int slot, int entityId);
};
