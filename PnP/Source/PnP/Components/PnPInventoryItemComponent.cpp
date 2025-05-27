#include "PnPInventoryItemComponent.h"
#include "Net/UnrealNetwork.h"

UPnPInventoryItemComponent::UPnPInventoryItemComponent()
{
}

void UPnPInventoryItemComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
