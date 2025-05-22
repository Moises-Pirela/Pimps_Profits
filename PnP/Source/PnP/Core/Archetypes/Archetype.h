#pragma once
#include "PnP/Core/Flags.h"
#include "Archetype.generated.h"

struct FComponentFlags;
class UPnPComponentBase;

UENUM()
enum EArchetypeIndex
{
	ARCHETYPE_INTERACTABLES = 0,
	ARCHETYPE_PLAYERS = 1,
	ARCHETYPE_COUNT,
};

USTRUCT()
struct FArchetype
{
	GENERATED_BODY()
    
	FComponentFlags Signature;
	TArray<int32> EntityIds;
	TMap<UClass*, TArray<UPnPComponentBase*>> ComponentArrays;
    
	FComponentFlags GetSignature() const { return Signature; }
};
