#pragma once
#include "ECS/Buffables.h"
#include "ECS/Configs/EntityComponentConfig.h"
#include "ECS/Core/EntityComponent.h"
#include "PlayerComponents.generated.h"


UENUM(BlueprintType)
enum EExMMovementMode
{
	EXM_WALK,
	EXM_SPRINT,
	EXM_VAULT,
	EXM_JUMP,
	EXM_SLIDE,
	EXM_FALL,
};

UENUM(BlueprintType)
enum EStances
{
	STANCE_STANDING,
	STANCE_CROUCHING
};

USTRUCT(BlueprintType)
struct FPlayerMovementComponent : public FEntityComponent
{
	GENERATED_BODY()

	ACharacter* character;
	UPROPERTY(BlueprintReadOnly)
	TEnumAsByte<EExMMovementMode> currentMovementMode;
	UPROPERTY(BlueprintReadOnly)
	TEnumAsByte<EExMMovementMode> previousMovementMode;

	UPROPERTY(BlueprintReadOnly)
	TEnumAsByte<EStances> currentStance;

	float startFallHeight;
	float targetLeanRotAmount;
	float targetLeanLocAmount;
	float targetStanceCapsuleHeight;
	float targetStanceEyeHeight;
	bool wantsToStand;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Crouch")
	float crouchAlpha;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Crouch")
	float crouchAnimAlpha;

	FBuffableFloat movementSpeed;

	void ChangeMovementMode(EExMMovementMode newMovementMode)
	{
		previousMovementMode = currentMovementMode;
		currentMovementMode = newMovementMode;
	}
};

USTRUCT(BlueprintType)
struct FPlayerTag : public FEntityComponent
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FPlayerInputData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FVector2D moveDirection;

	UPROPERTY(BlueprintReadWrite)
	FVector2D lookDirection;

	UPROPERTY(BlueprintReadWrite)
	bool bWantsToJump;

	UPROPERTY(BlueprintReadWrite)
	bool bWantsToSprint;

	UPROPERTY(BlueprintReadWrite)
	bool bCancelSprint;

	UPROPERTY(BlueprintReadWrite)
	bool bCrouchInput;

	UPROPERTY(BlueprintReadWrite)
	float targetLeanRotAmount;

	UPROPERTY(BlueprintReadWrite)
	float targetLeanLocAmount;

	UPROPERTY(BlueprintReadWrite)
	bool bIsFiring;

	bool bSwitchToNextWeapon = false;
	bool bSwitchToPrevWeapon = false;
	int directWeaponSelect = -1;
};

USTRUCT(BlueprintType)
struct FPlayerInputComponent : public FEntityComponent
{
	GENERATED_BODY()

	FPlayerInputData inputData;
};

USTRUCT(BlueprintType)
struct FEquipmentComponent : public FEntityComponent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	int equippedEntityId = -1;
	UPROPERTY(BlueprintReadOnly)
	int prevEquippedEntityId = -1;
	UPROPERTY(BlueprintReadOnly)
	TArray<int> availableWeaponIds;
	UPROPERTY(BlueprintReadOnly)
	int currentWeaponIndex;
};

USTRUCT(BlueprintType)
struct FVaultComponent : public FEntityComponent
{
	GENERATED_BODY()

	FVector vaultStartLocation;
	FVector vaultEndLocation;

	bool isVaulting;
};

UCLASS(EditInlineNew, BlueprintType)
class PROJECTPIMPS_API UPlayerMovementComponentConfig : public UEntityComponentConfigBase {
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float baseMovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float sprintModifier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float crouchModifier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float jumpVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(AllowPrivateAccess = "true"))
	float crouchCapsuleHeight = 60;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(AllowPrivateAccess = "true"))
	float standCapsuleHeight = 90;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(AllowPrivateAccess = "true"))
	float stanceChangeSpeed = 10;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(AllowPrivateAccess = "true"))
	float crouchEyeHeight = 20;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(AllowPrivateAccess = "true"))
	float standEyeHeight = 50;

	virtual FEntityComponent* CreateComponent() override
	{
		FBuffableFloat movementSpeed = FBuffableFloat{};
		movementSpeed.SetBaseValue(baseMovementSpeed);

		float initalTargetHeight = standCapsuleHeight;

		return new FPlayerMovementComponent{
			.targetStanceCapsuleHeight = initalTargetHeight,
			.movementSpeed = movementSpeed
		};
	};

	virtual UStruct* GetComponentTypeId() override
	{
		return FPlayerMovementComponent::StaticStruct();
	};
};

UCLASS(EditInlineNew, BlueprintType)
class PROJECTPIMPS_API UPlayerInputComponentConfig : public UEntityComponentConfigBase {
	
	GENERATED_BODY()

public:
	virtual FEntityComponent* CreateComponent() override
	{
		return new FPlayerInputComponent();
	}
	virtual UStruct* GetComponentTypeId() override
	{
		return FPlayerInputComponent::StaticStruct();
	}
};

UCLASS(EditInlineNew, BlueprintType)
class PROJECTPIMPS_API UPlayerTagConfig : public UEntityComponentConfigBase {
	
	GENERATED_BODY()

public:
	virtual FEntityComponent* CreateComponent() override
	{
		return new FPlayerTag();
	}
	virtual UStruct* GetComponentTypeId() override
	{
		return FPlayerTag::StaticStruct();
	}
};

UCLASS(EditInlineNew, BlueprintType)
class PROJECTPIMPS_API UEquipmentComponentConfig : public UEntityComponentConfigBase {
	
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Config")
	TArray<TSubclassOf<AActor>> startingWeaponEntities;

	virtual FEntityComponent* CreateComponent() override {
		return new FEquipmentComponent();
	};

	virtual UStruct* GetComponentTypeId() override {
		return FEquipmentComponent::StaticStruct();
	};
};

UCLASS(EditInlineNew, BlueprintType)
class PROJECTPIMPS_API UVaulComponentConfig : public UEntityComponentConfigBase
{
	GENERATED_BODY()
	
public:
	virtual FEntityComponent* CreateComponent() override {
		return new FVaultComponent();
	};

	virtual UStruct* GetComponentTypeId() override {
		return FVaultComponent::StaticStruct();
	};
};