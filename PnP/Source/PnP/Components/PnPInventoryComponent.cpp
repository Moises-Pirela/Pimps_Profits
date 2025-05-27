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
		EquippedActors.Add(nullptr);
	}
	
}

void UPnPInventoryComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPnPInventoryComponent, EquippedActors);
	DOREPLIFETIME(UPnPInventoryComponent, CurrentEquippedIndex);
	DOREPLIFETIME(UPnPInventoryComponent, NextAvailableIndex);
}

void UPnPInventoryComponent::ServerRemoveEquippedItem_Implementation(int slot, int entityId)
{
	EquippedActors[slot] = nullptr;

	NextAvailableIndex = slot;
}

void UPnPInventoryComponent::ServerAddEquippedItem_Implementation(int slot, AActor* itemActor)
{
	if (EquippedActors[NextAvailableIndex])
	{
		auto message = FString::Printf(TEXT("Slot is occupied, inventory probably full"));
		ClockLog(message, ELogLevel::LOG_DEBUG, true);
		return;
	}

	EquippedActors[NextAvailableIndex] = itemActor;

	for (int i = 0; i < EquippedActors.Num(); i++)
	{
		if (!EquippedActors[i])
		{
			NextAvailableIndex = i;
			break;
		}
	}
}

void UPnPInventoryComponent::ServerEquip_Implementation(int slot, int entityId)
{
	if (EquippedActors[slot])
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

