// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMDebugInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDebugInfo() {}

// Begin Cross Module References
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMBreakpointAction();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMBreakpoint();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDebugInfo();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Enum ERigVMBreakpointAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMBreakpointAction;
static UEnum* ERigVMBreakpointAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigVMBreakpointAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigVMBreakpointAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMBreakpointAction, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMBreakpointAction"));
	}
	return Z_Registration_Info_UEnum_ERigVMBreakpointAction.OuterSingleton;
}
template<> RIGVM_API UEnum* StaticEnum<ERigVMBreakpointAction>()
{
	return ERigVMBreakpointAction_StaticEnum();
}
struct Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// Possible actions when the VM is halted at a breakpoint\n" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigVMBreakpointAction::Max" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDebugInfo.h" },
		{ "None.Name", "ERigVMBreakpointAction::None" },
		{ "Resume.Name", "ERigVMBreakpointAction::Resume" },
		{ "StepInto.Name", "ERigVMBreakpointAction::StepInto" },
		{ "StepOut.Name", "ERigVMBreakpointAction::StepOut" },
		{ "StepOver.Name", "ERigVMBreakpointAction::StepOver" },
		{ "ToolTip", "Possible actions when the VM is halted at a breakpoint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigVMBreakpointAction::None", (int64)ERigVMBreakpointAction::None },
		{ "ERigVMBreakpointAction::Resume", (int64)ERigVMBreakpointAction::Resume },
		{ "ERigVMBreakpointAction::StepOver", (int64)ERigVMBreakpointAction::StepOver },
		{ "ERigVMBreakpointAction::StepInto", (int64)ERigVMBreakpointAction::StepInto },
		{ "ERigVMBreakpointAction::StepOut", (int64)ERigVMBreakpointAction::StepOut },
		{ "ERigVMBreakpointAction::Max", (int64)ERigVMBreakpointAction::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	"ERigVMBreakpointAction",
	"ERigVMBreakpointAction",
	Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigVM_ERigVMBreakpointAction()
{
	if (!Z_Registration_Info_UEnum_ERigVMBreakpointAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMBreakpointAction.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigVMBreakpointAction.InnerSingleton;
}
// End Enum ERigVMBreakpointAction

// Begin ScriptStruct FRigVMBreakpoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMBreakpoint;
class UScriptStruct* FRigVMBreakpoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMBreakpoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMBreakpoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMBreakpoint, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMBreakpoint"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMBreakpoint.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMBreakpoint>()
{
	return FRigVMBreakpoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDebugInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMBreakpoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMBreakpoint",
	nullptr,
	0,
	sizeof(FRigVMBreakpoint),
	alignof(FRigVMBreakpoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMBreakpoint()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMBreakpoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMBreakpoint.InnerSingleton, Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMBreakpoint.InnerSingleton;
}
// End ScriptStruct FRigVMBreakpoint

// Begin ScriptStruct FRigVMDebugInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDebugInfo;
class UScriptStruct* FRigVMDebugInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDebugInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDebugInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDebugInfo, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDebugInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDebugInfo.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDebugInfo>()
{
	return FRigVMDebugInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDebugInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDebugInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMDebugInfo",
	nullptr,
	0,
	sizeof(FRigVMDebugInfo),
	alignof(FRigVMDebugInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDebugInfo()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDebugInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDebugInfo.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDebugInfo.InnerSingleton;
}
// End ScriptStruct FRigVMDebugInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigVMBreakpointAction_StaticEnum, TEXT("ERigVMBreakpointAction"), &Z_Registration_Info_UEnum_ERigVMBreakpointAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2463809200U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMBreakpoint::StaticStruct, Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::NewStructOps, TEXT("RigVMBreakpoint"), &Z_Registration_Info_UScriptStruct_RigVMBreakpoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMBreakpoint), 2887578825U) },
		{ FRigVMDebugInfo::StaticStruct, Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::NewStructOps, TEXT("RigVMDebugInfo"), &Z_Registration_Info_UScriptStruct_RigVMDebugInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDebugInfo), 1568012920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h_1934498825(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
