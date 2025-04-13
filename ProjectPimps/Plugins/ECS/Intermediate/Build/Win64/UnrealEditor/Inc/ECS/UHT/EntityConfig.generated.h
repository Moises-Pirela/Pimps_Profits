// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Configs/EntityConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECS_EntityConfig_generated_h
#error "EntityConfig.generated.h already included, missing '#pragma once' in EntityConfig.h"
#endif
#define ECS_EntityConfig_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityConfig(); \
	friend struct Z_Construct_UClass_UEntityConfig_Statics; \
public: \
	DECLARE_CLASS(UEntityConfig, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ECS"), NO_API) \
	DECLARE_SERIALIZER(UEntityConfig)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEntityConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEntityConfig(UEntityConfig&&); \
	UEntityConfig(const UEntityConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntityConfig) \
	NO_API virtual ~UEntityConfig();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h_9_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h_12_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ECS_API UClass* StaticClass<class UEntityConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
