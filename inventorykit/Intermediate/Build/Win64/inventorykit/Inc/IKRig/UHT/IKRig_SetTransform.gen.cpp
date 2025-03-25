// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Rig/Solvers/IKRig_SetTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRig_SetTransform() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_SetTransform();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_SetTransform_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_SetTransformEffector();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Class UIKRig_SetTransformEffector
void UIKRig_SetTransformEffector::StaticRegisterNativesUIKRig_SetTransformEffector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_SetTransformEffector);
UClass* Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister()
{
	return UIKRig_SetTransformEffector::StaticClass();
}
struct Z_Construct_UClass_UIKRig_SetTransformEffector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Rig/Solvers/IKRig_SetTransform.h" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_SetTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePosition_MetaData[] = {
		{ "Category", "Set Transform Effector" },
		{ "Comment", "/** If true, Goal will drive the translation of the target bone. Default is true. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_SetTransform.h" },
		{ "ToolTip", "If true, Goal will drive the translation of the target bone. Default is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRotation_MetaData[] = {
		{ "Category", "Set Transform Effector" },
		{ "Comment", "/** If true, Goal will drive the rotation of the target bone. Default is true. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_SetTransform.h" },
		{ "ToolTip", "If true, Goal will drive the rotation of the target bone. Default is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Set Transform Effector" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Blend the effector on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_SetTransform.h" },
		{ "ToolTip", "Blend the effector on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnablePosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePosition;
	static void NewProp_bEnableRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_SetTransformEffector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition_SetBit(void* Obj)
{
	((UIKRig_SetTransformEffector*)Obj)->bEnablePosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition = { "bEnablePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRig_SetTransformEffector), &Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePosition_MetaData), NewProp_bEnablePosition_MetaData) };
void Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation_SetBit(void* Obj)
{
	((UIKRig_SetTransformEffector*)Obj)->bEnableRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation = { "bEnableRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRig_SetTransformEffector), &Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRotation_MetaData), NewProp_bEnableRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_SetTransformEffector, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnablePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_bEnableRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::ClassParams = {
	&UIKRig_SetTransformEffector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRig_SetTransformEffector()
{
	if (!Z_Registration_Info_UClass_UIKRig_SetTransformEffector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_SetTransformEffector.OuterSingleton, Z_Construct_UClass_UIKRig_SetTransformEffector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRig_SetTransformEffector.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRig_SetTransformEffector>()
{
	return UIKRig_SetTransformEffector::StaticClass();
}
UIKRig_SetTransformEffector::UIKRig_SetTransformEffector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_SetTransformEffector);
UIKRig_SetTransformEffector::~UIKRig_SetTransformEffector() {}
// End Class UIKRig_SetTransformEffector

// Begin Class UIKRig_SetTransform
void UIKRig_SetTransform::StaticRegisterNativesUIKRig_SetTransform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_SetTransform);
UClass* Z_Construct_UClass_UIKRig_SetTransform_NoRegister()
{
	return UIKRig_SetTransform::StaticClass();
}
struct Z_Construct_UClass_UIKRig_SetTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Rig/Solvers/IKRig_SetTransform.h" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_SetTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "Category", "Set Transform Settings" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_SetTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[] = {
		{ "Category", "Set Transform Settings" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_SetTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_SetTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Goal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Effector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_SetTransform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_SetTransform, Goal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_SetTransform, RootBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBone_MetaData), NewProp_RootBone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_SetTransform, Effector), Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effector_MetaData), NewProp_Effector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_SetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Goal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_RootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_SetTransform_Statics::NewProp_Effector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRig_SetTransform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIKRigSolver,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_SetTransform_Statics::ClassParams = {
	&UIKRig_SetTransform::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRig_SetTransform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransform_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_SetTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRig_SetTransform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRig_SetTransform()
{
	if (!Z_Registration_Info_UClass_UIKRig_SetTransform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_SetTransform.OuterSingleton, Z_Construct_UClass_UIKRig_SetTransform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRig_SetTransform.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRig_SetTransform>()
{
	return UIKRig_SetTransform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_SetTransform);
UIKRig_SetTransform::~UIKRig_SetTransform() {}
// End Class UIKRig_SetTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_SetTransform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIKRig_SetTransformEffector, UIKRig_SetTransformEffector::StaticClass, TEXT("UIKRig_SetTransformEffector"), &Z_Registration_Info_UClass_UIKRig_SetTransformEffector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_SetTransformEffector), 1652280244U) },
		{ Z_Construct_UClass_UIKRig_SetTransform, UIKRig_SetTransform::StaticClass, TEXT("UIKRig_SetTransform"), &Z_Registration_Info_UClass_UIKRig_SetTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_SetTransform), 159878191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_SetTransform_h_435394932(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_SetTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_SetTransform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
