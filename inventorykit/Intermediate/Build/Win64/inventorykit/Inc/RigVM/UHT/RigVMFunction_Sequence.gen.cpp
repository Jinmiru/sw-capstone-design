// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Execution/RigVMFunction_Sequence.h"
#include "RigVM/Public/RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_Sequence() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_Sequence();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_Sequence
static_assert(std::is_polymorphic<FRigVMFunction_Sequence>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_Sequence cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence;
class UScriptStruct* FRigVMFunction_Sequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_Sequence, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_Sequence"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_Sequence_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_Sequence::Execute"), &FRigVMFunction_Sequence::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.OuterSingleton, Arguments_FRigVMFunction_Sequence_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_Sequence>()
{
	return FRigVMFunction_Sequence::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Allows for a single execution pulse to trigger a series of events in order.\n */" },
		{ "DisplayName", "Sequence" },
		{ "Icon", "EditorStyle|GraphEditor.Sequence_16x" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_Sequence.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Allows for a single execution pulse to trigger a series of events in order." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution input\n" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_Sequence.h" },
		{ "ToolTip", "The execution input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result A\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_Sequence.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result A" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result B\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_Sequence.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result B" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_Sequence>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_Sequence, ExecuteContext), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2576597148
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_Sequence, A), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2576597148
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_Sequence, B), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2576597148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_ExecuteContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMFunction_Sequence",
	Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::PropPointers),
	sizeof(FRigVMFunction_Sequence),
	alignof(FRigVMFunction_Sequence),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_Sequence()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.InnerSingleton;
}
void FRigVMFunction_Sequence::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_Sequence::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}
// End ScriptStruct FRigVMFunction_Sequence

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Sequence_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_Sequence::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewStructOps, TEXT("RigVMFunction_Sequence"), &Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_Sequence), 874499700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Sequence_h_2030141081(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Sequence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Sequence_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
