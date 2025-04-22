#pragma once

#include "Flags.generated.h"


UENUM(BlueprintType)
enum EEntityState : uint8
{
	ENTITY_STATE_ACTIVE = 0,
	ENTITY_STATE_DEAD,
	ENTITY_STATE_INACTIVE,
	
	ENTITY_STATE_MAX
};

USTRUCT(BlueprintType)
struct FEntityFlags
{
	GENERATED_BODY()

	uint8 value;

	FEntityFlags(): value(ENTITY_STATE_INACTIVE)
	{
	}
	
	void AddFlag(const uint8 flag)
	{
		value |= (1 << flag);
	}

	void RemoveFlag(const uint8 flag)
	{
		value &= ~(1 << flag);
	}

	bool HasFlag(uint8 flag)
	{
		return (value & (1 << flag)) != 0;
	}
	
};

USTRUCT(BlueprintType)
struct FComponentFlags
{
	GENERATED_BODY()

	int value;

	FComponentFlags(): value(0)
	{
	}

	FComponentFlags(const int* componentTypes, const int32 count): value(0)
	{
		for (int i = 0; i < count; i++)
		{
			uint32 type = (uint32)componentTypes[i];

			AddFlag(type);
		}
	}

	void AddFlag(const int flagPosition)
	{
		value |= (1 << flagPosition); 
	}

	void RemoveFlag(const int flagPosition)
	{
		value &= ~(1 << flagPosition); 
	}

	bool HasFlag(const int flagPosition) const
	{
		return (value & (1 << flagPosition)) != 0; 
	}

	bool MatchesSignature(const FComponentFlags& flags) const
	{
		return (value & flags.value) == flags.value;
	}

	static int GetNumBits()
	{
		return sizeof(uint32) * 8;
	}

	template <typename Func>
	void ForEachSetBit(Func&& func) const
	{
		int tempValue = value;
		int bitPos = 0;

		while (tempValue)
		{
			if (tempValue & 1)
			{
				func(bitPos);
			}

			tempValue >>= 1;
			bitPos++;
		}
	}
};