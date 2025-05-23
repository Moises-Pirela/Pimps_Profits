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

USTRUCT(BlueprintType)
struct FInteractionRequest
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    int interactorEntityId = -1;
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    int targetEntityId = -1;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float requestTime;

    bool operator==(const FInteractionRequest& Other) const
    {
        return interactorEntityId == Other.interactorEntityId &&
            FMath::IsNearlyEqual(requestTime, Other.requestTime, 0.01f) &&
            targetEntityId == Other.targetEntityId;
    }
};

// Delegate declarations
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractorEvent, AActor*, Interactor);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent, DisplayName="Interactable Component"))
class PNP_API UPnPInteractableComponent : public UPnPComponentBase
{
    GENERATED_BODY()

public:
    UPnPInteractableComponent();

    static constexpr int MAX_INTERACTIONS = 1;

    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite)
    TArray<FInteractionRequest> InteractionRequests;

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
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractorEvent OnInteractionStarted;
    
    UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
    bool CanBeInteractedWith(AActor* InteractingActor) const;
    
    UFUNCTION(NetMulticast, Reliable, Category = "Interaction")
    void MulticastInteractionStart(int interactingEntityId, int targetEntityId);
    
    UFUNCTION(BlueprintPure, Category = "Interaction")
    FText GetInteractionText() const { return InteractionPrompt; }
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerAddInteraction(FInteractionRequest pRequest);
    
    // Replication setup
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};

inline bool UPnPInteractableComponent::CanBeInteractedWith_Implementation(AActor* InteractingActor) const { return true; }