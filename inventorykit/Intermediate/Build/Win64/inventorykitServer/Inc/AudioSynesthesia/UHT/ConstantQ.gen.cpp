// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesia/Classes/ConstantQ.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstantQ() {}

// Begin Cross Module References
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQAnalyzer();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQAnalyzer_NoRegister();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQSettings_NoRegister();
AUDIOSYNESTHESIA_API UEnum* Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum();
AUDIOSYNESTHESIA_API UEnum* Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum();
AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature();
AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature();
AUDIOSYNESTHESIA_API UScriptStruct* Z_Construct_UScriptStruct_FConstantQResults();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTWindowType();
UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References

// Begin Class UConstantQSettings
void UConstantQSettings::StaticRegisterNativesUConstantQSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstantQSettings);
UClass* Z_Construct_UClass_UConstantQSettings_NoRegister()
{
	return UConstantQSettings::StaticClass();
}
struct Z_Construct_UClass_UConstantQSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UConstantQSettings\n *\n * Settings for a UConstantQ analyzer.\n */" },
		{ "IncludePath", "ConstantQ.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "UConstantQSettings\n\nSettings for a UConstantQ analyzer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingFrequencyHz_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Starting frequency for first bin of CQT */" },
		{ "DisplayName", "Starting Frequency (Hz)" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Starting frequency for first bin of CQT" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBands_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "96" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Total number of resulting constant Q bands. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Total number of resulting constant Q bands." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBandsPerOctave_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "24" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of bands within an octave. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Number of bands within an octave." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisPeriodInSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Number of seconds between cqt measurements */" },
		{ "DisplayName", "Analysis Period (s)" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Number of seconds between cqt measurements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDownmixToMono_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own CQT result. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own CQT result." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFTSize_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Size of FFT. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Size of FFT." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowType_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Type of window to be applied to input audio */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Type of window to be applied to input audio" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectrumType_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Type of spectrum to use. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Type of spectrum to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BandWidthStretch_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Stretching factor to control overlap of adjacent bands. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Stretching factor to control overlap of adjacent bands." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CQTNormalization_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Normalization scheme used to generate band windows. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Normalization scheme used to generate band windows." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFloorDb_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-120.0" },
		{ "Comment", "/** Noise floor to use when normalizing CQT */" },
		{ "DisplayName", "Noise Floor (dB)" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Noise floor to use when normalizing CQT" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingFrequencyHz;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBands;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumBandsPerOctave;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalysisPeriodInSeconds;
	static void NewProp_bDownmixToMono_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDownmixToMono;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FFTSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FFTSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindowType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpectrumType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpectrumType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BandWidthStretch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CQTNormalization_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CQTNormalization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFloorDb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstantQSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_StartingFrequencyHz = { "StartingFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQSettings, StartingFrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingFrequencyHz_MetaData), NewProp_StartingFrequencyHz_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_NumBands = { "NumBands", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQSettings, NumBands), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBands_MetaData), NewProp_NumBands_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_NumBandsPerOctave = { "NumBandsPerOctave", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQSettings, NumBandsPerOctave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBandsPerOctave_MetaData), NewProp_NumBandsPerOctave_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_AnalysisPeriodInSeconds = { "AnalysisPeriodInSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQSettings, AnalysisPeriodInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalysisPeriodInSeconds_MetaData), NewProp_AnalysisPeriodInSeconds_MetaData) };
