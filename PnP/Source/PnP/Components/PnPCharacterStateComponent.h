// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "PnPCharacterStateComponent.generated.h"

class UInputMappingContext;
class APnPPlayerCharacter;

UENUM(BlueprintType)
enum class EPnPCharacterState : uint8
{
	EXPLORATION = 0,
	COMBAT,
	BUILDING,
	CLUB_MANAGEMENT,
	CONVERSATION,
	MAX
};

USTRUCT()
struct FPnPStateDataTable
{
	GENERATED_BODY()
    
    
	UPROPERTY()
	TArray<float> MaxWalkSpeeds;
    
	UPROPERTY()
	TArray<float> MaxAccelerations;
    
	UPROPERTY()
	TArray<float> RotationRates;
    
	UPROPERTY()
	TArray<float> CameraArmLengths;
    
	UPROPERTY()
	TArray<FVector> CameraOffsets;
    
	UPROPERTY()
	TArray<float> CameraFOVs;
    
	UPROPERTY()
	TArray<TSoftObjectPtr<UInputMappingContext>> InputContexts;
    
	UPROPERTY()
	TArray<TSoftObjectPtr<UAnimMontage>> EnterMontages;
    
	UPROPERTY()
	TArray<TSoftObjectPtr<UAnimMontage>> ExitMontages;
    
	UPROPERTY()
	TArray<uint32> StateFlags;
    
	UPROPERTY()
	TArray<uint32> AllowedTransitions;
    
	void Initialize()
	{
		constexpr int32 stateCount = static_cast<int32>(EPnPCharacterState::MAX);
        
		MaxWalkSpeeds.SetNum(stateCount);
		MaxAccelerations.SetNum(stateCount);
		RotationRates.SetNum(stateCount);
        
		CameraArmLengths.SetNum(stateCount);
		CameraOffsets.SetNum(stateCount);
		CameraFOVs.SetNum(stateCount);
        
		InputContexts.SetNum(stateCount);
        
		EnterMontages.SetNum(stateCount);
		ExitMontages.SetNum(stateCount);
        
		StateFlags.SetNum(stateCount);
		AllowedTransitions.SetNum(stateCount);
	}
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPCharacterStateComponent : public UPnPComponentBase
{
	GENERATED_BODY()

	static constexpr uint32 FLAG_CAN_INTERACT = (1 << 0);
	static constexpr uint32 FLAG_CAN_TAKE_DAMAGE = (1 << 1);
	

public:
	UPnPCharacterStateComponent();

	UFUNCTION(BlueprintCallable, Category = "State")
	bool TrySetState(EPnPCharacterState pNewState);
    
	UFUNCTION(BlueprintPure, Category = "State")
	EPnPCharacterState GetCurrentState() const { return CurrentState; }
    
	UFUNCTION(BlueprintPure, Category = "State")
	bool IsInState(EPnPCharacterState State) const { return CurrentState == State; }
    
	UFUNCTION(BlueprintPure, Category = "State")
	bool CanTransitionTo(EPnPCharacterState pState) const;

protected:
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& pOutLifetimeProps) const override;

	void ApplyStateSettings(EPnPCharacterState pState);

	UFUNCTION()
	void OnRep_CurrentState();
    
	UPROPERTY(Transient)
	FPnPStateDataTable StateData;
    
	UPROPERTY(ReplicatedUsing=OnRep_CurrentState)
	EPnPCharacterState CurrentState;
    
	UPROPERTY(Transient)
	EPnPCharacterState PreviousState;
    
	UPROPERTY(Transient)
	APnPPlayerCharacter* OwnerCharacter;
    
	
};
