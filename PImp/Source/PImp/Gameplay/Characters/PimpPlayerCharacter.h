#pragma once

#include "CoreMinimal.h"
#include "PimpCharacterBase.h"
#include "PimpPlayerCharacter.generated.h"

class UPimpInputComponent;
class UPimpCameraComponent;
class UEnhancedInputComponent;

UCLASS()
class PIMP_API APimpPlayerCharacter : public APimpCharacterBase
{
	GENERATED_BODY()

public:
	APimpPlayerCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Pimp|Components")
	UPimpCameraComponent* PimpCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Pimp|Components")
	UPimpInputComponent* PimpInput;
};
