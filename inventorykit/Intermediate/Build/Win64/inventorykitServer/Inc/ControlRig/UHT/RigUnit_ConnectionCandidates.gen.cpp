// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Modules/RigUnit_ConnectionCandidates.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ConnectionCandidates() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DiscardMatches();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetCandidates();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_GetCandidates
static_assert(std::is_polymorphic<FRigUnit_GetCandidates>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetCandidates cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetCandidates;
class UScriptStruct* FRigUnit_GetCandidates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetCandidates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetCandidates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetCandidates, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetCandidates"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetCandidates_Execute;
		Arguments_FRigUnit_GetCandidates_Execute.Emplace(TEXT("Connector"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetCandidates_Execute.Emplace(TEXT("Candidates"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetCandidates::Execute"), &FRigUnit_GetCandidates::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetCandidates.OuterSingleton, Arguments_FRigUnit_GetCandidates_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetCandidates.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetCandidates>()
{
	return FRigUnit_GetCandidates::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Modules" },
		{ "Comment", "/**\n * Returns the connection candidates for one connector\n */" },
		{ "DisplayName", "Get Candidates" },
		{ "Keywords", "Connection,Resolve" },
		{ "ModuleRelativePath", "Public/Units/Modules/RigUnit_ConnectionCandidates.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Returns the connection candidates for one connector" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connector_MetaData[] = {
		{ "Category", "Modules" },
		{ "Comment", "// The connector being resolved\n" },
		{ "ModuleRelativePath", "Public/Units/Modules/RigUnit_ConnectionCandidates.h" },
		{ "Output", "" },
		{ "ToolTip", "The connector being resolved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Candidates_MetaData[] = {
		{ "Category", "Modules" },
		{ "Comment", "// The items being interacted on\n" },
		{ "ModuleRelativePath", "Public/Units/Modules/RigUnit_ConnectionCandidates.h" },
		{ "Output", "" },
		{ "ToolTip", "The items being interacted on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Candidates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Candidates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetCandidates>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::NewProp_Connector = { "Connector", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetCandidates, Connector), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connector_MetaData), NewProp_Connector_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::NewProp_Candidates_Inner = { "Candidates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::NewProp_Candidates = { "Candidates", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetCandidates, Candidates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Candidates_MetaData), NewProp_Candidates_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::NewProp_Connector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::NewProp_Candidates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::NewProp_Candidates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetCandidates",
	Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::PropPointers),
	sizeof(FRigUnit_GetCandidates),
	alignof(FRigUnit_GetCandidates),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetCandidates()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetCandidates.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetCandidates.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetCandidates.InnerSingleton;
}
void FRigUnit_GetCandidates::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetCandidates::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Connector,
		Candidates
	);
}
// End ScriptStruct FRigUnit_GetCandidates

// Begin ScriptStruct FRigUnit_DiscardMatches
static_assert(std::is_polymorphic<FRigUnit_DiscardMatches>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_DiscardMatches cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DiscardMatches;
class UScriptStruct* FRigUnit_DiscardMatches::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DiscardMatches.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DiscardMatches.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DiscardMatches, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DiscardMatches"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DiscardMatches_Execute;
		Arguments_FRigUnit_DiscardMatches_Execute.Emplace(TEXT("Excluded"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_DiscardMatches_Execute.Emplace(TEXT("Message"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DiscardMatches::Execute"), &FRigUnit_DiscardMatches::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DiscardMatches.OuterSingleton, Arguments_FRigUnit_DiscardMatches_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DiscardMatches.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DiscardMatches>()
{
	return FRigUnit_DiscardMatches::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Modules" },
		{ "Comment", "/**\n * Discards matches during a connector event\n */" },
		{ "DisplayName", "Discard Matches" },
		{ "Keywords", "Connection,Resolve,Match" },
		{ "ModuleRelativePath", "Public/Units/Modules/RigUnit_ConnectionCandidates.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Discards matches during a connector event" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Excluded_MetaData[] = {
		{ "Category", "Modules" },
		{ "Comment", "// The items being interacted on\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Modules/RigUnit_ConnectionCandidates.h" },
		{ "ToolTip", "The items being interacted on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "Modules" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Modules/RigUnit_ConnectionCandidates.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Excluded_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Excluded;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DiscardMatches>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::NewProp_Excluded_Inner = { "Excluded", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::NewProp_Excluded = { "Excluded", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DiscardMatches, Excluded), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Excluded_MetaData), NewProp_Excluded_MetaData) }; // 1447557315
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DiscardMatches, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::NewProp_Excluded_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::NewProp_Excluded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_DiscardMatches",
	Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::PropPointers),
	sizeof(FRigUnit_DiscardMatches),
	alignof(FRigUnit_DiscardMatches),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DiscardMatches()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DiscardMatches.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DiscardMatches.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DiscardMatches.InnerSingleton;
}
void FRigUnit_DiscardMatches::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DiscardMatches::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Excluded_0_Array(Excluded);
	StaticExecute(
		InExecuteContext,
		Excluded_0_Array,
		Message
	);
}
// End ScriptStruct FRigUnit_DiscardMatches

// Begin ScriptStruct FRigUnit_SetDefaultMatch
static_assert(std::is_polymorphic<FRigUnit_SetDefaultMatch>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetDefaultMatch cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetDefaultMatch;
class UScriptStruct* FRigUnit_SetDefaultMatch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetDefaultMatch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetDefaultMatch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetDefaultMatch"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetDefaultMatch_Execute;
		Arguments_FRigUnit_SetDefaultMatch_Execute.Emplace(TEXT("Default"), TEXT("FRigElementKey"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetDefaultMatch::Execute"), &FRigUnit_SetDefaultMatch::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetDefaultMatch.OuterSingleton, Arguments_FRigUnit_SetDefaultMatch_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetDefaultMatch.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetDefaultMatch>()
{
	return FRigUnit_SetDefaultMatch::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Modules" },
		{ "Comment", "/**\n * Set default match during a connector event\n */" },
		{ "DisplayName", "Set Default Match" },
		{ "Keywords", "Connection,Resolve,Match,Default" },
		{ "ModuleRelativePath", "Public/Units/Modules/RigUnit_ConnectionCandidates.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Set default match during a connector event" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "Modules" },
		{ "Comment", "// The items being interacted on\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Modules/RigUnit_ConnectionCandidates.h" },
		{ "ToolTip", "The items being interacted on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetDefaultMatch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetDefaultMatch, Default), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::NewProp_Default,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetDefaultMatch",
	Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::PropPointers),
	sizeof(FRigUnit_SetDefaultMatch),
	alignof(FRigUnit_SetDefaultMatch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetDefaultMatch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetDefaultMatch.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetDefaultMatch.InnerSingleton;
}
void FRigUnit_SetDefaultMatch::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetDefaultMatch::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Default
	);
}
// End ScriptStruct FRigUnit_SetDefaultMatch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_GetCandidates::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::NewStructOps, TEXT("RigUnit_GetCandidates"), &Z_Registration_Info_UScriptStruct_RigUnit_GetCandidates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetCandidates), 3302190576U) },
		{ FRigUnit_DiscardMatches::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::NewStructOps, TEXT("RigUnit_DiscardMatches"), &Z_Registration_Info_UScriptStruct_RigUnit_DiscardMatches, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DiscardMatches), 2590958892U) },
		{ FRigUnit_SetDefaultMatch::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::NewStructOps, TEXT("RigUnit_SetDefaultMatch"), &Z_Registration_Info_UScriptStruct_RigUnit_SetDefaultMatch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetDefaultMatch), 2914855056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h_2057223496(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
