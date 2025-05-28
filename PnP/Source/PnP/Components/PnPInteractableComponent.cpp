// PnPInteractableComponent.cpp
#include "PnPInteractableComponent.h"

#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"
#include "PnP/Player/PnPPlayerCharacter.h"
#include "PnP/Utils/Logger.h"

UPnPInteractableComponent::UPnPInteractableComponent()
{
	InteractionPrompt = FText::FromString("Interact");
	InteractionDuration = 0.0f;
	bRequireHoldToInteract = false;
	bCanInteractMultipleTimes = true;

	CurrentInteractor = nullptr;
	bIsInUse = false;

	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
}

void UPnPInteractableComponent::MulticastInteractionStart_Implementation(AActor* interactor)
{
	if (InteractableType == INTERACTABLE_PICK_UP)
	{
		if (GetOwner()->HasAuthority())
		{
			auto inventoryComponent = interactor->GetComponentByClass<UPnPInventoryComponent>();
		
			inventoryComponent->ServerAddEquippedItem(0, GetOwner());	
		}
	}
	
	else if (InteractableType == INTERACTABLE_USE)
	{
		//PAY STRIPPERS
		//OPEN DOORS
		//GET INTO CARS
	}
	
	else if (InteractableType == INTERACTABLE_TALK)
	{
		
	}
}

void UPnPInteractableComponent::ServerAddInteraction_Implementation(FInteractionRequest pRequest)
{
	InteractionRequests.Add(pRequest);
}

bool UPnPInteractableComponent::ServerAddInteraction_Validate(FInteractionRequest pRequest)
{
	return !InteractionRequests.Contains(pRequest) && InteractionRequests.Num() < MAX_INTERACTIONS;
}

void UPnPInteractableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPnPInteractableComponent, CurrentInteractor);
	DOREPLIFETIME(UPnPInteractableComponent, bIsInUse);
	DOREPLIFETIME(UPnPInteractableComponent, InteractionRequests);
}
