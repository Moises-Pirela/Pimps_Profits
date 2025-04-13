// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/DamageCalculators.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECS_DamageCalculators_generated_h
#error "DamageCalculators.generated.h already included, missing '#pragma once' in DamageCalculators.h"
#endif
#define ECS_DamageCalculators_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Utils_DamageCalculators_h


#define FOREACH_ENUM_EDAMAGETYPES(op) \
	op(DAMAGE_TYPE_KINETIC) \
	op(DAMAGE_TYPE_BLUNT) \
	op(DAMAGE_TYPE_SLASH) \
	op(DAMAGE_TYPE_NECROTIC) \
	op(DAMAGE_TYPE_FALL) 

enum EDamageTypes : int;
template<> ECS_API UEnum* StaticEnum<EDamageTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
