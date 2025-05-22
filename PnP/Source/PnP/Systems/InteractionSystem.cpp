// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionSystem.h"

#include "PnP/Components/PnPInteractableComponent.h"
#include "PnP/Core/ComponentArray.h"
#include "PnP/Core/UnrealEntity.h"
#include "PnP/Utils/Logger.h"

void UInteractionSystem::Process(UEntityStorage* EntityStorage, float DeltaTime)
{
	if (EntityStorage == nullptr) return;

	auto interactableEntities = EntityStorage->Archetypes[0];

	for (auto entity : interactableEntities.EntityIds)
	{
		int componentType = EntityStorage->ComponentTypeIdMap[UPnPInteractableComponent::StaticClass()];
		UPnPInteractableComponent* interactionComponent = static_cast<UPnPInteractableComponent*>(EntityStorage->Components[componentType].Components[entity]);

		for (auto& interactionRequest : interactionComponent->InteractionRequests)
		{
			auto entityActor = EntityStorage->Entities[interactionRequest.interactorEntityId]->GetOwner();
			interactionComponent->MulticastInteractionStart(entityActor);
		}
		
		interactionComponent->InteractionRequests.Empty();
	}
}
