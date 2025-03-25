// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseAsset() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseAsset();
ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseAssetInfluence();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseAssetInfluences();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDataContainer();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FPoseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseData;
class UScriptStruct* FPoseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseData"));
	}
	return Z_Registration_Info_UScriptStruct_PoseData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseData>()
{
	return FPoseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPoseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Pose data \n * \n * This is one pose data structure\n * This will let us blend poses quickly easily\n * All poses within this asset should contain same number of tracks, \n * so that we can blend quickly\n */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Pose data\n\nThis is one pose data structure\nThis will let us blend poses quickly easily\nAll poses within this asset should contain same number of tracks,\nso that we can blend quickly" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLocalSpacePose_MetaData[] = {
		{ "Comment", "// source local space pose, this pose is always full pose\n// the size this array matches Tracks in the pose container\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "source local space pose, this pose is always full pose\nthe size this array matches Tracks in the pose container" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCurveData_MetaData[] = {
		{ "Comment", "// source curve data that is full value\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "source curve data that is full value" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalSpacePose_MetaData[] = {
		{ "Comment", "// local space pose, # of array match with # of TrackToBufferIndex\n// it only saves the one with delta as base pose or ref pose if full pose\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "local space pose, # of array match with # of TrackToBufferIndex\nit only saves the one with delta as base pose or ref pose if full pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[] = {
		{ "Comment", "// # of array match with # of Curves in PoseDataContainer\n// curve data is not compressed\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "# of array match with # of Curves in PoseDataContainer\ncurve data is not compressed" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLocalSpacePose_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceLocalSpacePose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceCurveData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceCurveData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSpacePose_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalSpacePose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_Inner = { "SourceLocalSpacePose", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose = { "SourceLocalSpacePose", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseData, SourceLocalSpacePose), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLocalSpacePose_MetaData), NewProp_SourceLocalSpacePose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_Inner = { "SourceCurveData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData = { "SourceCurveData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseData, SourceCurveData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCurveData_MetaData), NewProp_SourceCurveData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_Inner = { "LocalSpacePose", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose = { "LocalSpacePose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseData, LocalSpacePose), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalSpacePose_MetaData), NewProp_LocalSpacePose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_Inner = { "CurveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseData, CurveData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveData_MetaData), NewProp_CurveData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PoseData",
	Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers),
	sizeof(FPoseData),
	alignof(FPoseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPoseData()
{
	if (!Z_Registration_Info_UScriptStruct_PoseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseData.InnerSingleton, Z_Construct_UScriptStruct_FPoseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PoseData.InnerSingleton;
}
// End ScriptStruct FPoseData

// Begin ScriptStruct FPoseAssetInfluence
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseAssetInfluence;
class UScriptStruct* FPoseAssetInfluence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseAssetInfluence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseAssetInfluence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseAssetInfluence, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseAssetInfluence"));
	}
	return Z_Registration_Info_UScriptStruct_PoseAssetInfluence.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseAssetInfluence>()
{
	return FPoseAssetInfluence::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransformIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PoseIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneTransformIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseAssetInfluence>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_PoseIndex = { "PoseIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseAssetInfluence, PoseIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseIndex_MetaData), NewProp_PoseIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_BoneTransformIndex = { "BoneTransformIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseAssetInfluence, BoneTransformIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneTransformIndex_MetaData), NewProp_BoneTransformIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_PoseIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_BoneTransformIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PoseAssetInfluence",
	Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::PropPointers),
	sizeof(FPoseAssetInfluence),
	alignof(FPoseAssetInfluence),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPoseAssetInfluence()
{
	if (!Z_Registration_Info_UScriptStruct_PoseAssetInfluence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseAssetInfluence.InnerSingleton, Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PoseAssetInfluence.InnerSingleton;
}
// End ScriptStruct FPoseAssetInfluence

// Begin ScriptStruct FPoseAssetInfluences
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseAssetInfluences;
class UScriptStruct* FPoseAssetInfluences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseAssetInfluences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseAssetInfluences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseAssetInfluences, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseAssetInfluences"));
	}
	return Z_Registration_Info_UScriptStruct_PoseAssetInfluences.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseAssetInfluences>()
{
	return FPoseAssetInfluences::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Influences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Influences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Influences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseAssetInfluences>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences_Inner = { "Influences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseAssetInfluence, METADATA_PARAMS(0, nullptr) }; // 2045957920
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences = { "Influences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseAssetInfluences, Influences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Influences_MetaData), NewProp_Influences_MetaData) }; // 2045957920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PoseAssetInfluences",
	Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::PropPointers),
	sizeof(FPoseAssetInfluences),
	alignof(FPoseAssetInfluences),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPoseAssetInfluences()
{
	if (!Z_Registration_Info_UScriptStruct_PoseAssetInfluences.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseAssetInfluences.InnerSingleton, Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PoseAssetInfluences.InnerSingleton;
}
// End ScriptStruct FPoseAssetInfluences

// Begin ScriptStruct FPoseDataContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseDataContainer;
class UScriptStruct* FPoseDataContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseDataContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseDataContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDataContainer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseDataContainer"));
	}
	return Z_Registration_Info_UScriptStruct_PoseDataContainer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseDataContainer>()
{
	return FPoseDataContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPoseDataContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Pose data container\n* \n* Contains animation and curve for all poses\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Pose data container\n\nContains animation and curve for all poses" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseNames_MetaData[] = {
		{ "Comment", "// pose names - horizontal data\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "pose names - horizontal data" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseFNames_MetaData[] = {
		{ "Comment", "// pose names - horizontal data\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "pose names - horizontal data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
		{ "Comment", "// this is list of tracks - vertical data\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "this is list of tracks - vertical data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackBoneIndices_MetaData[] = {
		{ "Comment", "// cache containting the skeleton indices for FName in Tracks array\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "cache containting the skeleton indices for FName in Tracks array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackPoseInfluenceIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[] = {
		{ "Comment", "// this is list of poses\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "this is list of poses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
		{ "Comment", "// curve meta data # of Curve UIDs should match with Poses.CurveValues.Num\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "curve meta data # of Curve UIDs should match with Poses.CurveValues.Num" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseNames;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PoseFNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseFNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackBoneIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackBoneIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackPoseInfluenceIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackPoseInfluenceIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Poses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDataContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_Inner = { "PoseNames", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(0, nullptr) }; // 217330421
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames = { "PoseNames", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDataContainer, PoseNames_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseNames_MetaData), NewProp_PoseNames_MetaData) }; // 217330421
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseFNames_Inner = { "PoseFNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseFNames = { "PoseFNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDataContainer, PoseFNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseFNames_MetaData), NewProp_PoseFNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDataContainer, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices_Inner = { "TrackBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices = { "TrackBoneIndices", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDataContainer, TrackBoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackBoneIndices_MetaData), NewProp_TrackBoneIndices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices_Inner = { "TrackPoseInfluenceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseAssetInfluences, METADATA_PARAMS(0, nullptr) }; // 2045043440
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices = { "TrackPoseInfluenceIndices", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDataContainer, TrackPoseInfluenceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackPoseInfluenceIndices_MetaData), NewProp_TrackPoseInfluenceIndices_MetaData) }; // 2045043440
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseData, METADATA_PARAMS(0, nullptr) }; // 376437447
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDataContainer, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Poses_MetaData), NewProp_Poses_MetaData) }; // 376437447
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimCurveBase, METADATA_PARAMS(0, nullptr) }; // 3362036210
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDataContainer, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curves_MetaData), NewProp_Curves_MetaData) }; // 3362036210
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseFNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseFNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PoseDataContainer",
	Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers),
	sizeof(FPoseDataContainer),
	alignof(FPoseDataContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPoseDataContainer()
{
	if (!Z_Registration_Info_UScriptStruct_PoseDataContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseDataContainer.InnerSingleton, Z_Construct_UScriptStruct_FPoseDataContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PoseDataContainer.InnerSingleton;
}
// End ScriptStruct FPoseDataContainer

// Begin Class UPoseAsset Function GetBasePoseName
#if WITH_EDITOR
struct Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics
{
	struct PoseAsset_eventGetBasePoseName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PoseAsset" },
		{ "Comment", "/** Returns base pose name, only valid when additive, NAME_None indicates reference pose */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Returns base pose name, only valid when additive, NAME_None indicates reference pose" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseAsset_eventGetBasePoseName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseAsset, nullptr, "GetBasePoseName", nullptr, nullptr, Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::PoseAsset_eventGetBasePoseName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::PoseAsset_eventGetBasePoseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseAsset_GetBasePoseName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseAsset_GetBasePoseName_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UPoseAsset::execGetBasePoseName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetBasePoseName();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UPoseAsset Function GetBasePoseName

// Begin Class UPoseAsset Function GetPoseNames
#if WITH_EDITOR
struct Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics
{
	struct PoseAsset_eventGetPoseNames_Parms
	{
		TArray<FName> PoseNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PoseAsset" },
		{ "Comment", "/** Returns the name of all contained poses */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Returns the name of all contained poses" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PoseNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::NewProp_PoseNames_Inner = { "PoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::NewProp_PoseNames = { "PoseNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseAsset_eventGetPoseNames_Parms, PoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::NewProp_PoseNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::NewProp_PoseNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseAsset, nullptr, "GetPoseNames", nullptr, nullptr, Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::PoseAsset_eventGetPoseNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::PoseAsset_eventGetPoseNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseAsset_GetPoseNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UPoseAsset::execGetPoseNames)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_PoseNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPoseNames(Z_Param_Out_PoseNames);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UPoseAsset Function GetPoseNames

// Begin Class UPoseAsset Function RenamePose
#if WITH_EDITOR
struct Z_Construct_UFunction_UPoseAsset_RenamePose_Statics
{
	struct PoseAsset_eventRenamePose_Parms
	{
		FName OriginalPoseName;
		FName NewPoseName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PoseAsset" },
		{ "Comment", "/** Renames a specific pose */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Renames a specific pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalPoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OriginalPoseName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewPoseName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_OriginalPoseName = { "OriginalPoseName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseAsset_eventRenamePose_Parms, OriginalPoseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalPoseName_MetaData), NewProp_OriginalPoseName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_NewPoseName = { "NewPoseName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseAsset_eventRenamePose_Parms, NewPoseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPoseName_MetaData), NewProp_NewPoseName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_OriginalPoseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_NewPoseName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseAsset, nullptr, "RenamePose", nullptr, nullptr, Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::PoseAsset_eventRenamePose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::PoseAsset_eventRenamePose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseAsset_RenamePose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UPoseAsset::execRenamePose)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OriginalPoseName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewPoseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenamePose(Z_Param_Out_OriginalPoseName,Z_Param_Out_NewPoseName);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UPoseAsset Function RenamePose

// Begin Class UPoseAsset Function SetBasePoseName
#if WITH_EDITOR
struct Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics
{
	struct PoseAsset_eventSetBasePoseName_Parms
	{
		FName NewBasePoseName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PoseAsset" },
		{ "Comment", "/** Set base pose index by name, NAME_None indicates reference pose - returns true if set successfully */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Set base pose index by name, NAME_None indicates reference pose - returns true if set successfully" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewBasePoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewBasePoseName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::NewProp_NewBasePoseName = { "NewBasePoseName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseAsset_eventSetBasePoseName_Parms, NewBasePoseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewBasePoseName_MetaData), NewProp_NewBasePoseName_MetaData) };
void Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PoseAsset_eventSetBasePoseName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PoseAsset_eventSetBasePoseName_Parms), &Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::NewProp_NewBasePoseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseAsset, nullptr, "SetBasePoseName", nullptr, nullptr, Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::PoseAsset_eventSetBasePoseName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::PoseAsset_eventSetBasePoseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseAsset_SetBasePoseName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseAsset_SetBasePoseName_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UPoseAsset::execSetBasePoseName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewBasePoseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetBasePoseName(Z_Param_Out_NewBasePoseName);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UPoseAsset Function SetBasePoseName

// Begin Class UPoseAsset Function UpdatePoseFromAnimation
#if WITH_EDITOR
struct Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics
{
	struct PoseAsset_eventUpdatePoseFromAnimation_Parms
	{
		UAnimSequence* AnimSequence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PoseAsset" },
		{ "Comment", "/** Contained poses are re-generated from the provided Animation Sequence*/" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Contained poses are re-generated from the provided Animation Sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseAsset_eventUpdatePoseFromAnimation_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::NewProp_AnimSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseAsset, nullptr, "UpdatePoseFromAnimation", nullptr, nullptr, Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::PoseAsset_eventUpdatePoseFromAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::PoseAsset_eventUpdatePoseFromAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UPoseAsset::execUpdatePoseFromAnimation)
{
	P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePoseFromAnimation(Z_Param_AnimSequence);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UPoseAsset Function UpdatePoseFromAnimation

// Begin Class UPoseAsset
void UPoseAsset::StaticRegisterNativesUPoseAsset()
{
#if WITH_EDITOR
	UClass* Class = UPoseAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBasePoseName", &UPoseAsset::execGetBasePoseName },
		{ "GetPoseNames", &UPoseAsset::execGetPoseNames },
		{ "RenamePose", &UPoseAsset::execRenamePose },
		{ "SetBasePoseName", &UPoseAsset::execSetBasePoseName },
		{ "UpdatePoseFromAnimation", &UPoseAsset::execUpdatePoseFromAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseAsset);
UClass* Z_Construct_UClass_UPoseAsset_NoRegister()
{
	return UPoseAsset::StaticClass();
}
struct Z_Construct_UClass_UPoseAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Pose Asset that can be blended by weight of curves \n */" },
		{ "IncludePath", "Animation/PoseAsset.h" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Pose Asset that can be blended by weight of curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseContainer_MetaData[] = {
		{ "Comment", "/** Animation Pose Data*/" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Animation Pose Data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdditivePose_MetaData[] = {
		{ "Category", "Additive" },
		{ "Comment", "/** Whether or not Additive Pose or not - these are property that needs post process, so */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Whether or not Additive Pose or not - these are property that needs post process, so" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseIndex_MetaData[] = {
		{ "Comment", "/** if -1, use ref pose */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "if -1, use ref pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetSource_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Base pose to use when retargeting */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Base pose to use when retargeting" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetSourceAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If RetargetSource is set to Default (None), this is asset for the base pose to use when retargeting. Transform data will be saved in RetargetSourceAssetReferencePose. */" },
		{ "DisallowedClasses", "/Script/ApexDestruction.DestructibleMesh" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "If RetargetSource is set to Default (None), this is asset for the base pose to use when retargeting. Transform data will be saved in RetargetSourceAssetReferencePose." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetSourceAssetReferencePose_MetaData[] = {
		{ "Comment", "/** When using RetargetSourceAsset, use the post stored here */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "When using RetargetSourceAsset, use the post stored here" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimation_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimationRawDataGUID_MetaData[] = {
		{ "Comment", "/** GUID cached when the contained poses were last updated according to SourceAnimation - used to keep track of out-of-date/sync data*/" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "GUID cached when the contained poses were last updated according to SourceAnimation - used to keep track of out-of-date/sync data" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseContainer;
	static void NewProp_bAdditivePose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditivePose;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BasePoseIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RetargetSource;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RetargetSourceAsset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetSourceAssetReferencePose_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RetargetSourceAssetReferencePose;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAnimation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAnimationRawDataGUID;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoseAsset_GetBasePoseName, "GetBasePoseName" }, // 1794239330
		{ &Z_Construct_UFunction_UPoseAsset_GetPoseNames, "GetPoseNames" }, // 1833652871
		{ &Z_Construct_UFunction_UPoseAsset_RenamePose, "RenamePose" }, // 2555043448
		{ &Z_Construct_UFunction_UPoseAsset_SetBasePoseName, "SetBasePoseName" }, // 1599910168
		{ &Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation, "UpdatePoseFromAnimation" }, // 3452606729
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer = { "PoseContainer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseAsset, PoseContainer), Z_Construct_UScriptStruct_FPoseDataContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseContainer_MetaData), NewProp_PoseContainer_MetaData) }; // 1508191969
void Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_SetBit(void* Obj)
{
	((UPoseAsset*)Obj)->bAdditivePose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose = { "bAdditivePose", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseAsset), &Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdditivePose_MetaData), NewProp_bAdditivePose_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex = { "BasePoseIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseAsset, BasePoseIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoseIndex_MetaData), NewProp_BasePoseIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource = { "RetargetSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseAsset, RetargetSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetSource_MetaData), NewProp_RetargetSource_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset = { "RetargetSourceAsset", nullptr, (EPropertyFlags)0x0014010800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseAsset, RetargetSourceAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetSourceAsset_MetaData), NewProp_RetargetSourceAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_Inner = { "RetargetSourceAssetReferencePose", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose = { "RetargetSourceAssetReferencePose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseAsset, RetargetSourceAssetReferencePose), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetSourceAssetReferencePose_MetaData), NewProp_RetargetSourceAssetReferencePose_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation = { "SourceAnimation", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseAsset, SourceAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAnimation_MetaData), NewProp_SourceAnimation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimationRawDataGUID = { "SourceAnimationRawDataGUID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseAsset, SourceAnimationRawDataGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAnimationRawDataGUID_MetaData), NewProp_SourceAnimationRawDataGUID_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimationRawDataGUID,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPoseAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimationAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseAsset_Statics::ClassParams = {
	&UPoseAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UPoseAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoseAsset()
{
	if (!Z_Registration_Info_UClass_UPoseAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseAsset.OuterSingleton, Z_Construct_UClass_UPoseAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoseAsset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPoseAsset>()
{
	return UPoseAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseAsset);
UPoseAsset::~UPoseAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseAsset)
// End Class UPoseAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPoseData::StaticStruct, Z_Construct_UScriptStruct_FPoseData_Statics::NewStructOps, TEXT("PoseData"), &Z_Registration_Info_UScriptStruct_PoseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseData), 376437447U) },
		{ FPoseAssetInfluence::StaticStruct, Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewStructOps, TEXT("PoseAssetInfluence"), &Z_Registration_Info_UScriptStruct_PoseAssetInfluence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseAssetInfluence), 2045957920U) },
		{ FPoseAssetInfluences::StaticStruct, Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewStructOps, TEXT("PoseAssetInfluences"), &Z_Registration_Info_UScriptStruct_PoseAssetInfluences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseAssetInfluences), 2045043440U) },
		{ FPoseDataContainer::StaticStruct, Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewStructOps, TEXT("PoseDataContainer"), &Z_Registration_Info_UScriptStruct_PoseDataContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseDataContainer), 1508191969U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoseAsset, UPoseAsset::StaticClass, TEXT("UPoseAsset"), &Z_Registration_Info_UClass_UPoseAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseAsset), 2764927755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_2880623481(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
