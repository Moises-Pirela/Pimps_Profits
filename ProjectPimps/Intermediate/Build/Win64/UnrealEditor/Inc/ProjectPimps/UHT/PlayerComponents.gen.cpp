// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Components/PlayerComponents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerComponents() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UEquipmentComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UEquipmentComponentConfig_NoRegister();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UPlayerInputComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UPlayerInputComponentConfig_NoRegister();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UPlayerMovementComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UPlayerMovementComponentConfig_NoRegister();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UPlayerTagConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UPlayerTagConfig_NoRegister();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UVaulComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UVaulComponentConfig_NoRegister();
PROJECTPIMPS_API UEnum* Z_Construct_UEnum_ProjectPimps_EExMMovementMode();
PROJECTPIMPS_API UEnum* Z_Construct_UEnum_ProjectPimps_EStances();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentComponent();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputComponent();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputData();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMovementComponent();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerTag();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FVaultComponent();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin Enum EExMMovementMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExMMovementMode;
static UEnum* EExMMovementMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EExMMovementMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EExMMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPimps_EExMMovementMode, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("EExMMovementMode"));
	}
	return Z_Registration_Info_UEnum_EExMMovementMode.OuterSingleton;
}
template<> PROJECTPIMPS_API UEnum* StaticEnum<EExMMovementMode>()
{
	return EExMMovementMode_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPimps_EExMMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EXM_FALL.Name", "EXM_FALL" },
		{ "EXM_JUMP.Name", "EXM_JUMP" },
		{ "EXM_SLIDE.Name", "EXM_SLIDE" },
		{ "EXM_SPRINT.Name", "EXM_SPRINT" },
		{ "EXM_VAULT.Name", "EXM_VAULT" },
		{ "EXM_WALK.Name", "EXM_WALK" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXM_WALK", (int64)EXM_WALK },
		{ "EXM_SPRINT", (int64)EXM_SPRINT },
		{ "EXM_VAULT", (int64)EXM_VAULT },
		{ "EXM_JUMP", (int64)EXM_JUMP },
		{ "EXM_SLIDE", (int64)EXM_SLIDE },
		{ "EXM_FALL", (int64)EXM_FALL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPimps_EExMMovementMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPimps,
	nullptr,
	"EExMMovementMode",
	"EExMMovementMode",
	Z_Construct_UEnum_ProjectPimps_EExMMovementMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPimps_EExMMovementMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPimps_EExMMovementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPimps_EExMMovementMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPimps_EExMMovementMode()
{
	if (!Z_Registration_Info_UEnum_EExMMovementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExMMovementMode.InnerSingleton, Z_Construct_UEnum_ProjectPimps_EExMMovementMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EExMMovementMode.InnerSingleton;
}
// End Enum EExMMovementMode

// Begin Enum EStances
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStances;
static UEnum* EStances_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStances.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStances.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPimps_EStances, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("EStances"));
	}
	return Z_Registration_Info_UEnum_EStances.OuterSingleton;
}
template<> PROJECTPIMPS_API UEnum* StaticEnum<EStances>()
{
	return EStances_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPimps_EStances_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
		{ "STANCE_CROUCHING.Name", "STANCE_CROUCHING" },
		{ "STANCE_STANDING.Name", "STANCE_STANDING" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "STANCE_STANDING", (int64)STANCE_STANDING },
		{ "STANCE_CROUCHING", (int64)STANCE_CROUCHING },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPimps_EStances_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPimps,
	nullptr,
	"EStances",
	"EStances",
	Z_Construct_UEnum_ProjectPimps_EStances_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPimps_EStances_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPimps_EStances_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPimps_EStances_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPimps_EStances()
{
	if (!Z_Registration_Info_UEnum_EStances.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStances.InnerSingleton, Z_Construct_UEnum_ProjectPimps_EStances_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStances.InnerSingleton;
}
// End Enum EStances

// Begin ScriptStruct FPlayerMovementComponent
static_assert(std::is_polymorphic<FPlayerMovementComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FPlayerMovementComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerMovementComponent;
class UScriptStruct* FPlayerMovementComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMovementComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerMovementComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMovementComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("PlayerMovementComponent"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerMovementComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FPlayerMovementComponent>()
{
	return FPlayerMovementComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentMovementMode_MetaData[] = {
		{ "Category", "PlayerMovementComponent" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_previousMovementMode_MetaData[] = {
		{ "Category", "PlayerMovementComponent" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentStance_MetaData[] = {
		{ "Category", "PlayerMovementComponent" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_crouchAlpha_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_crouchAnimAlpha_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_previousMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentStance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_crouchAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_crouchAnimAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMovementComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewProp_currentMovementMode = { "currentMovementMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMovementComponent, currentMovementMode), Z_Construct_UEnum_ProjectPimps_EExMMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentMovementMode_MetaData), NewProp_currentMovementMode_MetaData) }; // 3234359820
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewProp_previousMovementMode = { "previousMovementMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMovementComponent, previousMovementMode), Z_Construct_UEnum_ProjectPimps_EExMMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_previousMovementMode_MetaData), NewProp_previousMovementMode_MetaData) }; // 3234359820
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewProp_currentStance = { "currentStance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMovementComponent, currentStance), Z_Construct_UEnum_ProjectPimps_EStances, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentStance_MetaData), NewProp_currentStance_MetaData) }; // 3204371671
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewProp_crouchAlpha = { "crouchAlpha", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMovementComponent, crouchAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_crouchAlpha_MetaData), NewProp_crouchAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewProp_crouchAnimAlpha = { "crouchAnimAlpha", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMovementComponent, crouchAnimAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_crouchAnimAlpha_MetaData), NewProp_crouchAnimAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewProp_currentMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewProp_previousMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewProp_currentStance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewProp_crouchAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewProp_crouchAnimAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"PlayerMovementComponent",
	Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::PropPointers),
	sizeof(FPlayerMovementComponent),
	alignof(FPlayerMovementComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerMovementComponent()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMovementComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerMovementComponent.InnerSingleton, Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerMovementComponent.InnerSingleton;
}
// End ScriptStruct FPlayerMovementComponent

// Begin ScriptStruct FPlayerTag
static_assert(std::is_polymorphic<FPlayerTag>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FPlayerTag cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerTag;
class UScriptStruct* FPlayerTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerTag, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("PlayerTag"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerTag.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FPlayerTag>()
{
	return FPlayerTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"PlayerTag",
	nullptr,
	0,
	sizeof(FPlayerTag),
	alignof(FPlayerTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerTag()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerTag.InnerSingleton, Z_Construct_UScriptStruct_FPlayerTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerTag.InnerSingleton;
}
// End ScriptStruct FPlayerTag

// Begin ScriptStruct FPlayerInputData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerInputData;
class UScriptStruct* FPlayerInputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerInputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerInputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerInputData, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("PlayerInputData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerInputData.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FPlayerInputData>()
{
	return FPlayerInputData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerInputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveDirection_MetaData[] = {
		{ "Category", "PlayerInputData" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookDirection_MetaData[] = {
		{ "Category", "PlayerInputData" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToJump_MetaData[] = {
		{ "Category", "PlayerInputData" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToSprint_MetaData[] = {
		{ "Category", "PlayerInputData" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCancelSprint_MetaData[] = {
		{ "Category", "PlayerInputData" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrouchInput_MetaData[] = {
		{ "Category", "PlayerInputData" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetLeanRotAmount_MetaData[] = {
		{ "Category", "PlayerInputData" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetLeanLocAmount_MetaData[] = {
		{ "Category", "PlayerInputData" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[] = {
		{ "Category", "PlayerInputData" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_lookDirection;
	static void NewProp_bWantsToJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToJump;
	static void NewProp_bWantsToSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToSprint;
	static void NewProp_bCancelSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelSprint;
	static void NewProp_bCrouchInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouchInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_targetLeanRotAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_targetLeanLocAmount;
	static void NewProp_bIsFiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerInputData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputData, moveDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveDirection_MetaData), NewProp_moveDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_lookDirection = { "lookDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputData, lookDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookDirection_MetaData), NewProp_lookDirection_MetaData) };
void Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bWantsToJump_SetBit(void* Obj)
{
	((FPlayerInputData*)Obj)->bWantsToJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bWantsToJump = { "bWantsToJump", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerInputData), &Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bWantsToJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToJump_MetaData), NewProp_bWantsToJump_MetaData) };
void Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bWantsToSprint_SetBit(void* Obj)
{
	((FPlayerInputData*)Obj)->bWantsToSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bWantsToSprint = { "bWantsToSprint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerInputData), &Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bWantsToSprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToSprint_MetaData), NewProp_bWantsToSprint_MetaData) };
void Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bCancelSprint_SetBit(void* Obj)
{
	((FPlayerInputData*)Obj)->bCancelSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bCancelSprint = { "bCancelSprint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerInputData), &Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bCancelSprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCancelSprint_MetaData), NewProp_bCancelSprint_MetaData) };
void Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bCrouchInput_SetBit(void* Obj)
{
	((FPlayerInputData*)Obj)->bCrouchInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bCrouchInput = { "bCrouchInput", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerInputData), &Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bCrouchInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrouchInput_MetaData), NewProp_bCrouchInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_targetLeanRotAmount = { "targetLeanRotAmount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputData, targetLeanRotAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetLeanRotAmount_MetaData), NewProp_targetLeanRotAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_targetLeanLocAmount = { "targetLeanLocAmount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputData, targetLeanLocAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetLeanLocAmount_MetaData), NewProp_targetLeanLocAmount_MetaData) };
void Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bIsFiring_SetBit(void* Obj)
{
	((FPlayerInputData*)Obj)->bIsFiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerInputData), &Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFiring_MetaData), NewProp_bIsFiring_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_moveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_lookDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bWantsToJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bWantsToSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bCancelSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bCrouchInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_targetLeanRotAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_targetLeanLocAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewProp_bIsFiring,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerInputData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	nullptr,
	&NewStructOps,
	"PlayerInputData",
	Z_Construct_UScriptStruct_FPlayerInputData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputData_Statics::PropPointers),
	sizeof(FPlayerInputData),
	alignof(FPlayerInputData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerInputData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerInputData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerInputData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerInputData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerInputData.InnerSingleton;
}
// End ScriptStruct FPlayerInputData

// Begin ScriptStruct FPlayerInputComponent
static_assert(std::is_polymorphic<FPlayerInputComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FPlayerInputComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerInputComponent;
class UScriptStruct* FPlayerInputComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerInputComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerInputComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerInputComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("PlayerInputComponent"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerInputComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FPlayerInputComponent>()
{
	return FPlayerInputComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerInputComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerInputComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"PlayerInputComponent",
	nullptr,
	0,
	sizeof(FPlayerInputComponent),
	alignof(FPlayerInputComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerInputComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputComponent()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerInputComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerInputComponent.InnerSingleton, Z_Construct_UScriptStruct_FPlayerInputComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerInputComponent.InnerSingleton;
}
// End ScriptStruct FPlayerInputComponent

// Begin ScriptStruct FEquipmentComponent
static_assert(std::is_polymorphic<FEquipmentComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FEquipmentComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentComponent;
class UScriptStruct* FEquipmentComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("EquipmentComponent"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FEquipmentComponent>()
{
	return FEquipmentComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_equippedEntityId_MetaData[] = {
		{ "Category", "EquipmentComponent" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_prevEquippedEntityId_MetaData[] = {
		{ "Category", "EquipmentComponent" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_availableWeaponIds_MetaData[] = {
		{ "Category", "EquipmentComponent" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentWeaponIndex_MetaData[] = {
		{ "Category", "EquipmentComponent" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_equippedEntityId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_prevEquippedEntityId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_availableWeaponIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_availableWeaponIds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentWeaponIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewProp_equippedEntityId = { "equippedEntityId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentComponent, equippedEntityId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_equippedEntityId_MetaData), NewProp_equippedEntityId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewProp_prevEquippedEntityId = { "prevEquippedEntityId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentComponent, prevEquippedEntityId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_prevEquippedEntityId_MetaData), NewProp_prevEquippedEntityId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewProp_availableWeaponIds_Inner = { "availableWeaponIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewProp_availableWeaponIds = { "availableWeaponIds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentComponent, availableWeaponIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_availableWeaponIds_MetaData), NewProp_availableWeaponIds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewProp_currentWeaponIndex = { "currentWeaponIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentComponent, currentWeaponIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentWeaponIndex_MetaData), NewProp_currentWeaponIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewProp_equippedEntityId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewProp_prevEquippedEntityId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewProp_availableWeaponIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewProp_availableWeaponIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewProp_currentWeaponIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"EquipmentComponent",
	Z_Construct_UScriptStruct_FEquipmentComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentComponent_Statics::PropPointers),
	sizeof(FEquipmentComponent),
	alignof(FEquipmentComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentComponent()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentComponent.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentComponent.InnerSingleton;
}
// End ScriptStruct FEquipmentComponent

// Begin ScriptStruct FVaultComponent
static_assert(std::is_polymorphic<FVaultComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FVaultComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VaultComponent;
class UScriptStruct* FVaultComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VaultComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VaultComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVaultComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("VaultComponent"));
	}
	return Z_Registration_Info_UScriptStruct_VaultComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FVaultComponent>()
{
	return FVaultComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVaultComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVaultComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVaultComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"VaultComponent",
	nullptr,
	0,
	sizeof(FVaultComponent),
	alignof(FVaultComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaultComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVaultComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVaultComponent()
{
	if (!Z_Registration_Info_UScriptStruct_VaultComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VaultComponent.InnerSingleton, Z_Construct_UScriptStruct_FVaultComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VaultComponent.InnerSingleton;
}
// End ScriptStruct FVaultComponent

// Begin Class UPlayerMovementComponentConfig
void UPlayerMovementComponentConfig::StaticRegisterNativesUPlayerMovementComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMovementComponentConfig);
UClass* Z_Construct_UClass_UPlayerMovementComponentConfig_NoRegister()
{
	return UPlayerMovementComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UPlayerMovementComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/PlayerComponents.h" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseMovementSpeed_MetaData[] = {
		{ "Category", "PlayerMovementComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sprintModifier_MetaData[] = {
		{ "Category", "PlayerMovementComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_crouchModifier_MetaData[] = {
		{ "Category", "PlayerMovementComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpVelocity_MetaData[] = {
		{ "Category", "PlayerMovementComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_crouchCapsuleHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_standCapsuleHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stanceChangeSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_crouchEyeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_standEyeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sprintModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_crouchModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_crouchCapsuleHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_standCapsuleHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stanceChangeSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_crouchEyeHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_standEyeHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMovementComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_baseMovementSpeed = { "baseMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMovementComponentConfig, baseMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseMovementSpeed_MetaData), NewProp_baseMovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_sprintModifier = { "sprintModifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMovementComponentConfig, sprintModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sprintModifier_MetaData), NewProp_sprintModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_crouchModifier = { "crouchModifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMovementComponentConfig, crouchModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_crouchModifier_MetaData), NewProp_crouchModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_jumpVelocity = { "jumpVelocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMovementComponentConfig, jumpVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpVelocity_MetaData), NewProp_jumpVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_crouchCapsuleHeight = { "crouchCapsuleHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMovementComponentConfig, crouchCapsuleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_crouchCapsuleHeight_MetaData), NewProp_crouchCapsuleHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_standCapsuleHeight = { "standCapsuleHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMovementComponentConfig, standCapsuleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_standCapsuleHeight_MetaData), NewProp_standCapsuleHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_stanceChangeSpeed = { "stanceChangeSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMovementComponentConfig, stanceChangeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stanceChangeSpeed_MetaData), NewProp_stanceChangeSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_crouchEyeHeight = { "crouchEyeHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMovementComponentConfig, crouchEyeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_crouchEyeHeight_MetaData), NewProp_crouchEyeHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_standEyeHeight = { "standEyeHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMovementComponentConfig, standEyeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_standEyeHeight_MetaData), NewProp_standEyeHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_baseMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_sprintModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_crouchModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_jumpVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_crouchCapsuleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_standCapsuleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_stanceChangeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_crouchEyeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::NewProp_standEyeHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::ClassParams = {
	&UPlayerMovementComponentConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerMovementComponentConfig()
{
	if (!Z_Registration_Info_UClass_UPlayerMovementComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMovementComponentConfig.OuterSingleton, Z_Construct_UClass_UPlayerMovementComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerMovementComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UPlayerMovementComponentConfig>()
{
	return UPlayerMovementComponentConfig::StaticClass();
}
UPlayerMovementComponentConfig::UPlayerMovementComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMovementComponentConfig);
UPlayerMovementComponentConfig::~UPlayerMovementComponentConfig() {}
// End Class UPlayerMovementComponentConfig

// Begin Class UPlayerInputComponentConfig
void UPlayerInputComponentConfig::StaticRegisterNativesUPlayerInputComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInputComponentConfig);
UClass* Z_Construct_UClass_UPlayerInputComponentConfig_NoRegister()
{
	return UPlayerInputComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UPlayerInputComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/PlayerComponents.h" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInputComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerInputComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInputComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInputComponentConfig_Statics::ClassParams = {
	&UPlayerInputComponentConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInputComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInputComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerInputComponentConfig()
{
	if (!Z_Registration_Info_UClass_UPlayerInputComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInputComponentConfig.OuterSingleton, Z_Construct_UClass_UPlayerInputComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerInputComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UPlayerInputComponentConfig>()
{
	return UPlayerInputComponentConfig::StaticClass();
}
UPlayerInputComponentConfig::UPlayerInputComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInputComponentConfig);
UPlayerInputComponentConfig::~UPlayerInputComponentConfig() {}
// End Class UPlayerInputComponentConfig

// Begin Class UPlayerTagConfig
void UPlayerTagConfig::StaticRegisterNativesUPlayerTagConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerTagConfig);
UClass* Z_Construct_UClass_UPlayerTagConfig_NoRegister()
{
	return UPlayerTagConfig::StaticClass();
}
struct Z_Construct_UClass_UPlayerTagConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/PlayerComponents.h" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerTagConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerTagConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerTagConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerTagConfig_Statics::ClassParams = {
	&UPlayerTagConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerTagConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerTagConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerTagConfig()
{
	if (!Z_Registration_Info_UClass_UPlayerTagConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerTagConfig.OuterSingleton, Z_Construct_UClass_UPlayerTagConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerTagConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UPlayerTagConfig>()
{
	return UPlayerTagConfig::StaticClass();
}
UPlayerTagConfig::UPlayerTagConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerTagConfig);
UPlayerTagConfig::~UPlayerTagConfig() {}
// End Class UPlayerTagConfig

// Begin Class UEquipmentComponentConfig
void UEquipmentComponentConfig::StaticRegisterNativesUEquipmentComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentComponentConfig);
UClass* Z_Construct_UClass_UEquipmentComponentConfig_NoRegister()
{
	return UEquipmentComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UEquipmentComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/PlayerComponents.h" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startingWeaponEntities_MetaData[] = {
		{ "Category", "Equipment Config" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_startingWeaponEntities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_startingWeaponEntities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquipmentComponentConfig_Statics::NewProp_startingWeaponEntities_Inner = { "startingWeaponEntities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentComponentConfig_Statics::NewProp_startingWeaponEntities = { "startingWeaponEntities", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponentConfig, startingWeaponEntities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startingWeaponEntities_MetaData), NewProp_startingWeaponEntities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentComponentConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponentConfig_Statics::NewProp_startingWeaponEntities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponentConfig_Statics::NewProp_startingWeaponEntities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponentConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipmentComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentComponentConfig_Statics::ClassParams = {
	&UEquipmentComponentConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEquipmentComponentConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponentConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentComponentConfig()
{
	if (!Z_Registration_Info_UClass_UEquipmentComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentComponentConfig.OuterSingleton, Z_Construct_UClass_UEquipmentComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UEquipmentComponentConfig>()
{
	return UEquipmentComponentConfig::StaticClass();
}
UEquipmentComponentConfig::UEquipmentComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentComponentConfig);
UEquipmentComponentConfig::~UEquipmentComponentConfig() {}
// End Class UEquipmentComponentConfig

// Begin Class UVaulComponentConfig
void UVaulComponentConfig::StaticRegisterNativesUVaulComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVaulComponentConfig);
UClass* Z_Construct_UClass_UVaulComponentConfig_NoRegister()
{
	return UVaulComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UVaulComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/PlayerComponents.h" },
		{ "ModuleRelativePath", "Core/Components/PlayerComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaulComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVaulComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaulComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaulComponentConfig_Statics::ClassParams = {
	&UVaulComponentConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaulComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaulComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVaulComponentConfig()
{
	if (!Z_Registration_Info_UClass_UVaulComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaulComponentConfig.OuterSingleton, Z_Construct_UClass_UVaulComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaulComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UVaulComponentConfig>()
{
	return UVaulComponentConfig::StaticClass();
}
UVaulComponentConfig::UVaulComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVaulComponentConfig);
UVaulComponentConfig::~UVaulComponentConfig() {}
// End Class UVaulComponentConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerComponents_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EExMMovementMode_StaticEnum, TEXT("EExMMovementMode"), &Z_Registration_Info_UEnum_EExMMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3234359820U) },
		{ EStances_StaticEnum, TEXT("EStances"), &Z_Registration_Info_UEnum_EStances, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3204371671U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerMovementComponent::StaticStruct, Z_Construct_UScriptStruct_FPlayerMovementComponent_Statics::NewStructOps, TEXT("PlayerMovementComponent"), &Z_Registration_Info_UScriptStruct_PlayerMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerMovementComponent), 854942238U) },
		{ FPlayerTag::StaticStruct, Z_Construct_UScriptStruct_FPlayerTag_Statics::NewStructOps, TEXT("PlayerTag"), &Z_Registration_Info_UScriptStruct_PlayerTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerTag), 250591548U) },
		{ FPlayerInputData::StaticStruct, Z_Construct_UScriptStruct_FPlayerInputData_Statics::NewStructOps, TEXT("PlayerInputData"), &Z_Registration_Info_UScriptStruct_PlayerInputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerInputData), 4176088756U) },
		{ FPlayerInputComponent::StaticStruct, Z_Construct_UScriptStruct_FPlayerInputComponent_Statics::NewStructOps, TEXT("PlayerInputComponent"), &Z_Registration_Info_UScriptStruct_PlayerInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerInputComponent), 637605395U) },
		{ FEquipmentComponent::StaticStruct, Z_Construct_UScriptStruct_FEquipmentComponent_Statics::NewStructOps, TEXT("EquipmentComponent"), &Z_Registration_Info_UScriptStruct_EquipmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentComponent), 2520885149U) },
		{ FVaultComponent::StaticStruct, Z_Construct_UScriptStruct_FVaultComponent_Statics::NewStructOps, TEXT("VaultComponent"), &Z_Registration_Info_UScriptStruct_VaultComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVaultComponent), 1392711260U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMovementComponentConfig, UPlayerMovementComponentConfig::StaticClass, TEXT("UPlayerMovementComponentConfig"), &Z_Registration_Info_UClass_UPlayerMovementComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMovementComponentConfig), 1309942466U) },
		{ Z_Construct_UClass_UPlayerInputComponentConfig, UPlayerInputComponentConfig::StaticClass, TEXT("UPlayerInputComponentConfig"), &Z_Registration_Info_UClass_UPlayerInputComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInputComponentConfig), 585563149U) },
		{ Z_Construct_UClass_UPlayerTagConfig, UPlayerTagConfig::StaticClass, TEXT("UPlayerTagConfig"), &Z_Registration_Info_UClass_UPlayerTagConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerTagConfig), 1834745270U) },
		{ Z_Construct_UClass_UEquipmentComponentConfig, UEquipmentComponentConfig::StaticClass, TEXT("UEquipmentComponentConfig"), &Z_Registration_Info_UClass_UEquipmentComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentComponentConfig), 2816734822U) },
		{ Z_Construct_UClass_UVaulComponentConfig, UVaulComponentConfig::StaticClass, TEXT("UVaulComponentConfig"), &Z_Registration_Info_UClass_UVaulComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaulComponentConfig), 628157706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerComponents_h_3364071890(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerComponents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerComponents_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerComponents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerComponents_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerComponents_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerComponents_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
