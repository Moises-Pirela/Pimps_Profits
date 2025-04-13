// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Components/HealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPIMPS_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define PROJECTPIMPS_HealthComponent_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHealthComponent_Statics; \
	PROJECTPIMPS_API static class UScriptStruct* StaticStruct(); \
	typedef FEntityComponent Super;


template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<struct FHealthComponent>();

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponentConfig(); \
	friend struct Z_Construct_UClass_UHealthComponentConfig_Statics; \
public: \
	DECLARE_CLASS(UHealthComponentConfig, UEntityComponentConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPimps"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponentConfig)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponentConfig(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealthComponentConfig(UHealthComponentConfig&&); \
	UHealthComponentConfig(const UHealthComponentConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponentConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponentConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponentConfig) \
	NO_API virtual ~UHealthComponentConfig();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_18_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPIMPS_API UClass* StaticClass<class UHealthComponentConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
