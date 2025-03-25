// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_Trail.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_AnimDynamics.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Trail() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Trail();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRotationLimit();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FRotationLimit
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotationLimit;
class UScriptStruct* FRotationLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotationLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotationLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationLimit, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RotationLimit"));
	}
	return Z_Registration_Info_UScriptStruct_RotationLimit.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRotationLimit>()
{
	return FRotationLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotationLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitMin_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitMax_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimitMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimitMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin = { "LimitMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationLimit, LimitMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitMin_MetaData), NewProp_LimitMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax = { "LimitMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationLimit, LimitMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitMax_MetaData), NewProp_LimitMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotationLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotationLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"RotationLimit",
	Z_Construct_UScriptStruct_FRotationLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::PropPointers),
	sizeof(FRotationLimit),
	alignof(FRotationLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotationLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotationLimit()
{
	if (!Z_Registration_Info_UScriptStruct_RotationLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotationLimit.InnerSingleton, Z_Construct_UScriptStruct_FRotationLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RotationLimit.InnerSingleton;
}
// End ScriptStruct FRotationLimit

// Begin ScriptStruct FAnimNode_Trail
static_assert(std::is_polymorphic<FAnimNode_Trail>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_Trail cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Trail;
class UScriptStruct* FAnimNode_Trail::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Trail.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Trail.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Trail, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Trail"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Trail.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Trail>()
{
	return FAnimNode_Trail::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_Trail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Trail Controller\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Trail Controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailBone_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** Reference to the active bone in the hierarchy to modify. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Reference to the active bone in the hierarchy to modify." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainLength_MetaData[] = {
		{ "Category", "Trail" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Number of bones above the active one in the hierarchy to modify. ChainLength should be at least 2. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Number of bones above the active one in the hierarchy to modify. ChainLength should be at least 2." },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainBoneAxis_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** Axis of the bones to point along trail. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Axis of the bones to point along trail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertChainBoneAxis_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** Invert the direction specified in ChainBoneAxis. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Invert the direction specified in ChainBoneAxis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitStretch_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** Limit the amount that a bone can stretch from its ref-pose length. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitRotation_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** Limit the amount that a bone can stretch from its ref-pose length. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlanarLimit_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** Whether to evaluate planar limits */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Whether to evaluate planar limits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActorSpaceFakeVel_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** Whether 'fake' velocity should be applied in actor or world space. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Whether 'fake' velocity should be applied in actor or world space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReorientParentToChild_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Fix up rotation to face child for the parent*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Fix up rotation to face child for the parent" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Enable Debug in the PIE. This doesn't work in game*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Enable Debug in the PIE. This doesn't work in game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowBaseMotion_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Show Base Motion */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Show Base Motion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTrailLocation_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Show Trail Location **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Show Trail Location *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowLimit_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Show Planar Limits **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Show Planar Limits *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLifeTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Debug Life Time */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Debug Life Time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailRelaxation_MetaData[] = {
		{ "Comment", "/** How quickly we 'relax' the bones to their animated positions. Deprecated. Replaced to TrailRelaxationCurve */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "How quickly we 'relax' the bones to their animated positions. Deprecated. Replaced to TrailRelaxationCurve" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** To avoid hitches causing stretch of trail, you can use MaxDeltaTime to clamp the long delta time. If you want 30 fps to set it to 0.03333f ( = 1/30 ).  */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "To avoid hitches causing stretch of trail, you can use MaxDeltaTime to clamp the long delta time. If you want 30 fps to set it to 0.03333f ( = 1/30 )." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelaxationSpeedScale_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailRelaxationSpeed_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** How quickly we 'relax' the bones to their animated positions. Time 0 will map to top root joint, time 1 will map to the bottom joint. */" },
		{ "CustomizeProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "How quickly we 'relax' the bones to their animated positions. Time 0 will map to top root joint, time 1 will map to the bottom joint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelaxationSpeedScaleInputProcessor_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimits_MetaData[] = {
		{ "Category", "Limit" },
		{ "EditCondition", "bLimitRotation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffsets_MetaData[] = {
		{ "Category", "Limit" },
		{ "EditCondition", "bLimitRotation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** List of available planar limits for this node */" },
		{ "EditCondition", "bUsePlanarLimit" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "List of available planar limits for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchLimit_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** If bLimitStretch is true, this indicates how long a bone can stretch beyond its length in the ref-pose. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "If bLimitStretch is true, this indicates how long a bone can stretch beyond its length in the ref-pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FakeVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** 'Fake' velocity applied to bones. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "'Fake' velocity applied to bones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseJoint_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** Base Joint to calculate velocity from. If none, it will use Component's World Transform. . */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Base Joint to calculate velocity from. If none, it will use Component's World Transform. ." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailBoneRotationBlendAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastBoneRotationAnimAlphaBlend_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/* How to set last bone rotation. It copies from previous joint if alpha is 0.f, or 1.f will use animated pose \n\x09 * This alpha dictates the blend between parent joint and animated pose, and how much you'd like to use animated pose for\n\x09 */" },
		{ "EditCondition", "bReorientParentToChild" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "How to set last bone rotation. It copies from previous joint if alpha is 0.f, or 1.f will use animated pose\n       * This alpha dictates the blend between parent joint and animated pose, and how much you'd like to use animated pose for" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailBone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChainLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChainBoneAxis;
	static void NewProp_bInvertChainBoneAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertChainBoneAxis;
	static void NewProp_bLimitStretch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitStretch;
	static void NewProp_bLimitRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitRotation;
	static void NewProp_bUsePlanarLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlanarLimit;
	static void NewProp_bActorSpaceFakeVel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorSpaceFakeVel;
	static void NewProp_bReorientParentToChild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReorientParentToChild;
#if WITH_EDITORONLY_DATA
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static void NewProp_bShowBaseMotion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBaseMotion;
	static void NewProp_bShowTrailLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTrailLocation;
	static void NewProp_bShowLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailRelaxation;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RelaxationSpeedScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailRelaxationSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelaxationSpeedScaleInputProcessor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationOffsets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FakeVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseJoint;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailBoneRotationBlendAlpha;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastBoneRotationAnimAlphaBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Trail>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone = { "TrailBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, TrailBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailBone_MetaData), NewProp_TrailBone_MetaData) }; // 4218265988
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength = { "ChainLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, ChainLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainLength_MetaData), NewProp_ChainLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis = { "ChainBoneAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, ChainBoneAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainBoneAxis_MetaData), NewProp_ChainBoneAxis_MetaData) }; // 342925220
void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_SetBit(void* Obj)
{
	((FAnimNode_Trail*)Obj)->bInvertChainBoneAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis = { "bInvertChainBoneAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertChainBoneAxis_MetaData), NewProp_bInvertChainBoneAxis_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_SetBit(void* Obj)
{
	((FAnimNode_Trail*)Obj)->bLimitStretch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch = { "bLimitStretch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitStretch_MetaData), NewProp_bLimitStretch_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_SetBit(void* Obj)
{
	((FAnimNode_Trail*)Obj)->bLimitRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation = { "bLimitRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitRotation_MetaData), NewProp_bLimitRotation_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_SetBit(void* Obj)
{
	((FAnimNode_Trail*)Obj)->bUsePlanarLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit = { "bUsePlanarLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePlanarLimit_MetaData), NewProp_bUsePlanarLimit_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_SetBit(void* Obj)
{
	((FAnimNode_Trail*)Obj)->bActorSpaceFakeVel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel = { "bActorSpaceFakeVel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActorSpaceFakeVel_MetaData), NewProp_bActorSpaceFakeVel_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_SetBit(void* Obj)
{
	((FAnimNode_Trail*)Obj)->bReorientParentToChild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild = { "bReorientParentToChild", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReorientParentToChild_MetaData), NewProp_bReorientParentToChild_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((FAnimNode_Trail*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebug_MetaData), NewProp_bEnableDebug_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_SetBit(void* Obj)
{
	((FAnimNode_Trail*)Obj)->bShowBaseMotion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion = { "bShowBaseMotion", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowBaseMotion_MetaData), NewProp_bShowBaseMotion_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_SetBit(void* Obj)
{
	((FAnimNode_Trail*)Obj)->bShowTrailLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation = { "bShowTrailLocation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTrailLocation_MetaData), NewProp_bShowTrailLocation_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_SetBit(void* Obj)
{
	((FAnimNode_Trail*)Obj)->bShowLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit = { "bShowLimit", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowLimit_MetaData), NewProp_bShowLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime = { "DebugLifeTime", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, DebugLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLifeTime_MetaData), NewProp_DebugLifeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation = { "TrailRelaxation", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, TrailRelaxation_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailRelaxation_MetaData), NewProp_TrailRelaxation_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime = { "MaxDeltaTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, MaxDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDeltaTime_MetaData), NewProp_MaxDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale = { "RelaxationSpeedScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, RelaxationSpeedScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelaxationSpeedScale_MetaData), NewProp_RelaxationSpeedScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed = { "TrailRelaxationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, TrailRelaxationSpeed), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailRelaxationSpeed_MetaData), NewProp_TrailRelaxationSpeed_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor = { "RelaxationSpeedScaleInputProcessor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, RelaxationSpeedScaleInputProcessor), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelaxationSpeedScaleInputProcessor_MetaData), NewProp_RelaxationSpeedScaleInputProcessor_MetaData) }; // 1905782755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_Inner = { "RotationLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotationLimit, METADATA_PARAMS(0, nullptr) }; // 1268653332
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits = { "RotationLimits", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, RotationLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationLimits_MetaData), NewProp_RotationLimits_MetaData) }; // 1268653332
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_Inner = { "RotationOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets = { "RotationOffsets", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, RotationOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffsets_MetaData), NewProp_RotationOffsets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit, METADATA_PARAMS(0, nullptr) }; // 4096540128
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarLimits_MetaData), NewProp_PlanarLimits_MetaData) }; // 4096540128
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit = { "StretchLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, StretchLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchLimit_MetaData), NewProp_StretchLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity = { "FakeVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, FakeVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FakeVelocity_MetaData), NewProp_FakeVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint = { "BaseJoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, BaseJoint), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseJoint_MetaData), NewProp_BaseJoint_MetaData) }; // 4218265988
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha = { "TrailBoneRotationBlendAlpha", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, TrailBoneRotationBlendAlpha_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailBoneRotationBlendAlpha_MetaData), NewProp_TrailBoneRotationBlendAlpha_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend = { "LastBoneRotationAnimAlphaBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Trail, LastBoneRotationAnimAlphaBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastBoneRotationAnimAlphaBlend_MetaData), NewProp_LastBoneRotationAnimAlphaBlend_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_Trail",
	Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::PropPointers),
	sizeof(FAnimNode_Trail),
	alignof(FAnimNode_Trail),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Trail()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Trail.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Trail.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Trail.InnerSingleton;
}
// End ScriptStruct FAnimNode_Trail

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Trail_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRotationLimit::StaticStruct, Z_Construct_UScriptStruct_FRotationLimit_Statics::NewStructOps, TEXT("RotationLimit"), &Z_Registration_Info_UScriptStruct_RotationLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotationLimit), 1268653332U) },
		{ FAnimNode_Trail::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewStructOps, TEXT("AnimNode_Trail"), &Z_Registration_Info_UScriptStruct_AnimNode_Trail, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Trail), 74016404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Trail_h_2180738972(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Trail_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Trail_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
