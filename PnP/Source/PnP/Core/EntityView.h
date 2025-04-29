#pragma once
#include "Archetype.h"
#include "UnrealEntity.h"

class UEntityStorage;

class FEntityView
{
public:
	FEntityView(FArchetype* archetype) : Archetype(archetype) {}
    
	auto begin() { return Archetype ? Archetype->EntityIds.begin() : TArray<int32>().begin(); }
	auto end() { return Archetype ? Archetype->EntityIds.end() : TArray<int32>().end(); }
    
	template<typename T>
	T* GetComponent(int32 entityId)
	{
		if (!Archetype) return nullptr;
		return static_cast<T*>(Archetype->ComponentArrays[T::StaticClass()][entityId]);
	}
    
private:
	FArchetype* Archetype;
};
