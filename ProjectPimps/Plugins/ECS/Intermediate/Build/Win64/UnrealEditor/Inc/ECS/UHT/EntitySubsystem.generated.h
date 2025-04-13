// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/EntitySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECS_EntitySubsystem_generated_h
#error "EntitySubsystem.generated.h already included, missing '#pragma once' in EntitySubsystem.h"
#endif
#define ECS_EntitySubsystem_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntitySubsystem(); \
	friend struct Z_Construct_UClass_UEntitySubsystem_Statics; \
public: \
	DECLARE_CLASS(UEntitySubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ECS"), NO_API) \
	DECLARE_SERIALIZER(UEntitySubsystem)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEntitySubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEntitySubsystem(UEntitySubsystem&&); \
	UEntitySubsystem(const UEntitySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntitySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEntitySubsystem) \
	NO_API virtual ~UEntitySubsystem();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h_20_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ECS_API UClass* StaticClass<class UEntitySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
