// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPInteractionComponent.h"

#include "PnPInteractableComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "PnP/Core/EntitySubsystem.h"
#include "PnP/Utils/Logger.h"


// Sets default values for this component's properties
UPnPInteractionComponent::UPnPInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	SetIsReplicatedByDefault(true);
}


void UPnPInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UPnPInteractionComponent::OnRep_InteractionInProgress()
{
}

void UPnPInteractionComponent::PerformInteractionTrace()
{
	FHitResult hitResult;
	FCollisionQueryParams TraceParams(FName(TEXT("LineTrace")), true, GetOwner());
	TraceParams.bTraceComplex = false;
	TraceParams.bReturnPhysicalMaterial = true;

	FVector startLocation;
	FRotator startRotation;
	GetOwner()->GetActorEyesViewPoint(startLocation, startRotation);
	FVector direction = startRotation.Vector();
	const FVector endPoint = startLocation + (direction * m_interactionRange);

	bool bPersistent = false;
	float LifeTime = 0.2f;
	DrawDebugLine(GetWorld(), startLocation, endPoint, FColor::Green, bPersistent, LifeTime, 0, 1.0f);

	bool bHit = GetOwner()->GetWorld()->LineTraceSingleByChannel(hitResult, startLocation, endPoint,
	                                                             ECC_GameTraceChannel1, TraceParams);

	DrawDebugSphere(GetWorld(), endPoint, 10.0f, 8, FColor::Yellow, bPersistent, LifeTime);

	auto entitySubsystem = GetWorld()->GetSubsystem<UEntitySubsystem>();

	// No hit or lost focus
	if (!bHit && m_focusedInteractiveEntityId != -1)
	{
		// Local prediction
		UPnPInteractableComponent* oldInteractable = entitySubsystem->GetComponent<UPnPInteractableComponent>(
			m_focusedInteractiveEntityId);

		if (oldInteractable)
		{
			//oldInteractable->HandleFocusEnd(GetOwner());
			OnEndFocus.Broadcast(oldInteractable);
		}

		int32 oldFocusId = m_focusedInteractiveEntityId;
		m_focusedInteractiveEntityId = -1;

		ServerUpdateFocusedObject(-1);
		
		return;
	}

	if (bHit)
	{
		DrawDebugSphere(GetWorld(), hitResult.ImpactPoint, 10.0f, 8, FColor::Red, bPersistent, LifeTime);

		AActor* hitActor = hitResult.GetActor();
		auto hitUnrealEntity = hitActor->GetComponentByClass<UUnrealEntity>();

		if (!hitUnrealEntity)
			return;

		if (hitUnrealEntity->EntityId == m_focusedInteractiveEntityId)
			return;

		UPnPInteractableComponent* interactable = entitySubsystem->GetComponent<UPnPInteractableComponent>(
			hitUnrealEntity->EntityId);

		if (interactable && interactable->CanBeInteractedWith(GetOwner()))
		{
			// Handle old focus end locally (prediction)
			if (m_focusedInteractiveEntityId != -1)
			{
				UPnPInteractableComponent* oldInteractable = entitySubsystem->GetComponent<UPnPInteractableComponent>(
					m_focusedInteractiveEntityId);

				if (oldInteractable)
				{
					//oldInteractable->HandleFocusEnd(GetOwner());
					OnEndFocus.Broadcast(oldInteractable);
				}
			}

			int32 newFocusId = hitUnrealEntity->EntityId;
			m_focusedInteractiveEntityId = newFocusId;
			//interactable->HandleFocusBegin(GetOwner());
			OnBeginFocus.Broadcast(interactable);


			ServerUpdateFocusedObject(newFocusId);
		}
	}
}

bool UPnPInteractionComponent::IsOwnerLocallyControlled() const
{
	APawn* OwningPawn = Cast<APawn>(GetOwner());
	return OwningPawn && OwningPawn->IsLocallyControlled();
}

void UPnPInteractionComponent::TickComponent(float delta_time, ELevelTick tick_type,
                                             FActorComponentTickFunction* this_tick_function)
{
	Super::TickComponent(delta_time, tick_type, this_tick_function);

	if ((GetOwnerRole() == ROLE_AutonomousProxy && IsOwnerLocallyControlled()) ||
		(GetOwnerRole() == ROLE_Authority && (!IsOwnerLocallyControlled() || !GetWorld()->
			IsNetMode(NM_DedicatedServer))))
	{
		PerformInteractionTrace();
	}
}

void UPnPInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPnPInteractionComponent, m_focusedInteractiveEntityId);
}

void UPnPInteractionComponent::ServerUpdateFocusedObject_Implementation(int32 EntityId)
{
	auto entitySubsystem = GetWorld()->GetSubsystem<UEntitySubsystem>();
	UPnPInteractableComponent* interactable = entitySubsystem->GetComponent<UPnPInteractableComponent>(EntityId);

	if (interactable && interactable->CanBeInteractedWith(GetOwner()))
	{
		// Clear old focus 
		if (m_focusedInteractiveEntityId != -1 && m_focusedInteractiveEntityId != EntityId)
		{
			UPnPInteractableComponent* oldInteractable =
				entitySubsystem->GetComponent<UPnPInteractableComponent>(m_focusedInteractiveEntityId);

			if (oldInteractable)
			{
				//oldInteractable->HandleFocusEnd(GetOwner());
			}
		}

		// Set new focus
		m_focusedInteractiveEntityId = EntityId;
		//interactable->HandleFocusBegin(GetOwner());
	}
	
	ClockLog(FString::Printf(TEXT("focused entity %d"), m_focusedInteractiveEntityId), LOG_INFO, true, 1);
	
}

void UPnPInteractionComponent::ClientFocusedInteraction_Implementation()
{
}

void UPnPInteractionComponent::ServerEndInteraction_Implementation()
{
}

bool UPnPInteractionComponent::ServerEndInteraction_Validate()
{
	return true;
}

void UPnPInteractionComponent::ServerBeginInteraction_Implementation()
{
	if (m_focusedInteractiveEntityId == -1) return;

	if (!GetOwner()->HasAuthority()) return;

	auto entitySubsystem = GetWorld()->GetSubsystem<UEntitySubsystem>();

	UPnPInteractableComponent* interactable = entitySubsystem->GetComponent<UPnPInteractableComponent>(
		m_focusedInteractiveEntityId);

	if (interactable && interactable->CanBeInteractedWith(GetOwner()))
	{
		interactable->MulticastInteractionStart(GetOwner());
	}
}

bool UPnPInteractionComponent::ServerBeginInteraction_Validate()
{
	return true;
}
