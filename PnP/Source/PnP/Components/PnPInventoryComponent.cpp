// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPInventoryComponent.h"

#include "Net/UnrealNetwork.h"
#include "PnP/Utils/Logger.h"


UPnPInventoryComponent::UPnPInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UPnPInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UPnPInventoryComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPnPInventoryComponent, EquippedEntityIds);
	DOREPLIFETIME(UPnPInventoryComponent, CurrentEquippedIndex);
}

void UPnPInventoryComponent::ServerAddEquippedItem_Implementation(int slot, int entityId)
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

