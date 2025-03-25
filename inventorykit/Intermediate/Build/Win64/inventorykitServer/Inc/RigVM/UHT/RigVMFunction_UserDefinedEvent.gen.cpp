// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Execution/RigVMFunction_UserDefinedEvent.h"
#include "RigVM/Public/RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_UserDefinedEvent() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_UserDefinedEvent
static_assert(std::is_polymorphic<FRigVMFunction_UserDefinedEvent>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_UserDefinedEvent cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_UserDefinedEvent;
class UScriptStruct* FRigVMFunction_UserDefinedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_UserDefinedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_UserDefinedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_UserDefinedEvent"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_UserDefinedEvent_Execute;
		Arguments_FRigVMFunction_UserDefinedEvent_Execute.Emplace(TEXT("EventName"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_UserDefinedEvent::Execute"), &FRigVMFunction_UserDefinedEvent::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_UserDefinedEvent.OuterSingleton, Arguments_FRigVMFunction_UserDefinedEvent_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_UserDefinedEvent.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_UserDefinedEvent>()
{
	return FRigVMFunction_UserDefinedEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Events" },
		{ "Comment", "/**\n * User Defined Event for running custom logic\n */" },
		{ "DisplayName", "User Defined Event" },
		{ "Keywords", "Event,Entry,MyEvent" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_UserDefinedEvent.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "User Defined Event for running custom logic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "UserDefinedEvent" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_UserDefinedEvent.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "UserDefinedEvent" },
		{ "Comment", "// True if the current interaction is a rotation\n" },
		{ "Constant", "" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_UserDefinedEvent.h" },
		{ "ToolTip", "True if the current interaction is a rotation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_UserDefinedEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_UserDefinedEvent, ExecuteContext), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2576597148
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000022005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_UserDefinedEvent, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::NewProp_ExecuteContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::NewProp_EventName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMFunction_UserDefinedEvent",
	Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::PropPointers),
	sizeof(FRigVMFunction_UserDefinedEvent),
	alignof(FRigVMFunction_UserDefinedEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_UserDefinedEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_UserDefinedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_UserDefinedEvent.InnerSingleton;
}
void FRigVMFunction_UserDefinedEvent::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_UserDefinedEvent::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		EventName
	);
}
// End ScriptStruct FRigVMFunction_UserDefinedEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_UserDefinedEvent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_UserDefinedEvent::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::NewStructOps, TEXT("RigVMFunction_UserDefinedEvent"), &Z_Registration_Info_UScriptStruct_RigVMFunction_UserDefinedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_UserDefinedEvent), 3970707431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_UserDefinedEvent_h_1817312214(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_UserDefinedEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_UserDefinedEvent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
