// PnPReplicationTestActor.cpp
#include "PnPReplicationTestActor.h"
#include "PnP/Core/EntitySubsystem.h"
#include "PnP/Utils/Logger.h"

APnPReplicationTestActor::APnPReplicationTestActor()
{
    PrimaryActorTick.bCanEverTick = true;
    
    // Create a static mesh for visibility
    UStaticMeshComponent* MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TestMesh"));
    SetRootComponent(MeshComp);
    
    // Create entity component
    EntityComponent = CreateDefaultSubobject<UUnrealEntity>(TEXT("EntityComponent"));
    
    // Create health component for testing data replication
    HealthComponent = CreateDefaultSubobject<UPnPHealthComponent>(TEXT("HealthComponent"));
    
    // Set this actor to replicate
    bReplicates = true;
}

void APnPReplicationTestActor::BeginPlay()
{
    Super::BeginPlay();
    
    // Start a timer to periodically test/log entity status
    GetWorldTimerManager().SetTimer(TestTimerHandle, this, &APnPReplicationTestActor::PerformPeriodicTest, 2.0f, true);
    
    ClockLog(FString::Printf(TEXT("Test Actor BeginPlay - Role: %s"), 
        HasAuthority() ? TEXT("Authority") : TEXT("Remote")), LOG_INFO);
}

void APnPReplicationTestActor::TakeSomeDamage(float Amount)
{
    if (HealthComponent)
    {
        HealthComponent->TakeDamage(5);
        ClockLog(FString::Printf(TEXT("TakeDamage: %.1f, Current Health: %.1f"), 
            Amount, HealthComponent->CurrentHealth), LOG_INFO);
    }
}

void APnPReplicationTestActor::PerformPeriodicTest()
{
    //LogEntityStatus();
    
    // On server, modify some data to test replication
    if (HasAuthority() && HealthComponent)
    {
        float DamageAmount = 5.0f;
        HealthComponent->TakeDamage(DamageAmount);
        
        ClockLog(FString::Printf(TEXT("Server applied damage: %.1f, New Health: %.1f"), 
            DamageAmount, HealthComponent->CurrentHealth), LOG_INFO);

        if (HealthComponent->CurrentHealth <= 0)
        {
            UEntitySubsystem* EntitySystem = GetWorld()->GetSubsystem<UEntitySubsystem>();

            EntitySystem->ServerDestroyEntity(EntityComponent->EntityId);
        }
    }
}

void APnPReplicationTestActor::LogEntityStatus()
{
    // Log entity status

    ClockLog(FString("------------HEALTH DEBUG UPDATE----------------"), LOG_DEBUG);
    
    FString StatusMessage = FString::Printf(TEXT("Test Actor - Role: %s, EntityID: %d"), 
        HasAuthority() ? TEXT("Authority") : TEXT("Remote"), 
        EntityComponent ? EntityComponent->EntityId : -1);
    
    if (HealthComponent)
    {
        StatusMessage += FString::Printf(TEXT(", Health: %.1f"), HealthComponent->CurrentHealth);
    }
    
    ClockLog(StatusMessage, LOG_INFO);
    
    // Check if the entity exists in the subsystem
    UEntitySubsystem* EntitySystem = GetWorld()->GetSubsystem<UEntitySubsystem>();
    if (EntitySystem && EntitySystem->EntityStorage && EntityComponent && EntityComponent->EntityId >= 0)
    {
        UPnPHealthComponent* HealthFromECS = EntitySystem->GetComponent<UPnPHealthComponent>(EntityComponent->EntityId);
        
        if (HealthFromECS)
        {
            ClockLog(FString::Printf(TEXT("ECS Health Component Found! Health: %.1f"), 
                HealthFromECS->CurrentHealth), LOG_INFO);
        }
        else
        {
            ClockLog(TEXT("ECS Health Component NOT found in EntityStorage!"), LOG_WARNING);
        }
    }
    else
    {
        ClockLog(TEXT("Entity not fully registered with ECS yet"), LOG_DEBUG);
    }

    ClockLog(FString("------------///////////////----------------"), LOG_DEBUG);
}