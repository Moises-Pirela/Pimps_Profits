// PnPInteractableComponent.h
#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "PnPInteractableComponent.generated.h"

// Forward declarations
class UPnPInteractionComponent;

// Delegate declarations
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractorEvent, AActor*, Interactor);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPInteractableComponent : public UPnPComponentBase
{
    GENERATED_BODY()

public:
    UPnPInteractableComponent();

    // Data properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    FText InteractionPrompt;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    float InteractionDuration;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    bool bRequireHoldToInteract;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    bool bCanInteractMultipleTimes;
    
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Interaction|Runtime")
    AActor* CurrentInteractor;
    
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Interaction|Runtime")
    bool bIsInUse;
    
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Interaction|Runtime")
    float InteractionProgress;
    
    UPROPERTY(BlueprintAssignable, Category = "Interaction|Events")
    FOnInteractorEvent OnBeginFocus;
    
    UPROPERTY(BlueprintAssignable, Category = "Interaction|Events")
    FOnInteractorEvent OnEndFocus;
    
    UPROPERTY(BlueprintAssignable, Category = "Interaction|Events")
    FOnInteractorEvent OnInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, Category = "Interaction|Events")
    FOnInteractorEvent OnInteractionEnded;
    
    UPROPERTY(BlueprintAssignable, Category = "Interaction|Events")
    FOnInteractorEvent OnInteractionCompleted;
    
    UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
    bool CanBeInteractedWith(AActor* InteractingActor) const;
    
    UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
    void HandleFocusBegin(AActor* InteractingActor);
    
    UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
    void HandleFocusEnd(AActor* InteractingActor);
    
    UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
    void HandleInteractionStart(AActor* InteractingActor);
    
    UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
    void HandleInteractionEnd(AActor* InteractingActor);
    
    UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
    void HandleInteractionComplete(AActor* InteractingActor);
    
    // Helper methods
    UFUNCTION(BlueprintPure, Category = "Interaction")
    FText GetInteractionText() const { return InteractionPrompt; }
    
    // Replication setup
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};

// Implementation of the native functions
inline bool UPnPInteractableComponent::CanBeInteractedWith_Implementation(AActor* InteractingActor) const { return true; }
inline void UPnPInteractableComponent::HandleFocusBegin_Implementation(AActor* InteractingActor) { OnBeginFocus.Broadcast(InteractingActor); }
inline void UPnPInteractableComponent::HandleFocusEnd_Implementation(AActor* InteractingActor) { OnEndFocus.Broadcast(InteractingActor); }
inline void UPnPInteractableComponent::HandleInteractionStart_Implementation(AActor* InteractingActor) { OnInteractionStarted.Broadcast(InteractingActor); }
inline void UPnPInteractableComponent::HandleInteractionEnd_Implementation(AActor* InteractingActor) { OnInteractionEnded.Broadcast(InteractingActor); }
inline void UPnPInteractableComponent::HandleInteractionComplete_Implementation(AActor* InteractingActor) { OnInteractionCompleted.Broadcast(InteractingActor); }