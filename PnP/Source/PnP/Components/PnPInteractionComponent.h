// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "PnPInteractionComponent.generated.h"

class UPnPInteractableComponent;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractableEvent, UPnPInteractableComponent*, Interactable);

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
	int m_focusedInteractiveEntityId = -1;
    
	// Is interaction in progress
	UPROPERTY(ReplicatedUsing = OnRep_InteractionInProgress)
	bool bInteractionInProgress;
    
	UFUNCTION()
	void OnRep_InteractionInProgress();
    
	// Trace for interactive objects
	void PerformInteractionTrace();
	bool IsOwnerLocallyControlled() const;

public:

	UPROPERTY(BlueprintAssignable)
	FOnInteractableEvent OnBeginFocus;
    
	UPROPERTY(BlueprintAssignable)
	FOnInteractableEvent OnEndFocus;
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(Server, Reliable)
	void ServerUpdateFocusedObject(int32 EntityId);
    
	// Server RPC to handle interaction on server
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerBeginInteraction();
    
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerEndInteraction();

	UFUNCTION(Client, Reliable)
	void ClientFocusedInteraction();
};
