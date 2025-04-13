// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Systems/CreateEntitySystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECS_CreateEntitySystem_generated_h
#error "CreateEntitySystem.generated.h already included, missing '#pragma once' in CreateEntitySystem.h"
#endif
#define ECS_CreateEntitySystem_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateEntitySystem(); \
	friend struct Z_Construct_UClass_UCreateEntitySystem_Statics; \
public: \
	DECLARE_CLASS(UCreateEntitySystem, USystemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ECS"), NO_API) \
	DECLARE_SERIALIZER(UCreateEntitySystem)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateEntitySystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCreateEntitySystem(UCreateEntitySystem&&); \
	UCreateEntitySystem(const UCreateEntitySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateEntitySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateEntitySystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateEntitySystem) \
	NO_API virtual ~UCreateEntitySystem();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h_13_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ECS_API UClass* StaticClass<class UCreateEntitySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
