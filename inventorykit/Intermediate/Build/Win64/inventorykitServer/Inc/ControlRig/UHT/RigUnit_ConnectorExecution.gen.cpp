// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Modules/RigUnit_ConnectorExecution.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ConnectorExecution() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_ConnectorExecution
static_assert(std::is_polymorphic<FRigUnit_ConnectorExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ConnectorExecution cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ConnectorExecution;
class UScriptStruct* FRigUnit_ConnectorExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConnectorExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ConnectorExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ConnectorExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ConnectorExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ConnectorExecution::Execute"), &FRigUnit_ConnectorExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ConnectorExecution.OuterSingleton, Arguments_FRigUnit_ConnectorExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConnectorExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ConnectorExecution>()
{
	return FRigUnit_ConnectorExecution::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event for filtering connection candidates\n */" },
		{ "DisplayName", "Connector" },
		{ "Keywords", "Event,During,Resolve,Connect,Filter" },
		{ "ModuleRelativePath", "Public/Units/Modules/RigUnit_ConnectorExecution.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "Event for filtering connection candidates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Public/Units/Modules/RigUnit_ConnectorExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ConnectorExecution>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConnectorExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2294738602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::NewProp_ExecuteContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ConnectorExecution",
	Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::PropPointers),
	sizeof(FRigUnit_ConnectorExecution),
	alignof(FRigUnit_ConnectorExecution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConnectorExecution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ConnectorExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConnectorExecution.InnerSingleton;
}
void FRigUnit_ConnectorExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ConnectorExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}
// End ScriptStruct FRigUnit_ConnectorExecution

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectorExecution_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_ConnectorExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::NewStructOps, TEXT("RigUnit_ConnectorExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_ConnectorExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ConnectorExecution), 1986218537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectorExecution_h_883772095(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectorExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectorExecution_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
