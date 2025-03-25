// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VT/VirtualTextureBuildSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureBuildSettings() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FVirtualTextureBuildSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings;
class UScriptStruct* FVirtualTextureBuildSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VirtualTextureBuildSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVirtualTextureBuildSettings>()
{
	return FVirtualTextureBuildSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Build settings used for virtual textures. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
		{ "ToolTip", "Build settings used for virtual textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileBorderSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileBorderSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualTextureBuildSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualTextureBuildSettings, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize = { "TileBorderSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualTextureBuildSettings, TileBorderSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileBorderSize_MetaData), NewProp_TileBorderSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"VirtualTextureBuildSettings",
	Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::PropPointers),
	sizeof(FVirtualTextureBuildSettings),
	alignof(FVirtualTextureBuildSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.InnerSingleton, Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.InnerSingleton;
}
// End ScriptStruct FVirtualTextureBuildSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuildSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVirtualTextureBuildSettings::StaticStruct, Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewStructOps, TEXT("VirtualTextureBuildSettings"), &Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualTextureBuildSettings), 3357586360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuildSettings_h_3453572095(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuildSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuildSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
