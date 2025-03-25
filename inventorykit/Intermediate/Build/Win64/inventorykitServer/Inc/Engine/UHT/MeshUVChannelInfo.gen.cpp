// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/MeshUVChannelInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshUVChannelInfo() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FMeshUVChannelInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshUVChannelInfo;
class UScriptStruct* FMeshUVChannelInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshUVChannelInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshUVChannelInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshUVChannelInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshUVChannelInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MeshUVChannelInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshUVChannelInfo>()
{
	return FMeshUVChannelInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The world size for each texcoord mapping. Used by the texture streaming. */" },
		{ "ModuleRelativePath", "Public/MeshUVChannelInfo.h" },
		{ "ToolTip", "The world size for each texcoord mapping. Used by the texture streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshUVChannelInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDensities_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/** Whether this values was set manually or is auto generated. */" },
		{ "ModuleRelativePath", "Public/MeshUVChannelInfo.h" },
		{ "ToolTip", "Whether this values was set manually or is auto generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUVDensities_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/**\n\x09 * The UV density in the mesh, before any transform scaling, in world unit per UV.\n\x09 * This value represents the length taken to cover a full UV unit.\n\x09 */" },
		{ "EditCondition", "bOverrideDensities" },
		{ "ModuleRelativePath", "Public/MeshUVChannelInfo.h" },
		{ "ToolTip", "The UV density in the mesh, before any transform scaling, in world unit per UV.\nThis value represents the length taken to cover a full UV unit." },
	};
#endif // WITH_METADATA
	static void NewProp_bInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
	static void NewProp_bOverrideDensities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDensities;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalUVDensities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshUVChannelInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized_SetBit(void* Obj)
{
	((FMeshUVChannelInfo*)Obj)->bInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshUVChannelInfo), &Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialized_MetaData), NewProp_bInitialized_MetaData) };
void Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities_SetBit(void* Obj)
{
	((FMeshUVChannelInfo*)Obj)->bOverrideDensities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities = { "bOverrideDensities", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshUVChannelInfo), &Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDensities_MetaData), NewProp_bOverrideDensities_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_LocalUVDensities = { "LocalUVDensities", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(LocalUVDensities, FMeshUVChannelInfo), STRUCT_OFFSET(FMeshUVChannelInfo, LocalUVDensities), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUVDensities_MetaData), NewProp_LocalUVDensities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_LocalUVDensities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MeshUVChannelInfo",
	Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::PropPointers),
	sizeof(FMeshUVChannelInfo),
	alignof(FMeshUVChannelInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MeshUVChannelInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshUVChannelInfo.InnerSingleton, Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshUVChannelInfo.InnerSingleton;
}
// End ScriptStruct FMeshUVChannelInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshUVChannelInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeshUVChannelInfo::StaticStruct, Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewStructOps, TEXT("MeshUVChannelInfo"), &Z_Registration_Info_UScriptStruct_MeshUVChannelInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshUVChannelInfo), 869722330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshUVChannelInfo_h_3835887397(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshUVChannelInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshUVChannelInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
