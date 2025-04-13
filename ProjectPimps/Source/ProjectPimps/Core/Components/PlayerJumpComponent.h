#pragma once
#include "ECS/Core/EntityComponent.h"
#include "ECS/Configs/EntityComponentConfig.h"
#include "PlayerJumpComponent.generated.h"

USTRUCT(BlueprintType)
struct FPlayerJumpComponent : public FEntityComponent
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int maxJumps = 1;

	int currentJumps;

	float nextCoyoteTime;

	bool canJump;
};

UCLASS(EditInlineNew, BlueprintType)
class PROJECTPIMPS_API UPlayerJumpComponentConfig : public UEntityComponentConfigBase {
	
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float jumpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxJumps;
	
	virtual FEntityComponent* CreateComponent() override
	{
		return new FPlayerJumpComponent();
	}
	virtual UStruct* GetComponentTypeId() override
	{
		return FPlayerJumpComponent::StaticStruct();
	}
};

