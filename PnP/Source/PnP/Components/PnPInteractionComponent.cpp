// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPInteractionComponent.h"

#include "PnPInteractableComponent.h"
#include "Kismet/KismetMathLibrary.h"
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
    DrawDebugLine(
        GetWorld(),
        startLocation,
        endPoint,
        FColor::Green,
        bPersistent,
        LifeTime,
        0,
        1.0f
    );

    bool bHit = GetOwner()->GetWorld()->LineTraceSingleByChannel(hitResult, startLocation, endPoint, ECC_GameTraceChannel1, TraceParams);

    DrawDebugSphere(
       GetWorld(),
       endPoint,
       10.0f,
       8,
       FColor::Yellow,
       bPersistent,
       LifeTime
   );

    auto entitySubsystem = GetWorld()->GetSubsystem<UEntitySubsystem>();

    if (!bHit && m_focusedInteractiveEntityId != -1)
    {
        UPnPInteractableComponent* oldInteractable = entitySubsystem->GetComponent<UPnPInteractableComponent>(m_focusedInteractiveEntityId);
        
        if (oldInteractable)
        {
            oldInteractable->HandleFocusEnd(GetOwner());
        }
        
        m_focusedInteractiveEntityId = -1;
        return;
    }

    if (bHit)
    {
        DrawDebugSphere(
            GetWorld(),
            hitResult.ImpactPoint,
            10.0f,
            8,
            FColor::Red,
            bPersistent,
            LifeTime
        );

        
        AActor* hitActor = hitResult.GetActor();

        auto hitUnrealEntity = hitActor->GetComponentByClass<UUnrealEntity>();

        if (!hitUnrealEntity)
            return;
        
        if (hitUnrealEntity->EntityId == m_focusedInteractiveEntityId)
            return;
            
        UPnPInteractableComponent* interactable = entitySubsystem->GetComponent<UPnPInteractableComponent>(hitUnrealEntity->EntityId);

        if (interactable && interactable->CanBeInteractedWith(GetOwner()))
        {
            if (m_focusedInteractiveEntityId != -1)
            {
                DrawDebugString(
                GetWorld(),
                hitActor->GetActorLocation() + FVector(0, 0, 100),
                interactable->GetInteractionText().ToString(),
                nullptr,
                FColor::White,
                LifeTime
            );
            
                // Draw an arrow from player to interaction target
                DrawDebugDirectionalArrow(
                    GetWorld(),
                    GetOwner()->GetActorLocation(),
                    hitActor->GetActorLocation(),
                    20.0f,
                    FColor::Blue,
                    bPersistent,
                    LifeTime,
                    0,
                    3.0f
                );
                
                UPnPInteractableComponent* oldInteractable = entitySubsystem->GetComponent<UPnPInteractableComponent>(m_focusedInteractiveEntityId);  
                
                if (oldInteractable)
                {
                    oldInteractable->HandleFocusEnd(GetOwner());

                    OnEndFocus.Broadcast(oldInteractable->GetOwner());
                }
            }
            
            m_focusedInteractiveEntityId = hitUnrealEntity->EntityId;
            interactable->HandleFocusBegin(GetOwner());
            OnBeginFocus.Broadcast(interactable->GetOwner());
            
            if (GetOwner()->HasAuthority())
            {
                // Already on server, update directly
            }
            else
            {
                // Consider adding ServerUpdateFocusedObject RPC here
            }
        }
    }
}

void UPnPInteractionComponent::TickComponent(float delta_time, ELevelTick tick_type, FActorComponentTickFunction* this_tick_function)
{
	Super::TickComponent(delta_time, tick_type, this_tick_function);

	PerformInteractionTrace();
}

void UPnPInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UPnPInteractionComponent::BeginInteraction()
{
    if (m_focusedInteractiveEntityId == -1) return;
}

void UPnPInteractionComponent::EndInteraction()
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
}

bool UPnPInteractionComponent::ServerBeginInteraction_Validate()
{
	return true;
}

