// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPHealthComponent.h"


// Sets default values for this component's properties
UPnPHealthComponent::UPnPHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UPnPHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	
}


void UPnPHealthComponent::TickComponent(float delta_time, ELevelTick tick_type,
                                        FActorComponentTickFunction* this_tick_function)
{
	Super::TickComponent(delta_time, tick_type, this_tick_function);

}

