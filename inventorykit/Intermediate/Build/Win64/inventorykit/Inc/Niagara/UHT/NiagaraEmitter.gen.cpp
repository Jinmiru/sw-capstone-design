// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraEmitter.h"
#include "Niagara/Classes/NiagaraDataSetCompiledData.h"
#include "Niagara/Classes/NiagaraEffectType.h"
#include "Niagara/Classes/NiagaraParameterDefinitionsSubscriber.h"
#include "Niagara/Classes/NiagaraPlatformSet.h"
#include "Niagara/Public/NiagaraAssetTagDefinitions.h"
#include "Niagara/Public/NiagaraCommon.h"
#include "Niagara/Public/NiagaraMessageStore.h"
#include "Niagara/Public/NiagaraParameterStore.h"
#include "Niagara/Public/NiagaraSimStageExecutionData.h"
#include "Niagara/Public/NiagaraTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEmitter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EParticleAllocationMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EScriptExecutionMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetVersion();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventScriptProperties();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraExternalUObjectInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMessageStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraEmitter();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraEventReceiverProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties;
class UScriptStruct* FNiagaraEventReceiverProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEventReceiverProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEventReceiverProperties>()
{
	return FNiagaraEventReceiverProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//TODO: Event action that spawns other whole Systems?\n//One that calls a BP exposed delegate?\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "TODO: Event action that spawns other whole Systems?\nOne that calls a BP exposed delegate?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** The name of this receiver. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of this receiver." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceEventGenerator_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** The name of the EventGenerator to bind to. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of the EventGenerator to bind to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceEmitter_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** The name of the emitter from which the Event Generator is taken. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of the emitter from which the Event Generator is taken." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceEventGenerator;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceEmitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEventReceiverProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventReceiverProperties, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator = { "SourceEventGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventReceiverProperties, SourceEventGenerator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceEventGenerator_MetaData), NewProp_SourceEventGenerator_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter = { "SourceEmitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventReceiverProperties, SourceEmitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceEmitter_MetaData), NewProp_SourceEmitter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEventReceiverProperties",
	Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::PropPointers),
	sizeof(FNiagaraEventReceiverProperties),
	alignof(FNiagaraEventReceiverProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.InnerSingleton;
}
// End ScriptStruct FNiagaraEventReceiverProperties

// Begin ScriptStruct FNiagaraEventGeneratorProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties;
class UScriptStruct* FNiagaraEventGeneratorProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEventGeneratorProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEventGeneratorProperties>()
{
	return FNiagaraEventGeneratorProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEventsPerFrame_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** Max Number of Events that can be generated per frame. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Max Number of Events that can be generated per frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Comment", "//TODO - More complex allocation so that we can grow dynamically if more space is needed ?\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "TODO - More complex allocation so that we can grow dynamically if more space is needed ?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEventsPerFrame;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataSetCompiledData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEventGeneratorProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame = { "MaxEventsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventGeneratorProperties, MaxEventsPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEventsPerFrame_MetaData), NewProp_MaxEventsPerFrame_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventGeneratorProperties, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData = { "DataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventGeneratorProperties, DataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSetCompiledData_MetaData), NewProp_DataSetCompiledData_MetaData) }; // 3790253218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEventGeneratorProperties",
	Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::PropPointers),
	sizeof(FNiagaraEventGeneratorProperties),
	alignof(FNiagaraEventGeneratorProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.InnerSingleton;
}
// End ScriptStruct FNiagaraEventGeneratorProperties

