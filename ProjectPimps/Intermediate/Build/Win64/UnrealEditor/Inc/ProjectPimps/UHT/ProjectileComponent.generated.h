// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Components/ProjectileComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPIMPS_ProjectileComponent_generated_h
#error "ProjectileComponent.generated.h already included, missing '#pragma once' in ProjectileComponent.h"
#endif
#define PROJECTPIMPS_ProjectileComponent_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileComponent_Statics; \
	PROJECTPIMPS_API static class UScriptStruct* StaticStruct(); \
	typedef FEntityComponent Super;


template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<struct FProjectileComponent>();

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectileComponentConfig(); \
	friend struct Z_Construct_UClass_UProjectileComponentConfig_Statics; \
public: \
	DECLARE_CLASS(UProjectileComponentConfig, UEntityComponentConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPimps"), NO_API) \
	DECLARE_SERIALIZER(UProjectileComponentConfig)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectileComponentConfig(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProjectileComponentConfig(UProjectileComponentConfig&&); \
	UProjectileComponentConfig(const UProjectileComponentConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileComponentConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileComponentConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProjectileComponentConfig) \
	NO_API virtual ~UProjectileComponentConfig();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_14_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPIMPS_API UClass* StaticClass<class UProjectileComponentConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
