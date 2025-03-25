// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioMixer/Public/Components/SynthComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponent() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent_NoRegister();
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthSound();
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthSound_NoRegister();
AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModulationDestination();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModulationRouting();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References

// Begin Delegate FOnSynthEnvelopeValue
struct Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics
{
	struct _Script_AudioMixer_eventOnSynthEnvelopeValue_Parms
	{
		float EnvelopeValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called by a synth component and returns the sound's envelope value (using an envelope follower in the audio renderer).\n* This only works in the audio mixer.\n*/" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Called by a synth component and returns the sound's envelope value (using an envelope follower in the audio renderer).\nThis only works in the audio mixer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvelopeValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue = { "EnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioMixer_eventOnSynthEnvelopeValue_Parms, EnvelopeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeValue_MetaData), NewProp_EnvelopeValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnSynthEnvelopeValue__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::_Script_AudioMixer_eventOnSynthEnvelopeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::_Script_AudioMixer_eventOnSynthEnvelopeValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSynthEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnSynthEnvelopeValue, const float EnvelopeValue)
{
	struct _Script_AudioMixer_eventOnSynthEnvelopeValue_Parms
	{
		float EnvelopeValue;
	};
	_Script_AudioMixer_eventOnSynthEnvelopeValue_Parms Parms;
	Parms.EnvelopeValue=EnvelopeValue;
	OnSynthEnvelopeValue.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSynthEnvelopeValue

// Begin Class USynthSound
void USynthSound::StaticRegisterNativesUSynthSound()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthSound);
UClass* Z_Construct_UClass_USynthSound_NoRegister()
{
	return USynthSound::StaticClass();
}
struct Z_Construct_UClass_USynthSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Components/SynthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningSynthComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningSynthComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthSound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent = { "OwningSynthComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthSound, OwningSynthComponent), Z_Construct_UClass_USynthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningSynthComponent_MetaData), NewProp_OwningSynthComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynthSound_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynthSound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynthSound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthSound_Statics::ClassParams = {
	&USynthSound::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USynthSound_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USynthSound_Statics::PropPointers),
	0,
	0x008810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynthSound_Statics::Class_MetaDataParams), Z_Construct_UClass_USynthSound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynthSound()
{
	if (!Z_Registration_Info_UClass_USynthSound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthSound.OuterSingleton, Z_Construct_UClass_USynthSound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynthSound.OuterSingleton;
}
template<> AUDIOMIXER_API UClass* StaticClass<USynthSound>()
{
	return USynthSound::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynthSound);
USynthSound::~USynthSound() {}
// End Class USynthSound

// Begin Class USynthComponent Function AdjustVolume
struct Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics
{
	struct SynthComponent_eventAdjustVolume_Parms
	{
		float AdjustVolumeDuration;
		float AdjustVolumeLevel;
		EAudioFaderCurve FadeCurve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** This function allows designers to trigger an adjustment to the sound instance\xe2\x80\x99s playback Volume with options for smoothly applying a curve over time.\n     * @param AdjustVolumeDuration The length of time in which to interpolate between the initial volume and the new volume.\n     * @param AdjustVolumeLevel The new volume to set the Audio Component to.\n     * @param FadeCurve The curve used when interpolating between the old and new volume.\n     */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This function allows designers to trigger an adjustment to the sound instance\xe2\x80\x99s playback Volume with options for smoothly applying a curve over time.\n@param AdjustVolumeDuration The length of time in which to interpolate between the initial volume and the new volume.\n@param AdjustVolumeLevel The new volume to set the Audio Component to.\n@param FadeCurve The curve used when interpolating between the old and new volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventAdjustVolume_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeCurve_MetaData), NewProp_FadeCurve_MetaData) }; // 1514737569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "AdjustVolume", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::SynthComponent_eventAdjustVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::SynthComponent_eventAdjustVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_AdjustVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execAdjustVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
	P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel,EAudioFaderCurve(Z_Param_FadeCurve));
	P_NATIVE_END;
}
// End Class USynthComponent Function AdjustVolume

