// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPNetworkIdentityComponent.h"


// Sets default values for this component's properties
UPnPNetworkIdentityComponent::UPnPNetworkIdentityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPnPNetworkIdentityComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPnPNetworkIdentityComponent::TickComponent(float delta_time, ELevelTick tick_type,
                                                 FActorComponentTickFunction* this_tick_function)
{
	Super::TickComponent(delta_time, tick_type, this_tick_function);

	// ...
}

