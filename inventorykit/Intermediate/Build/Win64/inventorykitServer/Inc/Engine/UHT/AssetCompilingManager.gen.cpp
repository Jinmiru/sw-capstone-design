// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/AssetCompilingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetCompilingManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetCompileData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAssetCompileData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetCompileData;
class UScriptStruct* FAssetCompileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetCompileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetCompileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetCompileData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AssetCompileData"));
	}
	return Z_Registration_Info_UScriptStruct_AssetCompileData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetCompileData>()
{
	return FAssetCompileData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetCompileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssetCompilingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "AssetCompileData" },
		{ "Comment", "/** Object being compiled */" },
		{ "ModuleRelativePath", "Public/AssetCompilingManager.h" },
		{ "ToolTip", "Object being compiled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetCompileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAssetCompileData_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetCompileData, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetCompileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetCompileData_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetCompileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetCompileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AssetCompileData",
	Z_Construct_UScriptStruct_FAssetCompileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetCompileData_Statics::PropPointers),
	sizeof(FAssetCompileData),
	alignof(FAssetCompileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetCompileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetCompileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetCompileData()
{
	if (!Z_Registration_Info_UScriptStruct_AssetCompileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetCompileData.InnerSingleton, Z_Construct_UScriptStruct_FAssetCompileData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetCompileData.InnerSingleton;
}
// End ScriptStruct FAssetCompileData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetCompilingManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetCompileData::StaticStruct, Z_Construct_UScriptStruct_FAssetCompileData_Statics::NewStructOps, TEXT("AssetCompileData"), &Z_Registration_Info_UScriptStruct_AssetCompileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetCompileData), 1056564519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetCompilingManager_h_1279871392(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetCompilingManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetCompilingManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
