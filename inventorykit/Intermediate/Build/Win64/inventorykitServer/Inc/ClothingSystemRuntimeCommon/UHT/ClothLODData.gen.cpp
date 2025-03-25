// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/ClothLODData.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/ClothLODData_Legacy.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/ClothPhysicalMeshData.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/PointWeightMap.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothCollisionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothLODData() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothLODDataCommon();
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_Legacy();
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData();
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FPointWeightMap();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References

// Begin ScriptStruct FClothLODDataCommon
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothLODDataCommon;
class UScriptStruct* FClothLODDataCommon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothLODDataCommon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothLODDataCommon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothLODDataCommon, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothLODDataCommon"));
	}
	return Z_Registration_Info_UScriptStruct_ClothLODDataCommon.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothLODDataCommon>()
{
	return FClothLODDataCommon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothLODDataCommon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Common Cloth LOD representation for all clothing assets. */" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Common Cloth LOD representation for all clothing assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMeshData_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Raw phys mesh data\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Raw phys mesh data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[] = {
		{ "Category", "Collision" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is no longer supported. Use Physics Asset instead." },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMultipleInfluences_MetaData[] = {
		{ "Comment", "// Whether to use multiple triangles to interpolate from simulated cloth mesh to render mesh\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Whether to use multiple triangles to interpolate from simulated cloth mesh to render mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinningKernelRadius_MetaData[] = {
		{ "Comment", "// Radius of the weighting kernel used to interpolate from simulated cloth mesh to render mesh\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Radius of the weighting kernel used to interpolate from simulated cloth mesh to render mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothTransition_MetaData[] = {
		{ "Comment", "// Whether to enable smooth transition from skinned mesh to clothed mesh.\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Whether to enable smooth transition from skinned mesh to clothed mesh." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterMasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointWeightMaps_MetaData[] = {
		{ "Category", "Masks" },
		{ "Comment", "// Parameter masks defining the physics mesh masked data\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Parameter masks defining the physics mesh masked data" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalMeshData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
	static void NewProp_bUseMultipleInfluences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMultipleInfluences;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkinningKernelRadius;
	static void NewProp_bSmoothTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothTransition;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterMasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterMasks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointWeightMaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointWeightMaps;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothLODDataCommon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData = { "PhysicalMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothLODDataCommon, PhysicalMeshData), Z_Construct_UScriptStruct_FClothPhysicalMeshData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMeshData_MetaData), NewProp_PhysicalMeshData_MetaData) }; // 2845799348
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothLODDataCommon, CollisionData), Z_Construct_UScriptStruct_FClothCollisionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionData_MetaData), NewProp_CollisionData_MetaData) }; // 1292702270
void Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences_SetBit(void* Obj)
{
	((FClothLODDataCommon*)Obj)->bUseMultipleInfluences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences = { "bUseMultipleInfluences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClothLODDataCommon), &Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMultipleInfluences_MetaData), NewProp_bUseMultipleInfluences_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_SkinningKernelRadius = { "SkinningKernelRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothLODDataCommon, SkinningKernelRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinningKernelRadius_MetaData), NewProp_SkinningKernelRadius_MetaData) };
void Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition_SetBit(void* Obj)
{
	((FClothLODDataCommon*)Obj)->bSmoothTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition = { "bSmoothTransition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClothLODDataCommon), &Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothTransition_MetaData), NewProp_bSmoothTransition_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_Inner = { "ParameterMasks", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClothParameterMask_Legacy, METADATA_PARAMS(0, nullptr) }; // 1495658558
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks = { "ParameterMasks", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothLODDataCommon, ParameterMasks_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterMasks_MetaData), NewProp_ParameterMasks_MetaData) }; // 1495658558
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_Inner = { "PointWeightMaps", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPointWeightMap, METADATA_PARAMS(0, nullptr) }; // 1302285900
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps = { "PointWeightMaps", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothLODDataCommon, PointWeightMaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointWeightMaps_MetaData), NewProp_PointWeightMaps_MetaData) }; // 1302285900
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_SkinningKernelRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	nullptr,
	&NewStructOps,
	"ClothLODDataCommon",
	Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::PropPointers),
	sizeof(FClothLODDataCommon),
	alignof(FClothLODDataCommon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothLODDataCommon()
{
	if (!Z_Registration_Info_UScriptStruct_ClothLODDataCommon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothLODDataCommon.InnerSingleton, Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothLODDataCommon.InnerSingleton;
}
// End ScriptStruct FClothLODDataCommon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClothLODDataCommon::StaticStruct, Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewStructOps, TEXT("ClothLODDataCommon"), &Z_Registration_Info_UScriptStruct_ClothLODDataCommon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothLODDataCommon), 2430186354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h_393834343(TEXT("/Script/ClothingSystemRuntimeCommon"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
