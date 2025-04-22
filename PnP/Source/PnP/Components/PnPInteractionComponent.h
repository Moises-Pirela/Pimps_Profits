// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "PnPInteractionComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPInteractionComponent : public UPnPComponentBase
{
	GENERATED_BODY()

public:
	UPnPInteractionComponent();

protected:
	virtual void BeginPlay() override;

	// Interaction parameters
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	float m_interactionRange;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	float m_interactionSphereRadius;
    
	// Currently focused interactive object
	UPROPERTY(Replicated)
	AActor* m_focusedInteractiveObject;
    
	// Is interaction in progress
	UPROPERTY(ReplicatedUsing = OnRep_InteractionInProgress)
	bool bInteractionInProgress;
    
	UFUNCTION()
	void OnRep_InteractionInProgress();
    
	// Trace for interactive objects
	void PerformInteractionTrace();

public:    
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    
	// Override GetLifetimeReplicatedProps to setup replication
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
	// Start interaction with focused object
	void BeginInteraction();
    
	// End interaction with focused object
	void EndInteraction();
    
	// Server RPC to handle interaction on server
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerBeginInteraction();
    
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerEndInteraction();
};
