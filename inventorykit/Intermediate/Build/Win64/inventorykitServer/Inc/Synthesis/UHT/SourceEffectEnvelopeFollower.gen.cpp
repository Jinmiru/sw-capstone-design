// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectEnvelopeFollower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectEnvelopeFollower() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
SYNTHESIS_API UClass* Z_Construct_UClass_UEnvelopeFollowerListener();
SYNTHESIS_API UClass* Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode();
SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Enum EEnvelopeFollowerPeakMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode;
static UEnum* EEnvelopeFollowerPeakMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("EEnvelopeFollowerPeakMode"));
	}
	return Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<EEnvelopeFollowerPeakMode>()
{
	return EEnvelopeFollowerPeakMode_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EEnvelopeFollowerPeakMode::Count" },
		{ "MeanSquared.Name", "EEnvelopeFollowerPeakMode::MeanSquared" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "Peak.Name", "EEnvelopeFollowerPeakMode::Peak" },
		{ "RootMeanSquared.Name", "EEnvelopeFollowerPeakMode::RootMeanSquared" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvelopeFollowerPeakMode::MeanSquared", (int64)EEnvelopeFollowerPeakMode::MeanSquared },
		{ "EEnvelopeFollowerPeakMode::RootMeanSquared", (int64)EEnvelopeFollowerPeakMode::RootMeanSquared },
		{ "EEnvelopeFollowerPeakMode::Peak", (int64)EEnvelopeFollowerPeakMode::Peak },
		{ "EEnvelopeFollowerPeakMode::Count", (int64)EEnvelopeFollowerPeakMode::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"EEnvelopeFollowerPeakMode",
	"EEnvelopeFollowerPeakMode",
	Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode()
{
	if (!Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.InnerSingleton, Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.InnerSingleton;
}
// End Enum EEnvelopeFollowerPeakMode

// Begin ScriptStruct FSourceEffectEnvelopeFollowerSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings;
class UScriptStruct* FSourceEffectEnvelopeFollowerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectEnvelopeFollowerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectEnvelopeFollowerSettings>()
{
	return FSourceEffectEnvelopeFollowerSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The attack time of the envelope follower in milliseconds\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "The attack time of the envelope follower in milliseconds" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The release time of the envelope follower in milliseconds\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "The release time of the envelope follower in milliseconds" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The peak mode of the envelope follower\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "The peak mode of the envelope follower" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAnalogMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Whether or not the envelope follower is in analog mode\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "Whether or not the envelope follower is in analog mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
	static void NewProp_bIsAnalogMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAnalogMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectEnvelopeFollowerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectEnvelopeFollowerSettings, AttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTime_MetaData), NewProp_AttackTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectEnvelopeFollowerSettings, ReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseTime_MetaData), NewProp_ReleaseTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectEnvelopeFollowerSettings, PeakMode), Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakMode_MetaData), NewProp_PeakMode_MetaData) }; // 1259287637
void Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_SetBit(void* Obj)
{
	((FSourceEffectEnvelopeFollowerSettings*)Obj)->bIsAnalogMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode = { "bIsAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceEffectEnvelopeFollowerSettings), &Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAnalogMode_MetaData), NewProp_bIsAnalogMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectEnvelopeFollowerSettings",
	Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::PropPointers),
	sizeof(FSourceEffectEnvelopeFollowerSettings),
	alignof(FSourceEffectEnvelopeFollowerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectEnvelopeFollowerSettings

// Begin Delegate FOnEnvelopeFollowerUpdate
struct Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics
{
	struct _Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms
	{
		float EnvelopeValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvelopeValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::NewProp_EnvelopeValue = { "EnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms, EnvelopeValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::NewProp_EnvelopeValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnEnvelopeFollowerUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::_Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::_Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEnvelopeFollowerUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnEnvelopeFollowerUpdate, float EnvelopeValue)
{
	struct _Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms
	{
		float EnvelopeValue;
	};
	_Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms Parms;
	Parms.EnvelopeValue=EnvelopeValue;
	OnEnvelopeFollowerUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEnvelopeFollowerUpdate

// Begin Class UEnvelopeFollowerListener
void UEnvelopeFollowerListener::StaticRegisterNativesUEnvelopeFollowerListener()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvelopeFollowerListener);
UClass* Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister()
{
	return UEnvelopeFollowerListener::StaticClass();
}
struct Z_Construct_UClass_UEnvelopeFollowerListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD" },
		{ "IncludePath", "SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnvelopeFollowerUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnvelopeFollowerUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvelopeFollowerListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate = { "OnEnvelopeFollowerUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvelopeFollowerListener, OnEnvelopeFollowerUpdate), Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnvelopeFollowerUpdate_MetaData), NewProp_OnEnvelopeFollowerUpdate_MetaData) }; // 537865181
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvelopeFollowerListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvelopeFollowerListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvelopeFollowerListener_Statics::ClassParams = {
	&UEnvelopeFollowerListener::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvelopeFollowerListener_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvelopeFollowerListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvelopeFollowerListener()
{
	if (!Z_Registration_Info_UClass_UEnvelopeFollowerListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvelopeFollowerListener.OuterSingleton, Z_Construct_UClass_UEnvelopeFollowerListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvelopeFollowerListener.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<UEnvelopeFollowerListener>()
{
	return UEnvelopeFollowerListener::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvelopeFollowerListener);
// End Class UEnvelopeFollowerListener

// Begin Class USourceEffectEnvelopeFollowerPreset Function RegisterEnvelopeFollowerListener
struct Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics
{
	struct SourceEffectEnvelopeFollowerPreset_eventRegisterEnvelopeFollowerListener_Parms
	{
		UEnvelopeFollowerListener* EnvelopeFollowerListener;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Registers an envelope follower listener with the effect. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "Registers an envelope follower listener with the effect." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerListener_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnvelopeFollowerListener;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener = { "EnvelopeFollowerListener", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectEnvelopeFollowerPreset_eventRegisterEnvelopeFollowerListener_Parms, EnvelopeFollowerListener), Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerListener_MetaData), NewProp_EnvelopeFollowerListener_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, nullptr, "RegisterEnvelopeFollowerListener", nullptr, nullptr, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::SourceEffectEnvelopeFollowerPreset_eventRegisterEnvelopeFollowerListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::SourceEffectEnvelopeFollowerPreset_eventRegisterEnvelopeFollowerListener_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectEnvelopeFollowerPreset::execRegisterEnvelopeFollowerListener)
{
	P_GET_OBJECT(UEnvelopeFollowerListener,Z_Param_EnvelopeFollowerListener);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterEnvelopeFollowerListener(Z_Param_EnvelopeFollowerListener);
	P_NATIVE_END;
}
// End Class USourceEffectEnvelopeFollowerPreset Function RegisterEnvelopeFollowerListener

// Begin Class USourceEffectEnvelopeFollowerPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics
{
	struct SourceEffectEnvelopeFollowerPreset_eventSetSettings_Parms
	{
		FSourceEffectEnvelopeFollowerSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectEnvelopeFollowerPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 45646791
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::SourceEffectEnvelopeFollowerPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::SourceEffectEnvelopeFollowerPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectEnvelopeFollowerPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectEnvelopeFollowerSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USourceEffectEnvelopeFollowerPreset Function SetSettings

// Begin Class USourceEffectEnvelopeFollowerPreset Function UnregisterEnvelopeFollowerListener
struct Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics
{
	struct SourceEffectEnvelopeFollowerPreset_eventUnregisterEnvelopeFollowerListener_Parms
	{
		UEnvelopeFollowerListener* EnvelopeFollowerListener;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Unregisters an envelope follower listener with the effect. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "Unregisters an envelope follower listener with the effect." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerListener_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnvelopeFollowerListener;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener = { "EnvelopeFollowerListener", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectEnvelopeFollowerPreset_eventUnregisterEnvelopeFollowerListener_Parms, EnvelopeFollowerListener), Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerListener_MetaData), NewProp_EnvelopeFollowerListener_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, nullptr, "UnregisterEnvelopeFollowerListener", nullptr, nullptr, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::SourceEffectEnvelopeFollowerPreset_eventUnregisterEnvelopeFollowerListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::SourceEffectEnvelopeFollowerPreset_eventUnregisterEnvelopeFollowerListener_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectEnvelopeFollowerPreset::execUnregisterEnvelopeFollowerListener)
{
	P_GET_OBJECT(UEnvelopeFollowerListener,Z_Param_EnvelopeFollowerListener);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterEnvelopeFollowerListener(Z_Param_EnvelopeFollowerListener);
	P_NATIVE_END;
}
// End Class USourceEffectEnvelopeFollowerPreset Function UnregisterEnvelopeFollowerListener

// Begin Class USourceEffectEnvelopeFollowerPreset
void USourceEffectEnvelopeFollowerPreset::StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset()
{
	UClass* Class = USourceEffectEnvelopeFollowerPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterEnvelopeFollowerListener", &USourceEffectEnvelopeFollowerPreset::execRegisterEnvelopeFollowerListener },
		{ "SetSettings", &USourceEffectEnvelopeFollowerPreset::execSetSettings },
		{ "UnregisterEnvelopeFollowerListener", &USourceEffectEnvelopeFollowerPreset::execUnregisterEnvelopeFollowerListener },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectEnvelopeFollowerPreset);
UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister()
{
	return USourceEffectEnvelopeFollowerPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener, "RegisterEnvelopeFollowerListener" }, // 1763355814
		{ &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings, "SetSettings" }, // 1121827254
		{ &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener, "UnregisterEnvelopeFollowerListener" }, // 1024331162
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectEnvelopeFollowerPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectEnvelopeFollowerPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 45646791
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::ClassParams = {
	&USourceEffectEnvelopeFollowerPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.OuterSingleton, Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectEnvelopeFollowerPreset>()
{
	return USourceEffectEnvelopeFollowerPreset::StaticClass();
}
USourceEffectEnvelopeFollowerPreset::USourceEffectEnvelopeFollowerPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectEnvelopeFollowerPreset);
USourceEffectEnvelopeFollowerPreset::~USourceEffectEnvelopeFollowerPreset() {}
// End Class USourceEffectEnvelopeFollowerPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnvelopeFollowerPeakMode_StaticEnum, TEXT("EEnvelopeFollowerPeakMode"), &Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1259287637U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectEnvelopeFollowerSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewStructOps, TEXT("SourceEffectEnvelopeFollowerSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectEnvelopeFollowerSettings), 45646791U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvelopeFollowerListener, UEnvelopeFollowerListener::StaticClass, TEXT("UEnvelopeFollowerListener"), &Z_Registration_Info_UClass_UEnvelopeFollowerListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvelopeFollowerListener), 1916152496U) },
		{ Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, USourceEffectEnvelopeFollowerPreset::StaticClass, TEXT("USourceEffectEnvelopeFollowerPreset"), &Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectEnvelopeFollowerPreset), 2170285865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_840760475(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