// Begin Class USynthComponent Function FadeIn
struct Z_Construct_UFunction_USynthComponent_FadeIn_Statics
{
	struct SynthComponent_eventFadeIn_Parms
	{
		float FadeInDuration;
		float FadeVolumeLevel;
		float StartTime;
		EAudioFaderCurve FadeCurve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * This function allows designers to call Play on an Audio Component instance while applying a volume curve over time. \n\x09 * Parameters allow designers to indicate the duration of the fade, the curve shape, and the start time if seeking into the sound.\n\x09 *\n\x09 * @param FadeInDuration How long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel The percentage of the AudioComponents's calculated volume to fade to\n\x09 * @param FadeCurve The curve to use when interpolating between the old and new volume\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "CPP_Default_FadeVolumeLevel", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This function allows designers to call Play on an Audio Component instance while applying a volume curve over time.\nParameters allow designers to indicate the duration of the fade, the curve shape, and the start time if seeking into the sound.\n\n@param FadeInDuration How long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel The percentage of the AudioComponents's calculated volume to fade to\n@param FadeCurve The curve to use when interpolating between the old and new volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventFadeIn_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventFadeIn_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeCurve_MetaData), NewProp_FadeCurve_MetaData) }; // 1514737569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_FadeIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeInDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeVolumeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "FadeIn", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::SynthComponent_eventFadeIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_FadeIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::SynthComponent_eventFadeIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_FadeIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_FadeIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execFadeIn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel,Z_Param_StartTime,EAudioFaderCurve(Z_Param_FadeCurve));
	P_NATIVE_END;
}
// End Class USynthComponent Function FadeIn

// Begin Class USynthComponent Function FadeOut
struct Z_Construct_UFunction_USynthComponent_FadeOut_Statics
{
	struct SynthComponent_eventFadeOut_Parms
	{
		float FadeOutDuration;
		float FadeVolumeLevel;
		EAudioFaderCurve FadeCurve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * This function allows designers to call a delayed Stop on an Audio Component instance while applying a\n\x09 * volume curve over time. Parameters allow designers to indicate the duration of the fade and the curve shape.\n\x09 *\n\x09 * @param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to\n\x09 * @param FadeCurve The curve to use when interpolating between the old and new volume\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This function allows designers to call a delayed Stop on an Audio Component instance while applying a\nvolume curve over time. Parameters allow designers to indicate the duration of the fade and the curve shape.\n\n@param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to\n@param FadeCurve The curve to use when interpolating between the old and new volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventFadeOut_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeCurve_MetaData), NewProp_FadeCurve_MetaData) }; // 1514737569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_FadeOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeOutDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeVolumeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "FadeOut", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::SynthComponent_eventFadeOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_FadeOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::SynthComponent_eventFadeOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_FadeOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_FadeOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execFadeOut)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
	P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel,EAudioFaderCurve(Z_Param_FadeCurve));
	P_NATIVE_END;
}
// End Class USynthComponent Function FadeOut

// Begin Class USynthComponent Function GetModulators
struct Z_Construct_UFunction_USynthComponent_GetModulators_Statics
{
	struct SynthComponent_eventGetModulators_Parms
	{
		EModulationDestination Destination;
		TSet<USoundModulatorBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Gets the set of currently active modulators for a given Modulation Destination.\n\x09* @param Destination The Destination to retrieve the Modulators from.\n\x09* @return The set of of Modulators applied to this component for the given Destination.\n\x09*/" },
		{ "DisplayName", "Get Modulators" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Gets the set of currently active modulators for a given Modulation Destination.\n@param Destination The Destination to retrieve the Modulators from.\n@return The set of of Modulators applied to this component for the given Destination." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Modulators" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Destination_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponent_GetModulators_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponent_GetModulators_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventGetModulators_Parms, Destination), Z_Construct_UEnum_Engine_EModulationDestination, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Destination_MetaData), NewProp_Destination_MetaData) }; // 1500686376
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthComponent_GetModulators_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USynthComponent_GetModulators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventGetModulators_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_GetModulators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_GetModulators_Statics::NewProp_Destination_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_GetModulators_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_GetModulators_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_GetModulators_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_GetModulators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_GetModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "GetModulators", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_GetModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_GetModulators_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_GetModulators_Statics::SynthComponent_eventGetModulators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_GetModulators_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_GetModulators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_GetModulators_Statics::SynthComponent_eventGetModulators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_GetModulators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_GetModulators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execGetModulators)
{
	P_GET_ENUM(EModulationDestination,Z_Param_Destination);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<USoundModulatorBase*>*)Z_Param__Result=P_THIS->GetModulators(EModulationDestination(Z_Param_Destination));
	P_NATIVE_END;
}
// End Class USynthComponent Function GetModulators

