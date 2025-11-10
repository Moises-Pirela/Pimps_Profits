#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PimpCharacterBase.generated.h"

class UPimpMovementComponent;

UCLASS()
class PIMP_API APimpCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	APimpCharacterBase();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Pimp|Components")
	UPimpMovementComponent* PimpMovement;
};
