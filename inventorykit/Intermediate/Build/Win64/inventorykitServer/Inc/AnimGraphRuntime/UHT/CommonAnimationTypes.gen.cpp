// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/CommonAnimationTypes.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonAnimationTypes() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRotationRetargetingInfo();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum EEasingFuncType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEasingFuncType;
static UEnum* EEasingFuncType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEasingFuncType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEasingFuncType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EEasingFuncType"));
	}
	return Z_Registration_Info_UEnum_EEasingFuncType.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EEasingFuncType>()
{
	return EEasingFuncType_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CircularIn.Comment", "// Circular easing (only in)\n" },
		{ "CircularIn.Name", "EEasingFuncType::CircularIn" },
		{ "CircularIn.ToolTip", "Circular easing (only in)" },
		{ "CircularInOut.Comment", "// Circular easing (in and out)\n" },
		{ "CircularInOut.Name", "EEasingFuncType::CircularInOut" },
		{ "CircularInOut.ToolTip", "Circular easing (in and out)" },
		{ "CircularOut.Comment", "// Circular easing (only out)\n" },
		{ "CircularOut.Name", "EEasingFuncType::CircularOut" },
		{ "CircularOut.ToolTip", "Circular easing (only out)" },
		{ "Comment", "/**\n *\x09""An easing type defining how to ease float values.\n */" },
		{ "Cubic.Comment", "// Cubic version of the value (only in)\n" },
		{ "Cubic.Name", "EEasingFuncType::Cubic" },
		{ "Cubic.ToolTip", "Cubic version of the value (only in)" },
		{ "CubicInOut.Comment", "// Cubic version of the value (in and out)\n" },
		{ "CubicInOut.Name", "EEasingFuncType::CubicInOut" },
		{ "CubicInOut.ToolTip", "Cubic version of the value (in and out)" },
		{ "CustomCurve.Comment", "// Custom - based on an optional Curve\n" },
		{ "CustomCurve.Name", "EEasingFuncType::CustomCurve" },
		{ "CustomCurve.ToolTip", "Custom - based on an optional Curve" },
		{ "ExpIn.Comment", "// Exponential easing (only in)\n" },
		{ "ExpIn.Name", "EEasingFuncType::ExpIn" },
		{ "ExpIn.ToolTip", "Exponential easing (only in)" },
		{ "ExpInOut.Comment", "// Exponential easing (in and out)\n" },
		{ "ExpInOut.Name", "EEasingFuncType::ExpInOut" },
		{ "ExpInOut.ToolTip", "Exponential easing (in and out)" },
		{ "ExpOut.Comment", "// Exponential easing (only out)\n" },
		{ "ExpOut.Name", "EEasingFuncType::ExpOut" },
		{ "ExpOut.ToolTip", "Exponential easing (only out)" },
		{ "HermiteCubic.Comment", "// Easing using a cubic hermite function\n" },
		{ "HermiteCubic.Name", "EEasingFuncType::HermiteCubic" },
		{ "HermiteCubic.ToolTip", "Easing using a cubic hermite function" },
		{ "Linear.Comment", "// Linear easing (no change to the value)\n" },
		{ "Linear.Name", "EEasingFuncType::Linear" },
		{ "Linear.ToolTip", "Linear easing (no change to the value)" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "QuadraticInOut.Comment", "// Quadratic version of the value (in and out)\n" },
		{ "QuadraticInOut.Name", "EEasingFuncType::QuadraticInOut" },
		{ "QuadraticInOut.ToolTip", "Quadratic version of the value (in and out)" },
		{ "QuarticInOut.Comment", "// Quartic version of the value (in and out)\n" },
		{ "QuarticInOut.Name", "EEasingFuncType::QuarticInOut" },
		{ "QuarticInOut.ToolTip", "Quartic version of the value (in and out)" },
		{ "QuinticInOut.Comment", "// Quintic version of the value (in and out)\n" },
		{ "QuinticInOut.Name", "EEasingFuncType::QuinticInOut" },
		{ "QuinticInOut.ToolTip", "Quintic version of the value (in and out)" },
		{ "Sinusoidal.Comment", "// Easing using a sinus function\n" },
		{ "Sinusoidal.Name", "EEasingFuncType::Sinusoidal" },
		{ "Sinusoidal.ToolTip", "Easing using a sinus function" },
		{ "ToolTip", "An easing type defining how to ease float values." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEasingFuncType::Linear", (int64)EEasingFuncType::Linear },
		{ "EEasingFuncType::Sinusoidal", (int64)EEasingFuncType::Sinusoidal },
		{ "EEasingFuncType::Cubic", (int64)EEasingFuncType::Cubic },
		{ "EEasingFuncType::QuadraticInOut", (int64)EEasingFuncType::QuadraticInOut },
		{ "EEasingFuncType::CubicInOut", (int64)EEasingFuncType::CubicInOut },
		{ "EEasingFuncType::HermiteCubic", (int64)EEasingFuncType::HermiteCubic },
		{ "EEasingFuncType::QuarticInOut", (int64)EEasingFuncType::QuarticInOut },
		{ "EEasingFuncType::QuinticInOut", (int64)EEasingFuncType::QuinticInOut },
		{ "EEasingFuncType::CircularIn", (int64)EEasingFuncType::CircularIn },
		{ "EEasingFuncType::CircularOut", (int64)EEasingFuncType::CircularOut },
		{ "EEasingFuncType::CircularInOut", (int64)EEasingFuncType::CircularInOut },
		{ "EEasingFuncType::ExpIn", (int64)EEasingFuncType::ExpIn },
		{ "EEasingFuncType::ExpOut", (int64)EEasingFuncType::ExpOut },
		{ "EEasingFuncType::ExpInOut", (int64)EEasingFuncType::ExpInOut },
		{ "EEasingFuncType::CustomCurve", (int64)EEasingFuncType::CustomCurve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EEasingFuncType",
	"EEasingFuncType",
	Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType()
{
	if (!Z_Registration_Info_UEnum_EEasingFuncType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEasingFuncType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEasingFuncType.InnerSingleton;
}
// End Enum EEasingFuncType

// Begin Enum ERotationComponent
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotationComponent;
static UEnum* ERotationComponent_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERotationComponent.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERotationComponent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERotationComponent"));
	}
	return Z_Registration_Info_UEnum_ERotationComponent.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERotationComponent>()
{
	return ERotationComponent_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// A rotational component. This is used for retargeting, for example.\n" },
		{ "EulerX.Comment", "// Using the X component of the Euler rotation\n" },
		{ "EulerX.Name", "ERotationComponent::EulerX" },
		{ "EulerX.ToolTip", "Using the X component of the Euler rotation" },
		{ "EulerY.Comment", "// Using the Y component of the Euler rotation\n" },
		{ "EulerY.Name", "ERotationComponent::EulerY" },
		{ "EulerY.ToolTip", "Using the Y component of the Euler rotation" },
		{ "EulerZ.Comment", "// Using the Z component of the Euler rotation\n" },
		{ "EulerZ.Name", "ERotationComponent::EulerZ" },
		{ "EulerZ.ToolTip", "Using the Z component of the Euler rotation" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "QuaternionAngle.Comment", "// Using the angle of the quaternion\n" },
		{ "QuaternionAngle.Name", "ERotationComponent::QuaternionAngle" },
		{ "QuaternionAngle.ToolTip", "Using the angle of the quaternion" },
		{ "SwingAngle.Comment", "// Using the angle of the swing quaternion\n" },
		{ "SwingAngle.Name", "ERotationComponent::SwingAngle" },
		{ "SwingAngle.ToolTip", "Using the angle of the swing quaternion" },
		{ "ToolTip", "A rotational component. This is used for retargeting, for example." },
		{ "TwistAngle.Comment", "// Using the angle of the twist quaternion\n" },
		{ "TwistAngle.Name", "ERotationComponent::TwistAngle" },
		{ "TwistAngle.ToolTip", "Using the angle of the twist quaternion" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERotationComponent::EulerX", (int64)ERotationComponent::EulerX },
		{ "ERotationComponent::EulerY", (int64)ERotationComponent::EulerY },
		{ "ERotationComponent::EulerZ", (int64)ERotationComponent::EulerZ },
		{ "ERotationComponent::QuaternionAngle", (int64)ERotationComponent::QuaternionAngle },
		{ "ERotationComponent::SwingAngle", (int64)ERotationComponent::SwingAngle },
		{ "ERotationComponent::TwistAngle", (int64)ERotationComponent::TwistAngle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"ERotationComponent",
	"ERotationComponent",
	Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent()
{
	if (!Z_Registration_Info_UEnum_ERotationComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotationComponent.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERotationComponent.InnerSingleton;
}
// End Enum ERotationComponent

// Begin ScriptStruct FRotationRetargetingInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotationRetargetingInfo;
class UScriptStruct* FRotationRetargetingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotationRetargetingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotationRetargetingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationRetargetingInfo, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RotationRetargetingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RotationRetargetingInfo.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRotationRetargetingInfo>()
{
	return FRotationRetargetingInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09The FRotationRetargetingInfo is used to provide all of the \n *\x09settings required to perform rotational retargeting on a single\n *\x09transform.\n */" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The FRotationRetargetingInfo is used to provide all of the\nsettings required to perform rotational retargeting on a single\ntransform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// Set to true this enables retargeting\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "Set to true this enables retargeting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The source transform of the frame of reference. The rotation is made relative to this space\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The source transform of the frame of reference. The rotation is made relative to this space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The target transform to project the rotation. In most cases this is the same as Source\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The target transform to project the rotation. In most cases this is the same as Source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationComponent_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The rotation component to perform retargeting with\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The rotation component to perform retargeting with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// In case the rotation component is SwingAngle or TwistAngle this vector is used as the twist axis\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "In case the rotation component is SwingAngle or TwistAngle this vector is used as the twist axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAbsoluteAngle_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// If set to true the angle will be always positive, thus resulting in mirrored rotation both ways\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "If set to true the angle will be always positive, thus resulting in mirrored rotation both ways" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMinimum_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The minimum value of the source angle in degrees\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The minimum value of the source angle in degrees" },
		{ "UIMax", "90.0" },
		{ "UIMin", "-90.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaximum_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The maximum value of the source angle in degrees\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The maximum value of the source angle in degrees" },
		{ "UIMax", "90.0" },
		{ "UIMin", "-90.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMinimum_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The minimum value of the target angle in degrees (can be the same as SourceMinimum)\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The minimum value of the target angle in degrees (can be the same as SourceMinimum)" },
		{ "UIMax", "90.0" },
		{ "UIMin", "-90.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMaximum_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The target value of the target angle in degrees (can be the same as SourceMaximum)\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The target value of the target angle in degrees (can be the same as SourceMaximum)" },
		{ "UIMax", "90.0" },
		{ "UIMin", "-90.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EasingType_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The easing to use - pick linear if you don't want to apply any easing\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The easing to use - pick linear if you don't want to apply any easing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "/** Custom curve mapping to apply if bApplyCustomCurve is true */" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "Custom curve mapping to apply if bApplyCustomCurve is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipEasing_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// If set to true the interpolation value for the easing will be flipped (1.0 - Value)\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "If set to true the interpolation value for the easing will be flipped (1.0 - Value)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EasingWeight_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// The amount of easing to apply (value should be 0.0 to 1.0)\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "The amount of easing to apply (value should be 0.0 to 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClamp_MetaData[] = {
		{ "Category", "FRotationRetargetingInfo" },
		{ "Comment", "// If set to true the value for the easing will be clamped between 0.0 and 1.0\n" },
		{ "ModuleRelativePath", "Public/CommonAnimationTypes.h" },
		{ "ToolTip", "If set to true the value for the easing will be clamped between 0.0 and 1.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationComponent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
	static void NewProp_bUseAbsoluteAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbsoluteAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceMinimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceMaximum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMinimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMaximum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EasingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EasingType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCurve;
	static void NewProp_bFlipEasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipEasing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EasingWeight;
	static void NewProp_bClamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationRetargetingInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRotationRetargetingInfo*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRotationRetargetingInfo), &Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, Source), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, Target), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent = { "RotationComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, RotationComponent), Z_Construct_UEnum_AnimGraphRuntime_ERotationComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationComponent_MetaData), NewProp_RotationComponent_MetaData) }; // 3591768633
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistAxis_MetaData), NewProp_TwistAxis_MetaData) };
void Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle_SetBit(void* Obj)
{
	((FRotationRetargetingInfo*)Obj)->bUseAbsoluteAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle = { "bUseAbsoluteAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRotationRetargetingInfo), &Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAbsoluteAngle_MetaData), NewProp_bUseAbsoluteAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMinimum = { "SourceMinimum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, SourceMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMinimum_MetaData), NewProp_SourceMinimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMaximum = { "SourceMaximum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, SourceMaximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMaximum_MetaData), NewProp_SourceMaximum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMinimum = { "TargetMinimum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, TargetMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMinimum_MetaData), NewProp_TargetMinimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMaximum = { "TargetMaximum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, TargetMaximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMaximum_MetaData), NewProp_TargetMaximum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType = { "EasingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, EasingType), Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EasingType_MetaData), NewProp_EasingType_MetaData) }; // 3890105622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, CustomCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCurve_MetaData), NewProp_CustomCurve_MetaData) }; // 762678829
void Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing_SetBit(void* Obj)
{
	((FRotationRetargetingInfo*)Obj)->bFlipEasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing = { "bFlipEasing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRotationRetargetingInfo), &Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipEasing_MetaData), NewProp_bFlipEasing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingWeight = { "EasingWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRetargetingInfo, EasingWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EasingWeight_MetaData), NewProp_EasingWeight_MetaData) };
void Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp_SetBit(void* Obj)
{
	((FRotationRetargetingInfo*)Obj)->bClamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp = { "bClamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRotationRetargetingInfo), &Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClamp_MetaData), NewProp_bClamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_RotationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TwistAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bUseAbsoluteAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_SourceMaximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_TargetMaximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_CustomCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bFlipEasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_EasingWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewProp_bClamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"RotationRetargetingInfo",
	Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::PropPointers),
	sizeof(FRotationRetargetingInfo),
	alignof(FRotationRetargetingInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotationRetargetingInfo()
{
	if (!Z_Registration_Info_UScriptStruct_RotationRetargetingInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotationRetargetingInfo.InnerSingleton, Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RotationRetargetingInfo.InnerSingleton;
}
// End ScriptStruct FRotationRetargetingInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_CommonAnimationTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEasingFuncType_StaticEnum, TEXT("EEasingFuncType"), &Z_Registration_Info_UEnum_EEasingFuncType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3890105622U) },
		{ ERotationComponent_StaticEnum, TEXT("ERotationComponent"), &Z_Registration_Info_UEnum_ERotationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3591768633U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRotationRetargetingInfo::StaticStruct, Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics::NewStructOps, TEXT("RotationRetargetingInfo"), &Z_Registration_Info_UScriptStruct_RotationRetargetingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotationRetargetingInfo), 256756079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_CommonAnimationTypes_h_491116473(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_CommonAnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_CommonAnimationTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_CommonAnimationTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_CommonAnimationTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
