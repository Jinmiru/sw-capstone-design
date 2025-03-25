// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/UnrealEdMessages/Classes/AssetEditorMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetEditorMessages() {}

// Begin Cross Module References
UNREALEDMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset();
UPackage* Z_Construct_UPackage__Script_UnrealEdMessages();
// End Cross Module References

// Begin ScriptStruct FAssetEditorRequestOpenAsset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset;
class UScriptStruct* FAssetEditorRequestOpenAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset, (UObject*)Z_Construct_UPackage__Script_UnrealEdMessages(), TEXT("AssetEditorRequestOpenAsset"));
	}
	return Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.OuterSingleton;
}
template<> UNREALEDMESSAGES_API UScriptStruct* StaticStruct<FAssetEditorRequestOpenAsset>()
{
	return FAssetEditorRequestOpenAsset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for opening an asset in the asset browser.\n */" },
		{ "ModuleRelativePath", "Classes/AssetEditorMessages.h" },
		{ "ToolTip", "Implements a message for opening an asset in the asset browser." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**\n\x09 * Holds the name of the asset to open.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AssetEditorMessages.h" },
		{ "ToolTip", "Holds the name of the asset to open." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetEditorRequestOpenAsset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetEditorRequestOpenAsset, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealEdMessages,
	nullptr,
	&NewStructOps,
	"AssetEditorRequestOpenAsset",
	Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::PropPointers),
	sizeof(FAssetEditorRequestOpenAsset),
	alignof(FAssetEditorRequestOpenAsset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset()
{
	if (!Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.InnerSingleton, Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.InnerSingleton;
}
// End ScriptStruct FAssetEditorRequestOpenAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetEditorRequestOpenAsset::StaticStruct, Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewStructOps, TEXT("AssetEditorRequestOpenAsset"), &Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetEditorRequestOpenAsset), 3363878049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h_2929843883(TEXT("/Script/UnrealEdMessages"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
