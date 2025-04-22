// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPCharacterStateComponent.h"


UPnPCharacterStateComponent::UPnPCharacterStateComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UPnPCharacterStateComponent::TrySetState(EPnPCharacterState pNewState)
{
	return false;
}


bool UPnPCharacterStateComponent::CanTransitionTo(EPnPCharacterState pState) const
{
	return false;
}

void UPnPCharacterStateComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UPnPCharacterStateComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& pOutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(pOutLifetimeProps);
}

void UPnPCharacterStateComponent::ApplyStateSettings(EPnPCharacterState pState)
{
}

void UPnPCharacterStateComponent::OnRep_CurrentState()
{
}

