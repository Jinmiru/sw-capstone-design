// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/AssetManagerSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManagerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManagerSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UAssetManagerSettings();
ENGINE_API UClass* Z_Construct_UClass_UAssetManagerSettings_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerRedirect();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAssetManagerRedirect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetManagerRedirect;
class UScriptStruct* FAssetManagerRedirect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetManagerRedirect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetManagerRedirect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetManagerRedirect, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AssetManagerRedirect"));
	}
	return Z_Registration_Info_UScriptStruct_AssetManagerRedirect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetManagerRedirect>()
{
	return FAssetManagerRedirect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple structure for redirecting an old asset name/path to a new one */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Simple structure for redirecting an old asset name/path to a new one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[] = {
		{ "Category", "AssetRedirect" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[] = {
		{ "Category", "AssetRedirect" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Old;
	static const UECodeGen_Private::FStrPropertyParams NewProp_New;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetManagerRedirect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetManagerRedirect, Old), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Old_MetaData), NewProp_Old_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetManagerRedirect, New), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_New_MetaData), NewProp_New_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AssetManagerRedirect",
	Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::PropPointers),
	sizeof(FAssetManagerRedirect),
	alignof(FAssetManagerRedirect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerRedirect()
{
	if (!Z_Registration_Info_UScriptStruct_AssetManagerRedirect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetManagerRedirect.InnerSingleton, Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetManagerRedirect.InnerSingleton;
}
// End ScriptStruct FAssetManagerRedirect

// Begin ScriptStruct FPrimaryAssetRulesOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrimaryAssetRulesOverride;
class UScriptStruct* FPrimaryAssetRulesOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrimaryAssetRulesOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrimaryAssetRulesOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetRulesOverride"));
	}
	return Z_Registration_Info_UScriptStruct_PrimaryAssetRulesOverride.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimaryAssetRulesOverride>()
{
	return FPrimaryAssetRulesOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple structure to allow overriding asset rules for a specific primary asset. This can be used to set chunks */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Simple structure to allow overriding asset rules for a specific primary asset. This can be used to set chunks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetId_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** Which primary asset to override the rules for */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Which primary asset to override the rules for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** What to overrides the rules with */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "What to overrides the rules with" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetRulesOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId = { "PrimaryAssetId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetRulesOverride, PrimaryAssetId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAssetId_MetaData), NewProp_PrimaryAssetId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetRulesOverride, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rules_MetaData), NewProp_Rules_MetaData) }; // 2861211718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PrimaryAssetRulesOverride",
	Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::PropPointers),
	sizeof(FPrimaryAssetRulesOverride),
	alignof(FPrimaryAssetRulesOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride()
{
	if (!Z_Registration_Info_UScriptStruct_PrimaryAssetRulesOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrimaryAssetRulesOverride.InnerSingleton, Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PrimaryAssetRulesOverride.InnerSingleton;
}
// End ScriptStruct FPrimaryAssetRulesOverride

// Begin ScriptStruct FPrimaryAssetRulesCustomOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrimaryAssetRulesCustomOverride;
class UScriptStruct* FPrimaryAssetRulesCustomOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrimaryAssetRulesCustomOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrimaryAssetRulesCustomOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetRulesCustomOverride"));
	}
	return Z_Registration_Info_UScriptStruct_PrimaryAssetRulesCustomOverride.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimaryAssetRulesCustomOverride>()
{
	return FPrimaryAssetRulesCustomOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Apply primary asset rules to groups of primary assets, using type + filter directory or string */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Apply primary asset rules to groups of primary assets, using type + filter directory or string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetType_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** Which type to apply rules for */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Which type to apply rules for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterDirectory_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** Will only apply to files in this directory */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Will only apply to files in this directory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterString_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** Game-specific string defining which assets to apply this to */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Game-specific string defining which assets to apply this to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** What to overrides the rules with */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "What to overrides the rules with" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetRulesCustomOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_PrimaryAssetType = { "PrimaryAssetType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetRulesCustomOverride, PrimaryAssetType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAssetType_MetaData), NewProp_PrimaryAssetType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterDirectory = { "FilterDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetRulesCustomOverride, FilterDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterDirectory_MetaData), NewProp_FilterDirectory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterString = { "FilterString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetRulesCustomOverride, FilterString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterString_MetaData), NewProp_FilterString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrimaryAssetRulesCustomOverride, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rules_MetaData), NewProp_Rules_MetaData) }; // 2861211718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_PrimaryAssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_Rules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PrimaryAssetRulesCustomOverride",
	Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::PropPointers),
	sizeof(FPrimaryAssetRulesCustomOverride),
	alignof(FPrimaryAssetRulesCustomOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride()
{
	if (!Z_Registration_Info_UScriptStruct_PrimaryAssetRulesCustomOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrimaryAssetRulesCustomOverride.InnerSingleton, Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PrimaryAssetRulesCustomOverride.InnerSingleton;
}
// End ScriptStruct FPrimaryAssetRulesCustomOverride

// Begin Class UAssetManagerSettings
void UAssetManagerSettings::StaticRegisterNativesUAssetManagerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetManagerSettings);
UClass* Z_Construct_UClass_UAssetManagerSettings_NoRegister()
{
	return UAssetManagerSettings::StaticClass();
}
struct Z_Construct_UClass_UAssetManagerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Asset Management framework, which can be used to discover, load, and audit game-specific asset types */" },
		{ "DisplayName", "Asset Manager" },
		{ "IncludePath", "Engine/AssetManagerSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Settings for the Asset Management framework, which can be used to discover, load, and audit game-specific asset types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetTypesToScan_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** List of asset types to scan at startup */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "TitleProperty", "PrimaryAssetType" },
		{ "ToolTip", "List of asset types to scan at startup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToExclude_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** List of directories to exclude from scanning for Primary Assets, useful to exclude test assets */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "List of directories to exclude from scanning for Primary Assets, useful to exclude test assets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetRules_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** List of specific asset rule overrides */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "List of specific asset rule overrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPrimaryAssetRules_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** List of game-specific asset rule overrides for types, this will not do anything by default */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "List of game-specific asset rule overrides for types, this will not do anything by default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyCookProductionAssets_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** If true, DevelopmentCook assets will error when they are cooked, you should enable this on production branches */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, DevelopmentCook assets will error when they are cooked, you should enable this on production branches" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldManagerDetermineTypeAndName_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/**\n\x09 * If true, the asset manager will determine the type and name for Primary Assets that do not implement GetPrimaryAssetId, by calling DeterminePrimaryAssetIdForObject and using the ini settings.\n\x09 * This works in both cooked and uncooked builds but is slower than directly implementing GetPrimaryAssetId on the native asset\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, the asset manager will determine the type and name for Primary Assets that do not implement GetPrimaryAssetId, by calling DeterminePrimaryAssetIdForObject and using the ini settings.\nThis works in both cooked and uncooked builds but is slower than directly implementing GetPrimaryAssetId on the native asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldGuessTypeAndNameInEditor_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/**\n\x09 * If true, PrimaryAsset Type/Name will be implied for assets in the editor even if bShouldManagerDetermineTypeAndName is false.\n\x09 * This guesses the correct id for content that hasn't been resaved after GetPrimaryAssetId was implemented\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, PrimaryAsset Type/Name will be implied for assets in the editor even if bShouldManagerDetermineTypeAndName is false.\nThis guesses the correct id for content that hasn't been resaved after GetPrimaryAssetId was implemented" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** If true, this will query the platform chunk install interface to request missing chunks for any requested primary asset loads */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, this will query the platform chunk install interface to request missing chunks for any requested primary asset loads" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldWarnAboutInvalidAssets_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** If true, the asset manager will warn when it is told to load or do something with assets it does not know about */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, the asset manager will warn when it is told to load or do something with assets it does not know about" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetIdRedirects_MetaData[] = {
		{ "Category", "Redirects" },
		{ "Comment", "/** Redirect from Type:Name to Type:NameNew */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Redirect from Type:Name to Type:NameNew" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetTypeRedirects_MetaData[] = {
		{ "Category", "Redirects" },
		{ "Comment", "/** Redirect from Type to TypeNew */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Redirect from Type to TypeNew" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathRedirects_MetaData[] = {
		{ "Category", "Redirects" },
		{ "Comment", "/** Redirect from /game/assetpath to /game/assetpathnew */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Redirect from /game/assetpath to /game/assetpathnew" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataTagsForAssetRegistry_MetaData[] = {
		{ "Category", "Asset Registry" },
		{ "Comment", "/** The metadata tags to be transferred to the Asset Registry. */" },
		{ "DisplayName", "Metadata Tags For Asset Registry" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "The metadata tags to be transferred to the Asset Registry." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetTypesToScan_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetTypesToScan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToExclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToExclude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetRules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPrimaryAssetRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomPrimaryAssetRules;
	static void NewProp_bOnlyCookProductionAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyCookProductionAssets;
	static void NewProp_bShouldManagerDetermineTypeAndName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldManagerDetermineTypeAndName;
	static void NewProp_bShouldGuessTypeAndNameInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldGuessTypeAndNameInEditor;
	static void NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAcquireMissingChunksOnLoad;
	static void NewProp_bShouldWarnAboutInvalidAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldWarnAboutInvalidAssets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetIdRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetIdRedirects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetTypeRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetTypeRedirects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPathRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPathRedirects;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MetaDataTagsForAssetRegistry_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_MetaDataTagsForAssetRegistry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetManagerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_Inner = { "PrimaryAssetTypesToScan", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo, METADATA_PARAMS(0, nullptr) }; // 3859948577
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan = { "PrimaryAssetTypesToScan", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetTypesToScan), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAssetTypesToScan_MetaData), NewProp_PrimaryAssetTypesToScan_MetaData) }; // 3859948577
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_Inner = { "DirectoriesToExclude", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude = { "DirectoriesToExclude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManagerSettings, DirectoriesToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectoriesToExclude_MetaData), NewProp_DirectoriesToExclude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_Inner = { "PrimaryAssetRules", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride, METADATA_PARAMS(0, nullptr) }; // 1855737704
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules = { "PrimaryAssetRules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAssetRules_MetaData), NewProp_PrimaryAssetRules_MetaData) }; // 1855737704
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules_Inner = { "CustomPrimaryAssetRules", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride, METADATA_PARAMS(0, nullptr) }; // 4224487174
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules = { "CustomPrimaryAssetRules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManagerSettings, CustomPrimaryAssetRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPrimaryAssetRules_MetaData), NewProp_CustomPrimaryAssetRules_MetaData) }; // 4224487174
void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_SetBit(void* Obj)
{
	((UAssetManagerSettings*)Obj)->bOnlyCookProductionAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets = { "bOnlyCookProductionAssets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyCookProductionAssets_MetaData), NewProp_bOnlyCookProductionAssets_MetaData) };
void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_SetBit(void* Obj)
{
	((UAssetManagerSettings*)Obj)->bShouldManagerDetermineTypeAndName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName = { "bShouldManagerDetermineTypeAndName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldManagerDetermineTypeAndName_MetaData), NewProp_bShouldManagerDetermineTypeAndName_MetaData) };
void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_SetBit(void* Obj)
{
	((UAssetManagerSettings*)Obj)->bShouldGuessTypeAndNameInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor = { "bShouldGuessTypeAndNameInEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldGuessTypeAndNameInEditor_MetaData), NewProp_bShouldGuessTypeAndNameInEditor_MetaData) };
void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj)
{
	((UAssetManagerSettings*)Obj)->bShouldAcquireMissingChunksOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad = { "bShouldAcquireMissingChunksOnLoad", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAcquireMissingChunksOnLoad_MetaData), NewProp_bShouldAcquireMissingChunksOnLoad_MetaData) };
void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldWarnAboutInvalidAssets_SetBit(void* Obj)
{
	((UAssetManagerSettings*)Obj)->bShouldWarnAboutInvalidAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldWarnAboutInvalidAssets = { "bShouldWarnAboutInvalidAssets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldWarnAboutInvalidAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldWarnAboutInvalidAssets_MetaData), NewProp_bShouldWarnAboutInvalidAssets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_Inner = { "PrimaryAssetIdRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetManagerRedirect, METADATA_PARAMS(0, nullptr) }; // 1495380575
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects = { "PrimaryAssetIdRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetIdRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAssetIdRedirects_MetaData), NewProp_PrimaryAssetIdRedirects_MetaData) }; // 1495380575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_Inner = { "PrimaryAssetTypeRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetManagerRedirect, METADATA_PARAMS(0, nullptr) }; // 1495380575
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects = { "PrimaryAssetTypeRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetTypeRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAssetTypeRedirects_MetaData), NewProp_PrimaryAssetTypeRedirects_MetaData) }; // 1495380575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_Inner = { "AssetPathRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetManagerRedirect, METADATA_PARAMS(0, nullptr) }; // 1495380575
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects = { "AssetPathRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManagerSettings, AssetPathRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPathRedirects_MetaData), NewProp_AssetPathRedirects_MetaData) }; // 1495380575
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_ElementProp = { "MetaDataTagsForAssetRegistry", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry = { "MetaDataTagsForAssetRegistry", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetManagerSettings, MetaDataTagsForAssetRegistry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaDataTagsForAssetRegistry_MetaData), NewProp_MetaDataTagsForAssetRegistry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetManagerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldWarnAboutInvalidAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetManagerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetManagerSettings_Statics::ClassParams = {
	&UAssetManagerSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetManagerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetManagerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetManagerSettings()
{
	if (!Z_Registration_Info_UClass_UAssetManagerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetManagerSettings.OuterSingleton, Z_Construct_UClass_UAssetManagerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetManagerSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAssetManagerSettings>()
{
	return UAssetManagerSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetManagerSettings);
UAssetManagerSettings::~UAssetManagerSettings() {}
// End Class UAssetManagerSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetManagerRedirect::StaticStruct, Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewStructOps, TEXT("AssetManagerRedirect"), &Z_Registration_Info_UScriptStruct_AssetManagerRedirect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetManagerRedirect), 1495380575U) },
		{ FPrimaryAssetRulesOverride::StaticStruct, Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewStructOps, TEXT("PrimaryAssetRulesOverride"), &Z_Registration_Info_UScriptStruct_PrimaryAssetRulesOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrimaryAssetRulesOverride), 1855737704U) },
		{ FPrimaryAssetRulesCustomOverride::StaticStruct, Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewStructOps, TEXT("PrimaryAssetRulesCustomOverride"), &Z_Registration_Info_UScriptStruct_PrimaryAssetRulesCustomOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrimaryAssetRulesCustomOverride), 4224487174U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetManagerSettings, UAssetManagerSettings::StaticClass, TEXT("UAssetManagerSettings"), &Z_Registration_Info_UClass_UAssetManagerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetManagerSettings), 3115943152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_2053971782(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
