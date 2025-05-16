// PnPReplicationTestActor.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PnP/Core/UnrealEntity.h"
#include "PnP/Components/PnPHealthComponent.h"
#include "PnPReplicationTestActor.generated.h"

UCLASS()
class PNP_API APnPReplicationTestActor : public AActor
{
	GENERATED_BODY()
    
public:    
	APnPReplicationTestActor();

protected:
	virtual void BeginPlay() override;
    
	// Test components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UUnrealEntity* EntityComponent;
    
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UPnPHealthComponent* HealthComponent;
    
	// Test function to modify health
	UFUNCTION(BlueprintCallable)
	void TakeSomeDamage(float Amount);
    
	// Timer to periodically modify values
	FTimerHandle TestTimerHandle;
    
	// Test function called by timer
	UFUNCTION()
	void PerformPeriodicTest();
    
	// Log entity status
	UFUNCTION(BlueprintCallable)
	void LogEntityStatus();
};