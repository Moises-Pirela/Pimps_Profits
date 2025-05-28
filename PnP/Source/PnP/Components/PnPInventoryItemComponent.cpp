#include "PnPInventoryItemComponent.h"
#include "Net/UnrealNetwork.h"

UPnPInventoryItemComponent::UPnPInventoryItemComponent()
{
}

bool UPnPInventoryItemComponent::CanBeEquipped() const
{
	return OwnerActor == nullptr;
}

void UPnPInventoryItemComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPnPInventoryItemComponent, OwnerActor);
}
