// PnPInteractableComponent.cpp
#include "PnPInteractableComponent.h"

#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"
#include "PnP/Core/EntitySubsystem.h"
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

void UPnPInteractableComponent::MulticastInteractionStart_Implementation(int interactingEntityId, int targetEntityId)
{
	//OnInteractionStarted.Broadcast(InteractingActor);
	
	UEntitySubsystem* entitySystem = GetWorld()->GetSubsystem<UEntitySubsystem>();
	
	if (InteractableType == INTERACTABLE_PICK_UP)
	{
		if (GetOwner()->HasAuthority())
		{
			auto inventoryComponent = entitySystem->GetComponent<UPnPInventoryComponent>(interactingEntityId);
	
			inventoryComponent->ServerAddEquippedItem(0, targetEntityId);	
		}
		
		// auto pimpCharacter = Cast<APnPPlayerCharacter>(InteractingActor);
		//
		// auto capsule = GetOwner()->GetComponentByClass<UCapsuleComponent>();
		//
		// capsule->SetSimulatePhysics(false);
		//
		// FAttachmentTransformRules attachmentRules(EAttachmentRule::SnapToTarget, true);
		//
		// GetOwner()->AttachToComponent(pimpCharacter->GetMesh(), attachmentRules, FName("hand_rSocket"));
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
