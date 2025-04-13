// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Systems/DamageSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPIMPS_DamageSystem_generated_h
#error "DamageSystem.generated.h already included, missing '#pragma once' in DamageSystem.h"
#endif
#define PROJECTPIMPS_DamageSystem_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamageSystem(); \
	friend struct Z_Construct_UClass_UDamageSystem_Statics; \
public: \
	DECLARE_CLASS(UDamageSystem, USystemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPimps"), NO_API) \
	DECLARE_SERIALIZER(UDamageSystem)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDamageSystem(UDamageSystem&&); \
	UDamageSystem(const UDamageSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageSystem) \
	NO_API virtual ~UDamageSystem();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h_7_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h_10_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPIMPS_API UClass* StaticClass<class UDamageSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
