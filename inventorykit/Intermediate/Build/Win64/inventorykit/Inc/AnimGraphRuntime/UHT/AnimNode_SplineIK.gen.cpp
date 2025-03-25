// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_SplineIK.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SplineIK() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SplineIK();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSplineIKCachedBoneData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum ESplineBoneAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplineBoneAxis;
static UEnum* ESplineBoneAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESplineBoneAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESplineBoneAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESplineBoneAxis"));
	}
	return Z_Registration_Info_UEnum_ESplineBoneAxis.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESplineBoneAxis>()
{
	return ESplineBoneAxis_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** \n * The different axes we can align our bones to.\n * Note that the values are set to match up with EAxis (but without 'None')\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ESplineBoneAxis::None" },
		{ "ToolTip", "The different axes we can align our bones to.\nNote that the values are set to match up with EAxis (but without 'None')" },
		{ "X.Name", "ESplineBoneAxis::X" },
		{ "Y.Name", "ESplineBoneAxis::Y" },
		{ "Z.Name", "ESplineBoneAxis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESplineBoneAxis::None", (int64)ESplineBoneAxis::None },
		{ "ESplineBoneAxis::X", (int64)ESplineBoneAxis::X },
		{ "ESplineBoneAxis::Y", (int64)ESplineBoneAxis::Y },
		{ "ESplineBoneAxis::Z", (int64)ESplineBoneAxis::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"ESplineBoneAxis",
	"ESplineBoneAxis",
	Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis()
{
	if (!Z_Registration_Info_UEnum_ESplineBoneAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplineBoneAxis.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESplineBoneAxis.InnerSingleton;
}
// End Enum ESplineBoneAxis

// Begin ScriptStruct FSplineIKCachedBoneData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplineIKCachedBoneData;
class UScriptStruct* FSplineIKCachedBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplineIKCachedBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplineIKCachedBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineIKCachedBoneData, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("SplineIKCachedBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_SplineIKCachedBoneData.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FSplineIKCachedBoneData>()
{
	return FSplineIKCachedBoneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Data cached per bone in the chain */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Data cached per bone in the chain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Comment", "/** The bone we refer to */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "The bone we refer to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefSkeletonIndex_MetaData[] = {
		{ "Comment", "/** Index of the bone in the reference skeleton */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Index of the bone in the reference skeleton" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RefSkeletonIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineIKCachedBoneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineIKCachedBoneData, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) }; // 4218265988
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex = { "RefSkeletonIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineIKCachedBoneData, RefSkeletonIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefSkeletonIndex_MetaData), NewProp_RefSkeletonIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"SplineIKCachedBoneData",
	Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::PropPointers),
	sizeof(FSplineIKCachedBoneData),
	alignof(FSplineIKCachedBoneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSplineIKCachedBoneData()
{
	if (!Z_Registration_Info_UScriptStruct_SplineIKCachedBoneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplineIKCachedBoneData.InnerSingleton, Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SplineIKCachedBoneData.InnerSingleton;
}
// End ScriptStruct FSplineIKCachedBoneData

// Begin ScriptStruct FAnimNode_SplineIK
static_assert(std::is_polymorphic<FAnimNode_SplineIK>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_SplineIK cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SplineIK;
class UScriptStruct* FAnimNode_SplineIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SplineIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SplineIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SplineIK, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SplineIK"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SplineIK.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_SplineIK>()
{
	return FAnimNode_SplineIK::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Name of root bone from which the spline extends **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Name of root bone from which the spline extends *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Name of bone at the end of the spline chain. Bones after this will not be altered by the controller. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Name of bone at the end of the spline chain. Bones after this will not be altered by the controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneAxis_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Axis of the controlled bone (ie the direction of the spline) to use as the direction for the curve. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Axis of the controlled bone (ie the direction of the spline) to use as the direction for the curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateSpline_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** The number of points in the spline if we are specifying it directly */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "The number of points in the spline if we are specifying it directly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointCount_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The number of points in the spline if we are not auto-calculating */" },
		{ "EditCondition", "!bAutoCalculateSpline" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "The number of points in the spline if we are not auto-calculating" },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Category", "Parameters" },
		{ "Comment", "/** Transforms applied to spline points **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Transforms applied to spline points *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Overall roll of the spline, applied on top of other rotations along the direction of the spline */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Overall roll of the spline, applied on top of other rotations along the direction of the spline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistStart_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** The twist of the start bone. Twist is interpolated along the spline according to Twist Blend. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The twist of the start bone. Twist is interpolated along the spline according to Twist Blend." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistEnd_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** The twist of the end bone. Twist is interpolated along the spline according to Twist Blend. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The twist of the end bone. Twist is interpolated along the spline according to Twist Blend." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistBlend_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** How to interpolate twist along the length of the spline */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "How to interpolate twist along the length of the spline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stretch_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * The maximum stretch allowed when fitting bones to the spline. 0.0 means bones do not stretch their length,\n\x09 * 1.0 means bones stretch to the length of the spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The maximum stretch allowed when fitting bones to the spline. 0.0 means bones do not stretch their length,\n1.0 means bones stretch to the length of the spline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** The distance along the spline from the start from which bones are constrained */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The distance along the spline from the start from which bones are constrained" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndBone;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneAxis;
	static void NewProp_bAutoCalculateSpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateSpline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Roll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwistBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stretch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SplineIK>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, StartBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartBone_MetaData), NewProp_StartBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, EndBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndBone_MetaData), NewProp_EndBone_MetaData) }; // 4218265988
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis = { "BoneAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, BoneAxis), Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneAxis_MetaData), NewProp_BoneAxis_MetaData) }; // 3244771344
void Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_SetBit(void* Obj)
{
	((FAnimNode_SplineIK*)Obj)->bAutoCalculateSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline = { "bAutoCalculateSpline", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SplineIK), &Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCalculateSpline_MetaData), NewProp_bAutoCalculateSpline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount = { "PointCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, PointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointCount_MetaData), NewProp_PointCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, Roll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roll_MetaData), NewProp_Roll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart = { "TwistStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, TwistStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistStart_MetaData), NewProp_TwistStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd = { "TwistEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, TwistEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistEnd_MetaData), NewProp_TwistEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend = { "TwistBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, TwistBlend), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistBlend_MetaData), NewProp_TwistBlend_MetaData) }; // 879909083
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch = { "Stretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, Stretch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stretch_MetaData), NewProp_Stretch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SplineIK, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_SplineIK",
	Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::PropPointers),
	sizeof(FAnimNode_SplineIK),
	alignof(FAnimNode_SplineIK),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SplineIK()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SplineIK.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SplineIK.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SplineIK.InnerSingleton;
}
// End ScriptStruct FAnimNode_SplineIK

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESplineBoneAxis_StaticEnum, TEXT("ESplineBoneAxis"), &Z_Registration_Info_UEnum_ESplineBoneAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3244771344U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSplineIKCachedBoneData::StaticStruct, Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewStructOps, TEXT("SplineIKCachedBoneData"), &Z_Registration_Info_UScriptStruct_SplineIKCachedBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplineIKCachedBoneData), 1016740942U) },
		{ FAnimNode_SplineIK::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewStructOps, TEXT("AnimNode_SplineIK"), &Z_Registration_Info_UScriptStruct_AnimNode_SplineIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SplineIK), 3002889465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h_1343543656(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
