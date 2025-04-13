#pragma once
#include "ECS/Buffables.h"
#include "ECS/Configs/EntityComponentConfig.h"
#include "ECS/Core/EntityComponent.h"
#include "HealthComponent.generated.h"


USTRUCT(BlueprintType)
struct FHealthComponent : public FEntityComponent
{
	GENERATED_BODY()

	FBuffableFloat maxHealth;

	float currentHealth;
};

UCLASS(EditInlineNew, BlueprintType)
class PROJECTPIMPS_API  UHealthComponentConfig : public UEntityComponentConfigBase {
	
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Config")
	float initialMaxHealth;

	virtual FEntityComponent* CreateComponent() override {
		FHealthComponent* healthComp = new FHealthComponent();
		healthComp->currentHealth = initialMaxHealth;
		healthComp->maxHealth.SetBaseValue(initialMaxHealth);
		return healthComp;
	};

	virtual UStruct* GetComponentTypeId() override {
		return FHealthComponent::StaticStruct();
	};
};