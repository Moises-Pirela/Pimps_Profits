#include "PnPInventoryItemComponent.h"
#include "Net/UnrealNetwork.h"

UPnPInventoryItemComponent::UPnPInventoryItemComponent()
{
	EntityOwnerId = -1;
}

void UPnPInventoryItemComponent::ServerSetEntityOwnerId_Implementation(int entityId)
{
	EntityOwnerId = entityId;
}

bool UPnPInventoryItemComponent::HasOwner()
{
	return EntityOwnerId != -1;
}

void UPnPInventoryItemComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPnPInventoryItemComponent, EntityOwnerId);
}
