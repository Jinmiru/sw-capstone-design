// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_AnimEvalRichCurve() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_AnimEvalRichCurve
static_assert(std::is_polymorphic<FRigVMFunction_AnimEvalRichCurve>() == std::is_polymorphic<FRigVMFunction_AnimBase>(), "USTRUCT FRigVMFunction_AnimEvalRichCurve cannot be polymorphic unless super FRigVMFunction_AnimBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AnimEvalRichCurve;
class UScriptStruct* FRigVMFunction_AnimEvalRichCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AnimEvalRichCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AnimEvalRichCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AnimEvalRichCurve"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AnimEvalRichCurve_Execute;
		Arguments_FRigVMFunction_AnimEvalRichCurve_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigVMFunction_AnimEvalRichCurve_Execute.Emplace(TEXT("Curve"), TEXT("FRuntimeFloatCurve"));
		Arguments_FRigVMFunction_AnimEvalRichCurve_Execute.Emplace(TEXT("SourceMinimum"), TEXT("float"));
		Arguments_FRigVMFunction_AnimEvalRichCurve_Execute.Emplace(TEXT("SourceMaximum"), TEXT("float"));
		Arguments_FRigVMFunction_AnimEvalRichCurve_Execute.Emplace(TEXT("TargetMinimum"), TEXT("float"));
		Arguments_FRigVMFunction_AnimEvalRichCurve_Execute.Emplace(TEXT("TargetMaximum"), TEXT("float"));
		Arguments_FRigVMFunction_AnimEvalRichCurve_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AnimEvalRichCurve::Execute"), &FRigVMFunction_AnimEvalRichCurve::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AnimEvalRichCurve.OuterSingleton, Arguments_FRigVMFunction_AnimEvalRichCurve_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AnimEvalRichCurve.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AnimEvalRichCurve>()
{
	return FRigVMFunction_AnimEvalRichCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Evaluates the provided curve. Values are normalized between 0 and 1\n */" },
		{ "DisplayName", "Evaluate Curve" },
		{ "Keywords", "Curve,Profile" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h" },
		{ "ToolTip", "Evaluates the provided curve. Values are normalized between 0 and 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceMinimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceMaximum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMinimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMaximum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AnimEvalRichCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_AnimEvalRichCurve, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_AnimEvalRichCurve, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) }; // 762678829
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_SourceMinimum = { "SourceMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_AnimEvalRichCurve, SourceMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMinimum_MetaData), NewProp_SourceMinimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_SourceMaximum = { "SourceMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_AnimEvalRichCurve, SourceMaximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMaximum_MetaData), NewProp_SourceMaximum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_TargetMinimum = { "TargetMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_AnimEvalRichCurve, TargetMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMinimum_MetaData), NewProp_TargetMinimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_TargetMaximum = { "TargetMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_AnimEvalRichCurve, TargetMaximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMaximum_MetaData), NewProp_TargetMaximum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_AnimEvalRichCurve, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_SourceMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_SourceMaximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_TargetMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_TargetMaximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_AnimBase,
	&NewStructOps,
	"RigVMFunction_AnimEvalRichCurve",
	Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::PropPointers),
	sizeof(FRigVMFunction_AnimEvalRichCurve),
	alignof(FRigVMFunction_AnimEvalRichCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AnimEvalRichCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AnimEvalRichCurve.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AnimEvalRichCurve.InnerSingleton;
}
void FRigVMFunction_AnimEvalRichCurve::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_AnimEvalRichCurve::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Curve,
		SourceMinimum,
		SourceMaximum,
		TargetMinimum,
		TargetMaximum,
		Result
	);
}
// End ScriptStruct FRigVMFunction_AnimEvalRichCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEvalRichCurve_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_AnimEvalRichCurve::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::NewStructOps, TEXT("RigVMFunction_AnimEvalRichCurve"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AnimEvalRichCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AnimEvalRichCurve), 1917168189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEvalRichCurve_h_2383605826(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEvalRichCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEvalRichCurve_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
