#pragma once

class UEntityConfig;
class UUnrealEntity;

enum EPostProcessEventType {
	EVENT_TYPE_NONE,
	EVENT_TYPE_CREATE_ENTITY,
	EVENT_TYPE_DAMAGE,
	EVENT_TYPE_INPUT
};

struct IPostProcessEvent {
	EPostProcessEventType eventType = EVENT_TYPE_NONE;
};

struct CreateEntityEvent : public IPostProcessEvent {
	CreateEntityEvent() {
		eventType = EVENT_TYPE_CREATE_ENTITY;
	}
    
	UEntityConfig *pConfig;
	UUnrealEntity* pUnrealEntity;
};
