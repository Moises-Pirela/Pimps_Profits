// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "PnP/Components/PnPBusinessManagerComponent.h"
#include "PnP/Components/PnPCharacterStatsComponent.h"
#include "PnP/Components/PnPInteractionComponent.h"
#include "PnP/Components/PnPInventoryComponent.h"
#include "PnP/Components/PnPNetworkIdentityComponent.h"
#include "PnPPlayerCharacter.generated.h"

UCLASS()
class PNP_API APnPPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APnPPlayerCharacter();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* m_cameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* m_followCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PNP | Components", meta = (AllowPrivateAccess = "true"))
	UPnPCharacterStatsComponent* m_statsComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PNP | Components", meta = (AllowPrivateAccess = "true"))
	UPnPInventoryComponent* m_inventoryComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PNP | Components", meta = (AllowPrivateAccess = "true"))
	UPnPInteractionComponent* m_interactionComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PNP | Components", meta = (AllowPrivateAccess = "true"))
	UPnPBusinessManagerComponent* m_businessComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PNP | Components", meta = (AllowPrivateAccess = "true"))
	UPnPNetworkIdentityComponent* m_networkComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* m_moveAction;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* m_lookAction;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* m_jumpAction;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* m_interactAction;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* m_sprintAction;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* m_zoomAction;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void Interact(const FInputActionValue& Value);
	void ToggleSprint(const FInputActionValue& Value);
	void Zoom(const FInputActionValue& Value);

	UPROPERTY(ReplicatedUsing = OnRep_CharacterState)
	uint8 m_characterState;
    
	UFUNCTION()
	void OnRep_CharacterState();

public:
	virtual void Tick(float delta_time) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* player_input_component) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return m_cameraBoom; }
    
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return m_followCamera; }

	UFUNCTION(BlueprintCallable, Category = "Character")
	UPnPCharacterStatsComponent* GetStatsComponent() const { return m_statsComponent; }

	UFUNCTION(BlueprintCallable, Category = "Character")
	UPnPInventoryComponent* GetInventoryComponent() const { return m_inventoryComponent; }

	UFUNCTION(BlueprintCallable, Category = "Character")
	UPnPInteractionComponent* GetInteractionComponent() const { return m_interactionComponent; }

	UFUNCTION(BlueprintCallable, Category = "Character")
	UPnPBusinessManagerComponent* GetBusinessComponent() const { return m_businessComponent; }
	
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSetCharacterState(uint8 new_state);
};
