// © 2024 Necrotek Labs. All rights reserved. ExMORTALIS, including its title, logo, concept, storyline, and associated assets, is a trademark of Necrotek Labs. Unauthorized use, distribution, or reproduction of any part of this game or its materials is strictly prohibited. All other trademarks and trade names are the property of their respective owners. For inquiries, please contact necroteklabs@gmail.com.

#pragma once

#include "CoreMinimal.h"
#include "ECS/Core/SystemBase.h"
#include "PlayerMovementSystem.generated.h"

class UPlayerMovementComponentConfig;
class EntityContainer;
/**
 * 
 */
UCLASS()
class PROJECTPIMPS_API UPlayerMovementSystem : public USystemBase {
	GENERATED_BODY()

public:
	virtual void Init(EntityContainer* entityContainer) override;
	virtual void Process(EntityContainer* entityContainer, float deltaTime) override;
	virtual ESystemTickType GetSystemTickType() override;
	void TryStand(UPlayerMovementComponentConfig* config, FPlayerMovementComponent* movementComponent) const;
};
