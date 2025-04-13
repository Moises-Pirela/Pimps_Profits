﻿// © 2024 Necrotek Labs. All rights reserved. ExMORTALIS, including its title, logo, concept, storyline, and associated assets, is a trademark of Necrotek Labs. Unauthorized use, distribution, or reproduction of any part of this game or its materials is strictly prohibited. All other trademarks and trade names are the property of their respective owners. For inquiries, please contact necroteklabs@gmail.com.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ECSGameInstance.generated.h"

class UEntityConfig;

UCLASS(Blueprintable)
class ECS_API UECSGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UECSGameInstance();

	virtual void Init() override;

};
