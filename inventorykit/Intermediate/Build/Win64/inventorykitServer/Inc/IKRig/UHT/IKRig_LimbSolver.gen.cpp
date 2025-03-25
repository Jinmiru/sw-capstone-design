// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Rig/Solvers/IKRig_LimbSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRig_LimbSolver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_LimbEffector();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_LimbEffector_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_LimbSolver();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_LimbSolver_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Class UIKRig_LimbEffector
void UIKRig_LimbEffector::StaticRegisterNativesUIKRig_LimbEffector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_LimbEffector);
UClass* Z_Construct_UClass_UIKRig_LimbEffector_NoRegister()
{
	return UIKRig_LimbEffector::StaticClass();
}
struct Z_Construct_UClass_UIKRig_LimbEffector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[] = {
		{ "Category", "Limb IK Effector" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Limb IK Effector" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_LimbEffector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbEffector, GoalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalName_MetaData), NewProp_GoalName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbEffector, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_LimbEffector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_GoalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbEffector_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbEffector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRig_LimbEffector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbEffector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_LimbEffector_Statics::ClassParams = {
	&UIKRig_LimbEffector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRig_LimbEffector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbEffector_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbEffector_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRig_LimbEffector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRig_LimbEffector()
{
	if (!Z_Registration_Info_UClass_UIKRig_LimbEffector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_LimbEffector.OuterSingleton, Z_Construct_UClass_UIKRig_LimbEffector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRig_LimbEffector.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRig_LimbEffector>()
{
	return UIKRig_LimbEffector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_LimbEffector);
UIKRig_LimbEffector::~UIKRig_LimbEffector() {}
// End Class UIKRig_LimbEffector

// Begin Class UIKRig_LimbSolver
void UIKRig_LimbSolver::StaticRegisterNativesUIKRig_LimbSolver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_LimbSolver);
UClass* Z_Construct_UClass_UIKRig_LimbSolver_NoRegister()
{
	return UIKRig_LimbSolver::StaticClass();
}
struct Z_Construct_UClass_UIKRig_LimbSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootName_MetaData[] = {
		{ "Category", "Limb IK Settings" },
		{ "DisplayName", "Root Bone" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachPrecision_MetaData[] = {
		{ "Category", "Limb IK Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Precision (distance to the target) */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Precision (distance to the target)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HingeRotationAxis_MetaData[] = {
		{ "Category", "Limb IK Settings|Two Bones" },
		{ "Comment", "/** Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot). */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of Max Iterations to reach the target */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Number of Max Iterations to reach the target" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLimit_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK|Limits" },
		{ "Comment", "/** Enable/Disable rotational limits */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Enable/Disable rotational limits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRotationAngle_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK|Limits" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\n\x09* and forces at least this angle between Parent and Child bone. */" },
		{ "EditCondition", "bEnableLimit" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\nand forces at least this angle between Parent and Child bone." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAveragePull_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK|Pull Averaging" },
		{ "Comment", "/** Pull averaging only has a visual impact when we have more than 2 bones (3 links). */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Pull averaging only has a visual impact when we have more than 2 bones (3 links)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullDistribution_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK|Pull Averaging" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Re-position limb to distribute pull: 0 = foot, 0.5 = balanced, 1.f = hip */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Re-position limb to distribute pull: 0 = foot, 0.5 = balanced, 1.f = hip" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachStepAlpha_MetaData[] = {
		{ "Category", "Limb IK Settings|FABRIK|Pull Averaging" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Move end effector towards target. If we are compressing the chain, limit displacement.*/" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Move end effector towards target. If we are compressing the chain, limit displacement." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTwistCorrection_MetaData[] = {
		{ "Category", "Limb IK Settings|Twist" },
		{ "Comment", "/** Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndBoneForwardAxis_MetaData[] = {
		{ "Category", "Limb IK Settings|Twist" },
		{ "Comment", "/** Forward Axis for Foot bone. */" },
		{ "EditCondition", "bEnableTwistCorrection" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
		{ "ToolTip", "Forward Axis for Foot bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_LimbSolver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachPrecision;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HingeRotationAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static void NewProp_bEnableLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRotationAngle;
	static void NewProp_bAveragePull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAveragePull;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PullDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachStepAlpha;
	static void NewProp_bEnableTwistCorrection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistCorrection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndBoneForwardAxis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Effector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_LimbSolver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_RootName = { "RootName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbSolver, RootName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootName_MetaData), NewProp_RootName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachPrecision = { "ReachPrecision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbSolver, ReachPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachPrecision_MetaData), NewProp_ReachPrecision_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_HingeRotationAxis = { "HingeRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbSolver, HingeRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HingeRotationAxis_MetaData), NewProp_HingeRotationAxis_MetaData) }; // 342925220
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbSolver, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
void Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit_SetBit(void* Obj)
{
	((UIKRig_LimbSolver*)Obj)->bEnableLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit = { "bEnableLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRig_LimbSolver), &Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLimit_MetaData), NewProp_bEnableLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MinRotationAngle = { "MinRotationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbSolver, MinRotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRotationAngle_MetaData), NewProp_MinRotationAngle_MetaData) };
void Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull_SetBit(void* Obj)
{
	((UIKRig_LimbSolver*)Obj)->bAveragePull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull = { "bAveragePull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRig_LimbSolver), &Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAveragePull_MetaData), NewProp_bAveragePull_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_PullDistribution = { "PullDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbSolver, PullDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullDistribution_MetaData), NewProp_PullDistribution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachStepAlpha = { "ReachStepAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbSolver, ReachStepAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachStepAlpha_MetaData), NewProp_ReachStepAlpha_MetaData) };
void Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection_SetBit(void* Obj)
{
	((UIKRig_LimbSolver*)Obj)->bEnableTwistCorrection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection = { "bEnableTwistCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRig_LimbSolver), &Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTwistCorrection_MetaData), NewProp_bEnableTwistCorrection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_EndBoneForwardAxis = { "EndBoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbSolver, EndBoneForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndBoneForwardAxis_MetaData), NewProp_EndBoneForwardAxis_MetaData) }; // 342925220
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_LimbSolver, Effector), Z_Construct_UClass_UIKRig_LimbEffector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effector_MetaData), NewProp_Effector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_LimbSolver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_RootName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_HingeRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_MinRotationAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bAveragePull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_PullDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_ReachStepAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_bEnableTwistCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_EndBoneForwardAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_LimbSolver_Statics::NewProp_Effector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRig_LimbSolver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIKRigSolver,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_LimbSolver_Statics::ClassParams = {
	&UIKRig_LimbSolver::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRig_LimbSolver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_LimbSolver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRig_LimbSolver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRig_LimbSolver()
{
	if (!Z_Registration_Info_UClass_UIKRig_LimbSolver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_LimbSolver.OuterSingleton, Z_Construct_UClass_UIKRig_LimbSolver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRig_LimbSolver.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRig_LimbSolver>()
{
	return UIKRig_LimbSolver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_LimbSolver);
UIKRig_LimbSolver::~UIKRig_LimbSolver() {}
// End Class UIKRig_LimbSolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_LimbSolver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIKRig_LimbEffector, UIKRig_LimbEffector::StaticClass, TEXT("UIKRig_LimbEffector"), &Z_Registration_Info_UClass_UIKRig_LimbEffector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_LimbEffector), 2051005962U) },
		{ Z_Construct_UClass_UIKRig_LimbSolver, UIKRig_LimbSolver::StaticClass, TEXT("UIKRig_LimbSolver"), &Z_Registration_Info_UClass_UIKRig_LimbSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_LimbSolver), 634110492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_LimbSolver_h_3593482283(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_LimbSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_LimbSolver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
