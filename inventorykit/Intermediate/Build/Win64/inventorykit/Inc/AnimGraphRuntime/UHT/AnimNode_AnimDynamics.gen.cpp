// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_AnimDynamics.h"
#include "Runtime/AnimGraphRuntime/Public/CommonAnimationTypes.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AnimDynamics() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamics();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysBodyDefinition();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysConstraintSetup();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysSphericalLimit();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRotationRetargetingInfo();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysCollisionType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysTwistAxis();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum AnimPhysAngularConstraintType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimPhysAngularConstraintType;
static UEnum* AnimPhysAngularConstraintType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysAngularConstraintType"));
	}
	return Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<AnimPhysAngularConstraintType>()
{
	return AnimPhysAngularConstraintType_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Angular.Name", "AnimPhysAngularConstraintType::Angular" },
		{ "Comment", "/** Supported angular constraint types */" },
		{ "Cone.Name", "AnimPhysAngularConstraintType::Cone" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Supported angular constraint types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AnimPhysAngularConstraintType::Angular", (int64)AnimPhysAngularConstraintType::Angular },
		{ "AnimPhysAngularConstraintType::Cone", (int64)AnimPhysAngularConstraintType::Cone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"AnimPhysAngularConstraintType",
	"AnimPhysAngularConstraintType",
	Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType()
{
	if (!Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.InnerSingleton;
}
// End Enum AnimPhysAngularConstraintType

// Begin Enum AnimPhysLinearConstraintType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimPhysLinearConstraintType;
static UEnum* AnimPhysLinearConstraintType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysLinearConstraintType"));
	}
	return Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<AnimPhysLinearConstraintType>()
{
	return AnimPhysLinearConstraintType_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Supported linear axis constraints */" },
		{ "Free.Name", "AnimPhysLinearConstraintType::Free" },
		{ "Limited.Name", "AnimPhysLinearConstraintType::Limited" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Supported linear axis constraints" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AnimPhysLinearConstraintType::Free", (int64)AnimPhysLinearConstraintType::Free },
		{ "AnimPhysLinearConstraintType::Limited", (int64)AnimPhysLinearConstraintType::Limited },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"AnimPhysLinearConstraintType",
	"AnimPhysLinearConstraintType",
	Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType()
{
	if (!Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.InnerSingleton;
}
// End Enum AnimPhysLinearConstraintType

// Begin Enum AnimPhysSimSpaceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimPhysSimSpaceType;
static UEnum* AnimPhysSimSpaceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AnimPhysSimSpaceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AnimPhysSimSpaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysSimSpaceType"));
	}
	return Z_Registration_Info_UEnum_AnimPhysSimSpaceType.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<AnimPhysSimSpaceType>()
{
	return AnimPhysSimSpaceType_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Actor.Name", "AnimPhysSimSpaceType::Actor" },
		{ "Actor.ToolTip", "Sim origin is the location/orientation of the actor containing the skeletal mesh component." },
		{ "BlueprintType", "true" },
		{ "BoneRelative.Name", "AnimPhysSimSpaceType::BoneRelative" },
		{ "BoneRelative.ToolTip", "Sim origin is the location/orientation of the bone specified in RelativeSpaceBone" },
		{ "Component.Name", "AnimPhysSimSpaceType::Component" },
		{ "Component.ToolTip", "Sim origin is the location/orientation of the skeletal mesh component." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "RootRelative.Name", "AnimPhysSimSpaceType::RootRelative" },
		{ "RootRelative.ToolTip", "Sim origin is the location/orientation of the root bone." },
		{ "World.Name", "AnimPhysSimSpaceType::World" },
		{ "World.ToolTip", "Sim origin is the world origin. Teleporting characters is not recommended in this mode." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AnimPhysSimSpaceType::Component", (int64)AnimPhysSimSpaceType::Component },
		{ "AnimPhysSimSpaceType::Actor", (int64)AnimPhysSimSpaceType::Actor },
		{ "AnimPhysSimSpaceType::World", (int64)AnimPhysSimSpaceType::World },
		{ "AnimPhysSimSpaceType::RootRelative", (int64)AnimPhysSimSpaceType::RootRelative },
		{ "AnimPhysSimSpaceType::BoneRelative", (int64)AnimPhysSimSpaceType::BoneRelative },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"AnimPhysSimSpaceType",
	"AnimPhysSimSpaceType",
	Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType()
{
	if (!Z_Registration_Info_UEnum_AnimPhysSimSpaceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimPhysSimSpaceType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AnimPhysSimSpaceType.InnerSingleton;
}
// End Enum AnimPhysSimSpaceType

// Begin ScriptStruct FAnimPhysConstraintSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup;
class UScriptStruct* FAnimPhysConstraintSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysConstraintSetup"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimPhysConstraintSetup>()
{
	return FAnimPhysConstraintSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Constraint setup struct, holds data required to build a physics constraint */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Constraint setup struct, holds data required to build a physics constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearXLimitType_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether to limit the linear X axis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to limit the linear X axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearYLimitType_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether to limit the linear Y axis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to limit the linear Y axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearZLimitType_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether to limit the linear Z axis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to limit the linear Z axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearAxesMin_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMax", "0" },
		{ "Comment", "/** Minimum linear movement per-axis (Set zero here and in the max limit to lock) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Minimum linear movement per-axis (Set zero here and in the max limit to lock)" },
		{ "UIMax", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearAxesMax_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum linear movement per-axis (Set zero here and in the min limit to lock) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Maximum linear movement per-axis (Set zero here and in the min limit to lock)" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularConstraintType_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Method to use when constraining angular motion */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Method to use when constraining angular motion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Axis to consider for twist when constraining angular motion (forward axis) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Axis to consider for twist when constraining angular motion (forward axis)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularTargetAxis_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/**\n\x09 * The axis in the simulation pose to align to the Angular Target.\n\x09 * This is typically the axis pointing along the bone.\n\x09 * Note: This is affected by the Angular Spring Constant.\n\x09 */" },
		{ "DisplayAfter", "AngularLimitsMax" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "The axis in the simulation pose to align to the Angular Target.\nThis is typically the axis pointing along the bone.\nNote: This is affected by the Angular Spring Constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeAngle_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angle to use when constraining using a cone */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Angle to use when constraining using a cone" },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularXAngle_MetaData[] = {
		{ "Comment", "/** X-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "X-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularYAngle_MetaData[] = {
		{ "Comment", "/** Y-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Y-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularZAngle_MetaData[] = {
		{ "Comment", "/** Z-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Z-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free)" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularLimitsMin_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularLimitsMax_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularTarget_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/**\n\x09 * The axis to align the angular spring constraint to in the animation pose.\n\x09 * This typically points down the bone - so values of (1.0, 0.0, 0.0) are common,\n\x09 * but you can pick other values to align the spring to a different direction.\n\x09 * Note: This is affected by the Angular Spring Constant.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "The axis to align the angular spring constraint to in the animation pose.\nThis typically points down the bone - so values of (1.0, 0.0, 0.0) are common,\nbut you can pick other values to align the spring to a different direction.\nNote: This is affected by the Angular Spring Constant." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinearXLimitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearXLimitType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinearYLimitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearYLimitType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinearZLimitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearZLimitType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearAxesMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearAxesMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AngularConstraintType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularConstraintType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TwistAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TwistAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AngularTargetAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularTargetAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeAngle;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularXAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularYAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularZAngle;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularLimitsMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularLimitsMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysConstraintSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType = { "LinearXLimitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearXLimitType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearXLimitType_MetaData), NewProp_LinearXLimitType_MetaData) }; // 2032831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType = { "LinearYLimitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearYLimitType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearYLimitType_MetaData), NewProp_LinearYLimitType_MetaData) }; // 2032831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType = { "LinearZLimitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearZLimitType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearZLimitType_MetaData), NewProp_LinearZLimitType_MetaData) }; // 2032831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMin = { "LinearAxesMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearAxesMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearAxesMin_MetaData), NewProp_LinearAxesMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMax = { "LinearAxesMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearAxesMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearAxesMax_MetaData), NewProp_LinearAxesMax_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType = { "AngularConstraintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularConstraintType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularConstraintType_MetaData), NewProp_AngularConstraintType_MetaData) }; // 3789169275
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, TwistAxis), Z_Construct_UEnum_Engine_AnimPhysTwistAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistAxis_MetaData), NewProp_TwistAxis_MetaData) }; // 3220900926
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis = { "AngularTargetAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularTargetAxis), Z_Construct_UEnum_Engine_AnimPhysTwistAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularTargetAxis_MetaData), NewProp_AngularTargetAxis_MetaData) }; // 3220900926
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_ConeAngle = { "ConeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, ConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeAngle_MetaData), NewProp_ConeAngle_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularXAngle = { "AngularXAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularXAngle_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularXAngle_MetaData), NewProp_AngularXAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularYAngle = { "AngularYAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularYAngle_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularYAngle_MetaData), NewProp_AngularYAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularZAngle = { "AngularZAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularZAngle_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularZAngle_MetaData), NewProp_AngularZAngle_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMin = { "AngularLimitsMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularLimitsMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularLimitsMin_MetaData), NewProp_AngularLimitsMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMax = { "AngularLimitsMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularLimitsMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularLimitsMax_MetaData), NewProp_AngularLimitsMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTarget = { "AngularTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularTarget_MetaData), NewProp_AngularTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_ConeAngle,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularXAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularYAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularZAngle,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"AnimPhysConstraintSetup",
	Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::PropPointers),
	sizeof(FAnimPhysConstraintSetup),
	alignof(FAnimPhysConstraintSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysConstraintSetup()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.InnerSingleton, Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.InnerSingleton;
}
// End ScriptStruct FAnimPhysConstraintSetup

// Begin ScriptStruct FAnimPhysPlanarLimit
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit;
class UScriptStruct* FAnimPhysPlanarLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysPlanarLimit"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimPhysPlanarLimit>()
{
	return FAnimPhysPlanarLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBone_MetaData[] = {
		{ "Category", "PlanarLimit" },
		{ "Comment", "/** When using a driving bone, the plane transform will be relative to the bone transform */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "When using a driving bone, the plane transform will be relative to the bone transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTransform_MetaData[] = {
		{ "Category", "PlanarLimit" },
		{ "Comment", "/** Transform of the plane, this is either in component-space if no DrivinBone is specified\n\x09 *  or in bone-space if a driving bone is present.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Transform of the plane, this is either in component-space if no DrivinBone is specified\nor in bone-space if a driving bone is present." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysPlanarLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_DrivingBone = { "DrivingBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysPlanarLimit, DrivingBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingBone_MetaData), NewProp_DrivingBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_PlaneTransform = { "PlaneTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysPlanarLimit, PlaneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneTransform_MetaData), NewProp_PlaneTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_DrivingBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_PlaneTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"AnimPhysPlanarLimit",
	Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::PropPointers),
	sizeof(FAnimPhysPlanarLimit),
	alignof(FAnimPhysPlanarLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.InnerSingleton, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.InnerSingleton;
}
// End ScriptStruct FAnimPhysPlanarLimit

// Begin Enum ESphericalLimitType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESphericalLimitType;
static UEnum* ESphericalLimitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESphericalLimitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESphericalLimitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESphericalLimitType"));
	}
	return Z_Registration_Info_UEnum_ESphericalLimitType.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESphericalLimitType>()
{
	return ESphericalLimitType_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Whether spheres keep bodies inside, or outside of their shape */" },
		{ "Inner.Name", "ESphericalLimitType::Inner" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "Outer.Name", "ESphericalLimitType::Outer" },
		{ "ToolTip", "Whether spheres keep bodies inside, or outside of their shape" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESphericalLimitType::Inner", (int64)ESphericalLimitType::Inner },
		{ "ESphericalLimitType::Outer", (int64)ESphericalLimitType::Outer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"ESphericalLimitType",
	"ESphericalLimitType",
	Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType()
{
	if (!Z_Registration_Info_UEnum_ESphericalLimitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESphericalLimitType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESphericalLimitType.InnerSingleton;
}
// End Enum ESphericalLimitType

// Begin ScriptStruct FAnimPhysSphericalLimit
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit;
class UScriptStruct* FAnimPhysSphericalLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysSphericalLimit"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimPhysSphericalLimit>()
{
	return FAnimPhysSphericalLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBone_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Bone to attach the sphere to */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Bone to attach the sphere to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereLocalOffset_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Local offset for the sphere, if no driving bone is set this is in node space, otherwise bone space */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Local offset for the sphere, if no driving bone is set this is in node space, otherwise bone space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitRadius_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Radius of the sphere */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Radius of the sphere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Whether to lock bodies inside or outside of the sphere */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to lock bodies inside or outside of the sphere" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereLocalOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysSphericalLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_DrivingBone = { "DrivingBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysSphericalLimit, DrivingBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingBone_MetaData), NewProp_DrivingBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_SphereLocalOffset = { "SphereLocalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysSphericalLimit, SphereLocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereLocalOffset_MetaData), NewProp_SphereLocalOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitRadius = { "LimitRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysSphericalLimit, LimitRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitRadius_MetaData), NewProp_LimitRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysSphericalLimit, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitType_MetaData), NewProp_LimitType_MetaData) }; // 1450718878
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_DrivingBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_SphereLocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"AnimPhysSphericalLimit",
	Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::PropPointers),
	sizeof(FAnimPhysSphericalLimit),
	alignof(FAnimPhysSphericalLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysSphericalLimit()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.InnerSingleton, Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.InnerSingleton;
}
// End ScriptStruct FAnimPhysSphericalLimit

// Begin ScriptStruct FAnimPhysBodyDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition;
class UScriptStruct* FAnimPhysBodyDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysBodyDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimPhysBodyDefinition>()
{
	return FAnimPhysBodyDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundBone_MetaData[] = {
		{ "Category", "PhysicsBodyDefinition" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtents_MetaData[] = {
		{ "Category", "PhysicsBodyDefinition" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Extents of the box to use for simulation */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Extents of the box to use for simulation" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalJointOffset_MetaData[] = {
		{ "Category", "PhysicsBodyDefinition" },
		{ "Comment", "/** Vector relative to the body being simulated to attach the constraint to */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Vector relative to the body being simulated to attach the constraint to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Data describing the constraints we will apply to the body */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Data describing the constraints we will apply to the body" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Resolution method for planar limits */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Resolution method for planar limits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionRadius_MetaData[] = {
		{ "Category", "PhysicsBodyDefinition" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Radius to use if CollisionType is set to CustomSphere */" },
		{ "EditCondition", "CollisionType == AnimPhysCollisionType::CustomSphere" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Radius to use if CollisionType is set to CustomSphere" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalJointOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintSetup;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereCollisionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysBodyDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoundBone = { "BoundBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysBodyDefinition, BoundBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundBone_MetaData), NewProp_BoundBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoxExtents = { "BoxExtents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysBodyDefinition, BoxExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxExtents_MetaData), NewProp_BoxExtents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_LocalJointOffset = { "LocalJointOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysBodyDefinition, LocalJointOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalJointOffset_MetaData), NewProp_LocalJointOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysBodyDefinition, ConstraintSetup), Z_Construct_UScriptStruct_FAnimPhysConstraintSetup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintSetup_MetaData), NewProp_ConstraintSetup_MetaData) }; // 2310014313
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysBodyDefinition, CollisionType), Z_Construct_UEnum_Engine_AnimPhysCollisionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 3797180914
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_SphereCollisionRadius = { "SphereCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimPhysBodyDefinition, SphereCollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollisionRadius_MetaData), NewProp_SphereCollisionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoundBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoxExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_LocalJointOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_ConstraintSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_SphereCollisionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"AnimPhysBodyDefinition",
	Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::PropPointers),
	sizeof(FAnimPhysBodyDefinition),
	alignof(FAnimPhysBodyDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysBodyDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.InnerSingleton, Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.InnerSingleton;
}
// End ScriptStruct FAnimPhysBodyDefinition

// Begin ScriptStruct FAnimNode_AnimDynamics
static_assert(std::is_polymorphic<FAnimNode_AnimDynamics>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_AnimDynamics cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics;
class UScriptStruct* FAnimNode_AnimDynamics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_AnimDynamics"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_AnimDynamics>()
{
	return FAnimNode_AnimDynamics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDampingOverride_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/**\n\x09* Overridden linear damping value. The default is 0.7. Values below 0.7 won't have an effect.\n\x09*/" },
		{ "DisplayAfter", "NumSolverIterationsPostUpdate" },
		{ "EditCondition", "bOverrideLinearDamping" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Overridden linear damping value. The default is 0.7. Values below 0.7 won't have an effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDampingOverride_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/**\n\x09 * Overridden angular damping value. The default is 0.7. Values below 0.7 won't have an effect.\n\x09 */" },
		{ "DisplayAfter", "LinearDampingOverride" },
		{ "EditCondition", "bOverrideAngularDamping" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Overridden angular damping value. The default is 0.7. Values below 0.7 won't have an effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeSpaceBone_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** When in BoneRelative sim space, the simulation will use this bone as the origin */" },
		{ "DisplayAfter", "SimulationSpace" },
		{ "EditCondition", "SimulationSpace == AnimPhysSimSpaceType::BoneRelative" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "When in BoneRelative sim space, the simulation will use this bone as the origin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundBone_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** The bone to attach the physics body to, if bChain is true this is the top of the chain */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "The bone to attach the physics body to, if bChain is true this is the top of the chain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainEnd_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** If bChain is true this is the bottom of the chain, otherwise ignored */" },
		{ "DisplayAfter", "BoundBone" },
		{ "EditCondition", "bChain" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If bChain is true this is the bottom of the chain, otherwise ignored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsBodyDefinitions_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "DisplayAfter", "ChainEnd" },
		{ "DisplayName", "Body Definitions" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Scale for gravity, higher values increase forces due to gravity */" },
		{ "DisplayAfter", "bGravityOverrideInSimSpace" },
		{ "EditCondition", "!bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scale for gravity, higher values increase forces due to gravity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityOverride_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Gravity Override Value */" },
		{ "DisplayAfter", "bUseGravityOverride" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Gravity Override Value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearSpringConstant_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** \n\x09 * Spring constant to use when calculating linear springs, higher values mean a stronger spring.\n\x09 * You need to enable the Linear Spring checkbox for this to have an effect.\n\x09 */" },
		{ "DisplayAfter", "AngularSpringConstant" },
		{ "EditCondition", "bLinearSpring" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Spring constant to use when calculating linear springs, higher values mean a stronger spring.\nYou need to enable the Linear Spring checkbox for this to have an effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularSpringConstant_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** \n\x09 * Spring constant to use when calculating angular springs, higher values mean a stronger spring.\n\x09 * You need to enable the Angular Spring checkbox for this to have an effect.\n\x09 * Note: Make sure to also set the Angular Target Axis and Angular Target in the Constraint Setup for this to have an effect.\n\x09 */" },
		{ "DisplayAfter", "PhysicsBodyDefinitions" },
		{ "EditCondition", "bAngularSpring" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Spring constant to use when calculating angular springs, higher values mean a stronger spring.\nYou need to enable the Angular Spring checkbox for this to have an effect.\nNote: Make sure to also set the Angular Target Axis and Angular Target in the Constraint Setup for this to have an effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindScale_MetaData[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Scale to apply to calculated wind velocities in the solver */" },
		{ "DisplayAfter", "bEnableWind" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Scale to apply to calculated wind velocities in the solver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearAccScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearVelScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentAppliedLinearAccClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularBiasOverride_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Overridden angular bias value\n\x09 *  Angular bias is essentially a twist reduction for chain forces and defaults to a value to keep chains stability\n\x09*  in check. When using single-body systems sometimes angular forces will look like they are \"catching-up\" with\n\x09*  the mesh, if that's the case override this and push it towards 1.0f until it settles correctly\n\x09*/" },
		{ "DisplayAfter", "AngularDampingOverride" },
		{ "EditCondition", "bOverrideAngularBias" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Overridden angular bias value\nAngular bias is essentially a twist reduction for chain forces and defaults to a value to keep chains stability\nin check. When using single-body systems sometimes angular forces will look like they are \"catching-up\" with\nthe mesh, if that's the case override this and push it towards 1.0f until it settles correctly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSolverIterationsPreUpdate_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Number of update passes on the linear and angular limits before we solve the position of the bodies recommended to be four times the value of NumSolverIterationsPostUpdate */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Number of update passes on the linear and angular limits before we solve the position of the bodies recommended to be four times the value of NumSolverIterationsPostUpdate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSolverIterationsPostUpdate_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Number of update passes on the linear and angular limits after we solve the position of the bodies, recommended to be around a quarter of NumSolverIterationsPreUpdate */" },
		{ "DisplayAfter", "NumSolverIterationsPreUpdate" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Number of update passes on the linear and angular limits after we solve the position of the bodies, recommended to be around a quarter of NumSolverIterationsPreUpdate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** List of available spherical limits for this node */" },
		{ "DisplayAfter", "bUseSphericalLimits" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "List of available spherical limits for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForce_MetaData[] = {
		{ "Category", "Forces" },
		{ "Comment", "/** An external force to apply to all bodies in the simulation when ticked, specified in world space */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "An external force to apply to all bodies in the simulation when ticked, specified in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[] = {
		{ "Category", "PlanarLimit" },
		{ "Comment", "/** List of available planar limits for this node */" },
		{ "DisplayAfter", "bUsePlanarLimit" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "List of available planar limits for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** The space used to run the simulation */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The space used to run the simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSphericalLimits_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Whether to evaluate spherical limits */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to evaluate spherical limits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlanarLimit_MetaData[] = {
		{ "Category", "PlanarLimit" },
		{ "Comment", "/** Whether to evaluate planar limits */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to evaluate planar limits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoUpdate_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true we will perform physics update, otherwise skip - allows visualization of the initial state of the bodies */" },
		{ "DisplayAfter", "bDoEval" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true we will perform physics update, otherwise skip - allows visualization of the initial state of the bodies" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoEval_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true we will perform bone transform evaluation, otherwise skip - allows visualization of the initial anim state compared to the physics sim */" },
		{ "DisplayAfter", "AngularBiasOverride" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true we will perform bone transform evaluation, otherwise skip - allows visualization of the initial anim state compared to the physics sim" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLinearDamping_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true, the override value will be used for linear damping */" },
		{ "DisplayAfter", "AngularSpringConstraint" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true, the override value will be used for linear damping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAngularBias_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true, the override value will be used for the angular bias for bodies in this node. \n\x09 *  Angular bias is essentially a twist reduction for chain forces and defaults to a value to keep chains stability\n\x09 *  in check. When using single-body systems sometimes angular forces will look like they are \"catching-up\" with\n\x09 *  the mesh, if that's the case override this and push it towards 1.0f until it settles correctly\n\x09 */" },
		{ "DisplayAfter", "AngularDampingOverride" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true, the override value will be used for the angular bias for bodies in this node.\nAngular bias is essentially a twist reduction for chain forces and defaults to a value to keep chains stability\nin check. When using single-body systems sometimes angular forces will look like they are \"catching-up\" with\nthe mesh, if that's the case override this and push it towards 1.0f until it settles correctly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAngularDamping_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true, the override value will be used for angular damping */" },
		{ "DisplayAfter", "LinearDampingOverride" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true, the override value will be used for angular damping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWind_MetaData[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Whether or not wind is enabled for the bodies in this simulation */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether or not wind is enabled for the bodies in this simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Use gravity override value vs gravity scale */" },
		{ "DisplayAfter", "LinearSpringConstant" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Use gravity override value vs gravity scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGravityOverrideInSimSpace_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true the gravity override value is defined in simulation space, by default it is in world space */" },
		{ "DisplayAfter", "GravityOverride" },
		{ "DisplayName", "Gravity Override In Sim Space" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true the gravity override value is defined in simulation space, by default it is in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearSpring_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true the body will attempt to spring back to its initial position */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true the body will attempt to spring back to its initial position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularSpring_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true the body will attempt to align itself with the specified angular target */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true the body will attempt to align itself with the specified angular target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChain_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Set to true to use the solver to simulate a connected chain */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Set to true to use the solver to simulate a connected chain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetingSettings_MetaData[] = {
		{ "Category", "Retargeting" },
		{ "Comment", "/** The settings for rotation retargeting */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "The settings for rotation retargeting" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtents_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalJointOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDampingOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDampingOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeSpaceBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChainEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsBodyDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicsBodyDefinitions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearSpringConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularSpringConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentLinearAccScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentLinearVelScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentAppliedLinearAccClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularBiasOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSolverIterationsPreUpdate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSolverIterationsPostUpdate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace;
	static void NewProp_bUseSphericalLimits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSphericalLimits;
	static void NewProp_bUsePlanarLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlanarLimit;
	static void NewProp_bDoUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoUpdate;
	static void NewProp_bDoEval_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoEval;
	static void NewProp_bOverrideLinearDamping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLinearDamping;
	static void NewProp_bOverrideAngularBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAngularBias;
	static void NewProp_bOverrideAngularDamping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAngularDamping;
	static void NewProp_bEnableWind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWind;
	static void NewProp_bUseGravityOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
	static void NewProp_bGravityOverrideInSimSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGravityOverrideInSimSpace;
	static void NewProp_bLinearSpring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearSpring;
	static void NewProp_bAngularSpring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularSpring;
	static void NewProp_bChain_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetingSettings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalJointOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintSetup;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereCollisionRadius;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AnimDynamics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearDampingOverride = { "LinearDampingOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, LinearDampingOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDampingOverride_MetaData), NewProp_LinearDampingOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularDampingOverride = { "AngularDampingOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, AngularDampingOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDampingOverride_MetaData), NewProp_AngularDampingOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RelativeSpaceBone = { "RelativeSpaceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, RelativeSpaceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeSpaceBone_MetaData), NewProp_RelativeSpaceBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoundBone = { "BoundBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, BoundBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundBone_MetaData), NewProp_BoundBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ChainEnd = { "ChainEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, ChainEnd), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainEnd_MetaData), NewProp_ChainEnd_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions_Inner = { "PhysicsBodyDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimPhysBodyDefinition, METADATA_PARAMS(0, nullptr) }; // 3518193896
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions = { "PhysicsBodyDefinitions", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, PhysicsBodyDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsBodyDefinitions_MetaData), NewProp_PhysicsBodyDefinitions_MetaData) }; // 3518193896
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityOverride_MetaData), NewProp_GravityOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearSpringConstant = { "LinearSpringConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, LinearSpringConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearSpringConstant_MetaData), NewProp_LinearSpringConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularSpringConstant = { "AngularSpringConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, AngularSpringConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularSpringConstant_MetaData), NewProp_AngularSpringConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_WindScale = { "WindScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, WindScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindScale_MetaData), NewProp_WindScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearAccScale = { "ComponentLinearAccScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, ComponentLinearAccScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentLinearAccScale_MetaData), NewProp_ComponentLinearAccScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearVelScale = { "ComponentLinearVelScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, ComponentLinearVelScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentLinearVelScale_MetaData), NewProp_ComponentLinearVelScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentAppliedLinearAccClamp = { "ComponentAppliedLinearAccClamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, ComponentAppliedLinearAccClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentAppliedLinearAccClamp_MetaData), NewProp_ComponentAppliedLinearAccClamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularBiasOverride = { "AngularBiasOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, AngularBiasOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularBiasOverride_MetaData), NewProp_AngularBiasOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPreUpdate = { "NumSolverIterationsPreUpdate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, NumSolverIterationsPreUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSolverIterationsPreUpdate_MetaData), NewProp_NumSolverIterationsPreUpdate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPostUpdate = { "NumSolverIterationsPostUpdate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, NumSolverIterationsPostUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSolverIterationsPostUpdate_MetaData), NewProp_NumSolverIterationsPostUpdate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimPhysSphericalLimit, METADATA_PARAMS(0, nullptr) }; // 47287648
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphericalLimits_MetaData), NewProp_SphericalLimits_MetaData) }; // 47287648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ExternalForce = { "ExternalForce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, ExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalForce_MetaData), NewProp_ExternalForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit, METADATA_PARAMS(0, nullptr) }; // 4096540128
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarLimits_MetaData), NewProp_PlanarLimits_MetaData) }; // 4096540128
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace = { "SimulationSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, SimulationSpace), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationSpace_MetaData), NewProp_SimulationSpace_MetaData) }; // 2171983699
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bUseSphericalLimits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits = { "bUseSphericalLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSphericalLimits_MetaData), NewProp_bUseSphericalLimits_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bUsePlanarLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit = { "bUsePlanarLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePlanarLimit_MetaData), NewProp_bUsePlanarLimit_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bDoUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate = { "bDoUpdate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoUpdate_MetaData), NewProp_bDoUpdate_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bDoEval = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval = { "bDoEval", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoEval_MetaData), NewProp_bDoEval_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bOverrideLinearDamping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping = { "bOverrideLinearDamping", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLinearDamping_MetaData), NewProp_bOverrideLinearDamping_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bOverrideAngularBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias = { "bOverrideAngularBias", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAngularBias_MetaData), NewProp_bOverrideAngularBias_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bOverrideAngularDamping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping = { "bOverrideAngularDamping", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAngularDamping_MetaData), NewProp_bOverrideAngularDamping_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bEnableWind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind = { "bEnableWind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWind_MetaData), NewProp_bEnableWind_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bUseGravityOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGravityOverride_MetaData), NewProp_bUseGravityOverride_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bGravityOverrideInSimSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace = { "bGravityOverrideInSimSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGravityOverrideInSimSpace_MetaData), NewProp_bGravityOverrideInSimSpace_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bLinearSpring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring = { "bLinearSpring", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearSpring_MetaData), NewProp_bLinearSpring_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bAngularSpring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring = { "bAngularSpring", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularSpring_MetaData), NewProp_bAngularSpring_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain_SetBit(void* Obj)
{
	((FAnimNode_AnimDynamics*)Obj)->bChain = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain = { "bChain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChain_MetaData), NewProp_bChain_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RetargetingSettings = { "RetargetingSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, RetargetingSettings), Z_Construct_UScriptStruct_FRotationRetargetingInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetingSettings_MetaData), NewProp_RetargetingSettings_MetaData) }; // 256756079
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoxExtents = { "BoxExtents", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, BoxExtents_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxExtents_MetaData), NewProp_BoxExtents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LocalJointOffset = { "LocalJointOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, LocalJointOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalJointOffset_MetaData), NewProp_LocalJointOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, ConstraintSetup_DEPRECATED), Z_Construct_UScriptStruct_FAnimPhysConstraintSetup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintSetup_MetaData), NewProp_ConstraintSetup_MetaData) }; // 2310014313
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, CollisionType_DEPRECATED), Z_Construct_UEnum_Engine_AnimPhysCollisionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 3797180914
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphereCollisionRadius = { "SphereCollisionRadius", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimDynamics, SphereCollisionRadius_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollisionRadius_MetaData), NewProp_SphereCollisionRadius_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearDampingOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularDampingOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RelativeSpaceBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoundBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ChainEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearSpringConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularSpringConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_WindScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearAccScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearVelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentAppliedLinearAccClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularBiasOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPreUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPostUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ExternalForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RetargetingSettings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoxExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LocalJointOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ConstraintSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphereCollisionRadius,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_AnimDynamics",
	Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::PropPointers),
	sizeof(FAnimNode_AnimDynamics),
	alignof(FAnimNode_AnimDynamics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamics()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.InnerSingleton;
}
// End ScriptStruct FAnimNode_AnimDynamics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ AnimPhysAngularConstraintType_StaticEnum, TEXT("AnimPhysAngularConstraintType"), &Z_Registration_Info_UEnum_AnimPhysAngularConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3789169275U) },
		{ AnimPhysLinearConstraintType_StaticEnum, TEXT("AnimPhysLinearConstraintType"), &Z_Registration_Info_UEnum_AnimPhysLinearConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2032831994U) },
		{ AnimPhysSimSpaceType_StaticEnum, TEXT("AnimPhysSimSpaceType"), &Z_Registration_Info_UEnum_AnimPhysSimSpaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2171983699U) },
		{ ESphericalLimitType_StaticEnum, TEXT("ESphericalLimitType"), &Z_Registration_Info_UEnum_ESphericalLimitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1450718878U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimPhysConstraintSetup::StaticStruct, Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewStructOps, TEXT("AnimPhysConstraintSetup"), &Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPhysConstraintSetup), 2310014313U) },
		{ FAnimPhysPlanarLimit::StaticStruct, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewStructOps, TEXT("AnimPhysPlanarLimit"), &Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPhysPlanarLimit), 4096540128U) },
		{ FAnimPhysSphericalLimit::StaticStruct, Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewStructOps, TEXT("AnimPhysSphericalLimit"), &Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPhysSphericalLimit), 47287648U) },
		{ FAnimPhysBodyDefinition::StaticStruct, Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewStructOps, TEXT("AnimPhysBodyDefinition"), &Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPhysBodyDefinition), 3518193896U) },
		{ FAnimNode_AnimDynamics::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewStructOps, TEXT("AnimNode_AnimDynamics"), &Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AnimDynamics), 965952229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_3518959554(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
