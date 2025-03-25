// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Validation/ControlRigNumericalValidationPass.h"
#include "ControlRig/Public/Rigs/RigHierarchyPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigNumericalValidationPass() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigNumericalValidationPass();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigNumericalValidationPass_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigValidationPass();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPose();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class UControlRigNumericalValidationPass
void UControlRigNumericalValidationPass::StaticRegisterNativesUControlRigNumericalValidationPass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigNumericalValidationPass);
UClass* Z_Construct_UClass_UControlRigNumericalValidationPass_NoRegister()
{
	return UControlRigNumericalValidationPass::StaticClass();
}
struct Z_Construct_UClass_UControlRigNumericalValidationPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Used to perform a numerical comparison of the poses */" },
		{ "DisplayName", "Numerical Comparison" },
		{ "IncludePath", "Validation/ControlRigNumericalValidationPass.h" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "Used to perform a numerical comparison of the poses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckControls_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If set to true the pass will validate the poses of all bones\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "If set to true the pass will validate the poses of all bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If set to true the pass will validate the poses of all bones\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "If set to true the pass will validate the poses of all bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If set to true the pass will validate the values of all curves\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "If set to true the pass will validate the values of all curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationPrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The threshold under which we'll ignore a precision issue in the pass\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "The threshold under which we'll ignore a precision issue in the pass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationPrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The threshold under which we'll ignore a precision issue in the pass (in degrees)\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "The threshold under which we'll ignore a precision issue in the pass (in degrees)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalePrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The threshold under which we'll ignore a precision issue in the pass\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "The threshold under which we'll ignore a precision issue in the pass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvePrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The threshold under which we'll ignore a precision issue in the pass\n" },
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
		{ "ToolTip", "The threshold under which we'll ignore a precision issue in the pass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventNameA_MetaData[] = {
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventNameB_MetaData[] = {
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "ModuleRelativePath", "Private/Validation/ControlRigNumericalValidationPass.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCheckControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckControls;
	static void NewProp_bCheckBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckBones;
	static void NewProp_bCheckCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckCurves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationPrecision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationPrecision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalePrecision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurvePrecision;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventNameA;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventNameB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigNumericalValidationPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls_SetBit(void* Obj)
{
	((UControlRigNumericalValidationPass*)Obj)->bCheckControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls = { "bCheckControls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigNumericalValidationPass), &Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckControls_MetaData), NewProp_bCheckControls_MetaData) };
void Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones_SetBit(void* Obj)
{
	((UControlRigNumericalValidationPass*)Obj)->bCheckBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones = { "bCheckBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigNumericalValidationPass), &Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckBones_MetaData), NewProp_bCheckBones_MetaData) };
void Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves_SetBit(void* Obj)
{
	((UControlRigNumericalValidationPass*)Obj)->bCheckCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves = { "bCheckCurves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigNumericalValidationPass), &Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckCurves_MetaData), NewProp_bCheckCurves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_TranslationPrecision = { "TranslationPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigNumericalValidationPass, TranslationPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationPrecision_MetaData), NewProp_TranslationPrecision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_RotationPrecision = { "RotationPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigNumericalValidationPass, RotationPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationPrecision_MetaData), NewProp_RotationPrecision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_ScalePrecision = { "ScalePrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigNumericalValidationPass, ScalePrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalePrecision_MetaData), NewProp_ScalePrecision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_CurvePrecision = { "CurvePrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigNumericalValidationPass, CurvePrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvePrecision_MetaData), NewProp_CurvePrecision_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameA = { "EventNameA", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigNumericalValidationPass, EventNameA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventNameA_MetaData), NewProp_EventNameA_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameB = { "EventNameB", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigNumericalValidationPass, EventNameB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventNameB_MetaData), NewProp_EventNameB_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigNumericalValidationPass, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 269917463
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_bCheckCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_TranslationPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_RotationPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_ScalePrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_CurvePrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_EventNameB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::NewProp_Pose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControlRigValidationPass,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::ClassParams = {
	&UControlRigNumericalValidationPass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigNumericalValidationPass()
{
	if (!Z_Registration_Info_UClass_UControlRigNumericalValidationPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigNumericalValidationPass.OuterSingleton, Z_Construct_UClass_UControlRigNumericalValidationPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigNumericalValidationPass.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigNumericalValidationPass>()
{
	return UControlRigNumericalValidationPass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigNumericalValidationPass);
UControlRigNumericalValidationPass::~UControlRigNumericalValidationPass() {}
// End Class UControlRigNumericalValidationPass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigNumericalValidationPass, UControlRigNumericalValidationPass::StaticClass, TEXT("UControlRigNumericalValidationPass"), &Z_Registration_Info_UClass_UControlRigNumericalValidationPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigNumericalValidationPass), 691811307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_2250237727(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Validation_ControlRigNumericalValidationPass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
