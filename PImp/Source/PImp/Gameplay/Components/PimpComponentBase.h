// 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PimpComponentBase.generated.h"


UCLASS(Abstract, ClassGroup=(Custom))
class PIMP_API UPimpComponentBase : public UActorComponent
{
	GENERATED_BODY()

public:
	UPimpComponentBase();
};
