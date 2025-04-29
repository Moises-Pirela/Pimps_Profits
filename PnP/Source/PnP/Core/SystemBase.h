// SystemBase.h
#pragma once

#include "CoreMinimal.h"
#include "PnP/Core/EntityStorage.h"
#include "SystemBase.generated.h"

UCLASS(Abstract)
class PNP_API UPnPSystemBase : public UObject
{
	GENERATED_BODY()
   
public:
	virtual void Initialize() {}
   
	UFUNCTION()
	virtual void Process(UEntityStorage* EntityStorage, float DeltaTime) PURE_VIRTUAL(UPnPSystemBase::Process);
   
	virtual void PreProcess() {}
   
	virtual void PostProcess() {}
   
	virtual bool HasAuthority(UUnrealEntity* Entity) const { return false;};
};