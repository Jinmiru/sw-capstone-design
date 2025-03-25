// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Execution/RigUnit_BeginExecution.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_BeginExecution() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BeginExecution();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_BeginExecution
static_assert(std::is_polymorphic<FRigUnit_BeginExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BeginExecution cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution;
class UScriptStruct* FRigUnit_BeginExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BeginExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BeginExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_BeginExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_BeginExecution::Execute"), &FRigUnit_BeginExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.OuterSingleton, Arguments_FRigUnit_BeginExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BeginExecution>()
{
	return FRigUnit_BeginExecution::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event for driving the skeleton hierarchy with variables and rig elements\n */" },
		{ "DisplayName", "Forwards Solve" },
		{ "Keywords", "Begin,Update,Tick,Forward,Event" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_BeginExecution.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "Event for driving the skeleton hierarchy with variables and rig elements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_BeginExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BeginExecution>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BeginExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2294738602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::NewProp_ExecuteContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_BeginExecution",
	Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::PropPointers),
	sizeof(FRigUnit_BeginExecution),
	alignof(FRigUnit_BeginExecution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BeginExecution()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.InnerSingleton;
}
void FRigUnit_BeginExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_BeginExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}
// End ScriptStruct FRigUnit_BeginExecution

// Begin ScriptStruct FRigUnit_PreBeginExecution
static_assert(std::is_polymorphic<FRigUnit_PreBeginExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_PreBeginExecution cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PreBeginExecution;
class UScriptStruct* FRigUnit_PreBeginExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PreBeginExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PreBeginExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PreBeginExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PreBeginExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PreBeginExecution::Execute"), &FRigUnit_PreBeginExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PreBeginExecution.OuterSingleton, Arguments_FRigUnit_PreBeginExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PreBeginExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PreBeginExecution>()
{
	return FRigUnit_PreBeginExecution::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event always executed before the forward solve\n */" },
		{ "DisplayName", "Pre Forwards Solve" },
		{ "Keywords", "Begin,Update,Tick,PreForward,Event" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_BeginExecution.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "Event always executed before the forward solve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_BeginExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PreBeginExecution>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PreBeginExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2294738602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::NewProp_ExecuteContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_PreBeginExecution",
	Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::PropPointers),
	sizeof(FRigUnit_PreBeginExecution),
	alignof(FRigUnit_PreBeginExecution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PreBeginExecution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PreBeginExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PreBeginExecution.InnerSingleton;
}
void FRigUnit_PreBeginExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_PreBeginExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}
// End ScriptStruct FRigUnit_PreBeginExecution

// Begin ScriptStruct FRigUnit_PostBeginExecution
static_assert(std::is_polymorphic<FRigUnit_PostBeginExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_PostBeginExecution cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PostBeginExecution;
class UScriptStruct* FRigUnit_PostBeginExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PostBeginExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PostBeginExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PostBeginExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PostBeginExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PostBeginExecution::Execute"), &FRigUnit_PostBeginExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PostBeginExecution.OuterSingleton, Arguments_FRigUnit_PostBeginExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PostBeginExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PostBeginExecution>()
{
	return FRigUnit_PostBeginExecution::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event always executed after the forward solve\n */" },
		{ "DisplayName", "Post Forwards Solve" },
		{ "Keywords", "Begin,Update,Tick,PostForward,Event" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_BeginExecution.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "Event always executed after the forward solve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_BeginExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PostBeginExecution>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PostBeginExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2294738602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::NewProp_ExecuteContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_PostBeginExecution",
	Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::PropPointers),
	sizeof(FRigUnit_PostBeginExecution),
	alignof(FRigUnit_PostBeginExecution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PostBeginExecution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PostBeginExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PostBeginExecution.InnerSingleton;
}
void FRigUnit_PostBeginExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_PostBeginExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}
// End ScriptStruct FRigUnit_PostBeginExecution

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_BeginExecution_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_BeginExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::NewStructOps, TEXT("RigUnit_BeginExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BeginExecution), 1066104033U) },
		{ FRigUnit_PreBeginExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PreBeginExecution_Statics::NewStructOps, TEXT("RigUnit_PreBeginExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_PreBeginExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PreBeginExecution), 2132895069U) },
		{ FRigUnit_PostBeginExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PostBeginExecution_Statics::NewStructOps, TEXT("RigUnit_PostBeginExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_PostBeginExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PostBeginExecution), 268083739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_BeginExecution_h_3461155925(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_BeginExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_BeginExecution_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
