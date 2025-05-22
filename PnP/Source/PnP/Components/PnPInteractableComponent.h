// PnPInteractableComponent.h
#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "PnPInteractableComponent.generated.h"

// Forward declarations
class UPnPInteractionComponent;

UENUM(BlueprintType)
enum EInteractableType
{
    INTERACTABLE_USE,
    INTERACTABLE_PICK_UP,
    INTERACTABLE_TALK
};

// Delegate declarations
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractorEvent, AActor*, Interactor);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent, DisplayName="Interactable Component"))
class PNP_API UPnPInteractableComponent : public UPnPComponentBase
{
    GENERATED_BODY()

public:
    UPnPInteractableComponent();

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TEnumAsByte<EInteractableType> InteractableType;

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
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractorEvent OnBeginFocus;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractorEvent OnEndFocus;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractorEvent OnInteractionStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractorEvent OnInteractionEnded;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractorEvent OnInteractionCompleted;
    
    UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
    bool CanBeInteractedWith(AActor* InteractingActor) const;
    
    UFUNCTION(NetMulticast, Reliable, Category = "Interaction")
    void MulticastInteractionStart(AActor* InteractingActor);
    
    UFUNCTION(BlueprintPure, Category = "Interaction")
    FText GetInteractionText() const { return InteractionPrompt; }
    
    // Replication setup
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};

inline bool UPnPInteractableComponent::CanBeInteractedWith_Implementation(AActor* InteractingActor) const { return true; }