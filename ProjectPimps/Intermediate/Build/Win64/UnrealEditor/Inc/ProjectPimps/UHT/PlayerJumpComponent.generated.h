// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Components/PlayerJumpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPIMPS_PlayerJumpComponent_generated_h
#error "PlayerJumpComponent.generated.h already included, missing '#pragma once' in PlayerJumpComponent.h"
#endif
#define PROJECTPIMPS_PlayerJumpComponent_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_9_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics; \
	PROJECTPIMPS_API static class UScriptStruct* StaticStruct(); \
	typedef FEntityComponent Super;


template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<struct FPlayerJumpComponent>();

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerJumpComponentConfig(); \
	friend struct Z_Construct_UClass_UPlayerJumpComponentConfig_Statics; \
public: \
	DECLARE_CLASS(UPlayerJumpComponentConfig, UEntityComponentConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPimps"), NO_API) \
	DECLARE_SERIALIZER(UPlayerJumpComponentConfig)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerJumpComponentConfig(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerJumpComponentConfig(UPlayerJumpComponentConfig&&); \
	UPlayerJumpComponentConfig(const UPlayerJumpComponentConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerJumpComponentConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerJumpComponentConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerJumpComponentConfig) \
	NO_API virtual ~UPlayerJumpComponentConfig();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_21_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPIMPS_API UClass* StaticClass<class UPlayerJumpComponentConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
