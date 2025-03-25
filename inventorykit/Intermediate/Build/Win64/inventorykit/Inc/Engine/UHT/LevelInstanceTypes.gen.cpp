// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstanceTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceCreationType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstancePivotType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNewLevelInstanceParams();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ELevelInstanceRuntimeBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior;
static UEnum* ELevelInstanceRuntimeBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELevelInstanceRuntimeBehavior"));
	}
	return Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceRuntimeBehavior>()
{
	return ELevelInstanceRuntimeBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Embedded_Deprecated.Comment", "// Deprecated exists only to avoid breaking Actor Desc serialization\n" },
		{ "Embedded_Deprecated.Hidden", "" },
		{ "Embedded_Deprecated.Name", "ELevelInstanceRuntimeBehavior::Embedded_Deprecated" },
		{ "Embedded_Deprecated.ToolTip", "Deprecated exists only to avoid breaking Actor Desc serialization" },
		{ "LevelStreaming.Comment", "// Use level streaming to load level instance actors\n" },
		{ "LevelStreaming.DisplayName", "Standalone" },
		{ "LevelStreaming.Name", "ELevelInstanceRuntimeBehavior::LevelStreaming" },
		{ "LevelStreaming.ToolTip", "Use level streaming to load level instance actors" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ELevelInstanceRuntimeBehavior::None" },
		{ "Partitioned.Comment", "// Move level instance actors to the main world partition\n" },
		{ "Partitioned.DisplayName", "Embedded" },
		{ "Partitioned.Name", "ELevelInstanceRuntimeBehavior::Partitioned" },
		{ "Partitioned.ToolTip", "Move level instance actors to the main world partition" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELevelInstanceRuntimeBehavior::None", (int64)ELevelInstanceRuntimeBehavior::None },
		{ "ELevelInstanceRuntimeBehavior::Embedded_Deprecated", (int64)ELevelInstanceRuntimeBehavior::Embedded_Deprecated },
		{ "ELevelInstanceRuntimeBehavior::Partitioned", (int64)ELevelInstanceRuntimeBehavior::Partitioned },
		{ "ELevelInstanceRuntimeBehavior::LevelStreaming", (int64)ELevelInstanceRuntimeBehavior::LevelStreaming },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELevelInstanceRuntimeBehavior",
	"ELevelInstanceRuntimeBehavior",
	Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior()
{
	if (!Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.InnerSingleton, Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.InnerSingleton;
}
// End Enum ELevelInstanceRuntimeBehavior

// Begin Enum ELevelInstanceCreationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelInstanceCreationType;
static UEnum* ELevelInstanceCreationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELevelInstanceCreationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELevelInstanceCreationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceCreationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELevelInstanceCreationType"));
	}
	return Z_Registration_Info_UEnum_ELevelInstanceCreationType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceCreationType>()
{
	return ELevelInstanceCreationType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LevelInstance.Name", "ELevelInstanceCreationType::LevelInstance" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
		{ "PackedLevelActor.Name", "ELevelInstanceCreationType::PackedLevelActor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELevelInstanceCreationType::LevelInstance", (int64)ELevelInstanceCreationType::LevelInstance },
		{ "ELevelInstanceCreationType::PackedLevelActor", (int64)ELevelInstanceCreationType::PackedLevelActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELevelInstanceCreationType",
	"ELevelInstanceCreationType",
	Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELevelInstanceCreationType()
{
	if (!Z_Registration_Info_UEnum_ELevelInstanceCreationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelInstanceCreationType.InnerSingleton, Z_Construct_UEnum_Engine_ELevelInstanceCreationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELevelInstanceCreationType.InnerSingleton;
}
// End Enum ELevelInstanceCreationType

// Begin Enum ELevelInstancePivotType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelInstancePivotType;
static UEnum* ELevelInstancePivotType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELevelInstancePivotType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELevelInstancePivotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstancePivotType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELevelInstancePivotType"));
	}
	return Z_Registration_Info_UEnum_ELevelInstancePivotType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELevelInstancePivotType>()
{
	return ELevelInstancePivotType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Actor.Name", "ELevelInstancePivotType::Actor" },
		{ "Center.Name", "ELevelInstancePivotType::Center" },
		{ "CenterMinZ.Name", "ELevelInstancePivotType::CenterMinZ" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
		{ "WorldOrigin.Name", "ELevelInstancePivotType::WorldOrigin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELevelInstancePivotType::CenterMinZ", (int64)ELevelInstancePivotType::CenterMinZ },
		{ "ELevelInstancePivotType::Center", (int64)ELevelInstancePivotType::Center },
		{ "ELevelInstancePivotType::Actor", (int64)ELevelInstancePivotType::Actor },
		{ "ELevelInstancePivotType::WorldOrigin", (int64)ELevelInstancePivotType::WorldOrigin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELevelInstancePivotType",
	"ELevelInstancePivotType",
	Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELevelInstancePivotType()
{
	if (!Z_Registration_Info_UEnum_ELevelInstancePivotType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelInstancePivotType.InnerSingleton, Z_Construct_UEnum_Engine_ELevelInstancePivotType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELevelInstancePivotType.InnerSingleton;
}
// End Enum ELevelInstancePivotType

// Begin ScriptStruct FNewLevelInstanceParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NewLevelInstanceParams;
class UScriptStruct* FNewLevelInstanceParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewLevelInstanceParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NewLevelInstanceParams"));
	}
	return Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNewLevelInstanceParams>()
{
	return FNewLevelInstanceParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "!bHideCreationType" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotType_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotActor_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowDialog_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelPackageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPromptForSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStreaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExternalActors_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "!bForceExternalActors" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceExternalActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideCreationType_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PivotType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PivotActor;
	static void NewProp_bAlwaysShowDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowDialog;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateWorld;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelPackageName;
	static void NewProp_bPromptForSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptForSave;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LevelInstanceClass;
	static void NewProp_bEnableStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStreaming;
	static void NewProp_bExternalActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExternalActors;
	static void NewProp_bForceExternalActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceExternalActors;
	static void NewProp_bHideCreationType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCreationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewLevelInstanceParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewLevelInstanceParams, Type), Z_Construct_UEnum_Engine_ELevelInstanceCreationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1301537258
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType = { "PivotType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewLevelInstanceParams, PivotType), Z_Construct_UEnum_Engine_ELevelInstancePivotType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotType_MetaData), NewProp_PivotType_MetaData) }; // 3115312188
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotActor = { "PivotActor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewLevelInstanceParams, PivotActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotActor_MetaData), NewProp_PivotActor_MetaData) };
void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog_SetBit(void* Obj)
{
	((FNewLevelInstanceParams*)Obj)->bAlwaysShowDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog = { "bAlwaysShowDialog", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysShowDialog_MetaData), NewProp_bAlwaysShowDialog_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_TemplateWorld = { "TemplateWorld", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewLevelInstanceParams, TemplateWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateWorld_MetaData), NewProp_TemplateWorld_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelPackageName = { "LevelPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewLevelInstanceParams, LevelPackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelPackageName_MetaData), NewProp_LevelPackageName_MetaData) };
void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave_SetBit(void* Obj)
{
	((FNewLevelInstanceParams*)Obj)->bPromptForSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave = { "bPromptForSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPromptForSave_MetaData), NewProp_bPromptForSave_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelInstanceClass = { "LevelInstanceClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewLevelInstanceParams, LevelInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceClass_MetaData), NewProp_LevelInstanceClass_MetaData) };
void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bEnableStreaming_SetBit(void* Obj)
{
	((FNewLevelInstanceParams*)Obj)->bEnableStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bEnableStreaming = { "bEnableStreaming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bEnableStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStreaming_MetaData), NewProp_bEnableStreaming_MetaData) };
void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors_SetBit(void* Obj)
{
	((FNewLevelInstanceParams*)Obj)->bExternalActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors = { "bExternalActors", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExternalActors_MetaData), NewProp_bExternalActors_MetaData) };
void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors_SetBit(void* Obj)
{
	((FNewLevelInstanceParams*)Obj)->bForceExternalActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors = { "bForceExternalActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceExternalActors_MetaData), NewProp_bForceExternalActors_MetaData) };
void Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType_SetBit(void* Obj)
{
	((FNewLevelInstanceParams*)Obj)->bHideCreationType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType = { "bHideCreationType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNewLevelInstanceParams), &Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideCreationType_MetaData), NewProp_bHideCreationType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_PivotActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bAlwaysShowDialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_TemplateWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelPackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bPromptForSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_LevelInstanceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bEnableStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bExternalActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bForceExternalActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewProp_bHideCreationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NewLevelInstanceParams",
	Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::PropPointers),
	sizeof(FNewLevelInstanceParams),
	alignof(FNewLevelInstanceParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNewLevelInstanceParams()
{
	if (!Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.InnerSingleton, Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NewLevelInstanceParams.InnerSingleton;
}
// End ScriptStruct FNewLevelInstanceParams

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELevelInstanceRuntimeBehavior_StaticEnum, TEXT("ELevelInstanceRuntimeBehavior"), &Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1511861942U) },
		{ ELevelInstanceCreationType_StaticEnum, TEXT("ELevelInstanceCreationType"), &Z_Registration_Info_UEnum_ELevelInstanceCreationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1301537258U) },
		{ ELevelInstancePivotType_StaticEnum, TEXT("ELevelInstancePivotType"), &Z_Registration_Info_UEnum_ELevelInstancePivotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3115312188U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNewLevelInstanceParams::StaticStruct, Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics::NewStructOps, TEXT("NewLevelInstanceParams"), &Z_Registration_Info_UScriptStruct_NewLevelInstanceParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewLevelInstanceParams), 3488571471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_1841454958(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
