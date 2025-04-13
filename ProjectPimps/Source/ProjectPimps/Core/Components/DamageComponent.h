#pragma once
#include "CoreMinimal.h"
#include "ECS/Buffables.h"
#include "ECS/Configs/EntityComponentConfig.h"
#include "ECS/Core/EntityComponent.h"
#include "ECS/Utils/DamageCalculators.h"
#include "DamageComponent.generated.h"

USTRUCT(BlueprintType)
struct FDamageComponent : public FEntityComponent
{
	GENERATED_BODY()
	FBuffableFloat damage;
	EDamageTypes damageType;
};

UCLASS()
class PROJECTPIMPS_API UDamageComponentConfig : public UEntityComponentConfigBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float baseDamage;
};