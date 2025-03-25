// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Rig/Solvers/IKRigSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigSolver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver_NoRegister();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Class UIKRigSolver
void UIKRigSolver::StaticRegisterNativesUIKRigSolver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigSolver);
UClass* Z_Construct_UClass_UIKRigSolver_NoRegister()
{
	return UIKRigSolver::StaticClass();
}
struct Z_Construct_UClass_UIKRigSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// this is the base class for creating your own solver type that integrates into the IK Rig framework/editor.\n" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Rig/Solvers/IKRigSolver.h" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRigSolver.h" },
		{ "ToolTip", "this is the base class for creating your own solver type that integrates into the IK Rig framework/editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/Solvers/IKRigSolver.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigSolver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((UIKRigSolver*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRigSolver), &Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRigSolver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigSolver_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigSolver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRigSolver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigSolver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigSolver_Statics::ClassParams = {
	&UIKRigSolver::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRigSolver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigSolver_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigSolver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRigSolver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRigSolver()
{
	if (!Z_Registration_Info_UClass_UIKRigSolver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigSolver.OuterSingleton, Z_Construct_UClass_UIKRigSolver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRigSolver.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRigSolver>()
{
	return UIKRigSolver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigSolver);
UIKRigSolver::~UIKRigSolver() {}
// End Class UIKRigSolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigSolver, UIKRigSolver::StaticClass, TEXT("UIKRigSolver"), &Z_Registration_Info_UClass_UIKRigSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigSolver), 832184268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h_126808704(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
