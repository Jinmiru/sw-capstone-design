// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseDriver.h"
#include "Runtime/AnimGraphRuntime/Public/RBF/RBFSolver.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseDriver() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseDriver();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseHandler();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTarget();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTransform();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFParams();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum EPoseDriverType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseDriverType;
static UEnum* EPoseDriverType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPoseDriverType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPoseDriverType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EPoseDriverType"));
	}
	return Z_Registration_Info_UEnum_EPoseDriverType.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EPoseDriverType>()
{
	return EPoseDriverType_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// Deprecated\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "SwingAndTwist.Name", "EPoseDriverType::SwingAndTwist" },
		{ "SwingOnly.Name", "EPoseDriverType::SwingOnly" },
		{ "ToolTip", "Deprecated" },
		{ "Translation.Name", "EPoseDriverType::Translation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPoseDriverType::SwingAndTwist", (int64)EPoseDriverType::SwingAndTwist },
		{ "EPoseDriverType::SwingOnly", (int64)EPoseDriverType::SwingOnly },
		{ "EPoseDriverType::Translation", (int64)EPoseDriverType::Translation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EPoseDriverType",
	"EPoseDriverType",
	Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType()
{
	if (!Z_Registration_Info_UEnum_EPoseDriverType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseDriverType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPoseDriverType.InnerSingleton;
}
// End Enum EPoseDriverType

// Begin Enum EPoseDriverSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseDriverSource;
static UEnum* EPoseDriverSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPoseDriverSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPoseDriverSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EPoseDriverSource"));
	}
	return Z_Registration_Info_UEnum_EPoseDriverSource.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EPoseDriverSource>()
{
	return EPoseDriverSource_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transform aspect used to drive interpolation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "Rotation.Comment", "/** Drive using rotation */" },
		{ "Rotation.Name", "EPoseDriverSource::Rotation" },
		{ "Rotation.ToolTip", "Drive using rotation" },
		{ "ToolTip", "Transform aspect used to drive interpolation" },
		{ "Translation.Comment", "/** Driver using translation */" },
		{ "Translation.Name", "EPoseDriverSource::Translation" },
		{ "Translation.ToolTip", "Driver using translation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPoseDriverSource::Rotation", (int64)EPoseDriverSource::Rotation },
		{ "EPoseDriverSource::Translation", (int64)EPoseDriverSource::Translation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EPoseDriverSource",
	"EPoseDriverSource",
	Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource()
{
	if (!Z_Registration_Info_UEnum_EPoseDriverSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseDriverSource.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPoseDriverSource.InnerSingleton;
}
// End Enum EPoseDriverSource

// Begin Enum EPoseDriverOutput
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseDriverOutput;
static UEnum* EPoseDriverOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPoseDriverOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPoseDriverOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EPoseDriverOutput"));
	}
	return Z_Registration_Info_UEnum_EPoseDriverOutput.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EPoseDriverOutput>()
{
	return EPoseDriverOutput_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Options for what PoseDriver should be driving */" },
		{ "DriveCurves.Comment", "/** Use the target's DrivenName to drive curves */" },
		{ "DriveCurves.Name", "EPoseDriverOutput::DriveCurves" },
		{ "DriveCurves.ToolTip", "Use the target's DrivenName to drive curves" },
		{ "DrivePoses.Comment", "/** Use target's DrivenName to drive poses from the assigned PoseAsset */" },
		{ "DrivePoses.Name", "EPoseDriverOutput::DrivePoses" },
		{ "DrivePoses.ToolTip", "Use target's DrivenName to drive poses from the assigned PoseAsset" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Options for what PoseDriver should be driving" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPoseDriverOutput::DrivePoses", (int64)EPoseDriverOutput::DrivePoses },
		{ "EPoseDriverOutput::DriveCurves", (int64)EPoseDriverOutput::DriveCurves },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EPoseDriverOutput",
	"EPoseDriverOutput",
	Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput()
{
	if (!Z_Registration_Info_UEnum_EPoseDriverOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseDriverOutput.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPoseDriverOutput.InnerSingleton;
}
// End Enum EPoseDriverOutput

// Begin ScriptStruct FPoseDriverTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseDriverTransform;
class UScriptStruct* FPoseDriverTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseDriverTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseDriverTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDriverTransform, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("PoseDriverTransform"));
	}
	return Z_Registration_Info_UScriptStruct_PoseDriverTransform.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FPoseDriverTransform>()
{
	return FPoseDriverTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPoseDriverTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Translation and rotation for a particular bone at a particular target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Translation and rotation for a particular bone at a particular target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTranslation_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Translation of this target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Translation of this target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Rotation of this target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Rotation of this target" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDriverTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation = { "TargetTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDriverTransform, TargetTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTranslation_MetaData), NewProp_TargetTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDriverTransform, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"PoseDriverTransform",
	Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::PropPointers),
	sizeof(FPoseDriverTransform),
	alignof(FPoseDriverTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTransform()
{
	if (!Z_Registration_Info_UScriptStruct_PoseDriverTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseDriverTransform.InnerSingleton, Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PoseDriverTransform.InnerSingleton;
}
// End ScriptStruct FPoseDriverTransform

// Begin ScriptStruct FPoseDriverTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseDriverTarget;
class UScriptStruct* FPoseDriverTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseDriverTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseDriverTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDriverTarget, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("PoseDriverTarget"));
	}
	return Z_Registration_Info_UScriptStruct_PoseDriverTarget.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FPoseDriverTarget>()
{
	return FPoseDriverTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPoseDriverTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about each target in the PoseDriver */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Information about each target in the PoseDriver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransforms_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Translation of this target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Translation of this target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Rotation of this target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Rotation of this target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetScale_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Scale applied to this target's function - a larger value will activate this target sooner */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Scale applied to this target's function - a larger value will activate this target sooner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMethod_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Override for the distance method to use for each target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Override for the distance method to use for each target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionType_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Override for the function method to use for each target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Override for the function method to use for each target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomCurve_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** If we should apply a custom curve mapping to how this target activates */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "If we should apply a custom curve mapping to how this target activates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Custom curve mapping to apply if bApplyCustomCurve is true */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Custom curve mapping to apply if bApplyCustomCurve is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivenName_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** \n\x09 *\x09Name of item to drive - depends on DriveOutput setting.  \n\x09 *\x09If DriveOutput is DrivePoses, this should be the name of a pose in the assigned PoseAsset\n\x09 *\x09If DriveOutput is DriveCurves, this is the name of the curve (morph target, material param etc) to drive\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Name of item to drive - depends on DriveOutput setting.\nIf DriveOutput is DrivePoses, this should be the name of a pose in the assigned PoseAsset\nIf DriveOutput is DriveCurves, this is the name of the curve (morph target, material param etc) to drive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHidden_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** If we should hide this pose from the UI */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "If we should hide this pose from the UI" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FunctionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FunctionType;
	static void NewProp_bApplyCustomCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCurve;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DrivenName;
	static void NewProp_bIsHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDriverTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_Inner = { "BoneTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseDriverTransform, METADATA_PARAMS(0, nullptr) }; // 1931975105
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms = { "BoneTransforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDriverTarget, BoneTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneTransforms_MetaData), NewProp_BoneTransforms_MetaData) }; // 1931975105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDriverTarget, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale = { "TargetScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDriverTarget, TargetScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetScale_MetaData), NewProp_TargetScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod = { "DistanceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDriverTarget, DistanceMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMethod_MetaData), NewProp_DistanceMethod_MetaData) }; // 3641168287
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType = { "FunctionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDriverTarget, FunctionType), Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionType_MetaData), NewProp_FunctionType_MetaData) }; // 3485299862
void Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_SetBit(void* Obj)
{
	((FPoseDriverTarget*)Obj)->bApplyCustomCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve = { "bApplyCustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseDriverTarget), &Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyCustomCurve_MetaData), NewProp_bApplyCustomCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDriverTarget, CustomCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCurve_MetaData), NewProp_CustomCurve_MetaData) }; // 1340883375
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName = { "DrivenName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseDriverTarget, DrivenName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivenName_MetaData), NewProp_DrivenName_MetaData) };
void Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden_SetBit(void* Obj)
{
	((FPoseDriverTarget*)Obj)->bIsHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden = { "bIsHidden", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseDriverTarget), &Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHidden_MetaData), NewProp_bIsHidden_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"PoseDriverTarget",
	Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::PropPointers),
	sizeof(FPoseDriverTarget),
	alignof(FPoseDriverTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTarget()
{
	if (!Z_Registration_Info_UScriptStruct_PoseDriverTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseDriverTarget.InnerSingleton, Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PoseDriverTarget.InnerSingleton;
}
// End ScriptStruct FPoseDriverTarget

// Begin ScriptStruct FAnimNode_PoseDriver
static_assert(std::is_polymorphic<FAnimNode_PoseDriver>() == std::is_polymorphic<FAnimNode_PoseHandler>(), "USTRUCT FAnimNode_PoseDriver cannot be polymorphic unless super FAnimNode_PoseHandler is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver;
class UScriptStruct* FAnimNode_PoseDriver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseDriver, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_PoseDriver"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_PoseDriver>()
{
	return FAnimNode_PoseDriver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** RBF based orientation driver */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "RBF based orientation driver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Bones to use for driving parameters based on their transform */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Bones to use for driving parameters based on their transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBones_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Bone to use for driving parameters based on its orientation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Bone to use for driving parameters based on its orientation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvalSpaceBone_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**\n\x09 *\x09Optional other bone space to use when reading SourceBone transform.\n\x09 *\x09If not specified, the local space of SourceBone will be used. (ie relative to parent bone)\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Optional other bone space to use when reading SourceBone transform.\nIf not specified, the local space of SourceBone will be used. (ie relative to parent bone)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvalFromRefPose_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**\n\x09 *\x09""Evaluate SourceBone transform relative from its Reference Pose.\n\x09 *  This is recommended when using Swing and Twist Angle as Distance Method, since the twist will be computed from RefPose.\n\x09 *\n\x09 *\x09If not specified, the local space of SourceBone will be used. (ie relative to parent bone)\n\x09 *  This mode won't work in conjunction with EvalSpaceBone;\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Evaluate SourceBone transform relative from its Reference Pose.\nThis is recommended when using Swing and Twist Angle as Distance Method, since the twist will be computed from RefPose.\n\nIf not specified, the local space of SourceBone will be used. (ie relative to parent bone)\nThis mode won't work in conjunction with EvalSpaceBone;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlyDriveBones_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** List of bones that will modified by this node. If no list is provided, all bones bones with a track in the PoseAsset will be modified */" },
		{ "EditCondition", "DriveOutput == EPoseDriverOutput::DrivePoses" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "List of bones that will modified by this node. If no list is provided, all bones bones with a track in the PoseAsset will be modified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseTargets_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Targets used to compare with current pose and drive morphs/poses */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Targets used to compare with current pose and drive morphs/poses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RBFParams_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Parameters used by RBF solver */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Parameters used by RBF solver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriveSource_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Which part of the transform is read */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Which part of the transform is read" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriveOutput_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Whether we should drive poses or curves */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Whether we should drive poses or curves" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[] = {
		{ "Comment", "// Deprecated\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Deprecated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialScaling_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoloDrivenOnly_MetaData[] = {
		{ "Comment", "/** Only solo the driven poses, and don't move the source joint(s) to match */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Only solo the driven poses, and don't move the source joint(s) to match" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreshold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreshold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvalSpaceBone;
	static void NewProp_bEvalFromRefPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalFromRefPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnlyDriveBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnlyDriveBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseTargets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RBFParams;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DriveSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DriveSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DriveOutput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DriveOutput;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TwistAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialScaling;
	static void NewProp_bSoloDrivenOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoloDrivenOnly;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseDriver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_Inner = { "SourceBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones = { "SourceBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, SourceBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBones_MetaData), NewProp_SourceBones_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone = { "EvalSpaceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, EvalSpaceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvalSpaceBone_MetaData), NewProp_EvalSpaceBone_MetaData) }; // 4218265988
void Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose_SetBit(void* Obj)
{
	((FAnimNode_PoseDriver*)Obj)->bEvalFromRefPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose = { "bEvalFromRefPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_PoseDriver), &Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvalFromRefPose_MetaData), NewProp_bEvalFromRefPose_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_Inner = { "OnlyDriveBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones = { "OnlyDriveBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, OnlyDriveBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlyDriveBones_MetaData), NewProp_OnlyDriveBones_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_Inner = { "PoseTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseDriverTarget, METADATA_PARAMS(0, nullptr) }; // 3871335775
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets = { "PoseTargets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, PoseTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseTargets_MetaData), NewProp_PoseTargets_MetaData) }; // 3871335775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams = { "RBFParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, RBFParams), Z_Construct_UScriptStruct_FRBFParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RBFParams_MetaData), NewProp_RBFParams_MetaData) }; // 1348379723
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource = { "DriveSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, DriveSource), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriveSource_MetaData), NewProp_DriveSource_MetaData) }; // 2338921297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput = { "DriveOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, DriveOutput), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriveOutput_MetaData), NewProp_DriveOutput_MetaData) }; // 3854024686
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, SourceBone_DEPRECATED), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBone_MetaData), NewProp_SourceBone_MetaData) }; // 4218265988
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, TwistAxis_DEPRECATED), Z_Construct_UEnum_Engine_EBoneAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistAxis_MetaData), NewProp_TwistAxis_MetaData) }; // 2106466025
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, Type_DEPRECATED), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 4272750527
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling = { "RadialScaling", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, RadialScaling_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialScaling_MetaData), NewProp_RadialScaling_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly_SetBit(void* Obj)
{
	((FAnimNode_PoseDriver*)Obj)->bSoloDrivenOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly = { "bSoloDrivenOnly", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_PoseDriver), &Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoloDrivenOnly_MetaData), NewProp_bSoloDrivenOnly_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseDriver, LODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODThreshold_MetaData), NewProp_LODThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_LODThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_PoseHandler,
	&NewStructOps,
	"AnimNode_PoseDriver",
	Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::PropPointers),
	sizeof(FAnimNode_PoseDriver),
	alignof(FAnimNode_PoseDriver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseDriver()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.InnerSingleton;
}
// End ScriptStruct FAnimNode_PoseDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPoseDriverType_StaticEnum, TEXT("EPoseDriverType"), &Z_Registration_Info_UEnum_EPoseDriverType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4272750527U) },
		{ EPoseDriverSource_StaticEnum, TEXT("EPoseDriverSource"), &Z_Registration_Info_UEnum_EPoseDriverSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2338921297U) },
		{ EPoseDriverOutput_StaticEnum, TEXT("EPoseDriverOutput"), &Z_Registration_Info_UEnum_EPoseDriverOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3854024686U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPoseDriverTransform::StaticStruct, Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewStructOps, TEXT("PoseDriverTransform"), &Z_Registration_Info_UScriptStruct_PoseDriverTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseDriverTransform), 1931975105U) },
		{ FPoseDriverTarget::StaticStruct, Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewStructOps, TEXT("PoseDriverTarget"), &Z_Registration_Info_UScriptStruct_PoseDriverTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseDriverTarget), 3871335775U) },
		{ FAnimNode_PoseDriver::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewStructOps, TEXT("AnimNode_PoseDriver"), &Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PoseDriver), 3283306957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_3941409599(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
