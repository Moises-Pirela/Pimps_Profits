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
    
	UPROPERTY(Replicated)
	TObjectPtr<UPnPInteractableComponent> focusedInteractable;
    
	UPROPERTY(ReplicatedUsing = OnRep_InteractionInProgress)
	bool bInteractionInProgress;
    
	UFUNCTION()
	void OnRep_InteractionInProgress();
    
public:

	UPROPERTY(BlueprintAssignable)
	FOnInteractableEvent OnBeginFocus;
    
	UPROPERTY(BlueprintAssignable)
	FOnInteractableEvent OnEndFocus;
	
	void PerformInteractionTrace(FVector pStartLocation, FVector pDirection);
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(Server, Reliable)
	void ServerUpdateFocusedObject(UPnPInteractableComponent* pNewInteractable);
    
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerBeginInteraction();
};
