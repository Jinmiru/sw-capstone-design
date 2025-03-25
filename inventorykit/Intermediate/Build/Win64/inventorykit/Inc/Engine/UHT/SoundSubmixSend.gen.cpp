// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixSend() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESendLevelControlMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubmixSendStage();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAudioSpectrumBandPresetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType;
static UEnum* EAudioSpectrumBandPresetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioSpectrumBandPresetType"));
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAudioSpectrumBandPresetType>()
{
	return EAudioSpectrumBandPresetType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cymbals.Comment", "/** Band which contains frequencies generally related to cymbals. */" },
		{ "Cymbals.Name", "EAudioSpectrumBandPresetType::Cymbals" },
		{ "Cymbals.ToolTip", "Band which contains frequencies generally related to cymbals." },
		{ "KickDrum.Comment", "/** Band which contains frequencies generally related to kick drums. */" },
		{ "KickDrum.Name", "EAudioSpectrumBandPresetType::KickDrum" },
		{ "KickDrum.ToolTip", "Band which contains frequencies generally related to kick drums." },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "SnareDrum.Comment", "/** Band which contains frequencies generally related to snare drums. */" },
		{ "SnareDrum.Name", "EAudioSpectrumBandPresetType::SnareDrum" },
		{ "SnareDrum.ToolTip", "Band which contains frequencies generally related to snare drums." },
		{ "Voice.Comment", "/** Band which contains frequencies generally related to vocals. */" },
		{ "Voice.Name", "EAudioSpectrumBandPresetType::Voice" },
		{ "Voice.ToolTip", "Band which contains frequencies generally related to vocals." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioSpectrumBandPresetType::KickDrum", (int64)EAudioSpectrumBandPresetType::KickDrum },
		{ "EAudioSpectrumBandPresetType::SnareDrum", (int64)EAudioSpectrumBandPresetType::SnareDrum },
		{ "EAudioSpectrumBandPresetType::Voice", (int64)EAudioSpectrumBandPresetType::Voice },
		{ "EAudioSpectrumBandPresetType::Cymbals", (int64)EAudioSpectrumBandPresetType::Cymbals },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAudioSpectrumBandPresetType",
	"EAudioSpectrumBandPresetType",
	Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.InnerSingleton, Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.InnerSingleton;
}
// End Enum EAudioSpectrumBandPresetType

