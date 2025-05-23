// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionSystem.h"

#include "PnP/Components/PnPInteractableComponent.h"
#include "PnP/Core/ComponentArray.h"
#include "PnP/Core/UnrealEntity.h"
#include "PnP/Utils/Logger.h"

void UInteractionSystem::Process(UEntityStorage* EntityStorage, float DeltaTime)
{
	if (EntityStorage == nullptr) return;

	if (!EntityStorage->IsServer())
	{
		return;
	}

	auto interactableEntities = EntityStorage->GetEntitiesWith<UPnPInteractableComponent>();

	for (auto entity : interactableEntities)
	{
		int componentType = EntityStorage->ComponentTypeIdMap[UPnPInteractableComponent::StaticClass()];
		UPnPInteractableComponent* interactionComponent = static_cast<UPnPInteractableComponent*>(EntityStorage->Components[componentType].Components[entity]);

		if (interactionComponent == nullptr) continue;

		for (auto& interactionRequest : interactionComponent->InteractionRequests)
		{
			interactionComponent->MulticastInteractionStart(interactionRequest.interactorEntityId, interactionRequest.targetEntityId);
		}
		
		interactionComponent->InteractionRequests.Empty();
	}
}
