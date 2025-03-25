// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Rig/Solvers/IKRig_PoleSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRig_PoleSolver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_PoleSolver();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_PoleSolver_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_PoleSolverEffector();
IKRIG_API UClass* Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Class UIKRig_PoleSolverEffector
void UIKRig_PoleSolverEffector::StaticRegisterNativesUIKRig_PoleSolverEffector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_PoleSolverEffector);
UClass* Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister()
{
	return UIKRig_PoleSolverEffector::StaticClass();
}
struct Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Rig/Solvers/IKRig_PoleSolver.h" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_PoleSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[] = {
		{ "Category", "Pole Solver Effector" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_PoleSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Pole Solver Effector" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_PoleSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Pole Solver Effector" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Blend the effector on/off. Range is 0-1. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_PoleSolver.h" },
		{ "ToolTip", "Blend the effector on/off. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_PoleSolverEffector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_PoleSolverEffector, GoalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalName_MetaData), NewProp_GoalName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_PoleSolverEffector, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_PoleSolverEffector, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_GoalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::ClassParams = {
	&UIKRig_PoleSolverEffector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRig_PoleSolverEffector()
{
	if (!Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.OuterSingleton, Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRig_PoleSolverEffector.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRig_PoleSolverEffector>()
{
	return UIKRig_PoleSolverEffector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_PoleSolverEffector);
UIKRig_PoleSolverEffector::~UIKRig_PoleSolverEffector() {}
// End Class UIKRig_PoleSolverEffector

// Begin Class UIKRig_PoleSolver
void UIKRig_PoleSolver::StaticRegisterNativesUIKRig_PoleSolver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_PoleSolver);
UClass* Z_Construct_UClass_UIKRig_PoleSolver_NoRegister()
{
	return UIKRig_PoleSolver::StaticClass();
}
struct Z_Construct_UClass_UIKRig_PoleSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Rig/Solvers/IKRig_PoleSolver.h" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_PoleSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootName_MetaData[] = {
		{ "Category", "Pole Solver Settings" },
		{ "DisplayName", "Root Bone" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_PoleSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndName_MetaData[] = {
		{ "Category", "Pole Solver Settings" },
		{ "DisplayName", "End Bone" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_PoleSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRig_PoleSolver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Effector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_PoleSolver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_RootName = { "RootName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_PoleSolver, RootName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootName_MetaData), NewProp_RootName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_EndName = { "EndName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_PoleSolver, EndName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndName_MetaData), NewProp_EndName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRig_PoleSolver, Effector), Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effector_MetaData), NewProp_Effector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_PoleSolver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_RootName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_EndName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_PoleSolver_Statics::NewProp_Effector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRig_PoleSolver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIKRigSolver,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_PoleSolver_Statics::ClassParams = {
	&UIKRig_PoleSolver::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRig_PoleSolver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolver_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_PoleSolver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRig_PoleSolver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRig_PoleSolver()
{
	if (!Z_Registration_Info_UClass_UIKRig_PoleSolver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_PoleSolver.OuterSingleton, Z_Construct_UClass_UIKRig_PoleSolver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRig_PoleSolver.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRig_PoleSolver>()
{
	return UIKRig_PoleSolver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_PoleSolver);
UIKRig_PoleSolver::~UIKRig_PoleSolver() {}
// End Class UIKRig_PoleSolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_PoleSolver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIKRig_PoleSolverEffector, UIKRig_PoleSolverEffector::StaticClass, TEXT("UIKRig_PoleSolverEffector"), &Z_Registration_Info_UClass_UIKRig_PoleSolverEffector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_PoleSolverEffector), 164895873U) },
		{ Z_Construct_UClass_UIKRig_PoleSolver, UIKRig_PoleSolver::StaticClass, TEXT("UIKRig_PoleSolver"), &Z_Registration_Info_UClass_UIKRig_PoleSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_PoleSolver), 3447217079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_PoleSolver_h_1972129408(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_PoleSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRig_PoleSolver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
