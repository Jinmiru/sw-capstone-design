// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Execution/RigUnit_SequenceExecution.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SequenceExecution() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SequenceExecution();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_SequenceExecution
static_assert(std::is_polymorphic<FRigUnit_SequenceExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SequenceExecution cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution;
class UScriptStruct* FRigUnit_SequenceExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SequenceExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SequenceExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SequenceExecution::Execute"), &FRigUnit_SequenceExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.OuterSingleton, Arguments_FRigUnit_SequenceExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SequenceExecution>()
{
	return FRigUnit_SequenceExecution::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Allows for a single execution pulse to trigger a series of events in order.\n */" },
		{ "Deprecated", "5.1.0" },
		{ "DisplayName", "Sequence" },
		{ "Icon", "EditorStyle|GraphEditor.Sequence_16x" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Allows for a single execution pulse to trigger a series of events in order." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution input\n" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "ToolTip", "The execution input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result A\n" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result A" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result B\n" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result B" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result C\n" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result C" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[] = {
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result D\n" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result D" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C;
	static const UECodeGen_Private::FStructPropertyParams NewProp_D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SequenceExecution>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SequenceExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2294738602
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SequenceExecution, A), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2294738602
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SequenceExecution, B), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2294738602
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SequenceExecution, C), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) }; // 2294738602
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SequenceExecution, D), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_D_MetaData), NewProp_D_MetaData) }; // 2294738602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_ExecuteContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_SequenceExecution",
	Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::PropPointers),
	sizeof(FRigUnit_SequenceExecution),
	alignof(FRigUnit_SequenceExecution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SequenceExecution()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.InnerSingleton;
}
void FRigUnit_SequenceExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SequenceExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}
// End ScriptStruct FRigUnit_SequenceExecution

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_SequenceExecution_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_SequenceExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewStructOps, TEXT("RigUnit_SequenceExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SequenceExecution), 659954584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_SequenceExecution_h_3989941858(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_SequenceExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_SequenceExecution_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
