// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Configs/EntityComponentConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECS_EntityComponentConfig_generated_h
#error "EntityComponentConfig.generated.h already included, missing '#pragma once' in EntityComponentConfig.h"
#endif
#define ECS_EntityComponentConfig_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityComponentConfigBase(); \
	friend struct Z_Construct_UClass_UEntityComponentConfigBase_Statics; \
public: \
	DECLARE_CLASS(UEntityComponentConfigBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ECS"), NO_API) \
	DECLARE_SERIALIZER(UEntityComponentConfigBase)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEntityComponentConfigBase(UEntityComponentConfigBase&&); \
	UEntityComponentConfigBase(const UEntityComponentConfigBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityComponentConfigBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityComponentConfigBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEntityComponentConfigBase) \
	NO_API virtual ~UEntityComponentConfigBase();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h_5_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h_8_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ECS_API UClass* StaticClass<class UEntityComponentConfigBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
