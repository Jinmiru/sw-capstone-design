// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/BoneControllerSolvers.h"
#include "Runtime/Engine/Classes/Engine/SpringInterpolator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneControllerSolvers() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FIKFootPelvisPullDownSolver
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKFootPelvisPullDownSolver;
class UScriptStruct* FIKFootPelvisPullDownSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKFootPelvisPullDownSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKFootPelvisPullDownSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKFootPelvisPullDownSolver"));
	}
	return Z_Registration_Info_UScriptStruct_IKFootPelvisPullDownSolver.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FIKFootPelvisPullDownSolver>()
{
	return FIKFootPelvisPullDownSolver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerSolvers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisAdjustmentInterp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Specifies the spring interpolation parameters applied during pelvis adjustment\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerSolvers.h" },
		{ "ToolTip", "Specifies the spring interpolation parameters applied during pelvis adjustment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisAdjustmentInterpAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies an alpha between the original and final adjusted pelvis locations\n// This is used to retain some degree of the original pelvis motion\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerSolvers.h" },
		{ "ToolTip", "Specifies an alpha between the original and final adjusted pelvis locations\nThis is used to retain some degree of the original pelvis motion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisAdjustmentMaxDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies the maximum displacement the pelvis can be adjusted relative to its original location\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerSolvers.h" },
		{ "ToolTip", "Specifies the maximum displacement the pelvis can be adjusted relative to its original location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisAdjustmentErrorTolerance_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ClampMin", "0.001" },
		{ "Comment", "// Specifies the pelvis adjustment distance error that is tolerated for each iteration of the solver\n// \n// When it is detected that the pelvis adjustment distance is incrementing at a value lower or equal\n// to this value for each iteration, the solve will halt. Lower values will marginally increase visual\n// quality at the cost of performance, but may require a higher PelvisAdjustmentMaxIter to be specified\n//\n// The default value of 0.01 specifies 1 centimeter of error\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerSolvers.h" },
		{ "ToolTip", "Specifies the pelvis adjustment distance error that is tolerated for each iteration of the solver\n\nWhen it is detected that the pelvis adjustment distance is incrementing at a value lower or equal\nto this value for each iteration, the solve will halt. Lower values will marginally increase visual\nquality at the cost of performance, but may require a higher PelvisAdjustmentMaxIter to be specified\n\nThe default value of 0.01 specifies 1 centimeter of error" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisAdjustmentMaxIter_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ClampMin", "0" },
		{ "Comment", "// Specifies the maximum number of iterations to run for the pelvis adjustment solver\n// Higher iterations will guarantee closer PelvisAdjustmentErrorTolerance convergence at the cost of performance\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerSolvers.h" },
		{ "ToolTip", "Specifies the maximum number of iterations to run for the pelvis adjustment solver\nHigher iterations will guarantee closer PelvisAdjustmentErrorTolerance convergence at the cost of performance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisAdjustmentInterp;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PelvisAdjustmentInterpAlpha;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PelvisAdjustmentMaxDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PelvisAdjustmentErrorTolerance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PelvisAdjustmentMaxIter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKFootPelvisPullDownSolver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewProp_PelvisAdjustmentInterp = { "PelvisAdjustmentInterp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKFootPelvisPullDownSolver, PelvisAdjustmentInterp), Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisAdjustmentInterp_MetaData), NewProp_PelvisAdjustmentInterp_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewProp_PelvisAdjustmentInterpAlpha = { "PelvisAdjustmentInterpAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKFootPelvisPullDownSolver, PelvisAdjustmentInterpAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisAdjustmentInterpAlpha_MetaData), NewProp_PelvisAdjustmentInterpAlpha_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewProp_PelvisAdjustmentMaxDistance = { "PelvisAdjustmentMaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKFootPelvisPullDownSolver, PelvisAdjustmentMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisAdjustmentMaxDistance_MetaData), NewProp_PelvisAdjustmentMaxDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewProp_PelvisAdjustmentErrorTolerance = { "PelvisAdjustmentErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKFootPelvisPullDownSolver, PelvisAdjustmentErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisAdjustmentErrorTolerance_MetaData), NewProp_PelvisAdjustmentErrorTolerance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewProp_PelvisAdjustmentMaxIter = { "PelvisAdjustmentMaxIter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKFootPelvisPullDownSolver, PelvisAdjustmentMaxIter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisAdjustmentMaxIter_MetaData), NewProp_PelvisAdjustmentMaxIter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewProp_PelvisAdjustmentInterp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewProp_PelvisAdjustmentInterpAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewProp_PelvisAdjustmentMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewProp_PelvisAdjustmentErrorTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewProp_PelvisAdjustmentMaxIter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"IKFootPelvisPullDownSolver",
	Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::PropPointers),
	sizeof(FIKFootPelvisPullDownSolver),
	alignof(FIKFootPelvisPullDownSolver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver()
{
	if (!Z_Registration_Info_UScriptStruct_IKFootPelvisPullDownSolver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKFootPelvisPullDownSolver.InnerSingleton, Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IKFootPelvisPullDownSolver.InnerSingleton;
}
// End ScriptStruct FIKFootPelvisPullDownSolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerSolvers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIKFootPelvisPullDownSolver::StaticStruct, Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver_Statics::NewStructOps, TEXT("IKFootPelvisPullDownSolver"), &Z_Registration_Info_UScriptStruct_IKFootPelvisPullDownSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKFootPelvisPullDownSolver), 523593460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerSolvers_h_2889424607(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerSolvers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerSolvers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
