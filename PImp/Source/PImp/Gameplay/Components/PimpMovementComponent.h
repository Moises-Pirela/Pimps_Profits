// 

#pragma once

#include "CoreMinimal.h"
#include "PimpComponentBase.h"
#include "Components/ActorComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PimpMovementComponent.generated.h"


UCLASS(ClassGroup=(Pimp), meta=(BlueprintSpawnableComponent))
class PIMP_API UPimpMovementComponent : public UPimpComponentBase
{
	GENERATED_BODY()

public:
	UPimpMovementComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	UCharacterMovementComponent* MoveComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Movement")
	float RotationInterpSpeed = 8.f;

	FVector2D LastInput;

public:
	void ApplyMovementInput(const FVector2D& Input, AController* Controller);
	void UpdateRotation(float DeltaTime);

	FVector2D GetLastInput() const { return LastInput; }
};

