// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/RigVMFunction_ControlFlow.h"
#include "RigVM/Public/RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_ControlFlow() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_ControlFlowBase
static_assert(std::is_polymorphic<FRigVMFunction_ControlFlowBase>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_ControlFlowBase cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase;
class UScriptStruct* FRigVMFunction_ControlFlowBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_ControlFlowBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_ControlFlowBase>()
{
	return FRigVMFunction_ControlFlowBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Execution" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "NodeColor", "0, 0, 0, 1" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_ControlFlowBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMFunction_ControlFlowBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_ControlFlowBase),
	alignof(FRigVMFunction_ControlFlowBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_ControlFlowBase

// Begin ScriptStruct FRigVMFunction_ControlFlowBranch
static_assert(std::is_polymorphic<FRigVMFunction_ControlFlowBranch>() == std::is_polymorphic<FRigVMFunction_ControlFlowBase>(), "USTRUCT FRigVMFunction_ControlFlowBranch cannot be polymorphic unless super FRigVMFunction_ControlFlowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch;
class UScriptStruct* FRigVMFunction_ControlFlowBranch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_ControlFlowBranch"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_ControlFlowBranch_Execute;
		Arguments_FRigVMFunction_ControlFlowBranch_Execute.Emplace(TEXT("Condition"), TEXT("bool"));
		Arguments_FRigVMFunction_ControlFlowBranch_Execute.Emplace(TEXT("BlockToRun"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_ControlFlowBranch::Execute"), &FRigVMFunction_ControlFlowBranch::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.OuterSingleton, Arguments_FRigVMFunction_ControlFlowBranch_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_ControlFlowBranch>()
{
	return FRigVMFunction_ControlFlowBranch::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Executes either the True or False branch based on the condition\n */" },
		{ "DisplayName", "Branch" },
		{ "Keywords", "If" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "ToolTip", "Executes either the True or False branch based on the condition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_True_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_False_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockToRun_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "Singleton", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static void NewProp_Condition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_True;
	static const UECodeGen_Private::FStructPropertyParams NewProp_False;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Completed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BlockToRun;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_ControlFlowBranch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_ControlFlowBranch, ExecuteContext), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2576597148
void Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition_SetBit(void* Obj)
{
	((FRigVMFunction_ControlFlowBranch*)Obj)->Condition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_ControlFlowBranch), &Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_True = { "True", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_ControlFlowBranch, True), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_True_MetaData), NewProp_True_MetaData) }; // 2576597148
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_False = { "False", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_ControlFlowBranch, False), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_False_MetaData), NewProp_False_MetaData) }; // 2576597148
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_ControlFlowBranch, Completed), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 2576597148
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_BlockToRun = { "BlockToRun", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_ControlFlowBranch, BlockToRun), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockToRun_MetaData), NewProp_BlockToRun_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_ExecuteContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_True,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_False,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Completed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_BlockToRun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase,
	&NewStructOps,
	"RigVMFunction_ControlFlowBranch",
	Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::PropPointers),
	sizeof(FRigVMFunction_ControlFlowBranch),
	alignof(FRigVMFunction_ControlFlowBranch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.InnerSingleton;
}
void FRigVMFunction_ControlFlowBranch::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_ControlFlowBranch::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Condition,
		BlockToRun
	);
}
// End ScriptStruct FRigVMFunction_ControlFlowBranch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_ControlFlowBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::NewStructOps, TEXT("RigVMFunction_ControlFlowBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_ControlFlowBase), 1411304421U) },
		{ FRigVMFunction_ControlFlowBranch::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewStructOps, TEXT("RigVMFunction_ControlFlowBranch"), &Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_ControlFlowBranch), 4259337368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_2291662228(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