// Begin Class USynthComponent Function IsPlaying
struct Z_Construct_UFunction_USynthComponent_IsPlaying_Statics
{
	struct SynthComponent_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "/** Returns true if this component is currently playing. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Returns true if this component is currently playing." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SynthComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::SynthComponent_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::SynthComponent_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class USynthComponent Function IsPlaying

// Begin Class USynthComponent Function SetAudioBusSendPostEffect
struct Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics
{
	struct SynthComponent_eventSetAudioBusSendPostEffect_Parms
	{
		UAudioBus* AudioBus;
		float AudioBusSendLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given AudioBus (post effect). */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given AudioBus (post effect)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioBusSendLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetAudioBusSendPostEffect_Parms, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::NewProp_AudioBusSendLevel = { "AudioBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetAudioBusSendPostEffect_Parms, AudioBusSendLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::NewProp_AudioBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::NewProp_AudioBusSendLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetAudioBusSendPostEffect", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::SynthComponent_eventSetAudioBusSendPostEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::SynthComponent_eventSetAudioBusSendPostEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execSetAudioBusSendPostEffect)
{
	P_GET_OBJECT(UAudioBus,Z_Param_AudioBus);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AudioBusSendLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioBusSendPostEffect(Z_Param_AudioBus,Z_Param_AudioBusSendLevel);
	P_NATIVE_END;
}
// End Class USynthComponent Function SetAudioBusSendPostEffect

// Begin Class USynthComponent Function SetAudioBusSendPreEffect
struct Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics
{
	struct SynthComponent_eventSetAudioBusSendPreEffect_Parms
	{
		UAudioBus* AudioBus;
		float AudioBusSendLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given AudioBus (pre effect). */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given AudioBus (pre effect)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioBusSendLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetAudioBusSendPreEffect_Parms, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::NewProp_AudioBusSendLevel = { "AudioBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetAudioBusSendPreEffect_Parms, AudioBusSendLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::NewProp_AudioBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::NewProp_AudioBusSendLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetAudioBusSendPreEffect", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::SynthComponent_eventSetAudioBusSendPreEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::SynthComponent_eventSetAudioBusSendPreEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execSetAudioBusSendPreEffect)
{
	P_GET_OBJECT(UAudioBus,Z_Param_AudioBus);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AudioBusSendLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioBusSendPreEffect(Z_Param_AudioBus,Z_Param_AudioBusSendLevel);
	P_NATIVE_END;
}
// End Class USynthComponent Function SetAudioBusSendPreEffect

// Begin Class USynthComponent Function SetLowPassFilterEnabled
struct Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics
{
	struct SynthComponent_eventSetLowPassFilterEnabled_Parms
	{
		bool InLowPassFilterEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets whether or not the low pass filter is enabled on the audio component. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets whether or not the low pass filter is enabled on the audio component." },
	};
#endif // WITH_METADATA
	static void NewProp_InLowPassFilterEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InLowPassFilterEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit(void* Obj)
{
	((SynthComponent_eventSetLowPassFilterEnabled_Parms*)Obj)->InLowPassFilterEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled = { "InLowPassFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponent_eventSetLowPassFilterEnabled_Parms), &Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetLowPassFilterEnabled", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::SynthComponent_eventSetLowPassFilterEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::SynthComponent_eventSetLowPassFilterEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execSetLowPassFilterEnabled)
{
	P_GET_UBOOL(Z_Param_InLowPassFilterEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLowPassFilterEnabled(Z_Param_InLowPassFilterEnabled);
	P_NATIVE_END;
}
// End Class USynthComponent Function SetLowPassFilterEnabled

// Begin Class USynthComponent Function SetLowPassFilterFrequency
struct Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics
{
	struct SynthComponent_eventSetLowPassFilterFrequency_Parms
	{
		float InLowPassFilterFrequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets lowpass filter frequency of the audio component. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets lowpass filter frequency of the audio component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLowPassFilterFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency = { "InLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetLowPassFilterFrequency_Parms, InLowPassFilterFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetLowPassFilterFrequency", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::SynthComponent_eventSetLowPassFilterFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::SynthComponent_eventSetLowPassFilterFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execSetLowPassFilterFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLowPassFilterFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLowPassFilterFrequency(Z_Param_InLowPassFilterFrequency);
	P_NATIVE_END;
}
// End Class USynthComponent Function SetLowPassFilterFrequency

// Begin Class USynthComponent Function SetModulationRouting
struct Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics
{
	struct SynthComponent_eventSetModulationRouting_Parms
	{
		TSet<USoundModulatorBase*> Modulators;
		EModulationDestination Destination;
		EModulationRouting RoutingMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Sets the routing for one of the given Synth component's Modulation Destinations.\n\x09* @param Modulators The set of modulators to apply to the given destination on the component.\n\x09* @param Destination The destination to assign the modulators to.\n\x09* @param RoutingMethod The routing method to use for the given modulator.\n\x09*/" },
		{ "CPP_Default_RoutingMethod", "Inherit" },
		{ "DisplayName", "Set Modulation Routing" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets the routing for one of the given Synth component's Modulation Destinations.\n@param Modulators The set of modulators to apply to the given destination on the component.\n@param Destination The destination to assign the modulators to.\n@param RoutingMethod The routing method to use for the given modulator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoutingMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Destination_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoutingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoutingMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetModulationRouting_Parms, Modulators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modulators_MetaData), NewProp_Modulators_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetModulationRouting_Parms, Destination), Z_Construct_UEnum_Engine_EModulationDestination, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Destination_MetaData), NewProp_Destination_MetaData) }; // 1500686376
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod = { "RoutingMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetModulationRouting_Parms, RoutingMethod), Z_Construct_UEnum_Engine_EModulationRouting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoutingMethod_MetaData), NewProp_RoutingMethod_MetaData) }; // 4117981061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_Modulators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_Modulators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_Destination_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetModulationRouting", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::SynthComponent_eventSetModulationRouting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::SynthComponent_eventSetModulationRouting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_SetModulationRouting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetModulationRouting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execSetModulationRouting)
{
	P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
	P_GET_ENUM(EModulationDestination,Z_Param_Destination);
	P_GET_ENUM(EModulationRouting,Z_Param_RoutingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModulationRouting(Z_Param_Out_Modulators,EModulationDestination(Z_Param_Destination),EModulationRouting(Z_Param_RoutingMethod));
	P_NATIVE_END;
}
// End Class USynthComponent Function SetModulationRouting

// Begin Class USynthComponent Function SetOutputToBusOnly
struct Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics
{
	struct SynthComponent_eventSetOutputToBusOnly_Parms
	{
		bool bInOutputToBusOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets whether or not the synth component outputs its audio to any source or audio buses. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets whether or not the synth component outputs its audio to any source or audio buses." },
	};
#endif // WITH_METADATA
	static void NewProp_bInOutputToBusOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInOutputToBusOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly_SetBit(void* Obj)
{
	((SynthComponent_eventSetOutputToBusOnly_Parms*)Obj)->bInOutputToBusOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly = { "bInOutputToBusOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponent_eventSetOutputToBusOnly_Parms), &Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetOutputToBusOnly", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::SynthComponent_eventSetOutputToBusOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::SynthComponent_eventSetOutputToBusOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execSetOutputToBusOnly)
{
	P_GET_UBOOL(Z_Param_bInOutputToBusOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutputToBusOnly(Z_Param_bInOutputToBusOnly);
	P_NATIVE_END;
}
// End Class USynthComponent Function SetOutputToBusOnly

// Begin Class USynthComponent Function SetSourceBusSendPostEffect
struct Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics
{
	struct SynthComponent_eventSetSourceBusSendPostEffect_Parms
	{
		USoundSourceBus* SoundSourceBus;
		float SourceBusSendLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given SourceBus (post effect). */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given SourceBus (post effect)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSourceBus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceBusSendLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::NewProp_SoundSourceBus = { "SoundSourceBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetSourceBusSendPostEffect_Parms, SoundSourceBus), Z_Construct_UClass_USoundSourceBus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::NewProp_SourceBusSendLevel = { "SourceBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetSourceBusSendPostEffect_Parms, SourceBusSendLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::NewProp_SoundSourceBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::NewProp_SourceBusSendLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetSourceBusSendPostEffect", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::SynthComponent_eventSetSourceBusSendPostEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::SynthComponent_eventSetSourceBusSendPostEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execSetSourceBusSendPostEffect)
{
	P_GET_OBJECT(USoundSourceBus,Z_Param_SoundSourceBus);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SourceBusSendLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSourceBusSendPostEffect(Z_Param_SoundSourceBus,Z_Param_SourceBusSendLevel);
	P_NATIVE_END;
}
// End Class USynthComponent Function SetSourceBusSendPostEffect

// Begin Class USynthComponent Function SetSourceBusSendPreEffect
struct Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics
{
	struct SynthComponent_eventSetSourceBusSendPreEffect_Parms
	{
		USoundSourceBus* SoundSourceBus;
		float SourceBusSendLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given SourceBus (pre effect). */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given SourceBus (pre effect)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSourceBus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceBusSendLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::NewProp_SoundSourceBus = { "SoundSourceBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetSourceBusSendPreEffect_Parms, SoundSourceBus), Z_Construct_UClass_USoundSourceBus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::NewProp_SourceBusSendLevel = { "SourceBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetSourceBusSendPreEffect_Parms, SourceBusSendLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::NewProp_SoundSourceBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::NewProp_SourceBusSendLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetSourceBusSendPreEffect", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::SynthComponent_eventSetSourceBusSendPreEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::SynthComponent_eventSetSourceBusSendPreEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execSetSourceBusSendPreEffect)
{
	P_GET_OBJECT(USoundSourceBus,Z_Param_SoundSourceBus);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SourceBusSendLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSourceBusSendPreEffect(Z_Param_SoundSourceBus,Z_Param_SourceBusSendLevel);
	P_NATIVE_END;
}
// End Class USynthComponent Function SetSourceBusSendPreEffect

// Begin Class USynthComponent Function SetSubmixSend
struct Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics
{
	struct SynthComponent_eventSetSubmixSend_Parms
	{
		USoundSubmixBase* Submix;
		float SendLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given submix. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given submix." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetSubmixSend_Parms, Submix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetSubmixSend_Parms, SendLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_Submix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_SendLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetSubmixSend", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::SynthComponent_eventSetSubmixSend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::SynthComponent_eventSetSubmixSend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_SetSubmixSend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execSetSubmixSend)
{
	P_GET_OBJECT(USoundSubmixBase,Z_Param_Submix);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SendLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubmixSend(Z_Param_Submix,Z_Param_SendLevel);
	P_NATIVE_END;
}
// End Class USynthComponent Function SetSubmixSend

// Begin Class USynthComponent Function SetVolumeMultiplier
struct Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics
{
	struct SynthComponent_eventSetVolumeMultiplier_Parms
	{
		float VolumeMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Set a new volume multiplier */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Set a new volume multiplier" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponent_eventSetVolumeMultiplier_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::NewProp_VolumeMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetVolumeMultiplier", nullptr, nullptr, Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::SynthComponent_eventSetVolumeMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::SynthComponent_eventSetVolumeMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execSetVolumeMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolumeMultiplier(Z_Param_VolumeMultiplier);
	P_NATIVE_END;
}
// End Class USynthComponent Function SetVolumeMultiplier

// Begin Class USynthComponent Function Start
struct Z_Construct_UFunction_USynthComponent_Start_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Starts the synth generating audio.\n" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Starts the synth generating audio." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "Start", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_Start_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USynthComponent_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Start();
	P_NATIVE_END;
}
// End Class USynthComponent Function Start

// Begin Class USynthComponent Function Stop
struct Z_Construct_UFunction_USynthComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Stops the synth generating audio.\n" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Stops the synth generating audio." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponent_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USynthComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class USynthComponent Function Stop

// Begin Class USynthComponent
void USynthComponent::StaticRegisterNativesUSynthComponent()
{
	UClass* Class = USynthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustVolume", &USynthComponent::execAdjustVolume },
		{ "FadeIn", &USynthComponent::execFadeIn },
		{ "FadeOut", &USynthComponent::execFadeOut },
		{ "GetModulators", &USynthComponent::execGetModulators },
		{ "IsPlaying", &USynthComponent::execIsPlaying },
		{ "SetAudioBusSendPostEffect", &USynthComponent::execSetAudioBusSendPostEffect },
		{ "SetAudioBusSendPreEffect", &USynthComponent::execSetAudioBusSendPreEffect },
		{ "SetLowPassFilterEnabled", &USynthComponent::execSetLowPassFilterEnabled },
		{ "SetLowPassFilterFrequency", &USynthComponent::execSetLowPassFilterFrequency },
		{ "SetModulationRouting", &USynthComponent::execSetModulationRouting },
		{ "SetOutputToBusOnly", &USynthComponent::execSetOutputToBusOnly },
		{ "SetSourceBusSendPostEffect", &USynthComponent::execSetSourceBusSendPostEffect },
		{ "SetSourceBusSendPreEffect", &USynthComponent::execSetSourceBusSendPreEffect },
		{ "SetSubmixSend", &USynthComponent::execSetSubmixSend },
		{ "SetVolumeMultiplier", &USynthComponent::execSetVolumeMultiplier },
		{ "Start", &USynthComponent::execStart },
		{ "Stop", &USynthComponent::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthComponent);
UClass* Z_Construct_UClass_USynthComponent_NoRegister()
{
	return USynthComponent::StaticClass();
}
struct Z_Construct_UClass_USynthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SynthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[] = {
		{ "Comment", "/** Auto destroy this component on completion */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "Comment", "/** Stop sound when owner is destroyed */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSpatialization_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Is this audio component allowed to be spatialized? */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Is this audio component allowed to be spatialized?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputToBusOnly_MetaData[] = {
		{ "Comment", "/** Whether or not to only send this audio's output to a bus. If true, this sound will not be audible except through bus sends. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not to only send this audio's output to a bus. If true, this sound will not be audible except through bus sends." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBusSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Whether or not to enable sending this audio's output to buses.  */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not to enable sending this audio's output to buses." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBaseSubmix_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** If enabled, sound will route to the Master Submix by default or to the Base Submix if defined. If disabled, sound will route ONLY to the Submix Sends and/or Bus Sends */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "If enabled, sound will route to the Master Submix by default or to the Base Submix if defined. If disabled, sound will route ONLY to the Submix Sends and/or Bus Sends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubmixSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Whether or not to enable Submix Sends other than the Base Submix.*/" },
		{ "DisplayAfter", "SoundSubmixObject" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not to enable Submix Sends other than the Base Submix." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component */" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component */" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySettings_MetaData[] = {
		{ "Comment", "/** What sound concurrency to use for sounds generated by this audio component */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/** What sound concurrency to use for sounds generated by this audio component */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulationRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundClass_MetaData[] = {
		{ "Category", "SoundClass" },
		{ "Comment", "/** Sound class this sound belongs to */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sound class this sound belongs to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** The source effect chain to use for this sound. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "The source effect chain to use for this sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Submix this sound belongs to */" },
		{ "DisplayName", "Base Submix" },
		{ "EditCondition", "bEnableBaseSubmix" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Submix this sound belongs to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** An array of submix sends. Audio from this sound will send a portion of its audio to these effects.  */" },
		{ "EditCondition", "bEnableSubmixSends" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "An array of submix sends. Audio from this sound will send a portion of its audio to these effects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed.  */" },
		{ "DisplayName", "Post-Effect Bus Sends" },
		{ "EditCondition", "bEnableBusSends" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreEffectBusSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed.  */" },
		{ "DisplayName", "Pre-Effect Bus Sends" },
		{ "EditCondition", "bEnableBusSends" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreviewSound_MetaData[] = {
		{ "Comment", "/** Whether or not this synth is playing as a preview sound */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not this synth is playing as a preview sound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\n\x09 *  envelope value of sounds played with this audio component. Only used in audio mixer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\nenvelope value of sounds played with this audio component. Only used in audio mixer." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\n\x09 *  envelope value of sounds played with this audio component. Only used in audio mixer. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\nenvelope value of sounds played with this audio component. Only used in audio mixer." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioEnvelopeValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Synth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
	static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
	static void NewProp_bAllowSpatialization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSpatialization;
	static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_EDITORONLY_DATA
	static void NewProp_bOutputToBusOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputToBusOnly;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bEnableBusSends_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBusSends;
	static void NewProp_bEnableBaseSubmix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBaseSubmix;
	static void NewProp_bEnableSubmixSends_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubmixSends;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ConcurrencySet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationRouting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceEffectChain;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSubmixSends_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundSubmixSends;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BusSends_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSends;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreEffectBusSends_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreEffectBusSends;
	static void NewProp_bIsUISound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
	static void NewProp_bIsPreviewSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPreviewSound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioEnvelopeValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Synth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthComponent_AdjustVolume, "AdjustVolume" }, // 964029775
		{ &Z_Construct_UFunction_USynthComponent_FadeIn, "FadeIn" }, // 4158865266
		{ &Z_Construct_UFunction_USynthComponent_FadeOut, "FadeOut" }, // 621363610
		{ &Z_Construct_UFunction_USynthComponent_GetModulators, "GetModulators" }, // 862125249
		{ &Z_Construct_UFunction_USynthComponent_IsPlaying, "IsPlaying" }, // 3127465343
		{ &Z_Construct_UFunction_USynthComponent_SetAudioBusSendPostEffect, "SetAudioBusSendPostEffect" }, // 2954853967
		{ &Z_Construct_UFunction_USynthComponent_SetAudioBusSendPreEffect, "SetAudioBusSendPreEffect" }, // 2090900819
		{ &Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled, "SetLowPassFilterEnabled" }, // 815280015
		{ &Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency, "SetLowPassFilterFrequency" }, // 1984453846
		{ &Z_Construct_UFunction_USynthComponent_SetModulationRouting, "SetModulationRouting" }, // 153096078
		{ &Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly, "SetOutputToBusOnly" }, // 359267210
		{ &Z_Construct_UFunction_USynthComponent_SetSourceBusSendPostEffect, "SetSourceBusSendPostEffect" }, // 4241544383
		{ &Z_Construct_UFunction_USynthComponent_SetSourceBusSendPreEffect, "SetSourceBusSendPreEffect" }, // 3890863678
		{ &Z_Construct_UFunction_USynthComponent_SetSubmixSend, "SetSubmixSend" }, // 1508245958
		{ &Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier, "SetVolumeMultiplier" }, // 719918740
		{ &Z_Construct_UFunction_USynthComponent_Start, "Start" }, // 1588486386
		{ &Z_Construct_UFunction_USynthComponent_Stop, "Stop" }, // 1764082137
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
{
	((USynthComponent*)Obj)->bAutoDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDestroy_MetaData), NewProp_bAutoDestroy_MetaData) };
void Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
{
	((USynthComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenOwnerDestroyed_MetaData), NewProp_bStopWhenOwnerDestroyed_MetaData) };
void Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_SetBit(void* Obj)
{
	((USynthComponent*)Obj)->bAllowSpatialization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization = { "bAllowSpatialization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSpatialization_MetaData), NewProp_bAllowSpatialization_MetaData) };
void Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
{
	((USynthComponent*)Obj)->bOverrideAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData), NewProp_bOverrideAttenuation_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_SetBit(void* Obj)
{
	((USynthComponent*)Obj)->bOutputToBusOnly_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly = { "bOutputToBusOnly", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputToBusOnly_MetaData), NewProp_bOutputToBusOnly_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends_SetBit(void* Obj)
{
	((USynthComponent*)Obj)->bEnableBusSends = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends = { "bEnableBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBusSends_MetaData), NewProp_bEnableBusSends_MetaData) };
void Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix_SetBit(void* Obj)
{
	((USynthComponent*)Obj)->bEnableBaseSubmix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix = { "bEnableBaseSubmix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBaseSubmix_MetaData), NewProp_bEnableBaseSubmix_MetaData) };
void Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends_SetBit(void* Obj)
{
	((USynthComponent*)Obj)->bEnableSubmixSends = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends = { "bEnableSubmixSends", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSubmixSends_MetaData), NewProp_bEnableSubmixSends_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationSettings_MetaData), NewProp_AttenuationSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationOverrides_MetaData), NewProp_AttenuationOverrides_MetaData) }; // 4035653401
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, ConcurrencySettings_DEPRECATED), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConcurrencySettings_MetaData), NewProp_ConcurrencySettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, ConcurrencySet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConcurrencySet_MetaData), NewProp_ConcurrencySet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_ModulationRouting = { "ModulationRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, ModulationRouting), Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulationRouting_MetaData), NewProp_ModulationRouting_MetaData) }; // 584551341
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundClass_MetaData), NewProp_SoundClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain = { "SourceEffectChain", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceEffectChain_MetaData), NewProp_SourceEffectChain_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, SoundSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSubmix_MetaData), NewProp_SoundSubmix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_Inner = { "SoundSubmixSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundSubmixSendInfo, METADATA_PARAMS(0, nullptr) }; // 3690717833
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends = { "SoundSubmixSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, SoundSubmixSends), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSubmixSends_MetaData), NewProp_SoundSubmixSends_MetaData) }; // 3690717833
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_Inner = { "BusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(0, nullptr) }; // 2379671835
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends = { "BusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, BusSends), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusSends_MetaData), NewProp_BusSends_MetaData) }; // 2379671835
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_Inner = { "PreEffectBusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(0, nullptr) }; // 2379671835
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends = { "PreEffectBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, PreEffectBusSends), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreEffectBusSends_MetaData), NewProp_PreEffectBusSends_MetaData) }; // 2379671835
void Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_SetBit(void* Obj)
{
	((USynthComponent*)Obj)->bIsUISound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUISound_MetaData), NewProp_bIsUISound_MetaData) };
void Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_SetBit(void* Obj)
{
	((USynthComponent*)Obj)->bIsPreviewSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound = { "bIsPreviewSound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPreviewSound_MetaData), NewProp_bIsPreviewSound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, EnvelopeFollowerAttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerAttackTime_MetaData), NewProp_EnvelopeFollowerAttackTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, EnvelopeFollowerReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerReleaseTime_MetaData), NewProp_EnvelopeFollowerReleaseTime_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue = { "OnAudioEnvelopeValue", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, OnAudioEnvelopeValue), Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAudioEnvelopeValue_MetaData), NewProp_OnAudioEnvelopeValue_MetaData) }; // 2383412026
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth = { "Synth", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, Synth), Z_Construct_UClass_USynthSound_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Synth_MetaData), NewProp_Synth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_ModulationRouting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthComponent_Statics::ClassParams = {
	&USynthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USynthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::PropPointers),
	0,
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USynthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynthComponent()
{
	if (!Z_Registration_Info_UClass_USynthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthComponent.OuterSingleton, Z_Construct_UClass_USynthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynthComponent.OuterSingleton;
}
template<> AUDIOMIXER_API UClass* StaticClass<USynthComponent>()
{
	return USynthComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponent);
USynthComponent::~USynthComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USynthComponent)
// End Class USynthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USynthSound, USynthSound::StaticClass, TEXT("USynthSound"), &Z_Registration_Info_UClass_USynthSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthSound), 430056603U) },
		{ Z_Construct_UClass_USynthComponent, USynthComponent::StaticClass, TEXT("USynthComponent"), &Z_Registration_Info_UClass_USynthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthComponent), 1076088193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_1461931852(TEXT("/Script/AudioMixer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
