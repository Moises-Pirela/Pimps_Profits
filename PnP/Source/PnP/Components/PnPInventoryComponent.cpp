// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPInventoryComponent.h"

#include "PnPInventoryItemComponent.h"
#include "Net/UnrealNetwork.h"
#include "PnP/Player/PnPPlayerCharacter.h"
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

void UPnPInventoryComponent::MulticastItemEquipped_Implementation(int32 Slot, AActor* ItemActor)
{
	if (UPnPInventoryItemComponent* ItemComp = ItemActor->GetComponentByClass<UPnPInventoryItemComponent>())
	{
		if (IsOwnerLocallyControlled())
		{
		
			if (UInventoryItemConfig* Config = ItemComp->ItemConfig.LoadSynchronous())
			{
				FString Message = FString::Printf(TEXT("Equipped: %s in slot %d"), *Config->Name.ToString(), Slot);
				ClockLog(Message, ELogLevel::LOG_DEBUG, true);
				OnInventoryUpdated.Broadcast(Slot, Config);
			}
		}
		
		ItemComp->OnEquipped.Broadcast(GetOwner());
    
		HandleItemEquippedVisuals(Slot, ItemActor);
	}
}

void UPnPInventoryComponent::ServerRemoveEquippedItem_Implementation(int slot, int entityId)
{
	EquippedActors[slot] = nullptr;

	NextAvailableIndex = slot;
}

void UPnPInventoryComponent::HandleItemEquippedVisuals(int32 Slot, AActor* ItemActor)
{
	APnPPlayerCharacter* player =  Cast<APnPPlayerCharacter>(GetOwner());

	ItemActor->SetHidden(false);

	if (player)
	{
		FAttachmentTransformRules attachmentRules(EAttachmentRule::SnapToTarget, true);
		
		ItemActor->AttachToComponent(player->GetMesh(), attachmentRules, FName("hand_rSocket"));
	}
}

void UPnPInventoryComponent::MulticastItemUnequipped_Implementation(int32 pSlot)
{
	EquippedActors[pSlot]->GetComponentByClass<UPnPInventoryItemComponent>()->OnUnequipped.Broadcast(GetOwner());
	
	EquippedActors[pSlot]->SetHidden(true);
}

void UPnPInventoryComponent::ServerUnequipCurrent_Implementation()
{
	if (CurrentEquippedIndex == -1 || !EquippedActors[CurrentEquippedIndex])
	{
		auto message = FString::Printf(TEXT("Nothing currently equipped"));
		ClockLog(message, ELogLevel::LOG_DEBUG, true);
		return;
	}

	MulticastItemUnequipped(CurrentEquippedIndex);

	CurrentEquippedIndex = -1;
}

void UPnPInventoryComponent::ServerAddEquippedItem_Implementation(int slot, AActor* itemActor)
{
	if (EquippedActors[NextAvailableIndex])
	{
		auto message = FString::Printf(TEXT("Slot is occupied, inventory probably full"));
		ClockLog(message, ELogLevel::LOG_DEBUG, true);
		return;
	}

	auto itemComponent = itemActor->GetComponentByClass<UPnPInventoryItemComponent>();

	if (!itemComponent->CanBeEquipped())
	{
		auto message = FString::Printf(TEXT("Item canno be equipped, probably has owner"));
		ClockLog(message, ELogLevel::LOG_DEBUG, true);
		return;
	}

	EquippedActors[NextAvailableIndex] = itemActor;

	itemComponent->OwnerActor = GetOwner();

	MulticastItemEquipped(NextAvailableIndex, itemActor);
	
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

