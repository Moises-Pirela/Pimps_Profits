// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPInteractionComponent.h"

#include "PnPInteractableComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "PnP/Utils/Logger.h"


// Sets default values for this component's properties
UPnPInteractionComponent::UPnPInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
}


void UPnPInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UPnPInteractionComponent::OnRep_InteractionInProgress()
{
}

void UPnPInteractionComponent::PerformInteractionTrace(FVector pStartLocation, FVector pDirection)
{
	FHitResult hitResult;
	FCollisionQueryParams TraceParams(FName(TEXT("LineTrace")), true, GetOwner());
	TraceParams.bTraceComplex = false;
	TraceParams.bReturnPhysicalMaterial = true;

	const FVector endPoint = pStartLocation + (pDirection * m_interactionRange);

	bool bPersistent = false;
	float LifeTime = 0.2f;
	//DrawDebugLine(GetWorld(), pStartLocation, endPoint, FColor::Green, bPersistent, LifeTime, 0, 1.0f);

	bool bHit = GetOwner()->GetWorld()->LineTraceSingleByChannel(hitResult, pStartLocation, endPoint,
	                                                             ECC_GameTraceChannel1, TraceParams);

#if UE_EDITOR
	//DrawDebugSphere(GetWorld(), endPoint, 10.0f, 8, FColor::Yellow, bPersistent, LifeTime);
#endif


	if (!bHit && focusedInteractable != nullptr)
	{
		OnEndFocus.Broadcast(focusedInteractable);

		focusedInteractable = nullptr;

		ServerUpdateFocusedObject(nullptr);

		return;
	}

	if (bHit)
	{
#if UE_EDITOR
		//DrawDebugSphere(GetWorld(), hitResult.ImpactPoint, 10.0f, 8, FColor::Red, bPersistent, LifeTime);
#endif

		AActor* hitActor = hitResult.GetActor();

		if (!hitActor)
			return;

		UPnPInteractableComponent* interactable = hitActor->GetComponentByClass<UPnPInteractableComponent>();

		if (interactable && interactable->CanBeInteractedWith(GetOwner()))
		{
			if (focusedInteractable != nullptr)
			{
				OnEndFocus.Broadcast(focusedInteractable);
			}

			focusedInteractable = interactable;
			OnBeginFocus.Broadcast(interactable);
			ServerUpdateFocusedObject(interactable);
		}
	}
}

void UPnPInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPnPInteractionComponent, focusedInteractable);
}

void UPnPInteractionComponent::ServerUpdateFocusedObject_Implementation(UPnPInteractableComponent* pNewInteractable)
{
	if (pNewInteractable && pNewInteractable->CanBeInteractedWith(GetOwner()))
	{
		if (focusedInteractable != nullptr)
		{
			if (focusedInteractable)
			{
				//oldInteractable->HandleFocusEnd(GetOwner());
			}
		}
	}

	focusedInteractable = pNewInteractable;
}

void UPnPInteractionComponent::ServerBeginInteraction_Implementation()
{
	if (focusedInteractable && focusedInteractable->CanBeInteractedWith(GetOwner()))
	{
		focusedInteractable->MulticastInteractionStart(GetOwner());
	}
}

bool UPnPInteractionComponent::ServerBeginInteraction_Validate()
{
	return true;
}
