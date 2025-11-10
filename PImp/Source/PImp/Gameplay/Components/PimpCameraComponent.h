#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PimpCameraComponent.generated.h"

UCLASS(ClassGroup=(Pimp), meta=(BlueprintSpawnableComponent))
class PIMP_API UPimpCameraComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPimpCameraComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	USpringArmComponent* CameraBoom;

	UPROPERTY()
	UCameraComponent* FollowCamera;

public:
	void InitializeCamera(ACharacter* OwnerChar);
};

