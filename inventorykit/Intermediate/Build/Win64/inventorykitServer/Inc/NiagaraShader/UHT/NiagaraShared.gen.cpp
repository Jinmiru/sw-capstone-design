// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraShader/Public/NiagaraShared.h"
#include "NiagaraCore/Public/NiagaraCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraShared() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableCommonReference();
NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity();
NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource();
NIAGARASHADER_API UFunction* Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature();
NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileEvent();
NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction();
NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo();
NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant();
NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata();
UPackage* Z_Construct_UPackage__Script_NiagaraShader();
// End Cross Module References

// Begin Enum FNiagaraCompileEventSeverity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity;
static UEnum* FNiagaraCompileEventSeverity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("FNiagaraCompileEventSeverity"));
	}
	return Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.OuterSingleton;
}
template<> NIAGARASHADER_API UEnum* StaticEnum<FNiagaraCompileEventSeverity>()
{
	return FNiagaraCompileEventSeverity_StaticEnum();
}
struct Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines the compile event types for translation/compilation.*/" },
		{ "Display.Name", "FNiagaraCompileEventSeverity::Display" },
		{ "Error.Name", "FNiagaraCompileEventSeverity::Error" },
		{ "Log.Name", "FNiagaraCompileEventSeverity::Log" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Defines the compile event types for translation/compilation." },
		{ "Warning.Name", "FNiagaraCompileEventSeverity::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FNiagaraCompileEventSeverity::Log", (int64)FNiagaraCompileEventSeverity::Log },
		{ "FNiagaraCompileEventSeverity::Display", (int64)FNiagaraCompileEventSeverity::Display },
		{ "FNiagaraCompileEventSeverity::Warning", (int64)FNiagaraCompileEventSeverity::Warning },
		{ "FNiagaraCompileEventSeverity::Error", (int64)FNiagaraCompileEventSeverity::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader,
	nullptr,
	"FNiagaraCompileEventSeverity",
	"FNiagaraCompileEventSeverity",
	Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity()
{
	if (!Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.InnerSingleton, Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.InnerSingleton;
}
// End Enum FNiagaraCompileEventSeverity

// Begin Enum FNiagaraCompileEventSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FNiagaraCompileEventSource;
static UEnum* FNiagaraCompileEventSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FNiagaraCompileEventSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FNiagaraCompileEventSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("FNiagaraCompileEventSource"));
	}
	return Z_Registration_Info_UEnum_FNiagaraCompileEventSource.OuterSingleton;
}
template<> NIAGARASHADER_API UEnum* StaticEnum<FNiagaraCompileEventSource>()
{
	return FNiagaraCompileEventSource_StaticEnum();
}
struct Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ScriptDependency.Comment", "// No specific source of compile event.\n" },
		{ "ScriptDependency.Name", "FNiagaraCompileEventSource::ScriptDependency" },
		{ "ScriptDependency.ToolTip", "No specific source of compile event." },
		{ "Unset.Name", "FNiagaraCompileEventSource::Unset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FNiagaraCompileEventSource::Unset", (int64)FNiagaraCompileEventSource::Unset },
		{ "FNiagaraCompileEventSource::ScriptDependency", (int64)FNiagaraCompileEventSource::ScriptDependency },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader,
	nullptr,
	"FNiagaraCompileEventSource",
	"FNiagaraCompileEventSource",
	Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource()
{
	if (!Z_Registration_Info_UEnum_FNiagaraCompileEventSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FNiagaraCompileEventSource.InnerSingleton, Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FNiagaraCompileEventSource.InnerSingleton;
}
// End Enum FNiagaraCompileEventSource

// Begin ScriptStruct FNiagaraCompileEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCompileEvent;
class UScriptStruct* FNiagaraCompileEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileEvent, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraCompileEvent"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraCompileEvent>()
{
	return FNiagaraCompileEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Records necessary information to give UI cues for errors/logs/warnings during compile.*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Records necessary information to give UI cues for errors/logs/warnings during compile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[] = {
		{ "Comment", "/** Whether or not this is an error, warning, or info*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Whether or not this is an error, warning, or info" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Comment", "/** The message itself*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The message itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortDescription_MetaData[] = {
		{ "Comment", "/** A short, optional description of the event. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "A short, optional description of the event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "/** The node guid that generated the compile event*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The node guid that generated the compile event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinGuid_MetaData[] = {
		{ "Comment", "/** The pin persistent id that generated the compile event*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The pin persistent id that generated the compile event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackGuids_MetaData[] = {
		{ "Comment", "/** The compile stack frame of node id's*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The compile stack frame of node id's" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Comment", "/** The source of the compile event for partial invalidation purposes. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The source of the compile event for partial invalidation purposes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Severity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShortDescription;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StackGuids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StackGuids;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileEvent, Severity), Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Severity_MetaData), NewProp_Severity_MetaData) }; // 2959801359
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileEvent, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_ShortDescription = { "ShortDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileEvent, ShortDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortDescription_MetaData), NewProp_ShortDescription_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileEvent, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGuid_MetaData), NewProp_NodeGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid = { "PinGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileEvent, PinGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinGuid_MetaData), NewProp_PinGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_Inner = { "StackGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids = { "StackGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileEvent, StackGuids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackGuids_MetaData), NewProp_StackGuids_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileEvent, Source), Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1633606887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_ShortDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
	nullptr,
	&NewStructOps,
	"NiagaraCompileEvent",
	Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::PropPointers),
	sizeof(FNiagaraCompileEvent),
	alignof(FNiagaraCompileEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileEvent()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.InnerSingleton;
}
// End ScriptStruct FNiagaraCompileEvent

// Begin ScriptStruct FNiagaraDataInterfaceGeneratedFunction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction;
class UScriptStruct* FNiagaraDataInterfaceGeneratedFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraDataInterfaceGeneratedFunction"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraDataInterfaceGeneratedFunction>()
{
	return FNiagaraDataInterfaceGeneratedFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Information about a data interface function generated by the translator.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Information about a data interface function generated by the translator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariadicInputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariadicOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariadicInputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariadicInputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariadicOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariadicOutputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceGeneratedFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs_Inner = { "VariadicInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableCommonReference, METADATA_PARAMS(0, nullptr) }; // 1550866104
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs = { "VariadicInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceGeneratedFunction, VariadicInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariadicInputs_MetaData), NewProp_VariadicInputs_MetaData) }; // 1550866104
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs_Inner = { "VariadicOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableCommonReference, METADATA_PARAMS(0, nullptr) }; // 1550866104
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs = { "VariadicOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceGeneratedFunction, VariadicOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariadicOutputs_MetaData), NewProp_VariadicOutputs_MetaData) }; // 1550866104
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
	nullptr,
	&NewStructOps,
	"NiagaraDataInterfaceGeneratedFunction",
	Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::PropPointers),
	sizeof(FNiagaraDataInterfaceGeneratedFunction),
	alignof(FNiagaraDataInterfaceGeneratedFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.InnerSingleton;
}
// End ScriptStruct FNiagaraDataInterfaceGeneratedFunction

// Begin ScriptStruct FNiagaraDataInterfaceGPUParamInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo;
class UScriptStruct* FNiagaraDataInterfaceGPUParamInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraDataInterfaceGPUParamInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraDataInterfaceGPUParamInfo>()
{
	return FNiagaraDataInterfaceGPUParamInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Data coming from that translator that describes parameters needed for each data interface.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Data coming from that translator that describes parameters needed for each data interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceHLSLSymbol_MetaData[] = {
		{ "Comment", "/** Symbol of this DI in the hlsl. Used for binding parameters. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Symbol of this DI in the hlsl. Used for binding parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DIClassName_MetaData[] = {
		{ "Comment", "/** Name of the class for this data interface. Used for constructing the correct parameters struct. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Name of the class for this data interface. Used for constructing the correct parameters struct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderParametersOffset_MetaData[] = {
		{ "Comment", "/** The offset for any shader parameters, when this member is INDEX_NONE we are in legacy mode for the data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The offset for any shader parameters, when this member is INDEX_NONE we are in legacy mode for the data interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedFunctions_MetaData[] = {
		{ "Comment", "/** Information about all the functions generated by the translator for this data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Information about all the functions generated by the translator for this data interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataInterfaceHLSLSymbol;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DIClassName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShaderParametersOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedFunctions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedFunctions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceGPUParamInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol = { "DataInterfaceHLSLSymbol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterfaceHLSLSymbol_MetaData), NewProp_DataInterfaceHLSLSymbol_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName = { "DIClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, DIClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DIClassName_MetaData), NewProp_DIClassName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_ShaderParametersOffset = { "ShaderParametersOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, ShaderParametersOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderParametersOffset_MetaData), NewProp_ShaderParametersOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_Inner = { "GeneratedFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction, METADATA_PARAMS(0, nullptr) }; // 4230891036
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions = { "GeneratedFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedFunctions_MetaData), NewProp_GeneratedFunctions_MetaData) }; // 4230891036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_ShaderParametersOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
	nullptr,
	&NewStructOps,
	"NiagaraDataInterfaceGPUParamInfo",
	Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::PropPointers),
	sizeof(FNiagaraDataInterfaceGPUParamInfo),
	alignof(FNiagaraDataInterfaceGPUParamInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.InnerSingleton;
}
// End ScriptStruct FNiagaraDataInterfaceGPUParamInfo

// Begin ScriptStruct FNiagaraShaderScriptExternalConstant
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant;
class UScriptStruct* FNiagaraShaderScriptExternalConstant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraShaderScriptExternalConstant"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraShaderScriptExternalConstant>()
{
	return FNiagaraShaderScriptExternalConstant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraShaderScriptExternalConstant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraShaderScriptExternalConstant, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraShaderScriptExternalConstant, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
	nullptr,
	&NewStructOps,
	"NiagaraShaderScriptExternalConstant",
	Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::PropPointers),
	sizeof(FNiagaraShaderScriptExternalConstant),
	alignof(FNiagaraShaderScriptExternalConstant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.InnerSingleton;
}
// End ScriptStruct FNiagaraShaderScriptExternalConstant

// Begin ScriptStruct FNiagaraShaderScriptParametersMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata;
class UScriptStruct* FNiagaraShaderScriptParametersMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraShaderScriptParametersMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraShaderScriptParametersMetadata>()
{
	return FNiagaraShaderScriptParametersMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/* Data provided from the translator to track information requires to bind data interface or parameters at runtime. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Data provided from the translator to track information requires to bind data interface or parameters at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceParamInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LooseMetadataNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExternalConstantsInterpolated_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalConstants_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataInterfaceParamInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataInterfaceParamInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LooseMetadataNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LooseMetadataNames;
	static void NewProp_bExternalConstantsInterpolated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExternalConstantsInterpolated;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalConstants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalConstants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraShaderScriptParametersMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo_Inner = { "DataInterfaceParamInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo, METADATA_PARAMS(0, nullptr) }; // 2233849915
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo = { "DataInterfaceParamInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraShaderScriptParametersMetadata, DataInterfaceParamInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterfaceParamInfo_MetaData), NewProp_DataInterfaceParamInfo_MetaData) }; // 2233849915
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames_Inner = { "LooseMetadataNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames = { "LooseMetadataNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraShaderScriptParametersMetadata, LooseMetadataNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LooseMetadataNames_MetaData), NewProp_LooseMetadataNames_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated_SetBit(void* Obj)
{
	((FNiagaraShaderScriptParametersMetadata*)Obj)->bExternalConstantsInterpolated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated = { "bExternalConstantsInterpolated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraShaderScriptParametersMetadata), &Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExternalConstantsInterpolated_MetaData), NewProp_bExternalConstantsInterpolated_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants_Inner = { "ExternalConstants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant, METADATA_PARAMS(0, nullptr) }; // 1463503018
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants = { "ExternalConstants", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraShaderScriptParametersMetadata, ExternalConstants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalConstants_MetaData), NewProp_ExternalConstants_MetaData) }; // 1463503018
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
	nullptr,
	&NewStructOps,
	"NiagaraShaderScriptParametersMetadata",
	Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::PropPointers),
	sizeof(FNiagaraShaderScriptParametersMetadata),
	alignof(FNiagaraShaderScriptParametersMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.InnerSingleton;
}
// End ScriptStruct FNiagaraShaderScriptParametersMetadata

// Begin Delegate FOnNiagaraScriptCompilationComplete
struct Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader, nullptr, "OnNiagaraScriptCompilationComplete__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNiagaraScriptCompilationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnNiagaraScriptCompilationComplete)
{
	OnNiagaraScriptCompilationComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnNiagaraScriptCompilationComplete

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ FNiagaraCompileEventSeverity_StaticEnum, TEXT("FNiagaraCompileEventSeverity"), &Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2959801359U) },
		{ FNiagaraCompileEventSource_StaticEnum, TEXT("FNiagaraCompileEventSource"), &Z_Registration_Info_UEnum_FNiagaraCompileEventSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1633606887U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraCompileEvent::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewStructOps, TEXT("NiagaraCompileEvent"), &Z_Registration_Info_UScriptStruct_NiagaraCompileEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCompileEvent), 1182157970U) },
		{ FNiagaraDataInterfaceGeneratedFunction::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewStructOps, TEXT("NiagaraDataInterfaceGeneratedFunction"), &Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataInterfaceGeneratedFunction), 4230891036U) },
		{ FNiagaraDataInterfaceGPUParamInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewStructOps, TEXT("NiagaraDataInterfaceGPUParamInfo"), &Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataInterfaceGPUParamInfo), 2233849915U) },
		{ FNiagaraShaderScriptExternalConstant::StaticStruct, Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewStructOps, TEXT("NiagaraShaderScriptExternalConstant"), &Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraShaderScriptExternalConstant), 1463503018U) },
		{ FNiagaraShaderScriptParametersMetadata::StaticStruct, Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewStructOps, TEXT("NiagaraShaderScriptParametersMetadata"), &Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraShaderScriptParametersMetadata), 2828845662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_2963625621(TEXT("/Script/NiagaraShader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
