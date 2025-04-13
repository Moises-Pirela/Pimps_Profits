#pragma once
#include "Components/PlayerComponents.h"
#include "ECS/Configs/EntityConfig.h"
#include "ECS/Core/Entity.h"
#include "ECS/Core/IPostProcessEvent.h"

struct InputPostProcessEvent : public IPostProcessEvent {
	InputPostProcessEvent() {
		eventType = EVENT_TYPE_INPUT;
	}
	
	FPlayerInputData inputData;
};

struct DamagePostProcessEvent : public IPostProcessEvent {
	DamagePostProcessEvent() {
		eventType = EVENT_TYPE_DAMAGE;
	}
    
	int damageDealerEntityId;
	int damageTakerEntityId;
};