// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPInventoryComponent.h"

#include "Net/UnrealNetwork.h"
#include "PnP/Utils/Logger.h"


UPnPInventoryComponent::UPnPInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
}


void UPnPInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 0; i < InventorySize; i++)
	{
		EquippedEntityIds.Add(-1);
	}
	
}

void UPnPInventoryComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPnPInventoryComponent, EquippedEntityIds);
	DOREPLIFETIME(UPnPInventoryComponent, CurrentEquippedIndex);
	DOREPLIFETIME(UPnPInventoryComponent, NextAvailableIndex);
}

void UPnPInventoryComponent::ServerRemoveEquippedItem_Implementation(int slot, int entityId)
{
	EquippedEntityIds[slot] = -1;

	NextAvailableIndex = slot;
}

void UPnPInventoryComponent::ServerAddEquippedItem_Implementation(int slot, int entityId)
{
	if (EquippedEntityIds[NextAvailableIndex] != -1)
	{
		auto message = FString::Printf(TEXT("Equipped entity %d"), entityId);
		ClockLog(message, ELogLevel::LOG_DEBUG, true);
		return;
	}

	EquippedEntityIds[NextAvailableIndex] = entityId;

	for (int i = 0; i < EquippedEntityIds.Num(); i++)
	{
		if (EquippedEntityIds[i] == -1)
		{
			NextAvailableIndex = i;
			break;
		}
	}
}

void UPnPInventoryComponent::ServerEquip_Implementation(int slot, int entityId)
{
	if (EquippedEntityIds[slot] != -1)
	{
		auto message = FString::Printf(TEXT("Equipped entity %d"), entityId);
		ClockLog(message, ELogLevel::LOG_DEBUG, true);
	}
	else
	{
		auto message = FString::Printf(TEXT("No Equipped entity %d"), entityId);
		ClockLog(message, ELogLevel::LOG_DEBUG, true);
	}
}

