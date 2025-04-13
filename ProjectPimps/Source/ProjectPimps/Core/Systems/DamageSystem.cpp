#include "DamageSystem.h"

#include "ECS/Core/EntityContainer.h"
#include "ECS/Core/IPostProcessEvent.h"
#include "ProjectPimps/Core/PostprocessEvents.h"
#include "ProjectPimps/Core/Components/DamageComponent.h"
#include "ProjectPimps/Core/Components/HealthComponent.h"

void UDamageSystem::Process(EntityContainer* entityContainer, float deltaTime)
{
	for(IPostProcessEvent* _event : entityContainer->postProcessEvents)
	{
		if (_event->eventType != EVENT_TYPE_DAMAGE) continue;
		
		if(DamagePostProcessEvent* _damage = (DamagePostProcessEvent*)_event)
		{
			auto healthComponent = entityContainer->GetComponent<FHealthComponent>(_damage->damageTakerEntityId);
		
			auto damageComponent = entityContainer->GetComponent<FDamageComponent>(_damage->damageDealerEntityId);
		
			float totalDamage = damageCalculators[damageComponent->damageType](damageComponent->damage.GetValue(), 0, 1);
		
			healthComponent->currentHealth -= totalDamage;
		}
		
		entityContainer->eventPool.Deallocate(_event);
	}
}
