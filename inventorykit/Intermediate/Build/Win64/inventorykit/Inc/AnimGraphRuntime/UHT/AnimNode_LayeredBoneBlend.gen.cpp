// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_LayeredBoneBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LayeredBoneBlend() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum ELayeredBoneBlendMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELayeredBoneBlendMode;
static UEnum* ELayeredBoneBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELayeredBoneBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELayeredBoneBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ELayeredBoneBlendMode"));
	}
	return Z_Registration_Info_UEnum_ELayeredBoneBlendMode.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ELayeredBoneBlendMode>()
{
	return ELayeredBoneBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlendMask.Name", "ELayeredBoneBlendMode::BlendMask" },
		{ "BranchFilter.Name", "ELayeredBoneBlendMode::BranchFilter" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELayeredBoneBlendMode::BranchFilter", (int64)ELayeredBoneBlendMode::BranchFilter },
		{ "ELayeredBoneBlendMode::BlendMask", (int64)ELayeredBoneBlendMode::BlendMask },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"ELayeredBoneBlendMode",
	"ELayeredBoneBlendMode",
	Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode()
{
	if (!Z_Registration_Info_UEnum_ELayeredBoneBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELayeredBoneBlendMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELayeredBoneBlendMode.InnerSingleton;
}
// End Enum ELayeredBoneBlendMode

// Begin ScriptStruct FAnimNode_LayeredBoneBlend
static_assert(std::is_polymorphic<FAnimNode_LayeredBoneBlend>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_LayeredBoneBlend cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LayeredBoneBlend;
class UScriptStruct* FAnimNode_LayeredBoneBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LayeredBoneBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LayeredBoneBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LayeredBoneBlend"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LayeredBoneBlend.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_LayeredBoneBlend>()
{
	return FAnimNode_LayeredBoneBlend::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Layered blend (per bone); has dynamic number of blendposes that can blend per different bone sets\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Layered blend (per bone); has dynamic number of blendposes that can blend per different bone sets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "/** The source pose */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "The source pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendPoses_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Category", "Links" },
		{ "Comment", "/** Each layer's blended pose */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Each layer's blended pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether to use branch filters or a blend mask to specify an input pose per-bone influence */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Whether to use branch filters or a blend mask to specify an input pose per-bone influence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMasks_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** \n\x09 * The blend masks to use for our layer inputs. Allows the use of per-bone alphas.\n\x09 * Blend masks are used when BlendMode is BlendMask.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "The blend masks to use for our layer inputs. Allows the use of per-bone alphas.\nBlend masks are used when BlendMode is BlendMask." },
		{ "UseAsBlendMask", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerSetup_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** \n\x09 * Configuration for the parts of the skeleton to blend for each layer. Allows\n\x09 * certain parts of the tree to be blended out or omitted from the pose.\n\x09 * LayerSetup is used when BlendMode is BranchFilter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Configuration for the parts of the skeleton to blend for each layer. Allows\ncertain parts of the tree to be blended out or omitted from the pose.\nLayerSetup is used when BlendMode is BranchFilter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeights_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Category", "Runtime" },
		{ "Comment", "/** The weights of each layer */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The weights of each layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceRotationBlend_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether to blend bone rotations in mesh space or in local space */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Whether to blend bone rotations in mesh space or in local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceScaleBlend_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether to blend bone scales in mesh space or in local space */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Whether to blend bone scales in mesh space or in local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveBlendOption_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** How to blend the layers together */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "How to blend the layers together" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendRootMotionBasedOnRootBone_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether to incorporate the per-bone blend weight of the root bone when lending root motion */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Whether to incorporate the per-bone blend weight of the root bone when lending root motion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n \x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreshold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreshold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlendWeights_MetaData[] = {
		{ "Comment", "// Per-bone weights for the skeleton. Serialized as these are only relative to the skeleton, but can potentially\n// be regenerated at runtime if the GUIDs dont match\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Per-bone weights for the skeleton. Serialized as these are only relative to the skeleton, but can potentially\nbe regenerated at runtime if the GUIDs dont match" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonGuid_MetaData[] = {
		{ "Comment", "// Guids for skeleton used to determine whether the PerBoneBlendWeights need rebuilding\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Guids for skeleton used to determine whether the PerBoneBlendWeights need rebuilding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneGuid_MetaData[] = {
		{ "Comment", "// Guid for virtual bones used to determine whether the PerBoneBlendWeights need rebuilding\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Guid for virtual bones used to determine whether the PerBoneBlendWeights need rebuilding" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendPoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendPoses;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendMasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendMasks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerSetup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerSetup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendWeights;
	static void NewProp_bMeshSpaceRotationBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceRotationBlend;
	static void NewProp_bMeshSpaceScaleBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceScaleBlend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveBlendOption;
	static void NewProp_bBlendRootMotionBasedOnRootBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendRootMotionBasedOnRootBone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerBoneBlendWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerBoneBlendWeights;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualBoneGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LayeredBoneBlend>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePose_MetaData), NewProp_BasePose_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses_Inner = { "BlendPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(0, nullptr) }; // 1074011079
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses = { "BlendPoses", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BlendPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendPoses_MetaData), NewProp_BlendPoses_MetaData) }; // 1074011079
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BlendMode), Z_Construct_UEnum_AnimGraphRuntime_ELayeredBoneBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 2568341285
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendMasks_Inner = { "BlendMasks", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendMasks = { "BlendMasks", nullptr, (EPropertyFlags)0x0114000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BlendMasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMasks_MetaData), NewProp_BlendMasks_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup_Inner = { "LayerSetup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 235181659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup = { "LayerSetup", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, LayerSetup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerSetup_MetaData), NewProp_LayerSetup_MetaData) }; // 235181659
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights_Inner = { "BlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights = { "BlendWeights", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendWeights_MetaData), NewProp_BlendWeights_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend_SetBit(void* Obj)
{
	((FAnimNode_LayeredBoneBlend*)Obj)->bMeshSpaceRotationBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend = { "bMeshSpaceRotationBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LayeredBoneBlend), &Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshSpaceRotationBlend_MetaData), NewProp_bMeshSpaceRotationBlend_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceScaleBlend_SetBit(void* Obj)
{
	((FAnimNode_LayeredBoneBlend*)Obj)->bMeshSpaceScaleBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceScaleBlend = { "bMeshSpaceScaleBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LayeredBoneBlend), &Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceScaleBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshSpaceScaleBlend_MetaData), NewProp_bMeshSpaceScaleBlend_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_CurveBlendOption = { "CurveBlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, CurveBlendOption), Z_Construct_UEnum_Engine_ECurveBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveBlendOption_MetaData), NewProp_CurveBlendOption_MetaData) }; // 1940767143
void Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_SetBit(void* Obj)
{
	((FAnimNode_LayeredBoneBlend*)Obj)->bBlendRootMotionBasedOnRootBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone = { "bBlendRootMotionBasedOnRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LayeredBoneBlend), &Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendRootMotionBasedOnRootBone_MetaData), NewProp_bBlendRootMotionBasedOnRootBone_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, LODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODThreshold_MetaData), NewProp_LODThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights_Inner = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(0, nullptr) }; // 1518486152
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, PerBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerBoneBlendWeights_MetaData), NewProp_PerBoneBlendWeights_MetaData) }; // 1518486152
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_SkeletonGuid = { "SkeletonGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, SkeletonGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonGuid_MetaData), NewProp_SkeletonGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_VirtualBoneGuid = { "VirtualBoneGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, VirtualBoneGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualBoneGuid_MetaData), NewProp_VirtualBoneGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BasePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendMasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendMasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceScaleBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_CurveBlendOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LODThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_SkeletonGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_VirtualBoneGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_LayeredBoneBlend",
	Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::PropPointers),
	sizeof(FAnimNode_LayeredBoneBlend),
	alignof(FAnimNode_LayeredBoneBlend),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LayeredBoneBlend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LayeredBoneBlend.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LayeredBoneBlend.InnerSingleton;
}
// End ScriptStruct FAnimNode_LayeredBoneBlend

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_LayeredBoneBlend_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELayeredBoneBlendMode_StaticEnum, TEXT("ELayeredBoneBlendMode"), &Z_Registration_Info_UEnum_ELayeredBoneBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2568341285U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_LayeredBoneBlend::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewStructOps, TEXT("AnimNode_LayeredBoneBlend"), &Z_Registration_Info_UScriptStruct_AnimNode_LayeredBoneBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LayeredBoneBlend), 4024206729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_LayeredBoneBlend_h_2731178014(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_LayeredBoneBlend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_LayeredBoneBlend_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_LayeredBoneBlend_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_LayeredBoneBlend_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
