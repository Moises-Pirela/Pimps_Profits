// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Components/AttributeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPIMPS_AttributeComponent_generated_h
#error "AttributeComponent.generated.h already included, missing '#pragma once' in AttributeComponent.h"
#endif
#define PROJECTPIMPS_AttributeComponent_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributesComponent_Statics; \
	PROJECTPIMPS_API static class UScriptStruct* StaticStruct(); \
	typedef FEntityComponent Super;


template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<struct FAttributesComponent>();

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributesComponentConfig(); \
	friend struct Z_Construct_UClass_UAttributesComponentConfig_Statics; \
public: \
	DECLARE_CLASS(UAttributesComponentConfig, UEntityComponentConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPimps"), NO_API) \
	DECLARE_SERIALIZER(UAttributesComponentConfig)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributesComponentConfig(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAttributesComponentConfig(UAttributesComponentConfig&&); \
	UAttributesComponentConfig(const UAttributesComponentConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributesComponentConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributesComponentConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributesComponentConfig) \
	NO_API virtual ~UAttributesComponentConfig();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_17_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPIMPS_API UClass* StaticClass<class UAttributesComponentConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