void Z_Construct_UClass_UConstantQSettings_Statics::NewProp_bDownmixToMono_SetBit(void* Obj)
{
	((UConstantQSettings*)Obj)->bDownmixToMono = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_bDownmixToMono = { "bDownmixToMono", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConstantQSettings), &Z_Construct_UClass_UConstantQSettings_Statics::NewProp_bDownmixToMono_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDownmixToMono_MetaData), NewProp_bDownmixToMono_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_FFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_FFTSize = { "FFTSize", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQSettings, FFTSize), Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFTSize_MetaData), NewProp_FFTSize_MetaData) }; // 2478516516
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_WindowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_WindowType = { "WindowType", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQSettings, WindowType), Z_Construct_UEnum_Engine_EFFTWindowType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowType_MetaData), NewProp_WindowType_MetaData) }; // 12023531
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_SpectrumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_SpectrumType = { "SpectrumType", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQSettings, SpectrumType), Z_Construct_UEnum_Engine_EAudioSpectrumType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectrumType_MetaData), NewProp_SpectrumType_MetaData) }; // 1072666962
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_BandWidthStretch = { "BandWidthStretch", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQSettings, BandWidthStretch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BandWidthStretch_MetaData), NewProp_BandWidthStretch_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_CQTNormalization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_CQTNormalization = { "CQTNormalization", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQSettings, CQTNormalization), Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CQTNormalization_MetaData), NewProp_CQTNormalization_MetaData) }; // 3807124724
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstantQSettings_Statics::NewProp_NoiseFloorDb = { "NoiseFloorDb", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQSettings, NoiseFloorDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseFloorDb_MetaData), NewProp_NoiseFloorDb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstantQSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_StartingFrequencyHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_NumBands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_NumBandsPerOctave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_AnalysisPeriodInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_bDownmixToMono,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_FFTSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_FFTSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_WindowType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_WindowType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_SpectrumType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_SpectrumType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_BandWidthStretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_CQTNormalization_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_CQTNormalization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQSettings_Statics::NewProp_NoiseFloorDb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConstantQSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstantQSettings_Statics::ClassParams = {
	&UConstantQSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConstantQSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQSettings_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UConstantQSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConstantQSettings()
{
	if (!Z_Registration_Info_UClass_UConstantQSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstantQSettings.OuterSingleton, Z_Construct_UClass_UConstantQSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConstantQSettings.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UConstantQSettings>()
{
	return UConstantQSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConstantQSettings);
UConstantQSettings::~UConstantQSettings() {}
// End Class UConstantQSettings

// Begin ScriptStruct FConstantQResults
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstantQResults;
class UScriptStruct* FConstantQResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstantQResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstantQResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstantQResults, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("ConstantQResults"));
	}
	return Z_Registration_Info_UScriptStruct_ConstantQResults.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UScriptStruct* StaticStruct<FConstantQResults>()
{
	return FConstantQResults::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstantQResults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The results of the ConstantQ analysis. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "The results of the ConstantQ analysis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The time in seconds since analysis began of this ConstantQ analysis result\n" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "The time in seconds since analysis began of this ConstantQ analysis result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectrumValues_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The spectrum values from the FFT\n" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "The spectrum values from the FFT" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpectrumValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpectrumValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstantQResults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstantQResults_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstantQResults, TimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSeconds_MetaData), NewProp_TimeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstantQResults_Statics::NewProp_SpectrumValues_Inner = { "SpectrumValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConstantQResults_Statics::NewProp_SpectrumValues = { "SpectrumValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstantQResults, SpectrumValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectrumValues_MetaData), NewProp_SpectrumValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstantQResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstantQResults_Statics::NewProp_TimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstantQResults_Statics::NewProp_SpectrumValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstantQResults_Statics::NewProp_SpectrumValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstantQResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstantQResults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	nullptr,
	&NewStructOps,
	"ConstantQResults",
	Z_Construct_UScriptStruct_FConstantQResults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstantQResults_Statics::PropPointers),
	sizeof(FConstantQResults),
	alignof(FConstantQResults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstantQResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstantQResults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstantQResults()
{
	if (!Z_Registration_Info_UScriptStruct_ConstantQResults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstantQResults.InnerSingleton, Z_Construct_UScriptStruct_FConstantQResults_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstantQResults.InnerSingleton;
}
// End ScriptStruct FConstantQResults

// Begin Delegate FOnConstantQResults
struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics
{
	struct _Script_AudioSynesthesia_eventOnConstantQResults_Parms
	{
		int32 ChannelIndex;
		TArray<FConstantQResults> ConstantQResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive all ConstantQ results per channel (time-stamped in an array) since last delegate call. If bDownmixToMono setting is true, results will be in channel index 0. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Delegate to receive all ConstantQ results per channel (time-stamped in an array) since last delegate call. If bDownmixToMono setting is true, results will be in channel index 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantQResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantQResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstantQResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnConstantQResults_Parms, ChannelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::NewProp_ConstantQResults_Inner = { "ConstantQResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstantQResults, METADATA_PARAMS(0, nullptr) }; // 4031499479
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::NewProp_ConstantQResults = { "ConstantQResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnConstantQResults_Parms, ConstantQResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantQResults_MetaData), NewProp_ConstantQResults_MetaData) }; // 4031499479
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::NewProp_ChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::NewProp_ConstantQResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::NewProp_ConstantQResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnConstantQResults__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnConstantQResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnConstantQResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnConstantQResults_DelegateWrapper(const FMulticastScriptDelegate& OnConstantQResults, int32 ChannelIndex, TArray<FConstantQResults> const& ConstantQResults)
{
	struct _Script_AudioSynesthesia_eventOnConstantQResults_Parms
	{
		int32 ChannelIndex;
		TArray<FConstantQResults> ConstantQResults;
	};
	_Script_AudioSynesthesia_eventOnConstantQResults_Parms Parms;
	Parms.ChannelIndex=ChannelIndex;
	Parms.ConstantQResults=ConstantQResults;
	OnConstantQResults.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnConstantQResults

// Begin Delegate FOnLatestConstantQResults
struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics
{
	struct _Script_AudioSynesthesia_eventOnLatestConstantQResults_Parms
	{
		int32 ChannelIndex;
		FConstantQResults LatestConstantQResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive only the most recent overall ConstantQ result per channel. If bDownmixToMono setting is true, results will be in channel index 0.*/" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Delegate to receive only the most recent overall ConstantQ result per channel. If bDownmixToMono setting is true, results will be in channel index 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestConstantQResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatestConstantQResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestConstantQResults_Parms, ChannelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::NewProp_LatestConstantQResults = { "LatestConstantQResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestConstantQResults_Parms, LatestConstantQResults), Z_Construct_UScriptStruct_FConstantQResults, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestConstantQResults_MetaData), NewProp_LatestConstantQResults_MetaData) }; // 4031499479
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::NewProp_ChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::NewProp_LatestConstantQResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnLatestConstantQResults__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestConstantQResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestConstantQResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLatestConstantQResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestConstantQResults, int32 ChannelIndex, FConstantQResults const& LatestConstantQResults)
{
	struct _Script_AudioSynesthesia_eventOnLatestConstantQResults_Parms
	{
		int32 ChannelIndex;
		FConstantQResults LatestConstantQResults;
	};
	_Script_AudioSynesthesia_eventOnLatestConstantQResults_Parms Parms;
	Parms.ChannelIndex=ChannelIndex;
	Parms.LatestConstantQResults=LatestConstantQResults;
	OnLatestConstantQResults.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLatestConstantQResults

// Begin Class UConstantQAnalyzer Function GetCenterFrequencies
struct Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics
{
	struct ConstantQAnalyzer_eventGetCenterFrequencies_Parms
	{
		TArray<float> OutCenterFrequencies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutCenterFrequencies_MetaData[] = {
		{ "DisplayName", "Center Frequencies" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutCenterFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCenterFrequencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::NewProp_OutCenterFrequencies_Inner = { "OutCenterFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::NewProp_OutCenterFrequencies = { "OutCenterFrequencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstantQAnalyzer_eventGetCenterFrequencies_Parms, OutCenterFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutCenterFrequencies_MetaData), NewProp_OutCenterFrequencies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::NewProp_OutCenterFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::NewProp_OutCenterFrequencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstantQAnalyzer, nullptr, "GetCenterFrequencies", nullptr, nullptr, Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::ConstantQAnalyzer_eventGetCenterFrequencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::ConstantQAnalyzer_eventGetCenterFrequencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstantQAnalyzer::execGetCenterFrequencies)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_OutCenterFrequencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCenterFrequencies(Z_Param_Out_OutCenterFrequencies);
	P_NATIVE_END;
}
// End Class UConstantQAnalyzer Function GetCenterFrequencies

// Begin Class UConstantQAnalyzer Function GetNumCenterFrequencies
struct Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics
{
	struct ConstantQAnalyzer_eventGetNumCenterFrequencies_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Num Center Frequencies" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstantQAnalyzer_eventGetNumCenterFrequencies_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstantQAnalyzer, nullptr, "GetNumCenterFrequencies", nullptr, nullptr, Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::ConstantQAnalyzer_eventGetNumCenterFrequencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::ConstantQAnalyzer_eventGetNumCenterFrequencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstantQAnalyzer::execGetNumCenterFrequencies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumCenterFrequencies();
	P_NATIVE_END;
}
// End Class UConstantQAnalyzer Function GetNumCenterFrequencies

// Begin Class UConstantQAnalyzer
void UConstantQAnalyzer::StaticRegisterNativesUConstantQAnalyzer()
{
	UClass* Class = UConstantQAnalyzer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCenterFrequencies", &UConstantQAnalyzer::execGetCenterFrequencies },
		{ "GetNumCenterFrequencies", &UConstantQAnalyzer::execGetNumCenterFrequencies },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstantQAnalyzer);
UClass* Z_Construct_UClass_UConstantQAnalyzer_NoRegister()
{
	return UConstantQAnalyzer::StaticClass();
}
struct Z_Construct_UClass_UConstantQAnalyzer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UConstantQAnalyzer\n *\n * UConstantQAnalyzer calculates the temporal evolution of constant q transform for a given\n * audio bus in real-time. ConstantQ is available for individual channels or the overall audio bus.\n */" },
		{ "IncludePath", "ConstantQ.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "UConstantQAnalyzer\n\nUConstantQAnalyzer calculates the temporal evolution of constant q transform for a given\naudio bus in real-time. ConstantQ is available for individual channels or the overall audio bus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "The settings for the audio analyzer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConstantQResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive all Spectrum results, per-channel, since last delegate call. If bDownmixToMono setting is true, results will be in channel index 0. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Delegate to receive all Spectrum results, per-channel, since last delegate call. If bDownmixToMono setting is true, results will be in channel index 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLatestConstantQResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive the latest per-channel Spectrum results. If bDownmixToMono setting is true, results will be in channel index 0. */" },
		{ "ModuleRelativePath", "Classes/ConstantQ.h" },
		{ "ToolTip", "Delegate to receive the latest per-channel Spectrum results. If bDownmixToMono setting is true, results will be in channel index 0." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstantQResults;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLatestConstantQResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies, "GetCenterFrequencies" }, // 659350908
		{ &Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies, "GetNumCenterFrequencies" }, // 4231864298
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstantQAnalyzer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstantQAnalyzer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQAnalyzer, Settings), Z_Construct_UClass_UConstantQSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConstantQAnalyzer_Statics::NewProp_OnConstantQResults = { "OnConstantQResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQAnalyzer, OnConstantQResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConstantQResults_MetaData), NewProp_OnConstantQResults_MetaData) }; // 1853903257
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConstantQAnalyzer_Statics::NewProp_OnLatestConstantQResults = { "OnLatestConstantQResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstantQAnalyzer, OnLatestConstantQResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLatestConstantQResults_MetaData), NewProp_OnLatestConstantQResults_MetaData) }; // 3447144308
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstantQAnalyzer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQAnalyzer_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQAnalyzer_Statics::NewProp_OnConstantQResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQAnalyzer_Statics::NewProp_OnLatestConstantQResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQAnalyzer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConstantQAnalyzer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioAnalyzer,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQAnalyzer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstantQAnalyzer_Statics::ClassParams = {
	&UConstantQAnalyzer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UConstantQAnalyzer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQAnalyzer_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQAnalyzer_Statics::Class_MetaDataParams), Z_Construct_UClass_UConstantQAnalyzer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConstantQAnalyzer()
{
	if (!Z_Registration_Info_UClass_UConstantQAnalyzer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstantQAnalyzer.OuterSingleton, Z_Construct_UClass_UConstantQAnalyzer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConstantQAnalyzer.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UConstantQAnalyzer>()
{
	return UConstantQAnalyzer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConstantQAnalyzer);
UConstantQAnalyzer::~UConstantQAnalyzer() {}
// End Class UConstantQAnalyzer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConstantQResults::StaticStruct, Z_Construct_UScriptStruct_FConstantQResults_Statics::NewStructOps, TEXT("ConstantQResults"), &Z_Registration_Info_UScriptStruct_ConstantQResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstantQResults), 4031499479U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConstantQSettings, UConstantQSettings::StaticClass, TEXT("UConstantQSettings"), &Z_Registration_Info_UClass_UConstantQSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstantQSettings), 3906478660U) },
		{ Z_Construct_UClass_UConstantQAnalyzer, UConstantQAnalyzer::StaticClass, TEXT("UConstantQAnalyzer"), &Z_Registration_Info_UClass_UConstantQAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstantQAnalyzer), 3775122050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_771431381(TEXT("/Script/AudioSynesthesia"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
