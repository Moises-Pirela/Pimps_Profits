// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPInteractionComponent.h"


// Sets default values for this component's properties
UPnPInteractionComponent::UPnPInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

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
	
}

void UPnPInteractionComponent::TickComponent(float delta_time, ELevelTick tick_type, FActorComponentTickFunction* this_tick_function)
{
	Super::TickComponent(delta_time, tick_type, this_tick_function);

}

void UPnPInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UPnPInteractionComponent::BeginInteraction()
{
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