// Begin Enum EScriptExecutionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptExecutionMode;
static UEnum* EScriptExecutionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EScriptExecutionMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("EScriptExecutionMode"));
	}
	return Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<EScriptExecutionMode>()
{
	return EScriptExecutionMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EveryParticle.Comment", "/** The event script is run on every existing particle in the emitter.*/" },
		{ "EveryParticle.Name", "EScriptExecutionMode::EveryParticle" },
		{ "EveryParticle.ToolTip", "The event script is run on every existing particle in the emitter." },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "SingleParticle.Comment", "/** The event script is run only on the particle whose int32 ParticleIndex is specified in the event payload.*/" },
		{ "SingleParticle.Hidden", "" },
		{ "SingleParticle.Name", "EScriptExecutionMode::SingleParticle" },
		{ "SingleParticle.ToolTip", "The event script is run only on the particle whose int32 ParticleIndex is specified in the event payload." },
		{ "SpawnedParticles.Comment", "/** The event script is run only on the particles that were spawned in response to the current event in the emitter.*/" },
		{ "SpawnedParticles.Name", "EScriptExecutionMode::SpawnedParticles" },
		{ "SpawnedParticles.ToolTip", "The event script is run only on the particles that were spawned in response to the current event in the emitter." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScriptExecutionMode::EveryParticle", (int64)EScriptExecutionMode::EveryParticle },
		{ "EScriptExecutionMode::SpawnedParticles", (int64)EScriptExecutionMode::SpawnedParticles },
		{ "EScriptExecutionMode::SingleParticle", (int64)EScriptExecutionMode::SingleParticle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"EScriptExecutionMode",
	"EScriptExecutionMode",
	Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_EScriptExecutionMode()
{
	if (!Z_Registration_Info_UEnum_EScriptExecutionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptExecutionMode.InnerSingleton, Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScriptExecutionMode.InnerSingleton;
}
// End Enum EScriptExecutionMode

// Begin Enum EParticleAllocationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleAllocationMode;
static UEnum* EParticleAllocationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EParticleAllocationMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("EParticleAllocationMode"));
	}
	return Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<EParticleAllocationMode>()
{
	return EParticleAllocationMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutomaticEstimate.Comment", "/** This mode tries to estimate the max particle count at runtime by using previous simulations as reference.*/" },
		{ "AutomaticEstimate.Name", "EParticleAllocationMode::AutomaticEstimate" },
		{ "AutomaticEstimate.ToolTip", "This mode tries to estimate the max particle count at runtime by using previous simulations as reference." },
		{ "FixedCount.Comment", "/** This mode defines an upper limit on the number of particles that will be simulated.  Useful for rejection sampling where we expect many spawned particles to get killed. */" },
		{ "FixedCount.Name", "EParticleAllocationMode::FixedCount" },
		{ "FixedCount.ToolTip", "This mode defines an upper limit on the number of particles that will be simulated.  Useful for rejection sampling where we expect many spawned particles to get killed." },
		{ "ManualEstimate.Comment", "/** This mode is useful if the particle count can vary wildly at runtime (e.g. due to user parameters) and a lot of reallocations happen.*/" },
		{ "ManualEstimate.Name", "EParticleAllocationMode::ManualEstimate" },
		{ "ManualEstimate.ToolTip", "This mode is useful if the particle count can vary wildly at runtime (e.g. due to user parameters) and a lot of reallocations happen." },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EParticleAllocationMode::AutomaticEstimate", (int64)EParticleAllocationMode::AutomaticEstimate },
		{ "EParticleAllocationMode::ManualEstimate", (int64)EParticleAllocationMode::ManualEstimate },
		{ "EParticleAllocationMode::FixedCount", (int64)EParticleAllocationMode::FixedCount },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"EParticleAllocationMode",
	"EParticleAllocationMode",
	Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_EParticleAllocationMode()
{
	if (!Z_Registration_Info_UEnum_EParticleAllocationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleAllocationMode.InnerSingleton, Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EParticleAllocationMode.InnerSingleton;
}
// End Enum EParticleAllocationMode

// Begin Enum ENiagaraEmitterCalculateBoundMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode;
static UEnum* ENiagaraEmitterCalculateBoundMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraEmitterCalculateBoundMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraEmitterCalculateBoundMode>()
{
	return ENiagaraEmitterCalculateBoundMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Dynamic.Comment", "/** Bounds are calculated per frame (Only available for CPU emitters). */" },
		{ "Dynamic.Name", "ENiagaraEmitterCalculateBoundMode::Dynamic" },
		{ "Dynamic.ToolTip", "Bounds are calculated per frame (Only available for CPU emitters)." },
		{ "Fixed.Comment", "/** Bounds are set from the emitter's fixed bounds. */" },
		{ "Fixed.Name", "ENiagaraEmitterCalculateBoundMode::Fixed" },
		{ "Fixed.ToolTip", "Bounds are set from the emitter's fixed bounds." },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "Programmable.Comment", "/** Bounds will be set from the script using the Emitter Properties Data Interface, or blueprint.  If not set from either source the emitter has no bounds. */" },
		{ "Programmable.Name", "ENiagaraEmitterCalculateBoundMode::Programmable" },
		{ "Programmable.ToolTip", "Bounds will be set from the script using the Emitter Properties Data Interface, or blueprint.  If not set from either source the emitter has no bounds." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraEmitterCalculateBoundMode::Dynamic", (int64)ENiagaraEmitterCalculateBoundMode::Dynamic },
		{ "ENiagaraEmitterCalculateBoundMode::Fixed", (int64)ENiagaraEmitterCalculateBoundMode::Fixed },
		{ "ENiagaraEmitterCalculateBoundMode::Programmable", (int64)ENiagaraEmitterCalculateBoundMode::Programmable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraEmitterCalculateBoundMode",
	"ENiagaraEmitterCalculateBoundMode",
	Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.InnerSingleton;
}
// End Enum ENiagaraEmitterCalculateBoundMode

// Begin ScriptStruct FNiagaraEmitterScriptProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties;
class UScriptStruct* FNiagaraEmitterScriptProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScriptProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScriptProperties>()
{
	return FNiagaraEmitterScriptProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReceivers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Script;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReceivers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventReceivers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventGenerators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventGenerators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScriptProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterScriptProperties, Script), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Script_MetaData), NewProp_Script_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_Inner = { "EventReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties, METADATA_PARAMS(0, nullptr) }; // 2828450436
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers = { "EventReceivers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterScriptProperties, EventReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReceivers_MetaData), NewProp_EventReceivers_MetaData) }; // 2828450436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_Inner = { "EventGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties, METADATA_PARAMS(0, nullptr) }; // 1708877333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators = { "EventGenerators", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterScriptProperties, EventGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventGenerators_MetaData), NewProp_EventGenerators_MetaData) }; // 1708877333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEmitterScriptProperties",
	Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::PropPointers),
	sizeof(FNiagaraEmitterScriptProperties),
	alignof(FNiagaraEmitterScriptProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.InnerSingleton;
}
// End ScriptStruct FNiagaraEmitterScriptProperties

// Begin ScriptStruct FNiagaraEventScriptProperties
static_assert(std::is_polymorphic<FNiagaraEventScriptProperties>() == std::is_polymorphic<FNiagaraEmitterScriptProperties>(), "USTRUCT FNiagaraEventScriptProperties cannot be polymorphic unless super FNiagaraEmitterScriptProperties is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties;
class UScriptStruct* FNiagaraEventScriptProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEventScriptProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEventScriptProperties>()
{
	return FNiagaraEventScriptProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Controls which particles have the event script run on them.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Controls which particles have the event script run on them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnNumber_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Controls whether or not particles are spawned as a result of handling the event. Only valid for EScriptExecutionMode::SpawnedParticles. If Random Spawn Number is used, this will act as the maximum spawn range. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Controls whether or not particles are spawned as a result of handling the event. Only valid for EScriptExecutionMode::SpawnedParticles. If Random Spawn Number is used, this will act as the maximum spawn range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEventsPerFrame_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Controls how many events are consumed by this event handler. If there are more events generated than this value, they will be ignored.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Controls how many events are consumed by this event handler. If there are more events generated than this value, they will be ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceEmitterID_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Id of the Emitter Handle that generated the event. If all zeroes, the event generator is assumed to be this emitter.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Id of the Emitter Handle that generated the event. If all zeroes, the event generator is assumed to be this emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceEventName_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** The name of the event generated. This will be \"Collision\" for collision events and the Event Name field on the DataSetWrite node in the module graph for others.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of the event generated. This will be \"Collision\" for collision events and the Event Name field on the DataSetWrite node in the module graph for others." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomSpawnNumber_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Whether using a random spawn number. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether using a random spawn number." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnNumber_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** The minimum spawn number when random spawn is used. Spawn Number is used as the maximum range. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The minimum spawn number when random spawn is used. Spawn Number is used as the maximum range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateAttributeInitialValues_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Should Event Spawn Scripts modify the Initial values for particle attributes they modify. */" },
		{ "EditCondition", "ExecutionMode==EScriptExecutionMode::SpawnedParticles" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Should Event Spawn Scripts modify the Initial values for particle attributes they modify." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionMode;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SpawnNumber;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxEventsPerFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceEmitterID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceEventName;
	static void NewProp_bRandomSpawnNumber_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomSpawnNumber;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MinSpawnNumber;
	static void NewProp_UpdateAttributeInitialValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateAttributeInitialValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEventScriptProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, ExecutionMode), Z_Construct_UEnum_Niagara_EScriptExecutionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionMode_MetaData), NewProp_ExecutionMode_MetaData) }; // 3257338988
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber = { "SpawnNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, SpawnNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnNumber_MetaData), NewProp_SpawnNumber_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame = { "MaxEventsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, MaxEventsPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEventsPerFrame_MetaData), NewProp_MaxEventsPerFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID = { "SourceEmitterID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, SourceEmitterID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceEmitterID_MetaData), NewProp_SourceEmitterID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName = { "SourceEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, SourceEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceEventName_MetaData), NewProp_SourceEventName_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_SetBit(void* Obj)
{
	((FNiagaraEventScriptProperties*)Obj)->bRandomSpawnNumber = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber = { "bRandomSpawnNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraEventScriptProperties), &Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomSpawnNumber_MetaData), NewProp_bRandomSpawnNumber_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber = { "MinSpawnNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, MinSpawnNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpawnNumber_MetaData), NewProp_MinSpawnNumber_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_UpdateAttributeInitialValues_SetBit(void* Obj)
{
	((FNiagaraEventScriptProperties*)Obj)->UpdateAttributeInitialValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_UpdateAttributeInitialValues = { "UpdateAttributeInitialValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraEventScriptProperties), &Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_UpdateAttributeInitialValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateAttributeInitialValues_MetaData), NewProp_UpdateAttributeInitialValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_UpdateAttributeInitialValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties,
	&NewStructOps,
	"NiagaraEventScriptProperties",
	Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::PropPointers),
	sizeof(FNiagaraEventScriptProperties),
	alignof(FNiagaraEventScriptProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventScriptProperties()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.InnerSingleton;
}
// End ScriptStruct FNiagaraEventScriptProperties

// Begin ScriptStruct FNiagaraDetailsLevelScaleOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides;
class UScriptStruct* FNiagaraDetailsLevelScaleOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDetailsLevelScaleOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDetailsLevelScaleOverrides>()
{
	return FNiagaraDetailsLevelScaleOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Legacy struct for spawn count scale overrides. This is now done in FNiagaraEmitterScalabilityOverrides*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Legacy struct for spawn count scale overrides. This is now done in FNiagaraEmitterScalabilityOverrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Low_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Medium_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_High_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Epic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cine_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Low;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Medium;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_High;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Epic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDetailsLevelScaleOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low = { "Low", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Low), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Low_MetaData), NewProp_Low_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium = { "Medium", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Medium), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Medium_MetaData), NewProp_Medium_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High = { "High", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, High), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_High_MetaData), NewProp_High_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic = { "Epic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Epic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Epic_MetaData), NewProp_Epic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine = { "Cine", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Cine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cine_MetaData), NewProp_Cine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraDetailsLevelScaleOverrides",
	Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::PropPointers),
	sizeof(FNiagaraDetailsLevelScaleOverrides),
	alignof(FNiagaraDetailsLevelScaleOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.InnerSingleton;
}
// End ScriptStruct FNiagaraDetailsLevelScaleOverrides

// Begin ScriptStruct FVersionedNiagaraEmitterData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitterData;
class UScriptStruct* FVersionedNiagaraEmitterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("VersionedNiagaraEmitterData"));
	}
	return Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitterData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVersionedNiagaraEmitterData>()
{
	return FVersionedNiagaraEmitterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct containing all of the data that can be different between different emitter versions.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Struct containing all of the data that can be different between different emitter versions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionChangeDescription_MetaData[] = {
		{ "Comment", "/** What changed in this version compared to the last? Displayed to the user when upgrading to a new script version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "What changed in this version compared to the last? Displayed to the user when upgrading to a new script version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateScriptExecution_MetaData[] = {
		{ "Comment", "/** Reference to a python script that is executed when the user updates from a previous version to this version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Reference to a python script that is executed when the user updates from a previous version to this version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PythonUpdateScript_MetaData[] = {
		{ "Comment", "/** Python script to run when updating to this script version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Python script to run when updating to this script version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptAsset_MetaData[] = {
		{ "Comment", "/** Asset reference to a python script to run when updating to this script version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Asset reference to a python script to run when updating to this script version." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeprecated_MetaData[] = {
		{ "Comment", "/* If this emitter is no longer meant to be used, this option should be set.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "If this emitter is no longer meant to be used, this option should be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationMessage_MetaData[] = {
		{ "Comment", "/* Message to display when the script is deprecated. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Message to display when the script is deprecated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocalSpace_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Toggles whether or not the particles within this emitter are relative to the emitter origin or in global space. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Toggles whether or not the particles within this emitter are relative to the emitter origin or in global space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeterminism_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Toggles whether to globally make the random number generator be deterministic or non-deterministic. Any random calculation that is set to the emitter defaults will inherit this value. It is still possible to tweak individual random to be deterministic or not. In this case deterministic means that it will return the same results for the same configuration of the emitter as long as delta time is not variable. Any changes to the emitter's individual scripts will adjust the results. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Toggles whether to globally make the random number generator be deterministic or non-deterministic. Any random calculation that is set to the emitter defaults will inherit this value. It is still possible to tweak individual random to be deterministic or not. In this case deterministic means that it will return the same results for the same configuration of the emitter as long as delta time is not variable. Any changes to the emitter's individual scripts will adjust the results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** An emitter-based seed for the deterministic random number generator. */" },
		{ "EditCondition", "bDeterminism" },
		{ "EditConditionHides", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "An emitter-based seed for the deterministic random number generator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolatedSpawning_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** When enabled, this will spawn using interpolated parameter values and perform a partial update at spawn time. This adds significant additional cost for spawning but will produce much smoother spawning for high spawn rates, erratic frame rates and fast moving emitters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "When enabled, this will spawn using interpolated parameter values and perform a partial update at spawn time. This adds significant additional cost for spawning but will produce much smoother spawning for high spawn rates, erratic frame rates and fast moving emitters." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGpuAlwaysRunParticleUpdateScript_MetaData[] = {
		{ "Comment", "/**\n\x09GPU scripts were incorrectly running both particle spawn & update, CPU only runs spawn when interpolated spawning is disabled.\n\x09This flag allows backwards compatability so content does not change post the fix.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "GPU scripts were incorrectly running both particle spawn & update, CPU only runs spawn when interpolated spawning is disabled.\nThis flag allows backwards compatability so content does not change post the fix." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimTarget_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalculateBoundsMode_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09How should we calculate bounds for the emitter.\n\x09Note: If this is greyed out it means fixed bounds are enabled in the System Properties and these bounds are therefore ignored.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "How should we calculate bounds for the emitter.\nNote: If this is greyed out it means fixed bounds are enabled in the System Properties and these bounds are therefore ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedBounds_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09The fixed bounding box value. CalculateBoundsMode is the condition whether the fixed bounds can be edited.\n\x09Note: If this is greyed out it means fixed bounds are enabled in the System Properties and these bounds are therefore ignored.\n\x09*/" },
		{ "EditCondition", "CalculateBoundsMode == ENiagaraEmitterCalculateBoundMode::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The fixed bounding box value. CalculateBoundsMode is the condition whether the fixed bounds can be edited.\nNote: If this is greyed out it means fixed bounds are enabled in the System Properties and these bounds are therefore ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPersistentIDs_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Creates a stable Identifier (Particles.ID) which does not vary from frame to frame. This comes at a small memory and performance cost. This allows external objects to track the same particle over multiple frames. Particle arrays are tightly packed and a particle's actual index in the array may change from frame to frame. This optionally lets you use a lookup table to track a particle by index in the lookup table. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Creates a stable Identifier (Particles.ID) which does not vary from frame to frame. This comes at a small memory and performance cost. This allows external objects to track the same particle over multiple frames. Particle arrays are tightly packed and a particle's actual index in the array may change from frame to frame. This optionally lets you use a lookup table to track a particle by index in the lookup table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventHandlerScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "NiagaraNoMerge", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[] = {
		{ "Category", "Scalability" },
		{ "DisplayInScalabilityContext", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityOverrides_MetaData[] = {
		{ "Category", "Scalability" },
		{ "DisplayInScalabilityContext", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGPUParticlesSpawnPerFrame_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** An override on the max number of GPU particles we expect to spawn in a single frame. A value of 0 means it'll use fx.MaxNiagaraGPUParticlesSpawnPerFrame.*/" },
		{ "DisplayName", "Max GPU Particles Spawn per Frame" },
		{ "EditCondition", "SimTarget == ENiagaraSimTarget::GPUComputeSim" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "An override on the max number of GPU particles we expect to spawn in a single frame. A value of 0 means it'll use fx.MaxNiagaraGPUParticlesSpawnPerFrame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocationMode_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09The emitter needs to allocate memory for the particles each tick.\n\x09To prevent reallocations, the emitter should allocate as much memory as is needed for the max particle count.\n\x09This setting controls if the allocation size should be automatically determined or manually entered.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The emitter needs to allocate memory for the particles each tick.\nTo prevent reallocations, the emitter should allocate as much memory as is needed for the max particle count.\nThis setting controls if the allocation size should be automatically determined or manually entered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreAllocationCount_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** \n\x09The emitter will allocate at least this many particles on it's first tick.\n\x09This can aid performance by avoiding many allocations as an emitter ramps up to it's max size.\n\x09*/" },
		{ "EditCondition", "AllocationMode != EParticleAllocationMode::AutomaticEstimate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The emitter will allocate at least this many particles on it's first tick.\nThis can aid performance by avoiding many allocations as an emitter ramps up to it's max size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererBindingsExternalObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedDIBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributesToPreserve_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** An allow list of Particle attributes (e.g. \"Particle.Position\" or \"Particle.Age\") that will not be removed from the DataSet  even if they aren't read by the VM.\n\x09    Used in conjunction with UNiagaraSystem::bTrimAttributes */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "An allow list of Particle attributes (e.g. \"Particle.Position\" or \"Particle.Age\") that will not be removed from the DataSet  even if they aren't read by the VM.\n          Used in conjunction with UNiagaraSystem::bTrimAttributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddEmitterDefaultViewState_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "Comment", "/** This determines how emitters will be added to a system by default. If summary view is setup, consider setting this to 'Summary'. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "This determines how emitters will be added to a system by default. If summary view is setup, consider setting this to 'Summary'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterUpdateScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphSource_MetaData[] = {
		{ "Comment", "/** 'Source' data/graphs for the scripts used by this emitter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "'Source' data/graphs for the scripts used by this emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScratchPads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentScratchPads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionedParent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionedParentAtLastMerge_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationStages_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "NiagaraNoMerge", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimStageExecutionLoops_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimStageExecutionLoopEditorData_MetaData[] = {
		{ "Category", "Emitter" },
		{ "DisplayName", "Sim Stage Loops" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUComputeScript_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedEventGeneratorIds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScalabilitySettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Data used by the editor to maintain UI state etc.. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Data used by the editor to maintain UI state etc.." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorParameters_MetaData[] = {
		{ "Comment", "/** Wrapper for editor only parameters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Wrapper for editor only parameters." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_VersionChangeDescription;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateScriptExecution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateScriptExecution;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PythonUpdateScript;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptAsset;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bDeprecated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeprecated;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DeprecationMessage;
	static void NewProp_bLocalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSpace;
	static void NewProp_bDeterminism_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeterminism;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static void NewProp_bInterpolatedSpawning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolatedSpawning;
#if WITH_EDITORONLY_DATA
	static void NewProp_bGpuAlwaysRunParticleUpdateScript_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGpuAlwaysRunParticleUpdateScript;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimTarget_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CalculateBoundsMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CalculateBoundsMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedBounds;
	static void NewProp_bRequiresPersistentIDs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPersistentIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventHandlerScriptProps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventHandlerScriptProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalabilityOverrides;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGPUParticlesSpawnPerFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllocationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllocationMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreAllocationCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateScriptProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnScriptProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RendererBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RendererBindingsExternalObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RendererBindingsExternalObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedDIBindings_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedDIBindings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ResolvedDIBindings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributesToPreserve_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesToPreserve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddEmitterDefaultViewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AddEmitterDefaultViewState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterSpawnScriptProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterUpdateScriptProps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScratchPads;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentScratchPads;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VersionedParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VersionedParentAtLastMerge;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RendererProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RendererProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimulationStages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulationStages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimStageExecutionLoops_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimStageExecutionLoops;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimStageExecutionLoopEditorData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimStageExecutionLoopEditorData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GPUComputeScript;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SharedEventGeneratorIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedEventGeneratorIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentScalabilitySettings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorParameters;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVersionedNiagaraEmitterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, Version), Z_Construct_UScriptStruct_FNiagaraAssetVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) }; // 1747924701
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_VersionChangeDescription = { "VersionChangeDescription", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, VersionChangeDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionChangeDescription_MetaData), NewProp_VersionChangeDescription_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_UpdateScriptExecution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_UpdateScriptExecution = { "UpdateScriptExecution", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, UpdateScriptExecution), Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateScriptExecution_MetaData), NewProp_UpdateScriptExecution_MetaData) }; // 3904598484
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_PythonUpdateScript = { "PythonUpdateScript", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, PythonUpdateScript), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PythonUpdateScript_MetaData), NewProp_PythonUpdateScript_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ScriptAsset = { "ScriptAsset", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, ScriptAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptAsset_MetaData), NewProp_ScriptAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bDeprecated_SetBit(void* Obj)
{
	((FVersionedNiagaraEmitterData*)Obj)->bDeprecated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bDeprecated = { "bDeprecated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVersionedNiagaraEmitterData), &Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bDeprecated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeprecated_MetaData), NewProp_bDeprecated_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_DeprecationMessage = { "DeprecationMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, DeprecationMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeprecationMessage_MetaData), NewProp_DeprecationMessage_MetaData) };
void Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bLocalSpace_SetBit(void* Obj)
{
	((FVersionedNiagaraEmitterData*)Obj)->bLocalSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bLocalSpace = { "bLocalSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVersionedNiagaraEmitterData), &Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bLocalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocalSpace_MetaData), NewProp_bLocalSpace_MetaData) };
void Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bDeterminism_SetBit(void* Obj)
{
	((FVersionedNiagaraEmitterData*)Obj)->bDeterminism = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bDeterminism = { "bDeterminism", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVersionedNiagaraEmitterData), &Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bDeterminism_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeterminism_MetaData), NewProp_bDeterminism_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
void Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bInterpolatedSpawning_SetBit(void* Obj)
{
	((FVersionedNiagaraEmitterData*)Obj)->bInterpolatedSpawning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bInterpolatedSpawning = { "bInterpolatedSpawning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FVersionedNiagaraEmitterData), &Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bInterpolatedSpawning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolatedSpawning_MetaData), NewProp_bInterpolatedSpawning_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bGpuAlwaysRunParticleUpdateScript_SetBit(void* Obj)
{
	((FVersionedNiagaraEmitterData*)Obj)->bGpuAlwaysRunParticleUpdateScript = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bGpuAlwaysRunParticleUpdateScript = { "bGpuAlwaysRunParticleUpdateScript", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FVersionedNiagaraEmitterData), &Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bGpuAlwaysRunParticleUpdateScript_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGpuAlwaysRunParticleUpdateScript_MetaData), NewProp_bGpuAlwaysRunParticleUpdateScript_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimTarget = { "SimTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, SimTarget), Z_Construct_UEnum_Niagara_ENiagaraSimTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimTarget_MetaData), NewProp_SimTarget_MetaData) }; // 4168260282
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_CalculateBoundsMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_CalculateBoundsMode = { "CalculateBoundsMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, CalculateBoundsMode), Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalculateBoundsMode_MetaData), NewProp_CalculateBoundsMode_MetaData) }; // 1631429223
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_FixedBounds = { "FixedBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, FixedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedBounds_MetaData), NewProp_FixedBounds_MetaData) };
void Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bRequiresPersistentIDs_SetBit(void* Obj)
{
	((FVersionedNiagaraEmitterData*)Obj)->bRequiresPersistentIDs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bRequiresPersistentIDs = { "bRequiresPersistentIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FVersionedNiagaraEmitterData), &Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bRequiresPersistentIDs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresPersistentIDs_MetaData), NewProp_bRequiresPersistentIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EventHandlerScriptProps_Inner = { "EventHandlerScriptProps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraEventScriptProperties, METADATA_PARAMS(0, nullptr) }; // 984437301
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EventHandlerScriptProps = { "EventHandlerScriptProps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, EventHandlerScriptProps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventHandlerScriptProps_MetaData), NewProp_EventHandlerScriptProps_MetaData) }; // 984437301
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platforms_MetaData), NewProp_Platforms_MetaData) }; // 1338504544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ScalabilityOverrides = { "ScalabilityOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, ScalabilityOverrides), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalabilityOverrides_MetaData), NewProp_ScalabilityOverrides_MetaData) }; // 1621519405
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_MaxGPUParticlesSpawnPerFrame = { "MaxGPUParticlesSpawnPerFrame", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, MaxGPUParticlesSpawnPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGPUParticlesSpawnPerFrame_MetaData), NewProp_MaxGPUParticlesSpawnPerFrame_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AllocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AllocationMode = { "AllocationMode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, AllocationMode), Z_Construct_UEnum_Niagara_EParticleAllocationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocationMode_MetaData), NewProp_AllocationMode_MetaData) }; // 3230424281
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_PreAllocationCount = { "PreAllocationCount", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, PreAllocationCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreAllocationCount_MetaData), NewProp_PreAllocationCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_UpdateScriptProps = { "UpdateScriptProps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, UpdateScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateScriptProps_MetaData), NewProp_UpdateScriptProps_MetaData) }; // 2580756239
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SpawnScriptProps = { "SpawnScriptProps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, SpawnScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnScriptProps_MetaData), NewProp_SpawnScriptProps_MetaData) }; // 2580756239
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RendererBindings = { "RendererBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, RendererBindings), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererBindings_MetaData), NewProp_RendererBindings_MetaData) }; // 3025266078
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RendererBindingsExternalObjects_Inner = { "RendererBindingsExternalObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraExternalUObjectInfo, METADATA_PARAMS(0, nullptr) }; // 1006645454
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RendererBindingsExternalObjects = { "RendererBindingsExternalObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, RendererBindingsExternalObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererBindingsExternalObjects_MetaData), NewProp_RendererBindingsExternalObjects_MetaData) }; // 1006645454
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ResolvedDIBindings_ValueProp = { "ResolvedDIBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(0, nullptr) }; // 2955719795
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ResolvedDIBindings_Key_KeyProp = { "ResolvedDIBindings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(0, nullptr) }; // 2955719795
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ResolvedDIBindings = { "ResolvedDIBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, ResolvedDIBindings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolvedDIBindings_MetaData), NewProp_ResolvedDIBindings_MetaData) }; // 2955719795 2955719795
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AttributesToPreserve_Inner = { "AttributesToPreserve", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AttributesToPreserve = { "AttributesToPreserve", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, AttributesToPreserve), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributesToPreserve_MetaData), NewProp_AttributesToPreserve_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AddEmitterDefaultViewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AddEmitterDefaultViewState = { "AddEmitterDefaultViewState", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, AddEmitterDefaultViewState), Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddEmitterDefaultViewState_MetaData), NewProp_AddEmitterDefaultViewState_MetaData) }; // 565332519
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EmitterSpawnScriptProps = { "EmitterSpawnScriptProps", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, EmitterSpawnScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterSpawnScriptProps_MetaData), NewProp_EmitterSpawnScriptProps_MetaData) }; // 2580756239
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EmitterUpdateScriptProps = { "EmitterUpdateScriptProps", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, EmitterUpdateScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterUpdateScriptProps_MetaData), NewProp_EmitterUpdateScriptProps_MetaData) }; // 2580756239
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_GraphSource = { "GraphSource", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, GraphSource), Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphSource_MetaData), NewProp_GraphSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ScratchPads = { "ScratchPads", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, ScratchPads), Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScratchPads_MetaData), NewProp_ScratchPads_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ParentScratchPads = { "ParentScratchPads", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, ParentScratchPads), Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentScratchPads_MetaData), NewProp_ParentScratchPads_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_VersionedParent = { "VersionedParent", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, VersionedParent), Z_Construct_UScriptStruct_FVersionedNiagaraEmitter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionedParent_MetaData), NewProp_VersionedParent_MetaData) }; // 1570330652
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_VersionedParentAtLastMerge = { "VersionedParentAtLastMerge", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, VersionedParentAtLastMerge), Z_Construct_UScriptStruct_FVersionedNiagaraEmitter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionedParentAtLastMerge_MetaData), NewProp_VersionedParentAtLastMerge_MetaData) }; // 1570330652
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RendererProperties_Inner = { "RendererProperties", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraRendererProperties_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RendererProperties = { "RendererProperties", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, RendererProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererProperties_MetaData), NewProp_RendererProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimulationStages_Inner = { "SimulationStages", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimulationStages = { "SimulationStages", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, SimulationStages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationStages_MetaData), NewProp_SimulationStages_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimStageExecutionLoops_Inner = { "SimStageExecutionLoops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData, METADATA_PARAMS(0, nullptr) }; // 3118372453
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimStageExecutionLoops = { "SimStageExecutionLoops", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, SimStageExecutionLoops), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimStageExecutionLoops_MetaData), NewProp_SimStageExecutionLoops_MetaData) }; // 3118372453
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimStageExecutionLoopEditorData_Inner = { "SimStageExecutionLoopEditorData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData, METADATA_PARAMS(0, nullptr) }; // 567433148
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimStageExecutionLoopEditorData = { "SimStageExecutionLoopEditorData", nullptr, (EPropertyFlags)0x0040040800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, SimStageExecutionLoopEditorData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimStageExecutionLoopEditorData_MetaData), NewProp_SimStageExecutionLoopEditorData_MetaData) }; // 567433148
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_GPUComputeScript = { "GPUComputeScript", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, GPUComputeScript), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUComputeScript_MetaData), NewProp_GPUComputeScript_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SharedEventGeneratorIds_Inner = { "SharedEventGeneratorIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SharedEventGeneratorIds = { "SharedEventGeneratorIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, SharedEventGeneratorIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedEventGeneratorIds_MetaData), NewProp_SharedEventGeneratorIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_CurrentScalabilitySettings = { "CurrentScalabilitySettings", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, CurrentScalabilitySettings), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentScalabilitySettings_MetaData), NewProp_CurrentScalabilitySettings_MetaData) }; // 4027680386
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, EditorData), Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorData_MetaData), NewProp_EditorData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EditorParameters = { "EditorParameters", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitterData, EditorParameters), Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorParameters_MetaData), NewProp_EditorParameters_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_Version,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_VersionChangeDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_UpdateScriptExecution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_UpdateScriptExecution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_PythonUpdateScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ScriptAsset,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bDeprecated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_DeprecationMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bLocalSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bDeterminism,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bInterpolatedSpawning,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bGpuAlwaysRunParticleUpdateScript,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimTarget_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_CalculateBoundsMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_CalculateBoundsMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_FixedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bRequiresPersistentIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EventHandlerScriptProps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EventHandlerScriptProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_Platforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ScalabilityOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_MaxGPUParticlesSpawnPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AllocationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AllocationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_PreAllocationCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_UpdateScriptProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SpawnScriptProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RendererBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RendererBindingsExternalObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RendererBindingsExternalObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ResolvedDIBindings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ResolvedDIBindings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ResolvedDIBindings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AttributesToPreserve_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AttributesToPreserve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AddEmitterDefaultViewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_AddEmitterDefaultViewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EmitterSpawnScriptProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EmitterUpdateScriptProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_GraphSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ScratchPads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_ParentScratchPads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_VersionedParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_VersionedParentAtLastMerge,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RendererProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_RendererProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimulationStages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimulationStages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimStageExecutionLoops_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimStageExecutionLoops,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimStageExecutionLoopEditorData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SimStageExecutionLoopEditorData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_GPUComputeScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SharedEventGeneratorIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_SharedEventGeneratorIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_CurrentScalabilitySettings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EditorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_EditorParameters,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"VersionedNiagaraEmitterData",
	Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::PropPointers),
	sizeof(FVersionedNiagaraEmitterData),
	alignof(FVersionedNiagaraEmitterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData()
{
	if (!Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitterData.InnerSingleton, Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitterData.InnerSingleton;
}
// End ScriptStruct FVersionedNiagaraEmitterData

// Begin Class UNiagaraEmitter
void UNiagaraEmitter::StaticRegisterNativesUNiagaraEmitter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEmitter);
UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister()
{
	return UNiagaraEmitter::StaticClass();
}
struct Z_Construct_UClass_UNiagaraEmitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09Niagara Emitters are particle spawners that can be reused for different effects by putting them into Niagara Systems.\n *\x09""Emitters render their particles using different renderers, such as Sprite Renderers or Mesh Renderers to produce different effects.\n */" },
		{ "IncludePath", "NiagaraEmitter.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Niagara Emitters are particle spawners that can be reused for different effects by putting them into Niagara Systems.\nEmitters render their particles using different renderers, such as Sprite Renderers or Mesh Renderers to produce different effects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExposedVersion_MetaData[] = {
		{ "Comment", "/** The exposed version is the version that is used by default when a user adds this emitter somewhere. It is basically the published version and allows a user to create and test newer versions. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The exposed version is the version that is used by default when a user adds this emitter somewhere. It is basically the published version and allows a user to create and test newer versions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVersioningEnabled_MetaData[] = {
		{ "Comment", "/** If true then this emitter asset uses active version control to track changes. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "If true then this emitter asset uses active version control to track changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionData_MetaData[] = {
		{ "Comment", "/** Contains all of the versioned emitter data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Contains all of the versioned emitter data." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInheritable_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "Comment", "/** If an emitter is inheritable, new emitters based on an inheritable emitter, or Niagara Systems using an inheritable emitter, will automatically inherit changes made to the original emitter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "If an emitter is inheritable, new emitters based on an inheritable emitter, or Niagara Systems using an inheritable emitter, will automatically inherit changes made to the original emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetDescription_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "DisplayName", "Asset Description" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Comment", "/** Category to collate this emitter into for \"add new emitter\" dialogs.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Category to collate this emitter into for \"add new emitter\" dialogs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "///** The thumbnail image used for the asset. This is always the latest recorded thumbnail. This can be different from the thumbnails that are saved per emitter version in collapsed view. */\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The thumbnail image used for the asset. This is always the latest recorded thumbnail. This can be different from the thumbnails that are saved per emitter version in collapsed view." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LibraryVisibility_MetaData[] = {
		{ "Comment", "/** If this emitter is exposed to the library, or should be explicitly hidden. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "If this emitter is exposed to the library, or should be explicitly hidden." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionToOpenInEditor_MetaData[] = {
		{ "Comment", "/** This is used as a transient value to open a specific version in the editor */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "This is used as a transient value to open a specific version in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocalSpace_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeterminism_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocationMode_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreAllocationCount_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateScriptProps_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnScriptProps_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateSpecification_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnScriptProps_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterUpdateScriptProps_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributesToPreserve_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentScratchPadScripts_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimTarget_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedBounds_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ScriptNoExport", "" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDetailLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDetailLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSpawnCountScaleOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityOverrides_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolatedSpawning_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererBindings_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixedBounds_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ScriptNoExport", "" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinDetailLevel_MetaData[] = {
		{ "Comment", "/** Whether to use the min detail or not. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether to use the min detail or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxDetailLevel_MetaData[] = {
		{ "Comment", "/** Whether to use the min detail or not. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether to use the min detail or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalSpawnCountScale_MetaData[] = {
		{ "Comment", "/** Legacy bool to control overriding the global spawn count scales. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Legacy bool to control overriding the global spawn count scales." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPersistentIDs_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGPUParticlesSpawnPerFrame_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphSource_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[] = {
		{ "Comment", "/** Deprecated library exposure bool. Use the LibraryVisibility enum instead. FNiagaraEditorUtilities has accessor functions that takes deprecation into account */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Deprecated library exposure bool. Use the LibraryVisibility enum instead. FNiagaraEditorUtilities has accessor functions that takes deprecation into account" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemplateAsset_MetaData[] = {
		{ "Comment", "/** Deprecated template asset bool. Use the TemplateSpecification enum instead. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Deprecated template asset bool. Use the TemplateSpecification enum instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScratchPadScripts_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeId_MetaData[] = {
		{ "Comment", "/** Adjusted every time that we compile this emitter. Lets us know that we might differ from any cached versions.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Adjusted every time that we compile this emitter. Lets us know that we might differ from any cached versions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorParameters_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererProperties_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventHandlerScriptProps_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationStages_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUComputeScript_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedEventGeneratorIds_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetEmitterData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Use property in struct returned from GetEmitterData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentAtLastMerge_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterDefinitionsSubscriptions_MetaData[] = {
		{ "Comment", "/** Subscriptions to definitions of parameters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Subscriptions to definitions of parameters." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueEmitterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageKeyToMessageMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageStore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedVersion;
	static void NewProp_bVersioningEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVersioningEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VersionData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VersionData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetTags;
	static void NewProp_bIsInheritable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInheritable;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TemplateAssetDescription;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LibraryVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LibraryVisibility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VersionToOpenInEditor;
	static void NewProp_bLocalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSpace;
	static void NewProp_bDeterminism_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeterminism;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllocationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllocationMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreAllocationCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateScriptProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnScriptProps;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TemplateSpecification_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TemplateSpecification;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterSpawnScriptProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterUpdateScriptProps;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributesToPreserve_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesToPreserve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentScratchPadScripts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentScratchPadScripts;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimTarget_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedBounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDetailLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDetailLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSpawnCountScaleOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalabilityOverrides;
	static void NewProp_bInterpolatedSpawning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolatedSpawning;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RendererBindings;
	static void NewProp_bFixedBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedBounds;
	static void NewProp_bUseMinDetailLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinDetailLevel;
	static void NewProp_bUseMaxDetailLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxDetailLevel;
	static void NewProp_bOverrideGlobalSpawnCountScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalSpawnCountScale;
	static void NewProp_bRequiresPersistentIDs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPersistentIDs;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxGPUParticlesSpawnPerFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphSource;
	static void NewProp_bExposeToLibrary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
	static void NewProp_bIsTemplateAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemplateAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScratchPadScripts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScratchPadScripts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RendererProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RendererProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventHandlerScriptProps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventHandlerScriptProps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimulationStages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulationStages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GPUComputeScript;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SharedEventGeneratorIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedEventGeneratorIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentAtLastMerge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterDefinitionsSubscriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterDefinitionsSubscriptions;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueEmitterName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageKeyToMessageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessageKeyToMessageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MessageKeyToMessageMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessageStore;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEmitter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ExposedVersion = { "ExposedVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, ExposedVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExposedVersion_MetaData), NewProp_ExposedVersion_MetaData) };
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bVersioningEnabled_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bVersioningEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bVersioningEnabled = { "bVersioningEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bVersioningEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVersioningEnabled_MetaData), NewProp_bVersioningEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_VersionData_Inner = { "VersionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData, METADATA_PARAMS(0, nullptr) }; // 1869207173
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_VersionData = { "VersionData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, VersionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionData_MetaData), NewProp_VersionData_MetaData) }; // 1869207173
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AssetTags_Inner = { "AssetTags", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference, METADATA_PARAMS(0, nullptr) }; // 304733456
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, AssetTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTags_MetaData), NewProp_AssetTags_MetaData) }; // 304733456
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsInheritable_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bIsInheritable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsInheritable = { "bIsInheritable", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsInheritable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInheritable_MetaData), NewProp_bIsInheritable_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription = { "TemplateAssetDescription", nullptr, (EPropertyFlags)0x0010050800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, TemplateAssetDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateAssetDescription_MetaData), NewProp_TemplateAssetDescription_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailImage_MetaData), NewProp_ThumbnailImage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility = { "LibraryVisibility", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, LibraryVisibility), Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LibraryVisibility_MetaData), NewProp_LibraryVisibility_MetaData) }; // 4158869167
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_VersionToOpenInEditor = { "VersionToOpenInEditor", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, VersionToOpenInEditor), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionToOpenInEditor_MetaData), NewProp_VersionToOpenInEditor_MetaData) };
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bLocalSpace_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace = { "bLocalSpace", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocalSpace_MetaData), NewProp_bLocalSpace_MetaData) };
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bDeterminism_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism = { "bDeterminism", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeterminism_MetaData), NewProp_bDeterminism_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, RandomSeed_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode = { "AllocationMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, AllocationMode_DEPRECATED), Z_Construct_UEnum_Niagara_EParticleAllocationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocationMode_MetaData), NewProp_AllocationMode_MetaData) }; // 3230424281
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount = { "PreAllocationCount", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, PreAllocationCount_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreAllocationCount_MetaData), NewProp_PreAllocationCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps = { "UpdateScriptProps", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, UpdateScriptProps_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateScriptProps_MetaData), NewProp_UpdateScriptProps_MetaData) }; // 2580756239
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps = { "SpawnScriptProps", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, SpawnScriptProps_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnScriptProps_MetaData), NewProp_SpawnScriptProps_MetaData) }; // 2580756239
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification = { "TemplateSpecification", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, TemplateSpecification_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateSpecification_MetaData), NewProp_TemplateSpecification_MetaData) }; // 143822808
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps = { "EmitterSpawnScriptProps", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, EmitterSpawnScriptProps_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterSpawnScriptProps_MetaData), NewProp_EmitterSpawnScriptProps_MetaData) }; // 2580756239
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps = { "EmitterUpdateScriptProps", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, EmitterUpdateScriptProps_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterUpdateScriptProps_MetaData), NewProp_EmitterUpdateScriptProps_MetaData) }; // 2580756239
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve_Inner = { "AttributesToPreserve", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve = { "AttributesToPreserve", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, AttributesToPreserve_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributesToPreserve_MetaData), NewProp_AttributesToPreserve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_Inner = { "ParentScratchPadScripts", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts = { "ParentScratchPadScripts", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, ParentScratchPadScripts_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentScratchPadScripts_MetaData), NewProp_ParentScratchPadScripts_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget = { "SimTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, SimTarget_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraSimTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimTarget_MetaData), NewProp_SimTarget_MetaData) }; // 4168260282
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds = { "FixedBounds", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, FixedBounds_DEPRECATED), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedBounds_MetaData), NewProp_FixedBounds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel = { "MinDetailLevel", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, MinDetailLevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDetailLevel_MetaData), NewProp_MinDetailLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel = { "MaxDetailLevel", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, MaxDetailLevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDetailLevel_MetaData), NewProp_MaxDetailLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides = { "GlobalSpawnCountScaleOverrides", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, GlobalSpawnCountScaleOverrides_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalSpawnCountScaleOverrides_MetaData), NewProp_GlobalSpawnCountScaleOverrides_MetaData) }; // 3903328712
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, Platforms_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platforms_MetaData), NewProp_Platforms_MetaData) }; // 1338504544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides = { "ScalabilityOverrides", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, ScalabilityOverrides_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalabilityOverrides_MetaData), NewProp_ScalabilityOverrides_MetaData) }; // 1621519405
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bInterpolatedSpawning_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning = { "bInterpolatedSpawning", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolatedSpawning_MetaData), NewProp_bInterpolatedSpawning_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererBindings = { "RendererBindings", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, RendererBindings_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererBindings_MetaData), NewProp_RendererBindings_MetaData) }; // 3025266078
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bFixedBounds_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds = { "bFixedBounds", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixedBounds_MetaData), NewProp_bFixedBounds_MetaData) };
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bUseMinDetailLevel_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel = { "bUseMinDetailLevel", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMinDetailLevel_MetaData), NewProp_bUseMinDetailLevel_MetaData) };
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bUseMaxDetailLevel_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel = { "bUseMaxDetailLevel", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxDetailLevel_MetaData), NewProp_bUseMaxDetailLevel_MetaData) };
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bOverrideGlobalSpawnCountScale_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale = { "bOverrideGlobalSpawnCountScale", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideGlobalSpawnCountScale_MetaData), NewProp_bOverrideGlobalSpawnCountScale_MetaData) };
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bRequiresPersistentIDs_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs = { "bRequiresPersistentIDs", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresPersistentIDs_MetaData), NewProp_bRequiresPersistentIDs_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxGPUParticlesSpawnPerFrame = { "MaxGPUParticlesSpawnPerFrame", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, MaxGPUParticlesSpawnPerFrame_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGPUParticlesSpawnPerFrame_MetaData), NewProp_MaxGPUParticlesSpawnPerFrame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource = { "GraphSource", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, GraphSource_DEPRECATED), Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphSource_MetaData), NewProp_GraphSource_MetaData) };
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bExposeToLibrary_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExposeToLibrary_MetaData), NewProp_bExposeToLibrary_MetaData) };
void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_SetBit(void* Obj)
{
	((UNiagaraEmitter*)Obj)->bIsTemplateAsset_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset = { "bIsTemplateAsset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTemplateAsset_MetaData), NewProp_bIsTemplateAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_Inner = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, ScratchPadScripts_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScratchPadScripts_MetaData), NewProp_ScratchPadScripts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId = { "ChangeId", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, ChangeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeId_MetaData), NewProp_ChangeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, EditorData_DEPRECATED), Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorData_MetaData), NewProp_EditorData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorParameters = { "EditorParameters", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, EditorParameters_DEPRECATED), Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorParameters_MetaData), NewProp_EditorParameters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_Inner = { "RendererProperties", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraRendererProperties_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties = { "RendererProperties", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, RendererProperties_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererProperties_MetaData), NewProp_RendererProperties_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_Inner = { "EventHandlerScriptProps", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraEventScriptProperties, METADATA_PARAMS(0, nullptr) }; // 984437301
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps = { "EventHandlerScriptProps", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, EventHandlerScriptProps_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventHandlerScriptProps_MetaData), NewProp_EventHandlerScriptProps_MetaData) }; // 984437301
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_Inner = { "SimulationStages", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages = { "SimulationStages", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, SimulationStages_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationStages_MetaData), NewProp_SimulationStages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript = { "GPUComputeScript", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, GPUComputeScript_DEPRECATED), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUComputeScript_MetaData), NewProp_GPUComputeScript_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_Inner = { "SharedEventGeneratorIds", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds = { "SharedEventGeneratorIds", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, SharedEventGeneratorIds_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedEventGeneratorIds_MetaData), NewProp_SharedEventGeneratorIds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, Parent_DEPRECATED), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge = { "ParentAtLastMerge", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, ParentAtLastMerge_DEPRECATED), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentAtLastMerge_MetaData), NewProp_ParentAtLastMerge_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription, METADATA_PARAMS(0, nullptr) }; // 2160028313
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, ParameterDefinitionsSubscriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterDefinitionsSubscriptions_MetaData), NewProp_ParameterDefinitionsSubscriptions_MetaData) }; // 2160028313
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName = { "UniqueEmitterName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, UniqueEmitterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueEmitterName_MetaData), NewProp_UniqueEmitterName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_ValueProp = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp = { "MessageKeyToMessageMap_Key", nullptr, (EPropertyFlags)0x0100000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, MessageKeyToMessageMap_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageKeyToMessageMap_MetaData), NewProp_MessageKeyToMessageMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageStore = { "MessageStore", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEmitter, MessageStore), Z_Construct_UScriptStruct_FNiagaraMessageStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageStore_MetaData), NewProp_MessageStore_MetaData) }; // 30379371
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraEmitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ExposedVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bVersioningEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_VersionData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_VersionData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AssetTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AssetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsInheritable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_VersionToOpenInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxGPUParticlesSpawnPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageStore,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraEmitter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEmitter_Statics::ClassParams = {
	&UNiagaraEmitter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraEmitter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraEmitter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraEmitter()
{
	if (!Z_Registration_Info_UClass_UNiagaraEmitter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEmitter.OuterSingleton, Z_Construct_UClass_UNiagaraEmitter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraEmitter.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraEmitter>()
{
	return UNiagaraEmitter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEmitter);
UNiagaraEmitter::~UNiagaraEmitter() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraEmitter)
// End Class UNiagaraEmitter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EScriptExecutionMode_StaticEnum, TEXT("EScriptExecutionMode"), &Z_Registration_Info_UEnum_EScriptExecutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3257338988U) },
		{ EParticleAllocationMode_StaticEnum, TEXT("EParticleAllocationMode"), &Z_Registration_Info_UEnum_EParticleAllocationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3230424281U) },
		{ ENiagaraEmitterCalculateBoundMode_StaticEnum, TEXT("ENiagaraEmitterCalculateBoundMode"), &Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1631429223U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraEventReceiverProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewStructOps, TEXT("NiagaraEventReceiverProperties"), &Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEventReceiverProperties), 2828450436U) },
		{ FNiagaraEventGeneratorProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewStructOps, TEXT("NiagaraEventGeneratorProperties"), &Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEventGeneratorProperties), 1708877333U) },
		{ FNiagaraEmitterScriptProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewStructOps, TEXT("NiagaraEmitterScriptProperties"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterScriptProperties), 2580756239U) },
		{ FNiagaraEventScriptProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewStructOps, TEXT("NiagaraEventScriptProperties"), &Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEventScriptProperties), 984437301U) },
		{ FNiagaraDetailsLevelScaleOverrides::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewStructOps, TEXT("NiagaraDetailsLevelScaleOverrides"), &Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDetailsLevelScaleOverrides), 3903328712U) },
		{ FVersionedNiagaraEmitterData::StaticStruct, Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewStructOps, TEXT("VersionedNiagaraEmitterData"), &Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVersionedNiagaraEmitterData), 1869207173U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraEmitter, UNiagaraEmitter::StaticClass, TEXT("UNiagaraEmitter"), &Z_Registration_Info_UClass_UNiagaraEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEmitter), 447766405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_1553078602(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
