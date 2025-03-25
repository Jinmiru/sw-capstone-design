// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Rig/Solvers/IKRig_BodyMover.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRig_BodyMover() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_BodyMover();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_BodyMover_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_BodyMoverEffector();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Class UIKRig_BodyMoverEffector
void UIKRig_BodyMoverEffector::StaticRegisterNativesUIKRig_BodyMoverEffector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_BodyMoverEffector);
UClass* Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister()
{
	return UIKRig_BodyMoverEffector::StaticClass();
}
struct Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Rig/Solvers/IKRig_BodyMover.h" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[] = {
		{ "Category", "Body Mover Effector" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Body Mover Effector" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceMultiplier_MetaData[] = {
		{ "Category", "Body Mover Effector" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Scale the influence this effector has on the body. Range is 0-10. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Scale the influence this effector has on the body. Range is 0-10. Default is 1.0." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InfluenceMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_BodyMoverEffector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMoverEffector, GoalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalName_MetaData), NewProp_GoalName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMoverEffector, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_InfluenceMultiplier = { "InfluenceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMoverEffector, InfluenceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluenceMultiplier_MetaData), NewProp_InfluenceMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_GoalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::NewProp_InfluenceMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::ClassParams = {
	&UIKRig_BodyMoverEffector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRig_BodyMoverEffector()
{
	if (!Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.OuterSingleton, Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRig_BodyMoverEffector.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRig_BodyMoverEffector>()
{
	return UIKRig_BodyMoverEffector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_BodyMoverEffector);
UIKRig_BodyMoverEffector::~UIKRig_BodyMoverEffector() {}
// End Class UIKRig_BodyMoverEffector

// Begin Class UIKRig_BodyMover
void UIKRig_BodyMover::StaticRegisterNativesUIKRig_BodyMover()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_BodyMover);
UClass* Z_Construct_UClass_UIKRig_BodyMover_NoRegister()
{
	return UIKRig_BodyMover::StaticClass();
}
struct Z_Construct_UClass_UIKRig_BodyMover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Rig/Solvers/IKRig_BodyMover.h" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** The target bone to move with the effectors. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "The target bone to move with the effectors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Blend the translational effect of this solver on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Blend the translational effect of this solver on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionPositiveX_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the POSITIVE X translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the POSITIVE X translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionNegativeX_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the NEGATIVE X translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the NEGATIVE X translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionPositiveY_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the POSITIVE Y translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the POSITIVE Y translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionNegativeY_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the NEGATIVE Y translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the NEGATIVE Y translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionPositiveZ_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the POSITIVE Z translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the POSITIVE Z translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionNegativeZ_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Multiply the NEGATIVE Z translation. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Multiply the NEGATIVE Z translation. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Blend the total rotational effect on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Blend the total rotational effect on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateXAlpha_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Blend the X-axis rotational effect on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Blend the X-axis rotational effect on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateYAlpha_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Blend the Y-axis rotational effect on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Blend the Y-axis rotational effect on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateZAlpha_MetaData[] = {
		{ "Category", "Body Mover Settings" },
		{ "Comment", "/** Blend the Z-axis rotational effect on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
		{ "ToolTip", "Blend the Z-axis rotational effect on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_BodyMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionPositiveX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionNegativeX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionPositiveY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionNegativeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionPositiveZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionNegativeZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateXAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateYAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateZAlpha;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Effectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effectors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_BodyMover>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, RootBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBone_MetaData), NewProp_RootBone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, PositionAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionAlpha_MetaData), NewProp_PositionAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveX = { "PositionPositiveX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, PositionPositiveX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionPositiveX_MetaData), NewProp_PositionPositiveX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeX = { "PositionNegativeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, PositionNegativeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionNegativeX_MetaData), NewProp_PositionNegativeX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveY = { "PositionPositiveY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, PositionPositiveY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionPositiveY_MetaData), NewProp_PositionPositiveY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeY = { "PositionNegativeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, PositionNegativeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionNegativeY_MetaData), NewProp_PositionNegativeY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveZ = { "PositionPositiveZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, PositionPositiveZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionPositiveZ_MetaData), NewProp_PositionPositiveZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeZ = { "PositionNegativeZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, PositionNegativeZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionNegativeZ_MetaData), NewProp_PositionNegativeZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, RotationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlpha_MetaData), NewProp_RotationAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateXAlpha = { "RotateXAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, RotateXAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateXAlpha_MetaData), NewProp_RotateXAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateYAlpha = { "RotateYAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, RotateYAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateYAlpha_MetaData), NewProp_RotateYAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateZAlpha = { "RotateZAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, RotateZAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateZAlpha_MetaData), NewProp_RotateZAlpha_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_BodyMover, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effectors_MetaData), NewProp_Effectors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_BodyMover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionPositiveZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_PositionNegativeZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateXAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateYAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_RotateZAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_BodyMover_Statics::NewProp_Effectors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRig_BodyMover_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIKRigSolver,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_BodyMover_Statics::ClassParams = {
	&UIKRig_BodyMover::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRig_BodyMover_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_BodyMover_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRig_BodyMover_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRig_BodyMover()
{
	if (!Z_Registration_Info_UClass_UIKRig_BodyMover.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_BodyMover.OuterSingleton, Z_Construct_UClass_UIKRig_BodyMover_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRig_BodyMover.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRig_BodyMover>()
{
	return UIKRig_BodyMover::StaticClass();
}
UIKRig_BodyMover::UIKRig_BodyMover() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_BodyMover);
UIKRig_BodyMover::~UIKRig_BodyMover() {}
// End Class UIKRig_BodyMover

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_BodyMover_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIKRig_BodyMoverEffector, UIKRig_BodyMoverEffector::StaticClass, TEXT("UIKRig_BodyMoverEffector"), &Z_Registration_Info_UClass_UIKRig_BodyMoverEffector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_BodyMoverEffector), 3679718245U) },
		{ Z_Construct_UClass_UIKRig_BodyMover, UIKRig_BodyMover::StaticClass, TEXT("UIKRig_BodyMover"), &Z_Registration_Info_UClass_UIKRig_BodyMover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_BodyMover), 561697281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_BodyMover_h_867899002(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_BodyMover_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_BodyMover_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
