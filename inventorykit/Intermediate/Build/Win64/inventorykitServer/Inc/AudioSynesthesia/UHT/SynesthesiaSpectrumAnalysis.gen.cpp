// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesia/Classes/SynesthesiaSpectrumAnalysis.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynesthesiaSpectrumAnalysis() {}

// Begin Cross Module References
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_NoRegister();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_USynesthesiaSpectrumAnalyzer();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_NoRegister();
AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature();
AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature();
AUDIOSYNESTHESIA_API UScriptStruct* Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTSize();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTWindowType();
UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References

// Begin Class USynesthesiaSpectrumAnalysisSettings
void USynesthesiaSpectrumAnalysisSettings::StaticRegisterNativesUSynesthesiaSpectrumAnalysisSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynesthesiaSpectrumAnalysisSettings);
UClass* Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_NoRegister()
{
	return USynesthesiaSpectrumAnalysisSettings::StaticClass();
}
struct Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** USynesthesiaSpectrumAnalysisSettings\n *\n * Settings for a USynesthesiaSpectrumAnalysisAnalyzer.\n */" },
		{ "IncludePath", "SynesthesiaSpectrumAnalysis.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "USynesthesiaSpectrumAnalysisSettings\n\nSettings for a USynesthesiaSpectrumAnalysisAnalyzer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisPeriod_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.25" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Number of seconds between SynesthesiaSpectrumAnalysis measurements */" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "Number of seconds between SynesthesiaSpectrumAnalysis measurements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFTSize_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Size of FFT. */" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "Size of FFT." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectrumType_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Type of spectrum to use. */" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "Type of spectrum to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowType_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Type of window to use. */" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "Type of window to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDownmixToMono_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets its own FFT result. */" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets its own FFT result." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalysisPeriod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FFTSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FFTSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpectrumType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpectrumType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindowType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowType;
	static void NewProp_bDownmixToMono_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDownmixToMono;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynesthesiaSpectrumAnalysisSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_AnalysisPeriod = { "AnalysisPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynesthesiaSpectrumAnalysisSettings, AnalysisPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalysisPeriod_MetaData), NewProp_AnalysisPeriod_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_FFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_FFTSize = { "FFTSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynesthesiaSpectrumAnalysisSettings, FFTSize), Z_Construct_UEnum_Engine_EFFTSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFTSize_MetaData), NewProp_FFTSize_MetaData) }; // 1363042091
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_SpectrumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_SpectrumType = { "SpectrumType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynesthesiaSpectrumAnalysisSettings, SpectrumType), Z_Construct_UEnum_Engine_EAudioSpectrumType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectrumType_MetaData), NewProp_SpectrumType_MetaData) }; // 1072666962
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_WindowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_WindowType = { "WindowType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynesthesiaSpectrumAnalysisSettings, WindowType), Z_Construct_UEnum_Engine_EFFTWindowType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowType_MetaData), NewProp_WindowType_MetaData) }; // 12023531
void Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_bDownmixToMono_SetBit(void* Obj)
{
	((USynesthesiaSpectrumAnalysisSettings*)Obj)->bDownmixToMono = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_bDownmixToMono = { "bDownmixToMono", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USynesthesiaSpectrumAnalysisSettings), &Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_bDownmixToMono_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDownmixToMono_MetaData), NewProp_bDownmixToMono_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_AnalysisPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_FFTSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_FFTSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_SpectrumType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_SpectrumType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_WindowType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_WindowType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_bDownmixToMono,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::ClassParams = {
	&USynesthesiaSpectrumAnalysisSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings()
{
	if (!Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.OuterSingleton, Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<USynesthesiaSpectrumAnalysisSettings>()
{
	return USynesthesiaSpectrumAnalysisSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynesthesiaSpectrumAnalysisSettings);
USynesthesiaSpectrumAnalysisSettings::~USynesthesiaSpectrumAnalysisSettings() {}
// End Class USynesthesiaSpectrumAnalysisSettings

// Begin ScriptStruct FSynesthesiaSpectrumResults
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SynesthesiaSpectrumResults;
class UScriptStruct* FSynesthesiaSpectrumResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SynesthesiaSpectrumResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SynesthesiaSpectrumResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("SynesthesiaSpectrumResults"));
	}
	return Z_Registration_Info_UScriptStruct_SynesthesiaSpectrumResults.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UScriptStruct* StaticStruct<FSynesthesiaSpectrumResults>()
{
	return FSynesthesiaSpectrumResults::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The results of the spectrum analysis. */" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "The results of the spectrum analysis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The time in seconds since analysis began of this SynesthesiaSpectrumAnalysis analysis result\n" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "The time in seconds since analysis began of this SynesthesiaSpectrumAnalysis analysis result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectrumValues_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The spectrum values from the FFT\n" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "The spectrum values from the FFT" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpectrumValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpectrumValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynesthesiaSpectrumResults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynesthesiaSpectrumResults, TimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSeconds_MetaData), NewProp_TimeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::NewProp_SpectrumValues_Inner = { "SpectrumValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::NewProp_SpectrumValues = { "SpectrumValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynesthesiaSpectrumResults, SpectrumValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectrumValues_MetaData), NewProp_SpectrumValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::NewProp_TimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::NewProp_SpectrumValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::NewProp_SpectrumValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	nullptr,
	&NewStructOps,
	"SynesthesiaSpectrumResults",
	Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::PropPointers),
	sizeof(FSynesthesiaSpectrumResults),
	alignof(FSynesthesiaSpectrumResults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults()
{
	if (!Z_Registration_Info_UScriptStruct_SynesthesiaSpectrumResults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SynesthesiaSpectrumResults.InnerSingleton, Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SynesthesiaSpectrumResults.InnerSingleton;
}
// End ScriptStruct FSynesthesiaSpectrumResults

// Begin Delegate FOnSpectrumResults
struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics
{
	struct _Script_AudioSynesthesia_eventOnSpectrumResults_Parms
	{
		int32 ChannelIndex;
		TArray<FSynesthesiaSpectrumResults> SpectrumResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive all spectrum results per channel (time-stamped in an array) since last delegate call. If bDownmixToMono setting is true, results will be in channel index 0. */" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "Delegate to receive all spectrum results per channel (time-stamped in an array) since last delegate call. If bDownmixToMono setting is true, results will be in channel index 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectrumResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpectrumResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpectrumResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnSpectrumResults_Parms, ChannelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::NewProp_SpectrumResults_Inner = { "SpectrumResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults, METADATA_PARAMS(0, nullptr) }; // 319454947
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::NewProp_SpectrumResults = { "SpectrumResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnSpectrumResults_Parms, SpectrumResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectrumResults_MetaData), NewProp_SpectrumResults_MetaData) }; // 319454947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::NewProp_ChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::NewProp_SpectrumResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::NewProp_SpectrumResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnSpectrumResults__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnSpectrumResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnSpectrumResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpectrumResults_DelegateWrapper(const FMulticastScriptDelegate& OnSpectrumResults, int32 ChannelIndex, TArray<FSynesthesiaSpectrumResults> const& SpectrumResults)
{
	struct _Script_AudioSynesthesia_eventOnSpectrumResults_Parms
	{
		int32 ChannelIndex;
		TArray<FSynesthesiaSpectrumResults> SpectrumResults;
	};
	_Script_AudioSynesthesia_eventOnSpectrumResults_Parms Parms;
	Parms.ChannelIndex=ChannelIndex;
	Parms.SpectrumResults=SpectrumResults;
	OnSpectrumResults.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSpectrumResults

// Begin Delegate FOnLatestSpectrumResults
struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics
{
	struct _Script_AudioSynesthesia_eventOnLatestSpectrumResults_Parms
	{
		int32 ChannelIndex;
		FSynesthesiaSpectrumResults LatestSpectrumResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive only the most recent overall spectrum result per channel. If bDownmixToMono setting is true, results will be in channel index 0.*/" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "Delegate to receive only the most recent overall spectrum result per channel. If bDownmixToMono setting is true, results will be in channel index 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestSpectrumResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatestSpectrumResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestSpectrumResults_Parms, ChannelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::NewProp_LatestSpectrumResults = { "LatestSpectrumResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestSpectrumResults_Parms, LatestSpectrumResults), Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestSpectrumResults_MetaData), NewProp_LatestSpectrumResults_MetaData) }; // 319454947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::NewProp_ChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::NewProp_LatestSpectrumResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnLatestSpectrumResults__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestSpectrumResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestSpectrumResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLatestSpectrumResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestSpectrumResults, int32 ChannelIndex, FSynesthesiaSpectrumResults const& LatestSpectrumResults)
{
	struct _Script_AudioSynesthesia_eventOnLatestSpectrumResults_Parms
	{
		int32 ChannelIndex;
		FSynesthesiaSpectrumResults LatestSpectrumResults;
	};
	_Script_AudioSynesthesia_eventOnLatestSpectrumResults_Parms Parms;
	Parms.ChannelIndex=ChannelIndex;
	Parms.LatestSpectrumResults=LatestSpectrumResults;
	OnLatestSpectrumResults.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLatestSpectrumResults

// Begin Class USynesthesiaSpectrumAnalyzer Function GetCenterFrequencies
struct Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics
{
	struct SynesthesiaSpectrumAnalyzer_eventGetCenterFrequencies_Parms
	{
		float InSampleRate;
		TArray<float> OutCenterFrequencies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSampleRate_MetaData[] = {
		{ "DisplayName", "Sample Rate" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutCenterFrequencies_MetaData[] = {
		{ "DisplayName", "Center Frequencies" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSampleRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutCenterFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCenterFrequencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::NewProp_InSampleRate = { "InSampleRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynesthesiaSpectrumAnalyzer_eventGetCenterFrequencies_Parms, InSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSampleRate_MetaData), NewProp_InSampleRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::NewProp_OutCenterFrequencies_Inner = { "OutCenterFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::NewProp_OutCenterFrequencies = { "OutCenterFrequencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynesthesiaSpectrumAnalyzer_eventGetCenterFrequencies_Parms, OutCenterFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutCenterFrequencies_MetaData), NewProp_OutCenterFrequencies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::NewProp_InSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::NewProp_OutCenterFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::NewProp_OutCenterFrequencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynesthesiaSpectrumAnalyzer, nullptr, "GetCenterFrequencies", nullptr, nullptr, Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::SynesthesiaSpectrumAnalyzer_eventGetCenterFrequencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::SynesthesiaSpectrumAnalyzer_eventGetCenterFrequencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynesthesiaSpectrumAnalyzer::execGetCenterFrequencies)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSampleRate);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutCenterFrequencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCenterFrequencies(Z_Param_InSampleRate,Z_Param_Out_OutCenterFrequencies);
	P_NATIVE_END;
}
// End Class USynesthesiaSpectrumAnalyzer Function GetCenterFrequencies

// Begin Class USynesthesiaSpectrumAnalyzer Function GetNumCenterFrequencies
struct Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics
{
	struct SynesthesiaSpectrumAnalyzer_eventGetNumCenterFrequencies_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynesthesiaSpectrumAnalyzer_eventGetNumCenterFrequencies_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynesthesiaSpectrumAnalyzer, nullptr, "GetNumCenterFrequencies", nullptr, nullptr, Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::SynesthesiaSpectrumAnalyzer_eventGetNumCenterFrequencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::SynesthesiaSpectrumAnalyzer_eventGetNumCenterFrequencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynesthesiaSpectrumAnalyzer::execGetNumCenterFrequencies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumCenterFrequencies();
	P_NATIVE_END;
}
// End Class USynesthesiaSpectrumAnalyzer Function GetNumCenterFrequencies

// Begin Class USynesthesiaSpectrumAnalyzer
void USynesthesiaSpectrumAnalyzer::StaticRegisterNativesUSynesthesiaSpectrumAnalyzer()
{
	UClass* Class = USynesthesiaSpectrumAnalyzer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCenterFrequencies", &USynesthesiaSpectrumAnalyzer::execGetCenterFrequencies },
		{ "GetNumCenterFrequencies", &USynesthesiaSpectrumAnalyzer::execGetNumCenterFrequencies },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynesthesiaSpectrumAnalyzer);
UClass* Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_NoRegister()
{
	return USynesthesiaSpectrumAnalyzer::StaticClass();
}
struct Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** USynesthesiaSpectrumAnalysisAnalyzer\n *\n * USynesthesiaSpectrumAnalysisAnalyzer calculates the current amplitude of an\n * audio bus in real-time.\n */" },
		{ "IncludePath", "SynesthesiaSpectrumAnalysis.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "USynesthesiaSpectrumAnalysisAnalyzer\n\nUSynesthesiaSpectrumAnalysisAnalyzer calculates the current amplitude of an\naudio bus in real-time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the SynesthesiaSpectrumAnalysis audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "The settings for the SynesthesiaSpectrumAnalysis audio analyzer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpectrumResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive all Spectrum results, per-channel, since last delegate call. If bDownmixToMono setting is true, results will be in channel index 0. */" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "Delegate to receive all Spectrum results, per-channel, since last delegate call. If bDownmixToMono setting is true, results will be in channel index 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLatestSpectrumResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive the latest per-channel Spectrum results. If bDownmixToMono setting is true, results will be in channel index 0. */" },
		{ "ModuleRelativePath", "Classes/SynesthesiaSpectrumAnalysis.h" },
		{ "ToolTip", "Delegate to receive the latest per-channel Spectrum results. If bDownmixToMono setting is true, results will be in channel index 0." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpectrumResults;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLatestSpectrumResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies, "GetCenterFrequencies" }, // 2705830214
		{ &Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies, "GetNumCenterFrequencies" }, // 3171947736
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynesthesiaSpectrumAnalyzer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynesthesiaSpectrumAnalyzer, Settings), Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::NewProp_OnSpectrumResults = { "OnSpectrumResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynesthesiaSpectrumAnalyzer, OnSpectrumResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpectrumResults_MetaData), NewProp_OnSpectrumResults_MetaData) }; // 353175138
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::NewProp_OnLatestSpectrumResults = { "OnLatestSpectrumResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynesthesiaSpectrumAnalyzer, OnLatestSpectrumResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLatestSpectrumResults_MetaData), NewProp_OnLatestSpectrumResults_MetaData) }; // 2827327617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::NewProp_OnSpectrumResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::NewProp_OnLatestSpectrumResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioAnalyzer,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::ClassParams = {
	&USynesthesiaSpectrumAnalyzer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::Class_MetaDataParams), Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynesthesiaSpectrumAnalyzer()
{
	if (!Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.OuterSingleton, Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<USynesthesiaSpectrumAnalyzer>()
{
	return USynesthesiaSpectrumAnalyzer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynesthesiaSpectrumAnalyzer);
USynesthesiaSpectrumAnalyzer::~USynesthesiaSpectrumAnalyzer() {}
// End Class USynesthesiaSpectrumAnalyzer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSynesthesiaSpectrumResults::StaticStruct, Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::NewStructOps, TEXT("SynesthesiaSpectrumResults"), &Z_Registration_Info_UScriptStruct_SynesthesiaSpectrumResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSynesthesiaSpectrumResults), 319454947U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings, USynesthesiaSpectrumAnalysisSettings::StaticClass, TEXT("USynesthesiaSpectrumAnalysisSettings"), &Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynesthesiaSpectrumAnalysisSettings), 819969900U) },
		{ Z_Construct_UClass_USynesthesiaSpectrumAnalyzer, USynesthesiaSpectrumAnalyzer::StaticClass, TEXT("USynesthesiaSpectrumAnalyzer"), &Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynesthesiaSpectrumAnalyzer), 1580485923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_594574208(TEXT("/Script/AudioSynesthesia"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
