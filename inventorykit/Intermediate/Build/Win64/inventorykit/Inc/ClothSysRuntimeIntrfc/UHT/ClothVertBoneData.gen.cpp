// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothVertBoneData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothVertBoneData() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References

// Begin ScriptStruct FClothVertBoneData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothVertBoneData;
class UScriptStruct* FClothVertBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothVertBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothVertBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothVertBoneData, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothVertBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_ClothVertBoneData.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothVertBoneData>()
{
	return FClothVertBoneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothVertBoneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Bone data for a vertex\n" },
		{ "ModuleRelativePath", "Public/ClothVertBoneData.h" },
		{ "ToolTip", "Bone data for a vertex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInfluences_MetaData[] = {
		{ "Comment", "// Number of influences for this vertex.\n" },
		{ "ModuleRelativePath", "Public/ClothVertBoneData.h" },
		{ "ToolTip", "Number of influences for this vertex." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndices_MetaData[] = {
		{ "Comment", "// Up to MAX_TOTAL_INFLUENCES bone indices that this vert is weighted to\n" },
		{ "ModuleRelativePath", "Public/ClothVertBoneData.h" },
		{ "ToolTip", "Up to MAX_TOTAL_INFLUENCES bone indices that this vert is weighted to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeights_MetaData[] = {
		{ "Comment", "// The weights for each entry in BoneIndices\n" },
		{ "ModuleRelativePath", "Public/ClothVertBoneData.h" },
		{ "ToolTip", "The weights for each entry in BoneIndices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInfluences;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_BoneIndices;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneWeights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothVertBoneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences = { "NumInfluences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothVertBoneData, NumInfluences), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInfluences_MetaData), NewProp_NumInfluences_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices = { "BoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(BoneIndices, FClothVertBoneData), STRUCT_OFFSET(FClothVertBoneData, BoneIndices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIndices_MetaData), NewProp_BoneIndices_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights = { "BoneWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(BoneWeights, FClothVertBoneData), STRUCT_OFFSET(FClothVertBoneData, BoneWeights), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneWeights_MetaData), NewProp_BoneWeights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothVertBoneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_NumInfluences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewProp_BoneWeights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothVertBoneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	nullptr,
	&NewStructOps,
	"ClothVertBoneData",
	Z_Construct_UScriptStruct_FClothVertBoneData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::PropPointers),
	sizeof(FClothVertBoneData),
	alignof(FClothVertBoneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothVertBoneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothVertBoneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData()
{
	if (!Z_Registration_Info_UScriptStruct_ClothVertBoneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothVertBoneData.InnerSingleton, Z_Construct_UScriptStruct_FClothVertBoneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothVertBoneData.InnerSingleton;
}
// End ScriptStruct FClothVertBoneData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothVertBoneData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClothVertBoneData::StaticStruct, Z_Construct_UScriptStruct_FClothVertBoneData_Statics::NewStructOps, TEXT("ClothVertBoneData"), &Z_Registration_Info_UScriptStruct_ClothVertBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothVertBoneData), 3731446729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothVertBoneData_h_4074322353(TEXT("/Script/ClothingSystemRuntimeInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothVertBoneData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothVertBoneData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
