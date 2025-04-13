// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Components/WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPIMPS_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define PROJECTPIMPS_WeaponComponent_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponComponent_Statics; \
	PROJECTPIMPS_API static class UScriptStruct* StaticStruct(); \
	typedef FEntityComponent Super;


template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<struct FWeaponComponent>();

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponentConfig(); \
	friend struct Z_Construct_UClass_UWeaponComponentConfig_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponentConfig, UEntityComponentConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPimps"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponentConfig)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponComponentConfig(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponComponentConfig(UWeaponComponentConfig&&); \
	UWeaponComponentConfig(const UWeaponComponentConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponentConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponentConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponentConfig) \
	NO_API virtual ~UWeaponComponentConfig();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_39_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_42_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPIMPS_API UClass* StaticClass<class UWeaponComponentConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h


#define FOREACH_ENUM_EWEAPONTYPES(op) \
	op(WEAPON_TYPE_HITSCAN) \
	op(WEAPON_TYPE_PROJECTILE) \
	op(WEAPON_TYPE_MELEE) 

enum EWeaponTypes : int;
template<> PROJECTPIMPS_API UEnum* StaticEnum<EWeaponTypes>();

#define FOREACH_ENUM_EWEAPONS(op) \
	op(WEAPON_FISTS) 

enum EWeapons : int;
template<> PROJECTPIMPS_API UEnum* StaticEnum<EWeapons>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