// Begin ScriptStruct FSoundSubmixSpectralAnalysisBandSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings;
class UScriptStruct* FSoundSubmixSpectralAnalysisBandSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundSubmixSpectralAnalysisBandSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundSubmixSpectralAnalysisBandSettings>()
{
	return FSoundSubmixSpectralAnalysisBandSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BandFrequency_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// The frequency band for the magnitude to analyze\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The frequency band for the magnitude to analyze" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The attack time for the FFT band interpolation for delegate callback\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The attack time for the FFT band interpolation for delegate callback" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The release time for the FFT band interpolation for delegate callback\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The release time for the FFT band interpolation for delegate callback" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QFactor_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMin", "0.001" },
		{ "Comment", "// The ratio of the bandwidth divided by the center frequency. Only used when the spectral analysis type is set to Constant Q.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The ratio of the bandwidth divided by the center frequency. Only used when the spectral analysis type is set to Constant Q." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BandFrequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackTimeMsec;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReleaseTimeMsec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_QFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixSpectralAnalysisBandSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency = { "BandFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, BandFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BandFrequency_MetaData), NewProp_BandFrequency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, AttackTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTimeMsec_MetaData), NewProp_AttackTimeMsec_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, ReleaseTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseTimeMsec_MetaData), NewProp_ReleaseTimeMsec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor = { "QFactor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, QFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QFactor_MetaData), NewProp_QFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundSubmixSpectralAnalysisBandSettings",
	Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::PropPointers),
	sizeof(FSoundSubmixSpectralAnalysisBandSettings),
	alignof(FSoundSubmixSpectralAnalysisBandSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.InnerSingleton;
}
// End ScriptStruct FSoundSubmixSpectralAnalysisBandSettings

// Begin Delegate FOnSubmixEnvelopeBP
struct Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnSubmixEnvelopeBP_Parms
	{
		TArray<float> Envelope;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Envelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Envelope_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Envelope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_Inner = { "Envelope", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope = { "Envelope", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixEnvelopeBP_Parms, Envelope), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Envelope_MetaData), NewProp_Envelope_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixEnvelopeBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::_Script_Engine_eventOnSubmixEnvelopeBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::_Script_Engine_eventOnSubmixEnvelopeBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSubmixEnvelopeBP_DelegateWrapper(const FScriptDelegate& OnSubmixEnvelopeBP, TArray<float> const& Envelope)
{
	struct _Script_Engine_eventOnSubmixEnvelopeBP_Parms
	{
		TArray<float> Envelope;
	};
	_Script_Engine_eventOnSubmixEnvelopeBP_Parms Parms;
	Parms.Envelope=Envelope;
	OnSubmixEnvelopeBP.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnSubmixEnvelopeBP

// Begin Delegate FOnSubmixSpectralAnalysisBP
struct Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms
	{
		TArray<float> Magnitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_Inner = { "Magnitude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms, Magnitude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixSpectralAnalysisBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::_Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::_Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSubmixSpectralAnalysisBP_DelegateWrapper(const FScriptDelegate& OnSubmixSpectralAnalysisBP, TArray<float> const& Magnitude)
{
	struct _Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms
	{
		TArray<float> Magnitude;
	};
	_Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms Parms;
	Parms.Magnitude=Magnitude;
	OnSubmixSpectralAnalysisBP.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnSubmixSpectralAnalysisBP

// Begin Enum EAudioRecordingExportType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioRecordingExportType;
static UEnum* EAudioRecordingExportType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioRecordingExportType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioRecordingExportType"));
	}
	return Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAudioRecordingExportType>()
{
	return EAudioRecordingExportType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "SoundWave.Comment", "// Exports a USoundWave.\n" },
		{ "SoundWave.Name", "EAudioRecordingExportType::SoundWave" },
		{ "SoundWave.ToolTip", "Exports a USoundWave." },
		{ "WavFile.Comment", "// Exports a WAV file.\n" },
		{ "WavFile.Name", "EAudioRecordingExportType::WavFile" },
		{ "WavFile.ToolTip", "Exports a WAV file." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioRecordingExportType::SoundWave", (int64)EAudioRecordingExportType::SoundWave },
		{ "EAudioRecordingExportType::WavFile", (int64)EAudioRecordingExportType::WavFile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAudioRecordingExportType",
	"EAudioRecordingExportType",
	Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType()
{
	if (!Z_Registration_Info_UEnum_EAudioRecordingExportType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioRecordingExportType.InnerSingleton, Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioRecordingExportType.InnerSingleton;
}
// End Enum EAudioRecordingExportType

// Begin Enum ESendLevelControlMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESendLevelControlMethod;
static UEnum* ESendLevelControlMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESendLevelControlMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESendLevelControlMethod"));
	}
	return Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESendLevelControlMethod>()
{
	return ESendLevelControlMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A send based on a supplied curve\n" },
		{ "CustomCurve.Name", "ESendLevelControlMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A send based on a supplied curve" },
		{ "Linear.Comment", "// A send based on linear interpolation between a distance range and send-level range\n" },
		{ "Linear.Name", "ESendLevelControlMethod::Linear" },
		{ "Linear.ToolTip", "A send based on linear interpolation between a distance range and send-level range" },
		{ "Manual.Comment", "// A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "ESendLevelControlMethod::Manual" },
		{ "Manual.ToolTip", "A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESendLevelControlMethod::Linear", (int64)ESendLevelControlMethod::Linear },
		{ "ESendLevelControlMethod::CustomCurve", (int64)ESendLevelControlMethod::CustomCurve },
		{ "ESendLevelControlMethod::Manual", (int64)ESendLevelControlMethod::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESendLevelControlMethod",
	"ESendLevelControlMethod",
	Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESendLevelControlMethod()
{
	if (!Z_Registration_Info_UEnum_ESendLevelControlMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESendLevelControlMethod.InnerSingleton, Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESendLevelControlMethod.InnerSingleton;
}
// End Enum ESendLevelControlMethod

// Begin ScriptStruct FSoundSubmixSendInfoBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundSubmixSendInfoBase;
class UScriptStruct* FSoundSubmixSendInfoBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSubmixSendInfoBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundSubmixSendInfoBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundSubmixSendInfoBase"));
	}
	return Z_Registration_Info_UScriptStruct_SoundSubmixSendInfoBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundSubmixSendInfoBase>()
{
	return FSoundSubmixSendInfoBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Common set of settings that are uses as submix sends.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Common set of settings that are uses as submix sends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendLevelControlMethod_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "/*\n\x09\x09Manual: Use Send Level only\n\x09\x09Linear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\n\x09\x09""Custom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Manual: Use Send Level only\nLinear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\nCustom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The submix to send the audio to\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The submix to send the audio to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The amount of audio to send\n" },
		{ "DisplayName", "Manual Send Level" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The amount of audio to send" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableManualSendClamp_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// Whether to disable the 0-1 clamp for manual SendLevel control\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Whether to disable the 0-1 clamp for manual SendLevel control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSendLevel_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The amount to send to master when sound is located at a distance equal to value specified in the min send distance.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The amount to send to master when sound is located at a distance equal to value specified in the min send distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSendLevel_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The amount to send to master when sound is located at a distance equal to value specified in the max send distance.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The amount to send to master when sound is located at a distance equal to value specified in the max send distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSendDistance_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The min distance to send to the master\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The min distance to send to the master" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSendDistance_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The max distance to send to the master\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The max distance to send to the master" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSendLevelCurve_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The custom reverb send curve to use for distance-based send level.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The custom reverb send curve to use for distance-based send level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SendLevelControlMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SendLevelControlMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
	static void NewProp_DisableManualSendClamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableManualSendClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSendLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSendLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSendDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSendDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSendLevelCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixSendInfoBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_SendLevelControlMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_SendLevelControlMethod = { "SendLevelControlMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSendInfoBase, SendLevelControlMethod), Z_Construct_UEnum_Engine_ESendLevelControlMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendLevelControlMethod_MetaData), NewProp_SendLevelControlMethod_MetaData) }; // 3565277357
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSendInfoBase, SoundSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSubmix_MetaData), NewProp_SoundSubmix_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSendInfoBase, SendLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendLevel_MetaData), NewProp_SendLevel_MetaData) };
void Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_DisableManualSendClamp_SetBit(void* Obj)
{
	((FSoundSubmixSendInfoBase*)Obj)->DisableManualSendClamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_DisableManualSendClamp = { "DisableManualSendClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundSubmixSendInfoBase), &Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_DisableManualSendClamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableManualSendClamp_MetaData), NewProp_DisableManualSendClamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_MinSendLevel = { "MinSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSendInfoBase, MinSendLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSendLevel_MetaData), NewProp_MinSendLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_MaxSendLevel = { "MaxSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSendInfoBase, MaxSendLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSendLevel_MetaData), NewProp_MaxSendLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_MinSendDistance = { "MinSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSendInfoBase, MinSendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSendDistance_MetaData), NewProp_MinSendDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_MaxSendDistance = { "MaxSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSendInfoBase, MaxSendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSendDistance_MetaData), NewProp_MaxSendDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_CustomSendLevelCurve = { "CustomSendLevelCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSendInfoBase, CustomSendLevelCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSendLevelCurve_MetaData), NewProp_CustomSendLevelCurve_MetaData) }; // 762678829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_SendLevelControlMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_SendLevelControlMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_SoundSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_SendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_DisableManualSendClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_MinSendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_MaxSendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_MinSendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_MaxSendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_CustomSendLevelCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundSubmixSendInfoBase",
	Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::PropPointers),
	sizeof(FSoundSubmixSendInfoBase),
	alignof(FSoundSubmixSendInfoBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSubmixSendInfoBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundSubmixSendInfoBase.InnerSingleton, Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundSubmixSendInfoBase.InnerSingleton;
}
// End ScriptStruct FSoundSubmixSendInfoBase

// Begin Enum ESubmixSendStage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixSendStage;
static UEnum* ESubmixSendStage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESubmixSendStage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESubmixSendStage"));
	}
	return Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESubmixSendStage>()
{
	return ESubmixSendStage_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESubmixSendStage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "PostDistanceAttenuation.Comment", "// Whether to do the send pre distance attenuation\n" },
		{ "PostDistanceAttenuation.Name", "ESubmixSendStage::PostDistanceAttenuation" },
		{ "PostDistanceAttenuation.ToolTip", "Whether to do the send pre distance attenuation" },
		{ "PreDistanceAttenuation.Comment", "// Whether to do the send post distance attenuation\n" },
		{ "PreDistanceAttenuation.Name", "ESubmixSendStage::PreDistanceAttenuation" },
		{ "PreDistanceAttenuation.ToolTip", "Whether to do the send post distance attenuation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESubmixSendStage::PostDistanceAttenuation", (int64)ESubmixSendStage::PostDistanceAttenuation },
		{ "ESubmixSendStage::PreDistanceAttenuation", (int64)ESubmixSendStage::PreDistanceAttenuation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESubmixSendStage",
	"ESubmixSendStage",
	Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESubmixSendStage()
{
	if (!Z_Registration_Info_UEnum_ESubmixSendStage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixSendStage.InnerSingleton, Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubmixSendStage.InnerSingleton;
}
// End Enum ESubmixSendStage

// Begin ScriptStruct FSoundSubmixSendInfo
static_assert(std::is_polymorphic<FSoundSubmixSendInfo>() == std::is_polymorphic<FSoundSubmixSendInfoBase>(), "USTRUCT FSoundSubmixSendInfo cannot be polymorphic unless super FSoundSubmixSendInfoBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo;
class UScriptStruct* FSoundSubmixSendInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixSendInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundSubmixSendInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundSubmixSendInfo>()
{
	return FSoundSubmixSendInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendStage_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "/** Defines at what mix stage the send should happen.*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Defines at what mix stage the send should happen." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SendStage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SendStage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixSendInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage = { "SendStage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, SendStage), Z_Construct_UEnum_Engine_ESubmixSendStage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendStage_MetaData), NewProp_SendStage_MetaData) }; // 3871889134
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase,
	&NewStructOps,
	"SoundSubmixSendInfo",
	Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers),
	sizeof(FSoundSubmixSendInfo),
	alignof(FSoundSubmixSendInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.InnerSingleton, Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.InnerSingleton;
}
// End ScriptStruct FSoundSubmixSendInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioSpectrumBandPresetType_StaticEnum, TEXT("EAudioSpectrumBandPresetType"), &Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1367109381U) },
		{ EAudioRecordingExportType_StaticEnum, TEXT("EAudioRecordingExportType"), &Z_Registration_Info_UEnum_EAudioRecordingExportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 633269224U) },
		{ ESendLevelControlMethod_StaticEnum, TEXT("ESendLevelControlMethod"), &Z_Registration_Info_UEnum_ESendLevelControlMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3565277357U) },
		{ ESubmixSendStage_StaticEnum, TEXT("ESubmixSendStage"), &Z_Registration_Info_UEnum_ESubmixSendStage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3871889134U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundSubmixSpectralAnalysisBandSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewStructOps, TEXT("SoundSubmixSpectralAnalysisBandSettings"), &Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundSubmixSpectralAnalysisBandSettings), 1283376601U) },
		{ FSoundSubmixSendInfoBase::StaticStruct, Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewStructOps, TEXT("SoundSubmixSendInfoBase"), &Z_Registration_Info_UScriptStruct_SoundSubmixSendInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundSubmixSendInfoBase), 1878523431U) },
		{ FSoundSubmixSendInfo::StaticStruct, Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewStructOps, TEXT("SoundSubmixSendInfo"), &Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundSubmixSendInfo), 3690717833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_4194734166(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
