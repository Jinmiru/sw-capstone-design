// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/AssetManagerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManagerTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPrimaryAssetCookRule();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerSearchRules();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EPrimaryAssetCookRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPrimaryAssetCookRule;
static UEnum* EPrimaryAssetCookRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPrimaryAssetCookRule"));
	}
	return Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPrimaryAssetCookRule>()
{
	return EPrimaryAssetCookRule_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysCook.Comment", "/** Asset will always be cooked, in both production and development. */" },
		{ "AlwaysCook.Name", "EPrimaryAssetCookRule::AlwaysCook" },
		{ "AlwaysCook.ToolTip", "Asset will always be cooked, in both production and development." },
		{ "Comment", "/** Rule about when to cook/ship a primary asset */" },
		{ "DevelopmentAlwaysCook.Comment", "/** Legacy name equivalent to DevelopmentAlwaysProductionNeverCook */" },
		{ "DevelopmentAlwaysCook.Name", "EPrimaryAssetCookRule::DevelopmentAlwaysCook" },
		{ "DevelopmentAlwaysCook.ToolTip", "Legacy name equivalent to DevelopmentAlwaysProductionNeverCook" },
		{ "DevelopmentAlwaysProductionNeverCook.Comment", "/** Asset will always be cooked in development, but should never be cooked in a production build. */" },
		{ "DevelopmentAlwaysProductionNeverCook.Name", "EPrimaryAssetCookRule::DevelopmentAlwaysProductionNeverCook" },
		{ "DevelopmentAlwaysProductionNeverCook.ToolTip", "Asset will always be cooked in development, but should never be cooked in a production build." },
		{ "DevelopmentAlwaysProductionUnknownCook.Comment", "/**\n\x09 * Asset will always be cooked in development; nothing is known about whether it should cook in Production. It will cook\n\x09 * in production if something else depends on it.\n\x09 */" },
		{ "DevelopmentAlwaysProductionUnknownCook.Name", "EPrimaryAssetCookRule::DevelopmentAlwaysProductionUnknownCook" },
		{ "DevelopmentAlwaysProductionUnknownCook.ToolTip", "Asset will always be cooked in development; nothing is known about whether it should cook in Production. It will cook\nin production if something else depends on it." },
		{ "DevelopmentCook.Comment", "/** Legacy name equivalent to Production Never Cook */" },
		{ "DevelopmentCook.Name", "EPrimaryAssetCookRule::DevelopmentCook" },
		{ "DevelopmentCook.ToolTip", "Legacy name equivalent to Production Never Cook" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "NeverCook.Comment", "/** Asset should never be cooked/shipped in any situation. An error will be generated if something depends on it. */" },
		{ "NeverCook.Name", "EPrimaryAssetCookRule::NeverCook" },
		{ "NeverCook.ToolTip", "Asset should never be cooked/shipped in any situation. An error will be generated if something depends on it." },
		{ "ProductionNeverCook.Comment", "/** Asset will be cooked in development if something else depends on it, but will never be cooked in a production build. */" },
		{ "ProductionNeverCook.Name", "EPrimaryAssetCookRule::ProductionNeverCook" },
		{ "ProductionNeverCook.ToolTip", "Asset will be cooked in development if something else depends on it, but will never be cooked in a production build." },
		{ "ToolTip", "Rule about when to cook/ship a primary asset" },
		{ "Unknown.Comment", "/** Nothing is known about this asset specifically. It will cook in both Development and Production if something else depends on it. */" },
		{ "Unknown.Name", "EPrimaryAssetCookRule::Unknown" },
		{ "Unknown.ToolTip", "Nothing is known about this asset specifically. It will cook in both Development and Production if something else depends on it." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPrimaryAssetCookRule::Unknown", (int64)EPrimaryAssetCookRule::Unknown },
		{ "EPrimaryAssetCookRule::NeverCook", (int64)EPrimaryAssetCookRule::NeverCook },
		{ "EPrimaryAssetCookRule::ProductionNeverCook", (int64)EPrimaryAssetCookRule::ProductionNeverCook },
		{ "EPrimaryAssetCookRule::DevelopmentCook", (int64)EPrimaryAssetCookRule::DevelopmentCook },
		{ "EPrimaryAssetCookRule::DevelopmentAlwaysProductionNeverCook", (int64)EPrimaryAssetCookRule::DevelopmentAlwaysProductionNeverCook },
		{ "EPrimaryAssetCookRule::DevelopmentAlwaysCook", (int64)EPrimaryAssetCookRule::DevelopmentAlwaysCook },
		{ "EPrimaryAssetCookRule::DevelopmentAlwaysProductionUnknownCook", (int64)EPrimaryAssetCookRule::DevelopmentAlwaysProductionUnknownCook },
		{ "EPrimaryAssetCookRule::AlwaysCook", (int64)EPrimaryAssetCookRule::AlwaysCook },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPrimaryAssetCookRule",
	"EPrimaryAssetCookRule",
	Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPrimaryAssetCookRule()
{
	if (!Z_Registration_Info_UEnum_EPrimaryAssetCookRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPrimaryAssetCookRule.InnerSingleton, Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPrimaryAssetCookRule.InnerSingleton;
}
// End Enum EPrimaryAssetCookRule

// Begin ScriptStruct FPrimaryAssetRules
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrimaryAssetRules;
class UScriptStruct* FPrimaryAssetRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrimaryAssetRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrimaryAssetRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetRules, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetRules"));
	}
	return Z_Registration_Info_UScriptStruct_PrimaryAssetRules.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimaryAssetRules>()
{
	return FPrimaryAssetRules::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure defining rules for what to do with assets, this is defined per type and can be overridden per asset */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Structure defining rules for what to do with assets, this is defined per type and can be overridden per asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Primary Assets with a higher priority will take precedence over lower priorities when assigning management for referenced assets. If priorities match, both will manage the same Secondary Asset. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Primary Assets with a higher priority will take precedence over lower priorities when assigning management for referenced assets. If priorities match, both will manage the same Secondary Asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkId_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Assets will be put into this Chunk ID specifically, if set to something other than -1. The default Chunk is Chunk 0. */" },
		{ "DisplayName", "Chunk ID" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Assets will be put into this Chunk ID specifically, if set to something other than -1. The default Chunk is Chunk 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRecursively_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** If true, this rule will apply to all referenced Secondary Assets recursively, as long as they are not managed by a higher-priority Primary Asset. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "If true, this rule will apply to all referenced Secondary Assets recursively, as long as they are not managed by a higher-priority Primary Asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookRule_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Rule describing when this asset should be cooked. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Rule describing when this asset should be cooked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkId;
	static void NewProp_bApplyRecursively_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRecursively;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CookRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CookRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetRules, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId = { "ChunkId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetRules, ChunkId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkId_MetaData), NewProp_ChunkId_MetaData) };
void Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_SetBit(void* Obj)
{
	((FPrimaryAssetRules*)Obj)->bApplyRecursively = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively = { "bApplyRecursively", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPrimaryAssetRules), &Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyRecursively_MetaData), NewProp_bApplyRecursively_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule = { "CookRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetRules, CookRule), Z_Construct_UEnum_Engine_EPrimaryAssetCookRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookRule_MetaData), NewProp_CookRule_MetaData) }; // 510511827
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PrimaryAssetRules",
	Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::PropPointers),
	sizeof(FPrimaryAssetRules),
	alignof(FPrimaryAssetRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules()
{
	if (!Z_Registration_Info_UScriptStruct_PrimaryAssetRules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrimaryAssetRules.InnerSingleton, Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PrimaryAssetRules.InnerSingleton;
}
// End ScriptStruct FPrimaryAssetRules

// Begin ScriptStruct FPrimaryAssetTypeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo;
class UScriptStruct* FPrimaryAssetTypeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetTypeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimaryAssetTypeInfo>()
{
	return FPrimaryAssetTypeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure with publicly exposed information about an asset type. These can be loaded out of a config file or constructed at runtime */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Structure with publicly exposed information about an asset type. These can be loaded out of a config file or constructed at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetType_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** The logical name for this type of Primary Asset */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "The logical name for this type of Primary Asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "AssetType" },
		{ "Comment", "/** Base Class of all assets of this type */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Base Class of all assets of this type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClassLoaded_MetaData[] = {
		{ "Comment", "/** Runtime cached copy of asset base class, this will only be correct if FillRuntimeData has been called */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Runtime cached copy of asset base class, this will only be correct if FillRuntimeData has been called" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintClasses_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** True if the assets loaded are blueprints classes, false if they are normal UObjects */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if the assets loaded are blueprints classes, false if they are normal UObjects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/**\n\x09 * If true this type will not cause anything to be cooked; the AssetManager will use instances of this type to\n\x09 * define chunk assignments and NeverCook rules, but will ignore AlwaysCook rules. Assets labeled by instances\n\x09 * of this type will need to be reference by another PrimaryAsset, or by something outside the AssetManager,\n\x09 * to be cooked.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "If true this type will not cause anything to be cooked; the AssetManager will use instances of this type to\ndefine chunk assignments and NeverCook rules, but will ignore AlwaysCook rules. Assets labeled by instances\nof this type will need to be reference by another PrimaryAsset, or by something outside the AssetManager,\nto be cooked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Directories_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** Directories to search for this asset type */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories to search for this asset type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificAssets_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** Individual assets to scan */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Individual assets to scan" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Default management rules for this type, individual assets can be overridden */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Default management rules for this type, individual assets can be overridden" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetScanPaths_MetaData[] = {
		{ "Comment", "/** Combination of directories and individual assets to search for this asset type. Will have the Directories and Assets added to it but may include virtual paths */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Combination of directories and individual assets to search for this asset type. Will have the Directories and Assets added to it but may include virtual paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicAsset_MetaData[] = {
		{ "Comment", "/** True if this is an asset created at runtime that has no on disk representation. Cannot be set in config */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this is an asset created at runtime that has no on disk representation. Cannot be set in config" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfAssets_MetaData[] = {
		{ "Comment", "/** Number of tracked assets of that type */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Number of tracked assets of that type" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PrimaryAssetType;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AssetBaseClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetBaseClassLoaded;
	static void NewProp_bHasBlueprintClasses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintClasses;
	static void NewProp_bIsEditorOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Directories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Directories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecificAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecificAssets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rules;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetScanPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetScanPaths;
	static void NewProp_bIsDynamicAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetTypeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType = { "PrimaryAssetType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, PrimaryAssetType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAssetType_MetaData), NewProp_PrimaryAssetType_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass = { "AssetBaseClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetBaseClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetBaseClass_MetaData), NewProp_AssetBaseClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded = { "AssetBaseClassLoaded", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetBaseClassLoaded), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetBaseClassLoaded_MetaData), NewProp_AssetBaseClassLoaded_MetaData) };
void Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_SetBit(void* Obj)
{
	((FPrimaryAssetTypeInfo*)Obj)->bHasBlueprintClasses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses = { "bHasBlueprintClasses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPrimaryAssetTypeInfo), &Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBlueprintClasses_MetaData), NewProp_bHasBlueprintClasses_MetaData) };
void Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_SetBit(void* Obj)
{
	((FPrimaryAssetTypeInfo*)Obj)->bIsEditorOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly = { "bIsEditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPrimaryAssetTypeInfo), &Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEditorOnly_MetaData), NewProp_bIsEditorOnly_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_Inner = { "Directories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories = { "Directories", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, Directories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directories_MetaData), NewProp_Directories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_Inner = { "SpecificAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets = { "SpecificAssets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, SpecificAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificAssets_MetaData), NewProp_SpecificAssets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rules_MetaData), NewProp_Rules_MetaData) }; // 2861211718
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_Inner = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetScanPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetScanPaths_MetaData), NewProp_AssetScanPaths_MetaData) };
void Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_SetBit(void* Obj)
{
	((FPrimaryAssetTypeInfo*)Obj)->bIsDynamicAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset = { "bIsDynamicAsset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPrimaryAssetTypeInfo), &Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDynamicAsset_MetaData), NewProp_bIsDynamicAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets = { "NumberOfAssets", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, NumberOfAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfAssets_MetaData), NewProp_NumberOfAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PrimaryAssetTypeInfo",
	Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::PropPointers),
	sizeof(FPrimaryAssetTypeInfo),
	alignof(FPrimaryAssetTypeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.InnerSingleton, Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.InnerSingleton;
}
// End ScriptStruct FPrimaryAssetTypeInfo

// Begin ScriptStruct FAssetManagerSearchRules
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetManagerSearchRules;
class UScriptStruct* FAssetManagerSearchRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetManagerSearchRules, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AssetManagerSearchRules"));
	}
	return Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetManagerSearchRules>()
{
	return FAssetManagerSearchRules::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Rules for how to scan the asset registry for assets matching path and type descriptions */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Rules for how to scan the asset registry for assets matching path and type descriptions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetScanPaths_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** List of top-level directories and specific assets to search, must be paths starting with /, directories should not have a trailing / */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "List of top-level directories and specific assets to search, must be paths starting with /, directories should not have a trailing /" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludePatterns_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optional list of include wildcard patterns using * that will get matched against full package path. If there are any at least one of these must match */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Optional list of include wildcard patterns using * that will get matched against full package path. If there are any at least one of these must match" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludePatterns_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optional list of exclude wildcard patterns that can use *, if any of these match it will be excluded */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Optional list of exclude wildcard patterns that can use *, if any of these match it will be excluded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClass_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Assets must inherit from this class, for blueprints this should be the instance base class */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Assets must inherit from this class, for blueprints this should be the instance base class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintClasses_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if scanning for blueprints, false for all other assets */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if scanning for blueprints, false for all other assets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceSynchronousScan_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if this should force a synchronous scan of the disk even if an async scan is in progress */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this should force a synchronous scan of the disk even if an async scan is in progress" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipVirtualPathExpansion_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if AssetScanPaths are real paths that do not need expansion */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if AssetScanPaths are real paths that do not need expansion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipManagerIncludeCheck_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if this test should skip the ShouldIncludeInAssetSearch function on AssetManager */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this test should skip the ShouldIncludeInAssetSearch function on AssetManager" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetScanPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetScanPaths;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IncludePatterns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludePatterns;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludePatterns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludePatterns;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetBaseClass;
	static void NewProp_bHasBlueprintClasses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintClasses;
	static void NewProp_bForceSynchronousScan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSynchronousScan;
	static void NewProp_bSkipVirtualPathExpansion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipVirtualPathExpansion;
	static void NewProp_bSkipManagerIncludeCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipManagerIncludeCheck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetManagerSearchRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_Inner = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetManagerSearchRules, AssetScanPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetScanPaths_MetaData), NewProp_AssetScanPaths_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_Inner = { "IncludePatterns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns = { "IncludePatterns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetManagerSearchRules, IncludePatterns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludePatterns_MetaData), NewProp_IncludePatterns_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_Inner = { "ExcludePatterns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns = { "ExcludePatterns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetManagerSearchRules, ExcludePatterns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludePatterns_MetaData), NewProp_ExcludePatterns_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass = { "AssetBaseClass", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetManagerSearchRules, AssetBaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetBaseClass_MetaData), NewProp_AssetBaseClass_MetaData) };
void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_SetBit(void* Obj)
{
	((FAssetManagerSearchRules*)Obj)->bHasBlueprintClasses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses = { "bHasBlueprintClasses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBlueprintClasses_MetaData), NewProp_bHasBlueprintClasses_MetaData) };
void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_SetBit(void* Obj)
{
	((FAssetManagerSearchRules*)Obj)->bForceSynchronousScan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan = { "bForceSynchronousScan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceSynchronousScan_MetaData), NewProp_bForceSynchronousScan_MetaData) };
void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_SetBit(void* Obj)
{
	((FAssetManagerSearchRules*)Obj)->bSkipVirtualPathExpansion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion = { "bSkipVirtualPathExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipVirtualPathExpansion_MetaData), NewProp_bSkipVirtualPathExpansion_MetaData) };
void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_SetBit(void* Obj)
{
	((FAssetManagerSearchRules*)Obj)->bSkipManagerIncludeCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck = { "bSkipManagerIncludeCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipManagerIncludeCheck_MetaData), NewProp_bSkipManagerIncludeCheck_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AssetManagerSearchRules",
	Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::PropPointers),
	sizeof(FAssetManagerSearchRules),
	alignof(FAssetManagerSearchRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerSearchRules()
{
	if (!Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.InnerSingleton, Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.InnerSingleton;
}
// End ScriptStruct FAssetManagerSearchRules

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPrimaryAssetCookRule_StaticEnum, TEXT("EPrimaryAssetCookRule"), &Z_Registration_Info_UEnum_EPrimaryAssetCookRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 510511827U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPrimaryAssetRules::StaticStruct, Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewStructOps, TEXT("PrimaryAssetRules"), &Z_Registration_Info_UScriptStruct_PrimaryAssetRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrimaryAssetRules), 2861211718U) },
		{ FPrimaryAssetTypeInfo::StaticStruct, Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewStructOps, TEXT("PrimaryAssetTypeInfo"), &Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrimaryAssetTypeInfo), 3859948577U) },
		{ FAssetManagerSearchRules::StaticStruct, Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewStructOps, TEXT("AssetManagerSearchRules"), &Z_Registration_Info_UScriptStruct_AssetManagerSearchRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetManagerSearchRules), 3197133915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_3099759566(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
