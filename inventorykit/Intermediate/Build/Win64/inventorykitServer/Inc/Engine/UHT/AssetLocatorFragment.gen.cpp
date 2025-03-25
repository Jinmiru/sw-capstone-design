// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/UniversalObjectLocators/AssetLocatorFragment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetLocatorFragment() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetLocatorFragment();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAssetLocatorFragment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetLocatorFragment;
class UScriptStruct* FAssetLocatorFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetLocatorFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetLocatorFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetLocatorFragment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AssetLocatorFragment"));
	}
	return Z_Registration_Info_UScriptStruct_AssetLocatorFragment.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetLocatorFragment>()
{
	return FAssetLocatorFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * 32 Bytes (40 in-editor).\n */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/AssetLocatorFragment.h" },
		{ "ToolTip", "32 Bytes (40 in-editor)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/AssetLocatorFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetLocatorFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetLocatorFragment, Path), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AssetLocatorFragment",
	Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::PropPointers),
	sizeof(FAssetLocatorFragment),
	alignof(FAssetLocatorFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetLocatorFragment()
{
	if (!Z_Registration_Info_UScriptStruct_AssetLocatorFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetLocatorFragment.InnerSingleton, Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetLocatorFragment.InnerSingleton;
}
// End ScriptStruct FAssetLocatorFragment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AssetLocatorFragment_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetLocatorFragment::StaticStruct, Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::NewStructOps, TEXT("AssetLocatorFragment"), &Z_Registration_Info_UScriptStruct_AssetLocatorFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetLocatorFragment), 892680784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AssetLocatorFragment_h_3128095113(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AssetLocatorFragment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AssetLocatorFragment_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
