#pragma once
#include "Flags.h"
#include "Archetype.generated.h"

class UPnPComponentBase;

USTRUCT()
struct FArchetype
{
	GENERATED_BODY()
	
	FComponentFlags Signature;
	TArray<int32> EntityIds;
	TMap<UClass*, TArray<UPnPComponentBase*>> ComponentArrays;
};
