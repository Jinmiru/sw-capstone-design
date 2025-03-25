// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/ClothTetherData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothTetherData() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothTetherData();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References

// Begin ScriptStruct FClothTetherData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothTetherData;
class UScriptStruct* FClothTetherData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothTetherData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothTetherData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothTetherData, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothTetherData"));
	}
	return Z_Registration_Info_UScriptStruct_ClothTetherData.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothTetherData>()
{
	return FClothTetherData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothTetherData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Long range attachment tether pathfinding based on Dijkstra's algorithm.\n * For more information about the long range attachment, see:\n * https://matthias-research.github.io/pages/publications/sca2012cloth.pdf\n */" },
		{ "ModuleRelativePath", "Public/ClothTetherData.h" },
		{ "ToolTip", "Long range attachment tether pathfinding based on Dijkstra's algorithm.\nFor more information about the long range attachment, see:\nhttps://matthias-research.github.io/pages/publications/sca2012cloth.pdf" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothTetherData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothTetherData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	nullptr,
	&NewStructOps,
	"ClothTetherData",
	nullptr,
	0,
	sizeof(FClothTetherData),
	alignof(FClothTetherData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothTetherData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothTetherData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothTetherData()
{
	if (!Z_Registration_Info_UScriptStruct_ClothTetherData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothTetherData.InnerSingleton, Z_Construct_UScriptStruct_FClothTetherData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothTetherData.InnerSingleton;
}
// End ScriptStruct FClothTetherData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClothTetherData::StaticStruct, Z_Construct_UScriptStruct_FClothTetherData_Statics::NewStructOps, TEXT("ClothTetherData"), &Z_Registration_Info_UScriptStruct_ClothTetherData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothTetherData), 2860113611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h_2209027124(TEXT("/Script/ClothingSystemRuntimeCommon"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
