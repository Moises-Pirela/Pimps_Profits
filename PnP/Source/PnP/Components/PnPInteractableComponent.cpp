// PnPInteractableComponent.cpp
#include "PnPInteractableComponent.h"
#include "Net/UnrealNetwork.h"

UPnPInteractableComponent::UPnPInteractableComponent()
{
	InteractionPrompt = FText::FromString("Interact");
	InteractionDuration = 0.0f;
	bRequireHoldToInteract = false;
	bCanInteractMultipleTimes = true;
    
	CurrentInteractor = nullptr;
	bIsInUse = false;
	InteractionProgress = 0.0f;
    
	PrimaryComponentTick.bCanEverTick = false;
    
	SetIsReplicatedByDefault(true);
}

void UPnPInteractableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
	DOREPLIFETIME(UPnPInteractableComponent, CurrentInteractor);
	DOREPLIFETIME(UPnPInteractableComponent, bIsInUse);
	DOREPLIFETIME(UPnPInteractableComponent, InteractionProgress);
}