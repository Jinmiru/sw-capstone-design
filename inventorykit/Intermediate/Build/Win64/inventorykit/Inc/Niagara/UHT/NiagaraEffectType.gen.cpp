// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraEffectType.h"
#include "Niagara/Classes/NiagaraPerfBaseline.h"
#include "Niagara/Classes/NiagaraPlatformSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEffectType() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSignificanceHandler();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSignificanceHandler_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSignificanceHandlerAge();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSignificanceHandlerAge_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSignificanceHandlerDistance();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCullReaction();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraLinearRamp();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraCullReaction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraCullReaction;
static UEnum* ENiagaraCullReaction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraCullReaction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraCullReaction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCullReaction, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCullReaction"));
	}
	return Z_Registration_Info_UEnum_ENiagaraCullReaction.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCullReaction>()
{
	return ENiagaraCullReaction_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraCullReaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Controls what action is taken by a Niagara system that fails it's cull checks. */" },
		{ "Deactivate.Comment", "/** The system instance will be deactivated. Particles will be allowed to die naturally. It will not be reactivated automatically by the scalability system. */" },
		{ "Deactivate.DisplayName", "Kill" },
		{ "Deactivate.Name", "ENiagaraCullReaction::Deactivate" },
		{ "Deactivate.ToolTip", "The system instance will be deactivated. Particles will be allowed to die naturally. It will not be reactivated automatically by the scalability system." },
		{ "DeactivateImmediate.Comment", "/** The system instance will be deactivated and particles killed immediately. It will not be reactivated automatically by the scalability system. */" },
		{ "DeactivateImmediate.DisplayName", "Kill and Clear" },
		{ "DeactivateImmediate.Name", "ENiagaraCullReaction::DeactivateImmediate" },
		{ "DeactivateImmediate.ToolTip", "The system instance will be deactivated and particles killed immediately. It will not be reactivated automatically by the scalability system." },
		{ "DeactivateImmediateResume.Comment", "/** The system instance will be deactivated and particles killed immediately. Will reactivate when it passes cull tests again. */" },
		{ "DeactivateImmediateResume.DisplayName", "Asleep and Clear" },
		{ "DeactivateImmediateResume.Name", "ENiagaraCullReaction::DeactivateImmediateResume" },
		{ "DeactivateImmediateResume.ToolTip", "The system instance will be deactivated and particles killed immediately. Will reactivate when it passes cull tests again." },
		{ "DeactivateResume.Comment", "/** The system instance will be deactivated. Particles will be allowed to die naturally. Will reactivate when it passes cull tests again. */" },
		{ "DeactivateResume.DisplayName", "Asleep" },
		{ "DeactivateResume.Name", "ENiagaraCullReaction::DeactivateResume" },
		{ "DeactivateResume.ToolTip", "The system instance will be deactivated. Particles will be allowed to die naturally. Will reactivate when it passes cull tests again." },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "PauseResume.Comment", "/** The system instance will be paused, maintaining it's current state, but will resume ticking when it passes cull tests again. */" },
		{ "PauseResume.DisplayName", "Pause" },
		{ "PauseResume.Name", "ENiagaraCullReaction::PauseResume" },
		{ "PauseResume.ToolTip", "The system instance will be paused, maintaining it's current state, but will resume ticking when it passes cull tests again." },
		{ "ToolTip", "Controls what action is taken by a Niagara system that fails it's cull checks." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraCullReaction::Deactivate", (int64)ENiagaraCullReaction::Deactivate },
		{ "ENiagaraCullReaction::DeactivateImmediate", (int64)ENiagaraCullReaction::DeactivateImmediate },
		{ "ENiagaraCullReaction::DeactivateResume", (int64)ENiagaraCullReaction::DeactivateResume },
		{ "ENiagaraCullReaction::DeactivateImmediateResume", (int64)ENiagaraCullReaction::DeactivateImmediateResume },
		{ "ENiagaraCullReaction::PauseResume", (int64)ENiagaraCullReaction::PauseResume },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraCullReaction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraCullReaction",
	"ENiagaraCullReaction",
	Z_Construct_UEnum_Niagara_ENiagaraCullReaction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCullReaction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCullReaction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraCullReaction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraCullReaction()
{
	if (!Z_Registration_Info_UEnum_ENiagaraCullReaction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraCullReaction.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraCullReaction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraCullReaction.InnerSingleton;
}
// End Enum ENiagaraCullReaction

// Begin Enum ENiagaraScalabilityUpdateFrequency
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency;
static UEnum* ENiagaraScalabilityUpdateFrequency_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScalabilityUpdateFrequency"));
	}
	return Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScalabilityUpdateFrequency>()
{
	return ENiagaraScalabilityUpdateFrequency_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Controls how often should we update scalability states for these effects. */" },
		{ "Continuous.Comment", "/** Scalability will be checked every frame. */" },
		{ "Continuous.Name", "ENiagaraScalabilityUpdateFrequency::Continuous" },
		{ "Continuous.ToolTip", "Scalability will be checked every frame." },
		{ "High.Comment", "/** Scalability will be checked every 0.25s (default for fx.NiagaraScalabilityUpdateTime_High). */" },
		{ "High.Name", "ENiagaraScalabilityUpdateFrequency::High" },
		{ "High.ToolTip", "Scalability will be checked every 0.25s (default for fx.NiagaraScalabilityUpdateTime_High)." },
		{ "Low.Comment", "/** Scalability will be checked every 1.0s (default for fx.NiagaraScalabilityUpdateTime_Low). */" },
		{ "Low.Name", "ENiagaraScalabilityUpdateFrequency::Low" },
		{ "Low.ToolTip", "Scalability will be checked every 1.0s (default for fx.NiagaraScalabilityUpdateTime_Low)." },
		{ "Medium.Comment", "/** Scalability will be checked every 0.5s (default for fx.NiagaraScalabilityUpdateTime_Medium). */" },
		{ "Medium.Name", "ENiagaraScalabilityUpdateFrequency::Medium" },
		{ "Medium.ToolTip", "Scalability will be checked every 0.5s (default for fx.NiagaraScalabilityUpdateTime_Medium)." },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "SpawnOnly.Comment", "/** Scalability will be checked only on spawn. */" },
		{ "SpawnOnly.Name", "ENiagaraScalabilityUpdateFrequency::SpawnOnly" },
		{ "SpawnOnly.ToolTip", "Scalability will be checked only on spawn." },
		{ "ToolTip", "Controls how often should we update scalability states for these effects." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraScalabilityUpdateFrequency::SpawnOnly", (int64)ENiagaraScalabilityUpdateFrequency::SpawnOnly },
		{ "ENiagaraScalabilityUpdateFrequency::Low", (int64)ENiagaraScalabilityUpdateFrequency::Low },
		{ "ENiagaraScalabilityUpdateFrequency::Medium", (int64)ENiagaraScalabilityUpdateFrequency::Medium },
		{ "ENiagaraScalabilityUpdateFrequency::High", (int64)ENiagaraScalabilityUpdateFrequency::High },
		{ "ENiagaraScalabilityUpdateFrequency::Continuous", (int64)ENiagaraScalabilityUpdateFrequency::Continuous },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraScalabilityUpdateFrequency",
	"ENiagaraScalabilityUpdateFrequency",
	Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency()
{
	if (!Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.InnerSingleton;
}
// End Enum ENiagaraScalabilityUpdateFrequency

// Begin Enum ENiagaraCullProxyMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraCullProxyMode;
static UEnum* ENiagaraCullProxyMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraCullProxyMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraCullProxyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCullProxyMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraCullProxyMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCullProxyMode>()
{
	return ENiagaraCullProxyMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Controls how cull proxies should be handled for a system. */" },
		{ "Instanced_Rendered.Comment", "/** A single simulation is used but rendered in place of all culled systems. This saves on simulation cost but can still incur significant render thread cost. */" },
		{ "Instanced_Rendered.Name", "ENiagaraCullProxyMode::Instanced_Rendered" },
		{ "Instanced_Rendered.ToolTip", "A single simulation is used but rendered in place of all culled systems. This saves on simulation cost but can still incur significant render thread cost." },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "None.Comment", "/** No cull proxy replaces culled systems. */" },
		{ "None.Name", "ENiagaraCullProxyMode::None" },
		{ "None.ToolTip", "No cull proxy replaces culled systems." },
		{ "ToolTip", "Controls how cull proxies should be handled for a system." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraCullProxyMode::None", (int64)ENiagaraCullProxyMode::None },
		{ "ENiagaraCullProxyMode::Instanced_Rendered", (int64)ENiagaraCullProxyMode::Instanced_Rendered },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraCullProxyMode",
	"ENiagaraCullProxyMode",
	Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraCullProxyMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraCullProxyMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraCullProxyMode.InnerSingleton;
}
// End Enum ENiagaraCullProxyMode

// Begin ScriptStruct FNiagaraLinearRamp
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraLinearRamp;
class UScriptStruct* FNiagaraLinearRamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraLinearRamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraLinearRamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraLinearRamp, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraLinearRamp"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraLinearRamp.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraLinearRamp>()
{
	return FNiagaraLinearRamp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \nSimple linear ramp to drive scaling values. \nTODO: Replace with Curve that can baked down for fast eval and has good inline UI widgets.\n*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Simple linear ramp to drive scaling values.\nTODO: Replace with Curve that can baked down for fast eval and has good inline UI widgets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartX_MetaData[] = {
		{ "Category", "Ramp" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartY_MetaData[] = {
		{ "Category", "Ramp" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndX_MetaData[] = {
		{ "Category", "Ramp" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndY_MetaData[] = {
		{ "Category", "Ramp" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraLinearRamp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraLinearRamp, StartX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartX_MetaData), NewProp_StartX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraLinearRamp, StartY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartY_MetaData), NewProp_StartY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::NewProp_EndX = { "EndX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraLinearRamp, EndX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndX_MetaData), NewProp_EndX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::NewProp_EndY = { "EndY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraLinearRamp, EndY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndY_MetaData), NewProp_EndY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::NewProp_EndX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::NewProp_EndY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraLinearRamp",
	Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::PropPointers),
	sizeof(FNiagaraLinearRamp),
	alignof(FNiagaraLinearRamp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraLinearRamp()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraLinearRamp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraLinearRamp.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraLinearRamp.InnerSingleton;
}
// End ScriptStruct FNiagaraLinearRamp

// Begin ScriptStruct FNiagaraGlobalBudgetScaling
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraGlobalBudgetScaling;
class UScriptStruct* FNiagaraGlobalBudgetScaling::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGlobalBudgetScaling.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraGlobalBudgetScaling.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraGlobalBudgetScaling"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGlobalBudgetScaling.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraGlobalBudgetScaling>()
{
	return FNiagaraGlobalBudgetScaling::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCullByGlobalBudget_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether global budget based culling is enabled. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether global budget based culling is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleMaxDistanceByGlobalBudgetUse_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether we scale down the MaxDistance based on the global budget use. Allows us to increase aggression of culling when performance is poor. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we scale down the MaxDistance based on the global budget use. Allows us to increase aggression of culling when performance is poor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleMaxInstanceCountByGlobalBudgetUse_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether we scale down the system instance counts by global budget usage. Allows us to increase aggression of culling when performance is poor. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we scale down the system instance counts by global budget usage. Allows us to increase aggression of culling when performance is poor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleSystemInstanceCountByGlobalBudgetUse_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether we scale down the effect type instance counts by global budget usage. Allows us to increase aggression of culling when performance is poor. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we scale down the effect type instance counts by global budget usage. Allows us to increase aggression of culling when performance is poor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGlobalBudgetUsage_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Effects will be culled if the global budget usage exceeds this fraction. A global budget usage of 1.0 means current global FX workload has reached it's max budget. Budgets are set by CVars under FX.Budget... */" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "EditCondition", "bCullByGlobalBudget" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Effects will be culled if the global budget usage exceeds this fraction. A global budget usage of 1.0 means current global FX workload has reached it's max budget. Budgets are set by CVars under FX.Budget..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceScaleByGlobalBudgetUse_MetaData[] = {
		{ "Category", "Budget Scaling" },
		{ "Comment", "/** When enabled, MaxDistance is scaled down by the global budget use based on this curve. Allows us to cull more aggressively when performance is poor.\x09*/" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "EditCondition", "bScaleMaxDistanceByGlobalBudgetUse" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "When enabled, MaxDistance is scaled down by the global budget use based on this curve. Allows us to cull more aggressively when performance is poor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInstanceCountScaleByGlobalBudgetUse_MetaData[] = {
		{ "Category", "Budget Scaling" },
		{ "Comment", "/** When enabled, Max Effect Type Instances is scaled down by the global budget use based on this curve. Allows us to cull more aggressively when performance is poor.\x09*/" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "EditCondition", "bScaleMaxInstanceCountByGlobalBudgetUse" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "When enabled, Max Effect Type Instances is scaled down by the global budget use based on this curve. Allows us to cull more aggressively when performance is poor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSystemInstanceCountScaleByGlobalBudgetUse_MetaData[] = {
		{ "Category", "Budget Scaling" },
		{ "Comment", "/** When enabled, Max System Instances is scaled down by the global budget use based on this curve. Allows us to cull more aggressively when performance is poor.\x09*/" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "EditCondition", "bScaleSystemInstanceCountByGlobalBudgetUse" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "When enabled, Max System Instances is scaled down by the global budget use based on this curve. Allows us to cull more aggressively when performance is poor." },
	};
#endif // WITH_METADATA
	static void NewProp_bCullByGlobalBudget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullByGlobalBudget;
	static void NewProp_bScaleMaxDistanceByGlobalBudgetUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleMaxDistanceByGlobalBudgetUse;
	static void NewProp_bScaleMaxInstanceCountByGlobalBudgetUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleMaxInstanceCountByGlobalBudgetUse;
	static void NewProp_bScaleSystemInstanceCountByGlobalBudgetUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleSystemInstanceCountByGlobalBudgetUse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGlobalBudgetUsage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxDistanceScaleByGlobalBudgetUse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxInstanceCountScaleByGlobalBudgetUse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxSystemInstanceCountScaleByGlobalBudgetUse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraGlobalBudgetScaling>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bCullByGlobalBudget_SetBit(void* Obj)
{
	((FNiagaraGlobalBudgetScaling*)Obj)->bCullByGlobalBudget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bCullByGlobalBudget = { "bCullByGlobalBudget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraGlobalBudgetScaling), &Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bCullByGlobalBudget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCullByGlobalBudget_MetaData), NewProp_bCullByGlobalBudget_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleMaxDistanceByGlobalBudgetUse_SetBit(void* Obj)
{
	((FNiagaraGlobalBudgetScaling*)Obj)->bScaleMaxDistanceByGlobalBudgetUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleMaxDistanceByGlobalBudgetUse = { "bScaleMaxDistanceByGlobalBudgetUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraGlobalBudgetScaling), &Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleMaxDistanceByGlobalBudgetUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleMaxDistanceByGlobalBudgetUse_MetaData), NewProp_bScaleMaxDistanceByGlobalBudgetUse_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleMaxInstanceCountByGlobalBudgetUse_SetBit(void* Obj)
{
	((FNiagaraGlobalBudgetScaling*)Obj)->bScaleMaxInstanceCountByGlobalBudgetUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleMaxInstanceCountByGlobalBudgetUse = { "bScaleMaxInstanceCountByGlobalBudgetUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraGlobalBudgetScaling), &Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleMaxInstanceCountByGlobalBudgetUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleMaxInstanceCountByGlobalBudgetUse_MetaData), NewProp_bScaleMaxInstanceCountByGlobalBudgetUse_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleSystemInstanceCountByGlobalBudgetUse_SetBit(void* Obj)
{
	((FNiagaraGlobalBudgetScaling*)Obj)->bScaleSystemInstanceCountByGlobalBudgetUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleSystemInstanceCountByGlobalBudgetUse = { "bScaleSystemInstanceCountByGlobalBudgetUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraGlobalBudgetScaling), &Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleSystemInstanceCountByGlobalBudgetUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleSystemInstanceCountByGlobalBudgetUse_MetaData), NewProp_bScaleSystemInstanceCountByGlobalBudgetUse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_MaxGlobalBudgetUsage = { "MaxGlobalBudgetUsage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraGlobalBudgetScaling, MaxGlobalBudgetUsage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGlobalBudgetUsage_MetaData), NewProp_MaxGlobalBudgetUsage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_MaxDistanceScaleByGlobalBudgetUse = { "MaxDistanceScaleByGlobalBudgetUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraGlobalBudgetScaling, MaxDistanceScaleByGlobalBudgetUse), Z_Construct_UScriptStruct_FNiagaraLinearRamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceScaleByGlobalBudgetUse_MetaData), NewProp_MaxDistanceScaleByGlobalBudgetUse_MetaData) }; // 3111941351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_MaxInstanceCountScaleByGlobalBudgetUse = { "MaxInstanceCountScaleByGlobalBudgetUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraGlobalBudgetScaling, MaxInstanceCountScaleByGlobalBudgetUse), Z_Construct_UScriptStruct_FNiagaraLinearRamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInstanceCountScaleByGlobalBudgetUse_MetaData), NewProp_MaxInstanceCountScaleByGlobalBudgetUse_MetaData) }; // 3111941351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_MaxSystemInstanceCountScaleByGlobalBudgetUse = { "MaxSystemInstanceCountScaleByGlobalBudgetUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraGlobalBudgetScaling, MaxSystemInstanceCountScaleByGlobalBudgetUse), Z_Construct_UScriptStruct_FNiagaraLinearRamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSystemInstanceCountScaleByGlobalBudgetUse_MetaData), NewProp_MaxSystemInstanceCountScaleByGlobalBudgetUse_MetaData) }; // 3111941351
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bCullByGlobalBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleMaxDistanceByGlobalBudgetUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleMaxInstanceCountByGlobalBudgetUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bScaleSystemInstanceCountByGlobalBudgetUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_MaxGlobalBudgetUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_MaxDistanceScaleByGlobalBudgetUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_MaxInstanceCountScaleByGlobalBudgetUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_MaxSystemInstanceCountScaleByGlobalBudgetUse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraGlobalBudgetScaling",
	Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::PropPointers),
	sizeof(FNiagaraGlobalBudgetScaling),
	alignof(FNiagaraGlobalBudgetScaling),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGlobalBudgetScaling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraGlobalBudgetScaling.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGlobalBudgetScaling.InnerSingleton;
}
// End ScriptStruct FNiagaraGlobalBudgetScaling

// Begin ScriptStruct FNiagaraSystemVisibilityCullingSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemVisibilityCullingSettings;
class UScriptStruct* FNiagaraSystemVisibilityCullingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemVisibilityCullingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemVisibilityCullingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemVisibilityCullingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemVisibilityCullingSettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemVisibilityCullingSettings>()
{
	return FNiagaraSystemVisibilityCullingSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Scalability settings for Niagara Systems for a particular platform set (unless overridden). */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Scalability settings for Niagara Systems for a particular platform set (unless overridden)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCullWhenNotRendered_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether we cull when not rendered. This includes all reasons for being not rendered such as view frustum, occlusion and hidden flags etc. As this requires feedback form the rendering system, it cannot be used for pre-culling. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we cull when not rendered. This includes all reasons for being not rendered such as view frustum, occlusion and hidden flags etc. As this requires feedback form the rendering system, it cannot be used for pre-culling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCullByViewFrustum_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/**\n\x09""Controls whether view frustum culling is enabled. Niagara can do it's own separate view frustum culling to give coarse visibility culling that does not depend directly on rendering like CullWhenNotRendered.\n\x09This requires fixed bounds to be used in pre-culling.\n\x09*/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether view frustum culling is enabled. Niagara can do it's own separate view frustum culling to give coarse visibility culling that does not depend directly on rendering like CullWhenNotRendered.\nThis requires fixed bounds to be used in pre-culling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPreCullingByViewFrustum_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** If true and bCullByViewFrustum is enabled, we allow view frustum checks in pre-culling. Meaning we can cull off screen systems before they even spawn. */" },
		{ "EditCondition", "bCullByViewFrustum" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "If true and bCullByViewFrustum is enabled, we allow view frustum checks in pre-culling. Meaning we can cull off screen systems before they even spawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeOutsideViewFrustum_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Effects will be culled if they go longer than this time outside the view frustum. */" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "EditCondition", "bCullByViewFrustum" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Effects will be culled if they go longer than this time outside the view frustum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeWithoutRender_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Effects will be culled if they go longer than this time without being rendered. */" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "EditCondition", "bCullWhenNotRendered" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Effects will be culled if they go longer than this time without being rendered." },
	};
#endif // WITH_METADATA
	static void NewProp_bCullWhenNotRendered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullWhenNotRendered;
	static void NewProp_bCullByViewFrustum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullByViewFrustum;
	static void NewProp_bAllowPreCullingByViewFrustum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPreCullingByViewFrustum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeOutsideViewFrustum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeWithoutRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemVisibilityCullingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bCullWhenNotRendered_SetBit(void* Obj)
{
	((FNiagaraSystemVisibilityCullingSettings*)Obj)->bCullWhenNotRendered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bCullWhenNotRendered = { "bCullWhenNotRendered", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemVisibilityCullingSettings), &Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bCullWhenNotRendered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCullWhenNotRendered_MetaData), NewProp_bCullWhenNotRendered_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bCullByViewFrustum_SetBit(void* Obj)
{
	((FNiagaraSystemVisibilityCullingSettings*)Obj)->bCullByViewFrustum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bCullByViewFrustum = { "bCullByViewFrustum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemVisibilityCullingSettings), &Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bCullByViewFrustum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCullByViewFrustum_MetaData), NewProp_bCullByViewFrustum_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bAllowPreCullingByViewFrustum_SetBit(void* Obj)
{
	((FNiagaraSystemVisibilityCullingSettings*)Obj)->bAllowPreCullingByViewFrustum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bAllowPreCullingByViewFrustum = { "bAllowPreCullingByViewFrustum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemVisibilityCullingSettings), &Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bAllowPreCullingByViewFrustum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPreCullingByViewFrustum_MetaData), NewProp_bAllowPreCullingByViewFrustum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_MaxTimeOutsideViewFrustum = { "MaxTimeOutsideViewFrustum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemVisibilityCullingSettings, MaxTimeOutsideViewFrustum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimeOutsideViewFrustum_MetaData), NewProp_MaxTimeOutsideViewFrustum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_MaxTimeWithoutRender = { "MaxTimeWithoutRender", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemVisibilityCullingSettings, MaxTimeWithoutRender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimeWithoutRender_MetaData), NewProp_MaxTimeWithoutRender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bCullWhenNotRendered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bCullByViewFrustum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_bAllowPreCullingByViewFrustum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_MaxTimeOutsideViewFrustum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewProp_MaxTimeWithoutRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSystemVisibilityCullingSettings",
	Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::PropPointers),
	sizeof(FNiagaraSystemVisibilityCullingSettings),
	alignof(FNiagaraSystemVisibilityCullingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemVisibilityCullingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemVisibilityCullingSettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemVisibilityCullingSettings.InnerSingleton;
}
// End ScriptStruct FNiagaraSystemVisibilityCullingSettings

// Begin ScriptStruct FNiagaraSystemScalabilitySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettings;
class UScriptStruct* FNiagaraSystemScalabilitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemScalabilitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemScalabilitySettings>()
{
	return FNiagaraSystemScalabilitySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Scalability settings for Niagara Systems for a particular platform set (unless overridden). */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Scalability settings for Niagara Systems for a particular platform set (unless overridden)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** The platforms on which these settings are active (unless overridden). */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "The platforms on which these settings are active (unless overridden)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCullByDistance_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether distance culling is enabled. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether distance culling is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCullMaxInstanceCount_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether we should cull systems based on how many instances with the same Effect Type are active. */" },
		{ "DisplayName", "Cull By Effect Type Instance Count" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we should cull systems based on how many instances with the same Effect Type are active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCullPerSystemMaxInstanceCount_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether we should cull systems based on how many instances of the system are active. */" },
		{ "DisplayName", "Cull By System Instance Count" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we should cull systems based on how many instances of the system are active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Effects of this type are culled beyond this distance. */" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "EditCondition", "bCullByDistance" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Effects of this type are culled beyond this distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCullByMaxTimeWithoutRender_MetaData[] = {
		{ "Comment", "/** Deprecated visibility culling property. Moved into FNiagaraSystemVisibilityCullingSettings. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Deprecated visibility culling property. Moved into FNiagaraSystemVisibilityCullingSettings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInstances_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** \n\x09""Effects of this type will be culled when total active instances using this same EffectType exceeds this number. \n\x09If the effect type has a significance handler, instances are sorted by their significance and only the N most significant will be kept. The rest are culled.\n\x09If it does not have a significance handler, instance count culling will be applied at spawn time only. New FX that would exceed the counts are not spawned/activated.\n\x09*/" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "DisplayName", "Max Effect Type Instances" },
		{ "EditCondition", "bCullMaxInstanceCount" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Effects of this type will be culled when total active instances using this same EffectType exceeds this number.\nIf the effect type has a significance handler, instances are sorted by their significance and only the N most significant will be kept. The rest are culled.\nIf it does not have a significance handler, instance count culling will be applied at spawn time only. New FX that would exceed the counts are not spawned/activated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSystemInstances_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/**\n\x09""Effects of this type will be culled when total active instances of the same NiagaraSystem exceeds this number. \n\x09If the effect type has a significance handler, instances are sorted by their significance and only the N most significant will be kept. The rest are culled.\n\x09If it does not have a significance handler, instance count culling will be applied at spawn time only. New FX that would exceed the counts are not spawned/activated.\n\x09*/" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "EditCondition", "bCullPerSystemMaxInstanceCount" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Effects of this type will be culled when total active instances of the same NiagaraSystem exceeds this number.\nIf the effect type has a significance handler, instances are sorted by their significance and only the N most significant will be kept. The rest are culled.\nIf it does not have a significance handler, instance count culling will be applied at spawn time only. New FX that would exceed the counts are not spawned/activated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeWithoutRender_MetaData[] = {
		{ "Comment", "/** Depreceated visibiltiy culling property. Moved into FNiagaraSystemVisibilityCullingSettings. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Depreceated visibiltiy culling property. Moved into FNiagaraSystemVisibilityCullingSettings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullProxyMode_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls what, if any, proxy will be used in place of culled systems.  */" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls what, if any, proxy will be used in place of culled systems." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSystemProxies_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** \n\x09Limit on the number of proxies that can be used at once per system.\n\x09While much cheaper than full FX instances, proxies still incur some cost so must have a limit.\n\x09When significance information is available using a significance handler, the most significance proxies will be kept up to this limit.\n\x09*/" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "EditCondition", "CullProxyMode != ENiagaraCullProxyMode::None" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Limit on the number of proxies that can be used at once per system.\nWhile much cheaper than full FX instances, proxies still incur some cost so must have a limit.\nWhen significance information is available using a significance handler, the most significance proxies will be kept up to this limit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityCulling_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Settings controlling how systems are culled by visibility. */" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Settings controlling how systems are culled by visibility." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BudgetScaling_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Settings related to scaling down FX based on the current budget usage. */" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Settings related to scaling down FX based on the current budget usage." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
	static void NewProp_bCullByDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullByDistance;
	static void NewProp_bCullMaxInstanceCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullMaxInstanceCount;
	static void NewProp_bCullPerSystemMaxInstanceCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullPerSystemMaxInstanceCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static void NewProp_bCullByMaxTimeWithoutRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullByMaxTimeWithoutRender;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInstances;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSystemInstances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeWithoutRender;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CullProxyMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CullProxyMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSystemProxies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisibilityCulling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BudgetScaling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilitySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platforms_MetaData), NewProp_Platforms_MetaData) }; // 1338504544
void Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance_SetBit(void* Obj)
{
	((FNiagaraSystemScalabilitySettings*)Obj)->bCullByDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance = { "bCullByDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilitySettings), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCullByDistance_MetaData), NewProp_bCullByDistance_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount_SetBit(void* Obj)
{
	((FNiagaraSystemScalabilitySettings*)Obj)->bCullMaxInstanceCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount = { "bCullMaxInstanceCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilitySettings), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCullMaxInstanceCount_MetaData), NewProp_bCullMaxInstanceCount_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullPerSystemMaxInstanceCount_SetBit(void* Obj)
{
	((FNiagaraSystemScalabilitySettings*)Obj)->bCullPerSystemMaxInstanceCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullPerSystemMaxInstanceCount = { "bCullPerSystemMaxInstanceCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilitySettings), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullPerSystemMaxInstanceCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCullPerSystemMaxInstanceCount_MetaData), NewProp_bCullPerSystemMaxInstanceCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender_SetBit(void* Obj)
{
	((FNiagaraSystemScalabilitySettings*)Obj)->bCullByMaxTimeWithoutRender_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender = { "bCullByMaxTimeWithoutRender", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilitySettings), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCullByMaxTimeWithoutRender_MetaData), NewProp_bCullByMaxTimeWithoutRender_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxInstances = { "MaxInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, MaxInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInstances_MetaData), NewProp_MaxInstances_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxSystemInstances = { "MaxSystemInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, MaxSystemInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSystemInstances_MetaData), NewProp_MaxSystemInstances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxTimeWithoutRender = { "MaxTimeWithoutRender", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, MaxTimeWithoutRender_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimeWithoutRender_MetaData), NewProp_MaxTimeWithoutRender_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_CullProxyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_CullProxyMode = { "CullProxyMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, CullProxyMode), Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullProxyMode_MetaData), NewProp_CullProxyMode_MetaData) }; // 2614711884
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxSystemProxies = { "MaxSystemProxies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, MaxSystemProxies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSystemProxies_MetaData), NewProp_MaxSystemProxies_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_VisibilityCulling = { "VisibilityCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, VisibilityCulling), Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityCulling_MetaData), NewProp_VisibilityCulling_MetaData) }; // 1455911310
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_BudgetScaling = { "BudgetScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettings, BudgetScaling), Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BudgetScaling_MetaData), NewProp_BudgetScaling_MetaData) }; // 1667726507
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_Platforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullMaxInstanceCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullPerSystemMaxInstanceCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByMaxTimeWithoutRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxSystemInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxTimeWithoutRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_CullProxyMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_CullProxyMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_MaxSystemProxies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_VisibilityCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_BudgetScaling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSystemScalabilitySettings",
	Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::PropPointers),
	sizeof(FNiagaraSystemScalabilitySettings),
	alignof(FNiagaraSystemScalabilitySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettings.InnerSingleton;
}
// End ScriptStruct FNiagaraSystemScalabilitySettings

// Begin ScriptStruct FNiagaraSystemScalabilitySettingsArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettingsArray;
class UScriptStruct* FNiagaraSystemScalabilitySettingsArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettingsArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettingsArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemScalabilitySettingsArray"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettingsArray.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemScalabilitySettingsArray>()
{
	return FNiagaraSystemScalabilitySettingsArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Container struct for an array of system scalability settings. Enables details customization and data validation. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Container struct for an array of system scalability settings. Enables details customization and data validation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilitySettingsArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings, METADATA_PARAMS(0, nullptr) }; // 2223447972
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilitySettingsArray, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2223447972
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSystemScalabilitySettingsArray",
	Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::PropPointers),
	sizeof(FNiagaraSystemScalabilitySettingsArray),
	alignof(FNiagaraSystemScalabilitySettingsArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettingsArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettingsArray.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettingsArray.InnerSingleton;
}
// End ScriptStruct FNiagaraSystemScalabilitySettingsArray

// Begin ScriptStruct FNiagaraSystemScalabilityOverride
static_assert(std::is_polymorphic<FNiagaraSystemScalabilityOverride>() == std::is_polymorphic<FNiagaraSystemScalabilitySettings>(), "USTRUCT FNiagaraSystemScalabilityOverride cannot be polymorphic unless super FNiagaraSystemScalabilitySettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverride;
class UScriptStruct* FNiagaraSystemScalabilityOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemScalabilityOverride"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverride.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemScalabilityOverride>()
{
	return FNiagaraSystemScalabilityOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDistanceSettings_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Controls whether we override the distance culling settings. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we override the distance culling settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstanceCountSettings_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Controls whether we override the instance count culling settings. */" },
		{ "DisplayName", "Override Effect Type Instance Count Settings" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we override the instance count culling settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePerSystemInstanceCountSettings_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Controls whether we override the per system instance count culling settings. */" },
		{ "DisplayName", "Override System Instance Count Settings" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we override the per system instance count culling settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideVisibilitySettings_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Controls whether we override the visibility culling settings. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we override the visibility culling settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalBudgetScalingSettings_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Controls whether we override the global budget scaling settings. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we override the global budget scaling settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCullProxySettings_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Controls whether we override the cull proxy settings. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether we override the cull proxy settings." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideDistanceSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDistanceSettings;
	static void NewProp_bOverrideInstanceCountSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstanceCountSettings;
	static void NewProp_bOverridePerSystemInstanceCountSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePerSystemInstanceCountSettings;
	static void NewProp_bOverrideVisibilitySettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideVisibilitySettings;
	static void NewProp_bOverrideGlobalBudgetScalingSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalBudgetScalingSettings;
	static void NewProp_bOverrideCullProxySettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCullProxySettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilityOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings_SetBit(void* Obj)
{
	((FNiagaraSystemScalabilityOverride*)Obj)->bOverrideDistanceSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings = { "bOverrideDistanceSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDistanceSettings_MetaData), NewProp_bOverrideDistanceSettings_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings_SetBit(void* Obj)
{
	((FNiagaraSystemScalabilityOverride*)Obj)->bOverrideInstanceCountSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings = { "bOverrideInstanceCountSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideInstanceCountSettings_MetaData), NewProp_bOverrideInstanceCountSettings_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverridePerSystemInstanceCountSettings_SetBit(void* Obj)
{
	((FNiagaraSystemScalabilityOverride*)Obj)->bOverridePerSystemInstanceCountSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverridePerSystemInstanceCountSettings = { "bOverridePerSystemInstanceCountSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverridePerSystemInstanceCountSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePerSystemInstanceCountSettings_MetaData), NewProp_bOverridePerSystemInstanceCountSettings_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideVisibilitySettings_SetBit(void* Obj)
{
	((FNiagaraSystemScalabilityOverride*)Obj)->bOverrideVisibilitySettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideVisibilitySettings = { "bOverrideVisibilitySettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideVisibilitySettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideVisibilitySettings_MetaData), NewProp_bOverrideVisibilitySettings_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideGlobalBudgetScalingSettings_SetBit(void* Obj)
{
	((FNiagaraSystemScalabilityOverride*)Obj)->bOverrideGlobalBudgetScalingSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideGlobalBudgetScalingSettings = { "bOverrideGlobalBudgetScalingSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideGlobalBudgetScalingSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideGlobalBudgetScalingSettings_MetaData), NewProp_bOverrideGlobalBudgetScalingSettings_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideCullProxySettings_SetBit(void* Obj)
{
	((FNiagaraSystemScalabilityOverride*)Obj)->bOverrideCullProxySettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideCullProxySettings = { "bOverrideCullProxySettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSystemScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideCullProxySettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCullProxySettings_MetaData), NewProp_bOverrideCullProxySettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideDistanceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideInstanceCountSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverridePerSystemInstanceCountSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideVisibilitySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideGlobalBudgetScalingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewProp_bOverrideCullProxySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings,
	&NewStructOps,
	"NiagaraSystemScalabilityOverride",
	Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::PropPointers),
	sizeof(FNiagaraSystemScalabilityOverride),
	alignof(FNiagaraSystemScalabilityOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverride.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverride.InnerSingleton;
}
// End ScriptStruct FNiagaraSystemScalabilityOverride

// Begin ScriptStruct FNiagaraEmitterScalabilitySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettings;
class UScriptStruct* FNiagaraEmitterScalabilitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScalabilitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScalabilitySettings>()
{
	return FNiagaraEmitterScalabilitySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Scalability settings for Niagara Emitters on a particular platform set. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Scalability settings for Niagara Emitters on a particular platform set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** The platforms on which these settings are active (unless overridden). */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "The platforms on which these settings are active (unless overridden)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleSpawnCount_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Enable spawn count scaling */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Enable spawn count scaling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCountScale_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Scale factor applied to spawn counts for this emitter. */" },
		{ "DisplayInScalabilityValuesBar", "" },
		{ "EditCondition", "bScaleSpawnCount" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Scale factor applied to spawn counts for this emitter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
	static void NewProp_bScaleSpawnCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleSpawnCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnCountScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilitySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterScalabilitySettings, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platforms_MetaData), NewProp_Platforms_MetaData) }; // 1338504544
void Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount_SetBit(void* Obj)
{
	((FNiagaraEmitterScalabilitySettings*)Obj)->bScaleSpawnCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount = { "bScaleSpawnCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraEmitterScalabilitySettings), &Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleSpawnCount_MetaData), NewProp_bScaleSpawnCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_SpawnCountScale = { "SpawnCountScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterScalabilitySettings, SpawnCountScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCountScale_MetaData), NewProp_SpawnCountScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_Platforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_bScaleSpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewProp_SpawnCountScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEmitterScalabilitySettings",
	Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::PropPointers),
	sizeof(FNiagaraEmitterScalabilitySettings),
	alignof(FNiagaraEmitterScalabilitySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettings.InnerSingleton;
}
// End ScriptStruct FNiagaraEmitterScalabilitySettings

// Begin ScriptStruct FNiagaraEmitterScalabilitySettingsArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettingsArray;
class UScriptStruct* FNiagaraEmitterScalabilitySettingsArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettingsArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettingsArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScalabilitySettingsArray"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettingsArray.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScalabilitySettingsArray>()
{
	return FNiagaraEmitterScalabilitySettingsArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Container struct for an array of emitter scalability settings. Enables details customization and data validation. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Container struct for an array of emitter scalability settings. Enables details customization and data validation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilitySettingsArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings, METADATA_PARAMS(0, nullptr) }; // 4027680386
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterScalabilitySettingsArray, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4027680386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEmitterScalabilitySettingsArray",
	Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::PropPointers),
	sizeof(FNiagaraEmitterScalabilitySettingsArray),
	alignof(FNiagaraEmitterScalabilitySettingsArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettingsArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettingsArray.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettingsArray.InnerSingleton;
}
// End ScriptStruct FNiagaraEmitterScalabilitySettingsArray

// Begin ScriptStruct FNiagaraEmitterScalabilityOverride
static_assert(std::is_polymorphic<FNiagaraEmitterScalabilityOverride>() == std::is_polymorphic<FNiagaraEmitterScalabilitySettings>(), "USTRUCT FNiagaraEmitterScalabilityOverride cannot be polymorphic unless super FNiagaraEmitterScalabilitySettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverride;
class UScriptStruct* FNiagaraEmitterScalabilityOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScalabilityOverride"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverride.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScalabilityOverride>()
{
	return FNiagaraEmitterScalabilityOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnCountScale_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "//Controls whether spawn count scale should be overridden.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls whether spawn count scale should be overridden." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideSpawnCountScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnCountScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilityOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale_SetBit(void* Obj)
{
	((FNiagaraEmitterScalabilityOverride*)Obj)->bOverrideSpawnCountScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale = { "bOverrideSpawnCountScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraEmitterScalabilityOverride), &Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSpawnCountScale_MetaData), NewProp_bOverrideSpawnCountScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewProp_bOverrideSpawnCountScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings,
	&NewStructOps,
	"NiagaraEmitterScalabilityOverride",
	Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::PropPointers),
	sizeof(FNiagaraEmitterScalabilityOverride),
	alignof(FNiagaraEmitterScalabilityOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverride.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverride.InnerSingleton;
}
// End ScriptStruct FNiagaraEmitterScalabilityOverride

// Begin ScriptStruct FNiagaraEmitterScalabilityOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverrides;
class UScriptStruct* FNiagaraEmitterScalabilityOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScalabilityOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverrides.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScalabilityOverrides>()
{
	return FNiagaraEmitterScalabilityOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Container struct for an array of emitter scalability overrides. Enables details customization and data validation. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Container struct for an array of emitter scalability overrides. Enables details customization and data validation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[] = {
		{ "Category", "Override" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Overrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Overrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScalabilityOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides_Inner = { "Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride, METADATA_PARAMS(0, nullptr) }; // 1094829649
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterScalabilityOverrides, Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overrides_MetaData), NewProp_Overrides_MetaData) }; // 1094829649
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewProp_Overrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEmitterScalabilityOverrides",
	Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::PropPointers),
	sizeof(FNiagaraEmitterScalabilityOverrides),
	alignof(FNiagaraEmitterScalabilityOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverrides.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverrides.InnerSingleton;
}
// End ScriptStruct FNiagaraEmitterScalabilityOverrides

// Begin Class UNiagaraSignificanceHandler
void UNiagaraSignificanceHandler::StaticRegisterNativesUNiagaraSignificanceHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSignificanceHandler);
UClass* Z_Construct_UClass_UNiagaraSignificanceHandler_NoRegister()
{
	return UNiagaraSignificanceHandler::StaticClass();
}
struct Z_Construct_UClass_UNiagaraSignificanceHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\nBase class for significance handlers. \nThese allow Niagara's scalability system to determine the relative significance of different FX in the scene.\nSome basic ones are provided but projects are free to implement their own more complex determinations of significance.\nFor example, FX attached to the player character could be given higher priority.\n*/" },
		{ "IncludePath", "NiagaraEffectType.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Base class for significance handlers.\nThese allow Niagara's scalability system to determine the relative significance of different FX in the scene.\nSome basic ones are provided but projects are free to implement their own more complex determinations of significance.\nFor example, FX attached to the player character could be given higher priority." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSignificanceHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraSignificanceHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSignificanceHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSignificanceHandler_Statics::ClassParams = {
	&UNiagaraSignificanceHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSignificanceHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraSignificanceHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraSignificanceHandler()
{
	if (!Z_Registration_Info_UClass_UNiagaraSignificanceHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSignificanceHandler.OuterSingleton, Z_Construct_UClass_UNiagaraSignificanceHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraSignificanceHandler.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraSignificanceHandler>()
{
	return UNiagaraSignificanceHandler::StaticClass();
}
UNiagaraSignificanceHandler::UNiagaraSignificanceHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSignificanceHandler);
UNiagaraSignificanceHandler::~UNiagaraSignificanceHandler() {}
// End Class UNiagaraSignificanceHandler

// Begin Class UNiagaraSignificanceHandlerDistance
void UNiagaraSignificanceHandlerDistance::StaticRegisterNativesUNiagaraSignificanceHandlerDistance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSignificanceHandlerDistance);
UClass* Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_NoRegister()
{
	return UNiagaraSignificanceHandlerDistance::StaticClass();
}
struct Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Significance is determined by the system's distance to the nearest camera. Closer systems are more significant. */" },
		{ "DisplayName", "Distance" },
		{ "IncludePath", "NiagaraEffectType.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Significance is determined by the system's distance to the nearest camera. Closer systems are more significant." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSignificanceHandlerDistance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraSignificanceHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_Statics::ClassParams = {
	&UNiagaraSignificanceHandlerDistance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraSignificanceHandlerDistance()
{
	if (!Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.OuterSingleton, Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraSignificanceHandlerDistance>()
{
	return UNiagaraSignificanceHandlerDistance::StaticClass();
}
UNiagaraSignificanceHandlerDistance::UNiagaraSignificanceHandlerDistance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSignificanceHandlerDistance);
UNiagaraSignificanceHandlerDistance::~UNiagaraSignificanceHandlerDistance() {}
// End Class UNiagaraSignificanceHandlerDistance

// Begin Class UNiagaraSignificanceHandlerAge
void UNiagaraSignificanceHandlerAge::StaticRegisterNativesUNiagaraSignificanceHandlerAge()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSignificanceHandlerAge);
UClass* Z_Construct_UClass_UNiagaraSignificanceHandlerAge_NoRegister()
{
	return UNiagaraSignificanceHandlerAge::StaticClass();
}
struct Z_Construct_UClass_UNiagaraSignificanceHandlerAge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Significance is determined by the system's age. Newer systems are more significant. */" },
		{ "DisplayName", "Age" },
		{ "IncludePath", "NiagaraEffectType.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Significance is determined by the system's age. Newer systems are more significant." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSignificanceHandlerAge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraSignificanceHandlerAge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraSignificanceHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSignificanceHandlerAge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSignificanceHandlerAge_Statics::ClassParams = {
	&UNiagaraSignificanceHandlerAge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSignificanceHandlerAge_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraSignificanceHandlerAge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraSignificanceHandlerAge()
{
	if (!Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.OuterSingleton, Z_Construct_UClass_UNiagaraSignificanceHandlerAge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraSignificanceHandlerAge>()
{
	return UNiagaraSignificanceHandlerAge::StaticClass();
}
UNiagaraSignificanceHandlerAge::UNiagaraSignificanceHandlerAge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSignificanceHandlerAge);
UNiagaraSignificanceHandlerAge::~UNiagaraSignificanceHandlerAge() {}
// End Class UNiagaraSignificanceHandlerAge

// Begin Class UNiagaraEffectType
void UNiagaraEffectType::StaticRegisterNativesUNiagaraEffectType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEffectType);
UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister()
{
	return UNiagaraEffectType::StaticClass();
}
struct Z_Construct_UClass_UNiagaraEffectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Contains settings and working data shared among many NiagaraSystems that share some commonality of type. For example ImpactFX vs EnvironmentalFX. */" },
		{ "IncludePath", "NiagaraEffectType.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Contains settings and working data shared among many NiagaraSystems that share some commonality of type. For example ImpactFX vs EnvironmentalFX." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCullingForLocalPlayers_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether or not culling is allowed for FX that are owned by, attached to or instigated by a locally controlled pawn. */" },
		{ "DisplayInSystemScalability", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ScalabilityBarDisplayName", "Local Player Culling" },
		{ "ToolTip", "Controls whether or not culling is allowed for FX that are owned by, attached to or instigated by a locally controlled pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** How regularly effects of this type are checked for scalability. */" },
		{ "DisplayInSystemScalability", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ScalabilityBarDisplayName", "Frequency" },
		{ "ToolTip", "How regularly effects of this type are checked for scalability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullReaction_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** How effects of this type react when they fail the cull checks. */" },
		{ "DisplayInSystemScalability", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ScalabilityBarDisplayName", "Reaction" },
		{ "ToolTip", "How effects of this type react when they fail the cull checks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignificanceHandler_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Used to determine the relative significance of FX in the scene which is used in other scalability systems such as instance count culling. */" },
		{ "DisplayClassDisplayName", "" },
		{ "DisplayInSystemScalability", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ScalabilityBarDisplayName", "Significance" },
		{ "ToolTip", "Used to determine the relative significance of FX in the scene which is used in other scalability systems such as instance count culling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailLevelScalabilitySettings_MetaData[] = {
		{ "Comment", "/** Cull settings to use at each detail level. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Cull settings to use at each detail level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemScalabilitySettings_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterScalabilitySettings_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_Inner_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** A set of rules to apply when checking content. To create your own rules, write a custom class that extends UNiagaraValidationRule. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "A set of rules to apply when checking content. To create your own rules, write a custom class that extends UNiagaraValidationRule." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** A set of rules to apply when checking content. To create your own rules, write a custom class that extends UNiagaraValidationRule. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "A set of rules to apply when checking content. To create your own rules, write a custom class that extends UNiagaraValidationRule." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRuleSets_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Array of reusable rule sets to apply when checking content. To create your own rules, write a custom class that extends UNiagaraValidationRule. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Array of reusable rule sets to apply when checking content. To create your own rules, write a custom class that extends UNiagaraValidationRule." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceBaselineController_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Controls generation of performance baseline data for this effect type. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Controls generation of performance baseline data for this effect type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerfBaselineStats_MetaData[] = {
		{ "Comment", "/**\n\x09Performance data gathered from the Baseline System. \n\x09These give artists a good idea of the perf to aim for in their own FX.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Performance data gathered from the Baseline System.\nThese give artists a good idea of the perf to aim for in their own FX." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerfBaselineVersion_MetaData[] = {
		{ "Comment", "//Version guid at the time these baseline stats were generated.\n//Allows us to invalidate perf baseline results if there are significant performance optimizations\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEffectType.h" },
		{ "ToolTip", "Version guid at the time these baseline stats were generated.\nAllows us to invalidate perf baseline results if there are significant performance optimizations" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowCullingForLocalPlayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCullingForLocalPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateFrequency_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateFrequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CullReaction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CullReaction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SignificanceHandler;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetailLevelScalabilitySettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DetailLevelScalabilitySettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SystemScalabilitySettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterScalabilitySettings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidationRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationRules;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidationRuleSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationRuleSets;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerformanceBaselineController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerfBaselineStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerfBaselineVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEffectType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_bAllowCullingForLocalPlayers_SetBit(void* Obj)
{
	((UNiagaraEffectType*)Obj)->bAllowCullingForLocalPlayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_bAllowCullingForLocalPlayers = { "bAllowCullingForLocalPlayers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraEffectType), &Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_bAllowCullingForLocalPlayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCullingForLocalPlayers_MetaData), NewProp_bAllowCullingForLocalPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, UpdateFrequency), Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateFrequency_MetaData), NewProp_UpdateFrequency_MetaData) }; // 3924559547
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction = { "CullReaction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, CullReaction), Z_Construct_UEnum_Niagara_ENiagaraCullReaction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullReaction_MetaData), NewProp_CullReaction_MetaData) }; // 2967652929
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_SignificanceHandler = { "SignificanceHandler", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, SignificanceHandler), Z_Construct_UClass_UNiagaraSignificanceHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignificanceHandler_MetaData), NewProp_SignificanceHandler_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings_Inner = { "DetailLevelScalabilitySettings", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings, METADATA_PARAMS(0, nullptr) }; // 2223447972
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings = { "DetailLevelScalabilitySettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, DetailLevelScalabilitySettings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailLevelScalabilitySettings_MetaData), NewProp_DetailLevelScalabilitySettings_MetaData) }; // 2223447972
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_SystemScalabilitySettings = { "SystemScalabilitySettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, SystemScalabilitySettings), Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemScalabilitySettings_MetaData), NewProp_SystemScalabilitySettings_MetaData) }; // 2247066584
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_EmitterScalabilitySettings = { "EmitterScalabilitySettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, EmitterScalabilitySettings), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterScalabilitySettings_MetaData), NewProp_EmitterScalabilitySettings_MetaData) }; // 3478723559
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_ValidationRules_Inner = { "ValidationRules", nullptr, (EPropertyFlags)0x0106000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraValidationRule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationRules_Inner_MetaData), NewProp_ValidationRules_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_ValidationRules = { "ValidationRules", nullptr, (EPropertyFlags)0x0114008800000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, ValidationRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationRules_MetaData), NewProp_ValidationRules_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_ValidationRuleSets_Inner = { "ValidationRuleSets", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_ValidationRuleSets = { "ValidationRuleSets", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, ValidationRuleSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationRuleSets_MetaData), NewProp_ValidationRuleSets_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_PerformanceBaselineController = { "PerformanceBaselineController", nullptr, (EPropertyFlags)0x0146000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, PerformanceBaselineController), Z_Construct_UClass_UNiagaraBaselineController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformanceBaselineController_MetaData), NewProp_PerformanceBaselineController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_PerfBaselineStats = { "PerfBaselineStats", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, PerfBaselineStats), Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerfBaselineStats_MetaData), NewProp_PerfBaselineStats_MetaData) }; // 1504386839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_PerfBaselineVersion = { "PerfBaselineVersion", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraEffectType, PerfBaselineVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerfBaselineVersion_MetaData), NewProp_PerfBaselineVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraEffectType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_bAllowCullingForLocalPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_UpdateFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_CullReaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_SignificanceHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_DetailLevelScalabilitySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_SystemScalabilitySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_EmitterScalabilitySettings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_ValidationRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_ValidationRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_ValidationRuleSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_ValidationRuleSets,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_PerformanceBaselineController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_PerfBaselineStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_PerfBaselineVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraEffectType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEffectType_Statics::ClassParams = {
	&UNiagaraEffectType::StaticClass,
	"Niagara",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraEffectType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::PropPointers),
	0,
	0x008804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectType_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraEffectType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraEffectType()
{
	if (!Z_Registration_Info_UClass_UNiagaraEffectType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEffectType.OuterSingleton, Z_Construct_UClass_UNiagaraEffectType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraEffectType.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraEffectType>()
{
	return UNiagaraEffectType::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEffectType);
UNiagaraEffectType::~UNiagaraEffectType() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraEffectType)
// End Class UNiagaraEffectType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraCullReaction_StaticEnum, TEXT("ENiagaraCullReaction"), &Z_Registration_Info_UEnum_ENiagaraCullReaction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2967652929U) },
		{ ENiagaraScalabilityUpdateFrequency_StaticEnum, TEXT("ENiagaraScalabilityUpdateFrequency"), &Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3924559547U) },
		{ ENiagaraCullProxyMode_StaticEnum, TEXT("ENiagaraCullProxyMode"), &Z_Registration_Info_UEnum_ENiagaraCullProxyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2614711884U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraLinearRamp::StaticStruct, Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::NewStructOps, TEXT("NiagaraLinearRamp"), &Z_Registration_Info_UScriptStruct_NiagaraLinearRamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraLinearRamp), 3111941351U) },
		{ FNiagaraGlobalBudgetScaling::StaticStruct, Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewStructOps, TEXT("NiagaraGlobalBudgetScaling"), &Z_Registration_Info_UScriptStruct_NiagaraGlobalBudgetScaling, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraGlobalBudgetScaling), 1667726507U) },
		{ FNiagaraSystemVisibilityCullingSettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewStructOps, TEXT("NiagaraSystemVisibilityCullingSettings"), &Z_Registration_Info_UScriptStruct_NiagaraSystemVisibilityCullingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemVisibilityCullingSettings), 1455911310U) },
		{ FNiagaraSystemScalabilitySettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewStructOps, TEXT("NiagaraSystemScalabilitySettings"), &Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemScalabilitySettings), 2223447972U) },
		{ FNiagaraSystemScalabilitySettingsArray::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewStructOps, TEXT("NiagaraSystemScalabilitySettingsArray"), &Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilitySettingsArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemScalabilitySettingsArray), 2247066584U) },
		{ FNiagaraSystemScalabilityOverride::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewStructOps, TEXT("NiagaraSystemScalabilityOverride"), &Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemScalabilityOverride), 339833541U) },
		{ FNiagaraEmitterScalabilitySettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewStructOps, TEXT("NiagaraEmitterScalabilitySettings"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterScalabilitySettings), 4027680386U) },
		{ FNiagaraEmitterScalabilitySettingsArray::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewStructOps, TEXT("NiagaraEmitterScalabilitySettingsArray"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilitySettingsArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterScalabilitySettingsArray), 3478723559U) },
		{ FNiagaraEmitterScalabilityOverride::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewStructOps, TEXT("NiagaraEmitterScalabilityOverride"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterScalabilityOverride), 1094829649U) },
		{ FNiagaraEmitterScalabilityOverrides::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewStructOps, TEXT("NiagaraEmitterScalabilityOverrides"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterScalabilityOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterScalabilityOverrides), 1621519405U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSignificanceHandler, UNiagaraSignificanceHandler::StaticClass, TEXT("UNiagaraSignificanceHandler"), &Z_Registration_Info_UClass_UNiagaraSignificanceHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSignificanceHandler), 2392712704U) },
		{ Z_Construct_UClass_UNiagaraSignificanceHandlerDistance, UNiagaraSignificanceHandlerDistance::StaticClass, TEXT("UNiagaraSignificanceHandlerDistance"), &Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSignificanceHandlerDistance), 3292681332U) },
		{ Z_Construct_UClass_UNiagaraSignificanceHandlerAge, UNiagaraSignificanceHandlerAge::StaticClass, TEXT("UNiagaraSignificanceHandlerAge"), &Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSignificanceHandlerAge), 2928421188U) },
		{ Z_Construct_UClass_UNiagaraEffectType, UNiagaraEffectType::StaticClass, TEXT("UNiagaraEffectType"), &Z_Registration_Info_UClass_UNiagaraEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEffectType), 2166961138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_2416261548(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
