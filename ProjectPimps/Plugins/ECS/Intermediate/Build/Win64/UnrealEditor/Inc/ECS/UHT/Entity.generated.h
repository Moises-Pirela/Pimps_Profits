// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Entity.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECS_Entity_generated_h
#error "Entity.generated.h already included, missing '#pragma once' in Entity.h"
#endif
#define ECS_Entity_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Entity_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEntityFlags_Statics; \
	ECS_API static class UScriptStruct* StaticStruct();


template<> ECS_API UScriptStruct* StaticStruct<struct FEntityFlags>();

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Entity_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentFlags_Statics; \
	ECS_API static class UScriptStruct* StaticStruct();


template<> ECS_API UScriptStruct* StaticStruct<struct FComponentFlags>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Entity_h


#define FOREACH_ENUM_EENTITYSTATE(op) \
	op(ENTITY_STATE_ACTIVE) \
	op(ENTITY_STATE_DEAD) \
	op(ENTITY_STATE_INACTIVE) 

enum EEntityState : uint8;
template<> ECS_API UEnum* StaticEnum<EEntityState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
