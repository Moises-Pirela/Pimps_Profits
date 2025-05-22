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
	InteractionProgress = 0.0f;

	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
}

void UPnPInteractableComponent::MulticastInteractionStart_Implementation(AActor* InteractingActor)
{
	//OnInteractionStarted.Broadcast(InteractingActor);

	if (InteractableType == INTERACTABLE_PICK_UP)
	{
		auto pimpCharacter = Cast<APnPPlayerCharacter>(InteractingActor);

		auto capsule = GetOwner()->GetComponentByClass<UCapsuleComponent>();

		capsule->SetSimulatePhysics(false);

		FAttachmentTransformRules attachmentRules(EAttachmentRule::SnapToTarget, true);

		GetOwner()->AttachToComponent(pimpCharacter->GetMesh(), attachmentRules, FName("hand_rSocket"));
	}

	else if (InteractableType == INTERACTABLE_USE)
	{
		
	}

	else if (InteractableType == INTERACTABLE_TALK)
	{
		
	}
}

void UPnPInteractableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPnPInteractableComponent, CurrentInteractor);
	DOREPLIFETIME(UPnPInteractableComponent, bIsInUse);
	DOREPLIFETIME(UPnPInteractableComponent, InteractionProgress);
}
