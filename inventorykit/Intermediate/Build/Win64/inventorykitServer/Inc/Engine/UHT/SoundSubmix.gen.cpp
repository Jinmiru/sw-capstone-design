// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmix() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectBase_NoRegister();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister();
AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEndpointSubmix();
ENGINE_API UClass* Z_Construct_UClass_UEndpointSubmix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundfieldEndpointSubmix();
ENGINE_API UClass* Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundfieldSubmix();
ENGINE_API UClass* Z_Construct_UClass_USoundfieldSubmix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmixWithParentBase();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTSize();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTWindowType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGainParamMode();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicChildSubmix();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FOnSubmixRecordedFileDone
struct Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnSubmixRecordedFileDone_Parms
	{
		const USoundWave* ResultingSoundWave;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when a recorded file has finished writing to disk.\n*\n*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Called when a recorded file has finished writing to disk." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultingSoundWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave = { "ResultingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixRecordedFileDone_Parms, ResultingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultingSoundWave_MetaData), NewProp_ResultingSoundWave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixRecordedFileDone__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::_Script_Engine_eventOnSubmixRecordedFileDone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::_Script_Engine_eventOnSubmixRecordedFileDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSubmixRecordedFileDone_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixRecordedFileDone, const USoundWave* ResultingSoundWave)
{
	struct _Script_Engine_eventOnSubmixRecordedFileDone_Parms
	{
		const USoundWave* ResultingSoundWave;
	};
	_Script_Engine_eventOnSubmixRecordedFileDone_Parms Parms;
	Parms.ResultingSoundWave=ResultingSoundWave;
	OnSubmixRecordedFileDone.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSubmixRecordedFileDone

// Begin Delegate FOnSubmixEnvelope
struct Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnSubmixEnvelope_Parms
	{
		TArray<float> Envelope;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when a new submix envelope value is generated on the given audio device id (different for multiple PIE). Array is an envelope value for each channel.\n*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Called when a new submix envelope value is generated on the given audio device id (different for multiple PIE). Array is an envelope value for each channel." },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_Inner = { "Envelope", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope = { "Envelope", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixEnvelope_Parms, Envelope), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Envelope_MetaData), NewProp_Envelope_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixEnvelope__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::_Script_Engine_eventOnSubmixEnvelope_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::_Script_Engine_eventOnSubmixEnvelope_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSubmixEnvelope_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixEnvelope, TArray<float> const& Envelope)
{
	struct _Script_Engine_eventOnSubmixEnvelope_Parms
	{
		TArray<float> Envelope;
	};
	_Script_Engine_eventOnSubmixEnvelope_Parms Parms;
	Parms.Envelope=Envelope;
	OnSubmixEnvelope.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSubmixEnvelope

// Begin Delegate FOnSubmixSpectralAnalysis
struct Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnSubmixSpectralAnalysis_Parms
	{
		TArray<float> Magnitudes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitudes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitudes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Magnitudes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_Inner = { "Magnitudes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes = { "Magnitudes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixSpectralAnalysis_Parms, Magnitudes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitudes_MetaData), NewProp_Magnitudes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixSpectralAnalysis__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::_Script_Engine_eventOnSubmixSpectralAnalysis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::_Script_Engine_eventOnSubmixSpectralAnalysis_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSubmixSpectralAnalysis_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixSpectralAnalysis, TArray<float> const& Magnitudes)
{
	struct _Script_Engine_eventOnSubmixSpectralAnalysis_Parms
	{
		TArray<float> Magnitudes;
	};
	_Script_Engine_eventOnSubmixSpectralAnalysis_Parms Parms;
	Parms.Magnitudes=Magnitudes;
	OnSubmixSpectralAnalysis.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSubmixSpectralAnalysis

// Begin Enum EFFTSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFTSize;
static UEnum* EFFTSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFFTSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFFTSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFFTSize, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFFTSize"));
	}
	return Z_Registration_Info_UEnum_EFFTSize.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EFFTSize>()
{
	return EFFTSize_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EFFTSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DefaultSize.Comment", "// 512\n" },
		{ "DefaultSize.Name", "EFFTSize::DefaultSize" },
		{ "DefaultSize.ToolTip", "512" },
		{ "Large.Comment", "// 1024\n" },
		{ "Large.Name", "EFFTSize::Large" },
		{ "Large.ToolTip", "1024" },
		{ "Max.Comment", "// 4096\n" },
		{ "Max.Name", "EFFTSize::Max" },
		{ "Max.ToolTip", "4096" },
		{ "Medium.Comment", "// 512\n" },
		{ "Medium.Name", "EFFTSize::Medium" },
		{ "Medium.ToolTip", "512" },
		{ "Min.Comment", "// 64\n" },
		{ "Min.Name", "EFFTSize::Min" },
		{ "Min.ToolTip", "64" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "Small.Comment", "// 256\n" },
		{ "Small.Name", "EFFTSize::Small" },
		{ "Small.ToolTip", "256" },
		{ "VeryLarge.Comment", "// 2048\n" },
		{ "VeryLarge.Name", "EFFTSize::VeryLarge" },
		{ "VeryLarge.ToolTip", "2048" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFFTSize::DefaultSize", (int64)EFFTSize::DefaultSize },
		{ "EFFTSize::Min", (int64)EFFTSize::Min },
		{ "EFFTSize::Small", (int64)EFFTSize::Small },
		{ "EFFTSize::Medium", (int64)EFFTSize::Medium },
		{ "EFFTSize::Large", (int64)EFFTSize::Large },
		{ "EFFTSize::VeryLarge", (int64)EFFTSize::VeryLarge },
		{ "EFFTSize::Max", (int64)EFFTSize::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFFTSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EFFTSize",
	"EFFTSize",
	Z_Construct_UEnum_Engine_EFFTSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EFFTSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EFFTSize()
{
	if (!Z_Registration_Info_UEnum_EFFTSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFTSize.InnerSingleton, Z_Construct_UEnum_Engine_EFFTSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFFTSize.InnerSingleton;
}
// End Enum EFFTSize

// Begin Enum EFFTPeakInterpolationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod;
static UEnum* EFFTPeakInterpolationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFFTPeakInterpolationMethod"));
	}
	return Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EFFTPeakInterpolationMethod>()
{
	return EFFTPeakInterpolationMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ConstantQ.Name", "EFFTPeakInterpolationMethod::ConstantQ" },
		{ "Linear.Name", "EFFTPeakInterpolationMethod::Linear" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "NearestNeighbor.Name", "EFFTPeakInterpolationMethod::NearestNeighbor" },
		{ "Quadratic.Name", "EFFTPeakInterpolationMethod::Quadratic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFFTPeakInterpolationMethod::NearestNeighbor", (int64)EFFTPeakInterpolationMethod::NearestNeighbor },
		{ "EFFTPeakInterpolationMethod::Linear", (int64)EFFTPeakInterpolationMethod::Linear },
		{ "EFFTPeakInterpolationMethod::Quadratic", (int64)EFFTPeakInterpolationMethod::Quadratic },
		{ "EFFTPeakInterpolationMethod::ConstantQ", (int64)EFFTPeakInterpolationMethod::ConstantQ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EFFTPeakInterpolationMethod",
	"EFFTPeakInterpolationMethod",
	Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod()
{
	if (!Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.InnerSingleton;
}
// End Enum EFFTPeakInterpolationMethod

// Begin Enum EFFTWindowType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFTWindowType;
static UEnum* EFFTWindowType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFFTWindowType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFFTWindowType"));
	}
	return Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EFFTWindowType>()
{
	return EFFTWindowType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EFFTWindowType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blackman.Comment", "// Mainlobe width of -3 dB and sidelobe attenuation of ~-60db. Tricky for COLA.\n" },
		{ "Blackman.Name", "EFFTWindowType::Blackman" },
		{ "Blackman.ToolTip", "Mainlobe width of -3 dB and sidelobe attenuation of ~-60db. Tricky for COLA." },
		{ "Hamming.Comment", "// Mainlobe width of -3 dB and sidelobe attenuation of ~-40 dB. Good for COLA.\n" },
		{ "Hamming.Name", "EFFTWindowType::Hamming" },
		{ "Hamming.ToolTip", "Mainlobe width of -3 dB and sidelobe attenuation of ~-40 dB. Good for COLA." },
		{ "Hann.Comment", "// Mainlobe width of -3 dB and sidelobe attenuation of ~-30dB. Good for COLA.\n" },
		{ "Hann.Name", "EFFTWindowType::Hann" },
		{ "Hann.ToolTip", "Mainlobe width of -3 dB and sidelobe attenuation of ~-30dB. Good for COLA." },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "None.Comment", "// No window is applied. Technically a boxcar window.\n" },
		{ "None.Name", "EFFTWindowType::None" },
		{ "None.ToolTip", "No window is applied. Technically a boxcar window." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFFTWindowType::None", (int64)EFFTWindowType::None },
		{ "EFFTWindowType::Hamming", (int64)EFFTWindowType::Hamming },
		{ "EFFTWindowType::Hann", (int64)EFFTWindowType::Hann },
		{ "EFFTWindowType::Blackman", (int64)EFFTWindowType::Blackman },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFFTWindowType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EFFTWindowType",
	"EFFTWindowType",
	Z_Construct_UEnum_Engine_EFFTWindowType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTWindowType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTWindowType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EFFTWindowType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EFFTWindowType()
{
	if (!Z_Registration_Info_UEnum_EFFTWindowType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFTWindowType.InnerSingleton, Z_Construct_UEnum_Engine_EFFTWindowType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFFTWindowType.InnerSingleton;
}
// End Enum EFFTWindowType

// Begin Enum EAudioSpectrumType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrumType;
static UEnum* EAudioSpectrumType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioSpectrumType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioSpectrumType"));
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAudioSpectrumType>()
{
	return EAudioSpectrumType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Decibel.Comment", "// Returns decibels (0.0 dB is 1.0)\n" },
		{ "Decibel.Name", "EAudioSpectrumType::Decibel" },
		{ "Decibel.ToolTip", "Returns decibels (0.0 dB is 1.0)" },
		{ "MagnitudeSpectrum.Comment", "// Spectrum frequency values are equal to magnitude of frequency.\n" },
		{ "MagnitudeSpectrum.Name", "EAudioSpectrumType::MagnitudeSpectrum" },
		{ "MagnitudeSpectrum.ToolTip", "Spectrum frequency values are equal to magnitude of frequency." },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "PowerSpectrum.Comment", "// Spectrum frequency values are equal to magnitude squared.\n" },
		{ "PowerSpectrum.Name", "EAudioSpectrumType::PowerSpectrum" },
		{ "PowerSpectrum.ToolTip", "Spectrum frequency values are equal to magnitude squared." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioSpectrumType::MagnitudeSpectrum", (int64)EAudioSpectrumType::MagnitudeSpectrum },
		{ "EAudioSpectrumType::PowerSpectrum", (int64)EAudioSpectrumType::PowerSpectrum },
		{ "EAudioSpectrumType::Decibel", (int64)EAudioSpectrumType::Decibel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAudioSpectrumType",
	"EAudioSpectrumType",
	Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumType()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrumType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrumType.InnerSingleton, Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioSpectrumType.InnerSingleton;
}
// End Enum EAudioSpectrumType

// Begin ScriptStruct FDynamicChildSubmix
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicChildSubmix;
class UScriptStruct* FDynamicChildSubmix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicChildSubmix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicChildSubmix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicChildSubmix, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DynamicChildSubmix"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicChildSubmix.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDynamicChildSubmix>()
{
	return FDynamicChildSubmix::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildSubmixes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildSubmixes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildSubmixes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicChildSubmix>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::NewProp_ChildSubmixes_Inner = { "ChildSubmixes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::NewProp_ChildSubmixes = { "ChildSubmixes", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicChildSubmix, ChildSubmixes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildSubmixes_MetaData), NewProp_ChildSubmixes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::NewProp_ChildSubmixes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::NewProp_ChildSubmixes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DynamicChildSubmix",
	Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::PropPointers),
	sizeof(FDynamicChildSubmix),
	alignof(FDynamicChildSubmix),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDynamicChildSubmix()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicChildSubmix.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicChildSubmix.InnerSingleton, Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DynamicChildSubmix.InnerSingleton;
}
// End ScriptStruct FDynamicChildSubmix

// Begin Class USoundSubmixBase Function DynamicConnect
struct Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics
{
	struct SoundSubmixBase_eventDynamicConnect_Parms
	{
		const UObject* WorldContextObject;
		USoundSubmixBase* InParent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Dynamically Connects to a parent submix.\n\x09* @param\x09WorldContextObject\x09UObject that's used to GetWorld\n\x09* @param\x09InParent\x09Parent Submix to connect to\n\x09**/" },
		{ "DisplayName", "Connect" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Dynamically Connects to a parent submix.\n@param        WorldContextObject      UObject that's used to GetWorld\n@param        InParent        Parent Submix to connect to" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParent_MetaData[] = {
		{ "DisplayName", "Parent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmixBase_eventDynamicConnect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmixBase_eventDynamicConnect_Parms, InParent), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParent_MetaData), NewProp_InParent_MetaData) };
void Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundSubmixBase_eventDynamicConnect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundSubmixBase_eventDynamicConnect_Parms), &Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::NewProp_InParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmixBase, nullptr, "DynamicConnect", nullptr, nullptr, Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::SoundSubmixBase_eventDynamicConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::SoundSubmixBase_eventDynamicConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmixBase_DynamicConnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmixBase::execDynamicConnect)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USoundSubmixBase,Z_Param_InParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DynamicConnect(Z_Param_WorldContextObject,Z_Param_InParent);
	P_NATIVE_END;
}
// End Class USoundSubmixBase Function DynamicConnect

// Begin Class USoundSubmixBase Function DynamicDisconnect
struct Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics
{
	struct SoundSubmixBase_eventDynamicDisconnect_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Dynamically Disconnect from a parent.\n\x09* @param\x09WorldContextObject\x09UObject that's used to GetWorld\n\x09**/" },
		{ "DisplayName", "Disconnect" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Dynamically Disconnect from a parent.\n@param        WorldContextObject      UObject that's used to GetWorld" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmixBase_eventDynamicDisconnect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SoundSubmixBase_eventDynamicDisconnect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundSubmixBase_eventDynamicDisconnect_Parms), &Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmixBase, nullptr, "DynamicDisconnect", nullptr, nullptr, Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::SoundSubmixBase_eventDynamicDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::SoundSubmixBase_eventDynamicDisconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmixBase::execDynamicDisconnect)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DynamicDisconnect(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USoundSubmixBase Function DynamicDisconnect

// Begin Class USoundSubmixBase Function FindDynamicAncestor
struct Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics
{
	struct SoundSubmixBase_eventFindDynamicAncestor_Parms
	{
		USoundSubmixBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Searching upwards from this Submix to the root looking for the first Submix marked Dynamic\n\x09 *  If this Submix is Dynamic this will be returned.\n\x09**/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Searching upwards from this Submix to the root looking for the first Submix marked Dynamic\nIf this Submix is Dynamic this will be returned." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmixBase_eventFindDynamicAncestor_Parms, ReturnValue), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmixBase, nullptr, "FindDynamicAncestor", nullptr, nullptr, Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::SoundSubmixBase_eventFindDynamicAncestor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::SoundSubmixBase_eventFindDynamicAncestor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmixBase::execFindDynamicAncestor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundSubmixBase**)Z_Param__Result=P_THIS->FindDynamicAncestor();
	P_NATIVE_END;
}
// End Class USoundSubmixBase Function FindDynamicAncestor

// Begin Class USoundSubmixBase
void USoundSubmixBase::StaticRegisterNativesUSoundSubmixBase()
{
	UClass* Class = USoundSubmixBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DynamicConnect", &USoundSubmixBase::execDynamicConnect },
		{ "DynamicDisconnect", &USoundSubmixBase::execDynamicDisconnect },
		{ "FindDynamicAncestor", &USoundSubmixBase::execFindDynamicAncestor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSubmixBase);
UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister()
{
	return USoundSubmixBase::StaticClass();
}
struct Z_Construct_UClass_USoundSubmixBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDisable_MetaData[] = {
		{ "Category", "AutoDisablement" },
		{ "Comment", "// Auto-manage enabling and disabling the submix as a CPU optimization. It will be disabled if the submix and all child submixes are silent. It will re-enable if a sound is sent to the submix or a child submix is audible.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Auto-manage enabling and disabling the submix as a CPU optimization. It will be disabled if the submix and all child submixes are silent. It will re-enable if a sound is sent to the submix or a child submix is audible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoDisableTime_MetaData[] = {
		{ "Category", "AutoDisablement" },
		{ "Comment", "// The minimum amount of time to wait before automatically disabling a submix if it is silent. Will immediately re-enable if source audio is sent to it. \n" },
		{ "EditCondition", "bAutoDisable" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The minimum amount of time to wait before automatically disabling a submix if it is silent. Will immediately re-enable if source audio is sent to it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildSubmixes_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "// Child submixes to this sound mix\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Child submixes to this sound mix" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicChildSubmixes_MetaData[] = {
		{ "Comment", "// Dynamic Child submixes (Map of AudioDevice -> [Submix] )\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Dynamic Child submixes (Map of AudioDevice -> [Submix] )" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoDisable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDisable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoDisableTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildSubmixes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildSubmixes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicChildSubmixes_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DynamicChildSubmixes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicChildSubmixes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundSubmixBase_DynamicConnect, "DynamicConnect" }, // 1239380617
		{ &Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect, "DynamicDisconnect" }, // 1619354893
		{ &Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor, "FindDynamicAncestor" }, // 2527873992
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable_SetBit(void* Obj)
{
	((USoundSubmixBase*)Obj)->bAutoDisable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable = { "bAutoDisable", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundSubmixBase), &Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDisable_MetaData), NewProp_bAutoDisable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_AutoDisableTime = { "AutoDisableTime", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmixBase, AutoDisableTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoDisableTime_MetaData), NewProp_AutoDisableTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_Inner = { "ChildSubmixes", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes = { "ChildSubmixes", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmixBase, ChildSubmixes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildSubmixes_MetaData), NewProp_ChildSubmixes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_DynamicChildSubmixes_ValueProp = { "DynamicChildSubmixes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDynamicChildSubmix, METADATA_PARAMS(0, nullptr) }; // 1111427115
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_DynamicChildSubmixes_Key_KeyProp = { "DynamicChildSubmixes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_DynamicChildSubmixes = { "DynamicChildSubmixes", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmixBase, DynamicChildSubmixes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicChildSubmixes_MetaData), NewProp_DynamicChildSubmixes_MetaData) }; // 1111427115
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmixBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_AutoDisableTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_DynamicChildSubmixes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_DynamicChildSubmixes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_DynamicChildSubmixes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundSubmixBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixBase_Statics::ClassParams = {
	&USoundSubmixBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USoundSubmixBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::PropPointers),
	0,
	0x000810A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundSubmixBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundSubmixBase()
{
	if (!Z_Registration_Info_UClass_USoundSubmixBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSubmixBase.OuterSingleton, Z_Construct_UClass_USoundSubmixBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundSubmixBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundSubmixBase>()
{
	return USoundSubmixBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixBase);
USoundSubmixBase::~USoundSubmixBase() {}
// End Class USoundSubmixBase

// Begin Class USoundSubmixWithParentBase
void USoundSubmixWithParentBase::StaticRegisterNativesUSoundSubmixWithParentBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSubmixWithParentBase);
UClass* Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister()
{
	return USoundSubmixWithParentBase::StaticClass();
}
struct Z_Construct_UClass_USoundSubmixWithParentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This submix class can be derived from for submixes that output to a parent submix.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "This submix class can be derived from for submixes that output to a parent submix." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentSubmix_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "EditCondition", "!bIsDynamic" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicParentSubmix_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDynamic_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "/** Is Submix Dynamic. (i.e. allows connect/disconnect at runtime.)  **/" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "ParentSubmix == nullptr" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Is Submix Dynamic. (i.e. allows connect/disconnect at runtime.)  *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSubmix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicParentSubmix_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DynamicParentSubmix_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicParentSubmix;
	static void NewProp_bIsDynamic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixWithParentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix = { "ParentSubmix", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmixWithParentBase, ParentSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentSubmix_MetaData), NewProp_ParentSubmix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_DynamicParentSubmix_ValueProp = { "DynamicParentSubmix", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_DynamicParentSubmix_Key_KeyProp = { "DynamicParentSubmix_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_DynamicParentSubmix = { "DynamicParentSubmix", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmixWithParentBase, DynamicParentSubmix), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicParentSubmix_MetaData), NewProp_DynamicParentSubmix_MetaData) };
void Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_bIsDynamic_SetBit(void* Obj)
{
	((USoundSubmixWithParentBase*)Obj)->bIsDynamic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_bIsDynamic = { "bIsDynamic", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundSubmixWithParentBase), &Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_bIsDynamic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDynamic_MetaData), NewProp_bIsDynamic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmixWithParentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_DynamicParentSubmix_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_DynamicParentSubmix_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_DynamicParentSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_bIsDynamic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundSubmixWithParentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundSubmixBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixWithParentBase_Statics::ClassParams = {
	&USoundSubmixWithParentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundSubmixWithParentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::PropPointers),
	0,
	0x000810A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundSubmixWithParentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundSubmixWithParentBase()
{
	if (!Z_Registration_Info_UClass_USoundSubmixWithParentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSubmixWithParentBase.OuterSingleton, Z_Construct_UClass_USoundSubmixWithParentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundSubmixWithParentBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundSubmixWithParentBase>()
{
	return USoundSubmixWithParentBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixWithParentBase);
USoundSubmixWithParentBase::~USoundSubmixWithParentBase() {}
// End Class USoundSubmixWithParentBase

// Begin Enum EGainParamMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGainParamMode;
static UEnum* EGainParamMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGainParamMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EGainParamMode"));
	}
	return Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EGainParamMode>()
{
	return EGainParamMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EGainParamMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Whether to use linear or decibel values for audio gains\n" },
		{ "Decibels.Name", "EGainParamMode::Decibels" },
		{ "Linear.Name", "EGainParamMode::Linear" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Whether to use linear or decibel values for audio gains" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGainParamMode::Linear", (int64)EGainParamMode::Linear },
		{ "EGainParamMode::Decibels", (int64)EGainParamMode::Decibels },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EGainParamMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EGainParamMode",
	"EGainParamMode",
	Z_Construct_UEnum_Engine_EGainParamMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGainParamMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGainParamMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EGainParamMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EGainParamMode()
{
	if (!Z_Registration_Info_UEnum_EGainParamMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGainParamMode.InnerSingleton, Z_Construct_UEnum_Engine_EGainParamMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGainParamMode.InnerSingleton;
}
// End Enum EGainParamMode

// Begin Class USoundSubmix Function AddEnvelopeFollowerDelegate
struct Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics
{
	struct SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms
	{
		const UObject* WorldContextObject;
		FScriptDelegate OnSubmixEnvelopeBP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "Comment", "/**\n\x09 *\x09""Adds an envelope follower delegate to the submix when envelope following is enabled on this submix.\n\x09 *\x09@param\x09OnSubmixEnvelopeBP\x09""Event to fire when new envelope data is available.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Adds an envelope follower delegate to the submix when envelope following is enabled on this submix.\n@param  OnSubmixEnvelopeBP      Event to fire when new envelope data is available." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSubmixEnvelopeBP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSubmixEnvelopeBP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP = { "OnSubmixEnvelopeBP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms, OnSubmixEnvelopeBP), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSubmixEnvelopeBP_MetaData), NewProp_OnSubmixEnvelopeBP_MetaData) }; // 2034410587
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "AddEnvelopeFollowerDelegate", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execAddEnvelopeFollowerDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSubmixEnvelopeBP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddEnvelopeFollowerDelegate(Z_Param_WorldContextObject,FOnSubmixEnvelopeBP(Z_Param_Out_OnSubmixEnvelopeBP));
	P_NATIVE_END;
}
// End Class USoundSubmix Function AddEnvelopeFollowerDelegate

// Begin Class USoundSubmix Function AddSpectralAnalysisDelegate
struct Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics
{
	struct SoundSubmix_eventAddSpectralAnalysisDelegate_Parms
	{
		const UObject* WorldContextObject;
		TArray<FSoundSubmixSpectralAnalysisBandSettings> InBandSettings;
		FScriptDelegate OnSubmixSpectralAnalysisBP;
		float UpdateRate;
		float DecibelNoiseFloor;
		bool bDoNormalize;
		bool bDoAutoRange;
		float AutoRangeAttackTime;
		float AutoRangeReleaseTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Spectrum" },
		{ "Comment", "/**\n\x09 *\x09""Adds a spectral analysis delegate to receive notifications when this submix has spectrum analysis enabled.\n\x09 *\x09@param\x09InBandsettings\x09\x09\x09\x09\x09The frequency bands to analyze and their envelope-following settings.\n\x09 *  @param  OnSubmixSpectralAnalysisBP\x09\x09""Event to fire when new spectral data is available.\n\x09 *\x09@param\x09UpdateRate\x09\x09\x09\x09\x09\x09How often to retrieve the data from the spectral analyzer and broadcast the event. Max is 30 times per second.\n\x09 *\x09@param  InterpMethod                    Method to used for band peak calculation.\n\x09 *\x09@param  SpectrumType                    Metric to use when returning spectrum values.\n\x09 *\x09@param  DecibelNoiseFloor               Decibel Noise Floor to consider as silence when using a Decibel Spectrum Type.\n\x09 *\x09@param  bDoNormalize                    If true, output band values will be normalized between zero and one.\n\x09 *\x09@param  bDoAutoRange                    If true, output band values will have their ranges automatically adjusted to the minimum and maximum values in the audio. Output band values will be normalized between zero and one.\n\x09 *\x09@param  AutoRangeAttackTime             The time (in seconds) it takes for the range to expand to 90% of a larger range.\n\x09 *\x09@param  AutoRangeReleaseTime            The time (in seconds) it takes for the range to shrink to 90% of a smaller range.\n\x09 */" },
		{ "CPP_Default_AutoRangeAttackTime", "0.100000" },
		{ "CPP_Default_AutoRangeReleaseTime", "60.000000" },
		{ "CPP_Default_bDoAutoRange", "false" },
		{ "CPP_Default_bDoNormalize", "true" },
		{ "CPP_Default_DecibelNoiseFloor", "-40.000000" },
		{ "CPP_Default_UpdateRate", "10.000000" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Adds a spectral analysis delegate to receive notifications when this submix has spectrum analysis enabled.\n@param  InBandsettings                                  The frequency bands to analyze and their envelope-following settings.\n@param  OnSubmixSpectralAnalysisBP          Event to fire when new spectral data is available.\n@param  UpdateRate                                              How often to retrieve the data from the spectral analyzer and broadcast the event. Max is 30 times per second.\n@param  InterpMethod                    Method to used for band peak calculation.\n@param  SpectrumType                    Metric to use when returning spectrum values.\n@param  DecibelNoiseFloor               Decibel Noise Floor to consider as silence when using a Decibel Spectrum Type.\n@param  bDoNormalize                    If true, output band values will be normalized between zero and one.\n@param  bDoAutoRange                    If true, output band values will have their ranges automatically adjusted to the minimum and maximum values in the audio. Output band values will be normalized between zero and one.\n@param  AutoRangeAttackTime             The time (in seconds) it takes for the range to expand to 90% of a larger range.\n@param  AutoRangeReleaseTime            The time (in seconds) it takes for the range to shrink to 90% of a smaller range." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBandSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSubmixSpectralAnalysisBP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBandSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBandSettings;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSubmixSpectralAnalysisBP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecibelNoiseFloor;
	static void NewProp_bDoNormalize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNormalize;
	static void NewProp_bDoAutoRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAutoRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRangeAttackTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRangeReleaseTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings_Inner = { "InBandSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings, METADATA_PARAMS(0, nullptr) }; // 1283376601
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings = { "InBandSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, InBandSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBandSettings_MetaData), NewProp_InBandSettings_MetaData) }; // 1283376601
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP = { "OnSubmixSpectralAnalysisBP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, OnSubmixSpectralAnalysisBP), Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSubmixSpectralAnalysisBP_MetaData), NewProp_OnSubmixSpectralAnalysisBP_MetaData) }; // 2610711499
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, UpdateRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_DecibelNoiseFloor = { "DecibelNoiseFloor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, DecibelNoiseFloor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoNormalize_SetBit(void* Obj)
{
	((SoundSubmix_eventAddSpectralAnalysisDelegate_Parms*)Obj)->bDoNormalize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoNormalize = { "bDoNormalize", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms), &Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoNormalize_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoAutoRange_SetBit(void* Obj)
{
	((SoundSubmix_eventAddSpectralAnalysisDelegate_Parms*)Obj)->bDoAutoRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoAutoRange = { "bDoAutoRange", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms), &Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoAutoRange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_AutoRangeAttackTime = { "AutoRangeAttackTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, AutoRangeAttackTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_AutoRangeReleaseTime = { "AutoRangeReleaseTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, AutoRangeReleaseTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_UpdateRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_DecibelNoiseFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoNormalize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoAutoRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_AutoRangeAttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_AutoRangeReleaseTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "AddSpectralAnalysisDelegate", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::SoundSubmix_eventAddSpectralAnalysisDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::SoundSubmix_eventAddSpectralAnalysisDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execAddSpectralAnalysisDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FSoundSubmixSpectralAnalysisBandSettings,Z_Param_Out_InBandSettings);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSubmixSpectralAnalysisBP);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DecibelNoiseFloor);
	P_GET_UBOOL(Z_Param_bDoNormalize);
	P_GET_UBOOL(Z_Param_bDoAutoRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AutoRangeAttackTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AutoRangeReleaseTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSpectralAnalysisDelegate(Z_Param_WorldContextObject,Z_Param_Out_InBandSettings,FOnSubmixSpectralAnalysisBP(Z_Param_Out_OnSubmixSpectralAnalysisBP),Z_Param_UpdateRate,Z_Param_DecibelNoiseFloor,Z_Param_bDoNormalize,Z_Param_bDoAutoRange,Z_Param_AutoRangeAttackTime,Z_Param_AutoRangeReleaseTime);
	P_NATIVE_END;
}
// End Class USoundSubmix Function AddSpectralAnalysisDelegate

// Begin Class USoundSubmix Function RemoveSpectralAnalysisDelegate
struct Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics
{
	struct SoundSubmix_eventRemoveSpectralAnalysisDelegate_Parms
	{
		const UObject* WorldContextObject;
		FScriptDelegate OnSubmixSpectralAnalysisBP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Spectrum" },
		{ "Comment", "/**\n\x09 *\x09Remove a spectral analysis delegate.\n\x09 *  @param  OnSubmixSpectralAnalysisBP\x09\x09The event delegate to remove.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Remove a spectral analysis delegate.\n@param  OnSubmixSpectralAnalysisBP          The event delegate to remove." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSubmixSpectralAnalysisBP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSubmixSpectralAnalysisBP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventRemoveSpectralAnalysisDelegate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP = { "OnSubmixSpectralAnalysisBP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventRemoveSpectralAnalysisDelegate_Parms, OnSubmixSpectralAnalysisBP), Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSubmixSpectralAnalysisBP_MetaData), NewProp_OnSubmixSpectralAnalysisBP_MetaData) }; // 2610711499
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "RemoveSpectralAnalysisDelegate", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::SoundSubmix_eventRemoveSpectralAnalysisDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::SoundSubmix_eventRemoveSpectralAnalysisDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execRemoveSpectralAnalysisDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSubmixSpectralAnalysisBP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSpectralAnalysisDelegate(Z_Param_WorldContextObject,FOnSubmixSpectralAnalysisBP(Z_Param_Out_OnSubmixSpectralAnalysisBP));
	P_NATIVE_END;
}
// End Class USoundSubmix Function RemoveSpectralAnalysisDelegate

// Begin Class USoundSubmix Function SetDryVolumeModulation
struct Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics
{
	struct SoundSubmix_eventSetDryVolumeModulation_Parms
	{
		FSoundModulationDestinationSettings InVolMod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVolMod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVolMod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::NewProp_InVolMod = { "InVolMod", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventSetDryVolumeModulation_Parms, InVolMod), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVolMod_MetaData), NewProp_InVolMod_MetaData) }; // 4199692720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::NewProp_InVolMod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "SetDryVolumeModulation", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::SoundSubmix_eventSetDryVolumeModulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::SoundSubmix_eventSetDryVolumeModulation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execSetDryVolumeModulation)
{
	P_GET_STRUCT_REF(FSoundModulationDestinationSettings,Z_Param_Out_InVolMod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDryVolumeModulation(Z_Param_Out_InVolMod);
	P_NATIVE_END;
}
// End Class USoundSubmix Function SetDryVolumeModulation

// Begin Class USoundSubmix Function SetOutputVolumeModulation
struct Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics
{
	struct SoundSubmix_eventSetOutputVolumeModulation_Parms
	{
		FSoundModulationDestinationSettings InVolMod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Custom settors for Modulation Destinations\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Custom settors for Modulation Destinations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVolMod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVolMod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::NewProp_InVolMod = { "InVolMod", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventSetOutputVolumeModulation_Parms, InVolMod), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVolMod_MetaData), NewProp_InVolMod_MetaData) }; // 4199692720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::NewProp_InVolMod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "SetOutputVolumeModulation", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::SoundSubmix_eventSetOutputVolumeModulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::SoundSubmix_eventSetOutputVolumeModulation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execSetOutputVolumeModulation)
{
	P_GET_STRUCT_REF(FSoundModulationDestinationSettings,Z_Param_Out_InVolMod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutputVolumeModulation(Z_Param_Out_InVolMod);
	P_NATIVE_END;
}
// End Class USoundSubmix Function SetOutputVolumeModulation

// Begin Class USoundSubmix Function SetSubmixDryLevel
struct Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics
{
	struct SoundSubmix_eventSetSubmixDryLevel_Parms
	{
		const UObject* WorldContextObject;
		float InDryLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sets the output volume of the submix in linear gain. This dynamic level acts as a multiplier on the DryLevel property of this submix.  */" },
		{ "DisplayName", "SetSubmixDryLevel (linear gain)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sets the output volume of the submix in linear gain. This dynamic level acts as a multiplier on the DryLevel property of this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDryLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventSetSubmixDryLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_InDryLevel = { "InDryLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventSetSubmixDryLevel_Parms, InDryLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_InDryLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "SetSubmixDryLevel", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::SoundSubmix_eventSetSubmixDryLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::SoundSubmix_eventSetSubmixDryLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execSetSubmixDryLevel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDryLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubmixDryLevel(Z_Param_WorldContextObject,Z_Param_InDryLevel);
	P_NATIVE_END;
}
// End Class USoundSubmix Function SetSubmixDryLevel

// Begin Class USoundSubmix Function SetSubmixOutputVolume
struct Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics
{
	struct SoundSubmix_eventSetSubmixOutputVolume_Parms
	{
		const UObject* WorldContextObject;
		float InOutputVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sets the output volume of the submix in linear gain. This dynamic volume acts as a multiplier on the OutputVolume property of this submix.  */" },
		{ "DisplayName", "SetSubmixOutputVolume (linear gain)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sets the output volume of the submix in linear gain. This dynamic volume acts as a multiplier on the OutputVolume property of this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOutputVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventSetSubmixOutputVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_InOutputVolume = { "InOutputVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventSetSubmixOutputVolume_Parms, InOutputVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_InOutputVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "SetSubmixOutputVolume", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::SoundSubmix_eventSetSubmixOutputVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::SoundSubmix_eventSetSubmixOutputVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execSetSubmixOutputVolume)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOutputVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubmixOutputVolume(Z_Param_WorldContextObject,Z_Param_InOutputVolume);
	P_NATIVE_END;
}
// End Class USoundSubmix Function SetSubmixOutputVolume

// Begin Class USoundSubmix Function SetSubmixWetLevel
struct Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics
{
	struct SoundSubmix_eventSetSubmixWetLevel_Parms
	{
		const UObject* WorldContextObject;
		float InWetLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sets the output volume of the submix in linear gain. This dynamic level acts as a multiplier on the WetLevel property of this submix.  */" },
		{ "DisplayName", "SetSubmixWetLevel (linear gain)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sets the output volume of the submix in linear gain. This dynamic level acts as a multiplier on the WetLevel property of this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWetLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventSetSubmixWetLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_InWetLevel = { "InWetLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventSetSubmixWetLevel_Parms, InWetLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_InWetLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "SetSubmixWetLevel", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::SoundSubmix_eventSetSubmixWetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::SoundSubmix_eventSetSubmixWetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execSetSubmixWetLevel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWetLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubmixWetLevel(Z_Param_WorldContextObject,Z_Param_InWetLevel);
	P_NATIVE_END;
}
// End Class USoundSubmix Function SetSubmixWetLevel

// Begin Class USoundSubmix Function SetWetVolumeModulation
struct Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics
{
	struct SoundSubmix_eventSetWetVolumeModulation_Parms
	{
		FSoundModulationDestinationSettings InVolMod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVolMod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVolMod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::NewProp_InVolMod = { "InVolMod", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventSetWetVolumeModulation_Parms, InVolMod), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVolMod_MetaData), NewProp_InVolMod_MetaData) }; // 4199692720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::NewProp_InVolMod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "SetWetVolumeModulation", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::SoundSubmix_eventSetWetVolumeModulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::SoundSubmix_eventSetWetVolumeModulation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execSetWetVolumeModulation)
{
	P_GET_STRUCT_REF(FSoundModulationDestinationSettings,Z_Param_Out_InVolMod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWetVolumeModulation(Z_Param_Out_InVolMod);
	P_NATIVE_END;
}
// End Class USoundSubmix Function SetWetVolumeModulation

// Begin Class USoundSubmix Function StartEnvelopeFollowing
struct Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics
{
	struct SoundSubmix_eventStartEnvelopeFollowing_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "Comment", "// Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStartEnvelopeFollowing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StartEnvelopeFollowing", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::SoundSubmix_eventStartEnvelopeFollowing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::SoundSubmix_eventStartEnvelopeFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execStartEnvelopeFollowing)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartEnvelopeFollowing(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USoundSubmix Function StartEnvelopeFollowing

// Begin Class USoundSubmix Function StartRecordingOutput
struct Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics
{
	struct SoundSubmix_eventStartRecordingOutput_Parms
	{
		const UObject* WorldContextObject;
		float ExpectedDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Bounce" },
		{ "Comment", "// Start recording the audio from this submix.\n" },
		{ "DisplayName", "Start Recording Submix Output" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start recording the audio from this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStartRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_ExpectedDuration = { "ExpectedDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStartRecordingOutput_Parms, ExpectedDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_ExpectedDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StartRecordingOutput", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::SoundSubmix_eventStartRecordingOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::SoundSubmix_eventStartRecordingOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_StartRecordingOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execStartRecordingOutput)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRecordingOutput(Z_Param_WorldContextObject,Z_Param_ExpectedDuration);
	P_NATIVE_END;
}
// End Class USoundSubmix Function StartRecordingOutput

// Begin Class USoundSubmix Function StartSpectralAnalysis
struct Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics
{
	struct SoundSubmix_eventStartSpectralAnalysis_Parms
	{
		const UObject* WorldContextObject;
		EFFTSize FFTSize;
		EFFTPeakInterpolationMethod InterpolationMethod;
		EFFTWindowType WindowType;
		float HopSize;
		EAudioSpectrumType SpectrumType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Start spectrum analysis of the audio output. */" },
		{ "CPP_Default_FFTSize", "DefaultSize" },
		{ "CPP_Default_HopSize", "0.000000" },
		{ "CPP_Default_InterpolationMethod", "Linear" },
		{ "CPP_Default_SpectrumType", "MagnitudeSpectrum" },
		{ "CPP_Default_WindowType", "Hann" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FFTSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FFTSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindowType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HopSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpectrumType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpectrumType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_FFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_FFTSize = { "FFTSize", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, FFTSize), Z_Construct_UEnum_Engine_EFFTSize, METADATA_PARAMS(0, nullptr) }; // 1363042091
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_InterpolationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_InterpolationMethod = { "InterpolationMethod", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, InterpolationMethod), Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod, METADATA_PARAMS(0, nullptr) }; // 935194663
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WindowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WindowType = { "WindowType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, WindowType), Z_Construct_UEnum_Engine_EFFTWindowType, METADATA_PARAMS(0, nullptr) }; // 12023531
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_HopSize = { "HopSize", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, HopSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_SpectrumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_SpectrumType = { "SpectrumType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, SpectrumType), Z_Construct_UEnum_Engine_EAudioSpectrumType, METADATA_PARAMS(0, nullptr) }; // 1072666962
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_FFTSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_FFTSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_InterpolationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_InterpolationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WindowType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WindowType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_HopSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_SpectrumType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_SpectrumType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StartSpectralAnalysis", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::SoundSubmix_eventStartSpectralAnalysis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::SoundSubmix_eventStartSpectralAnalysis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execStartSpectralAnalysis)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EFFTSize,Z_Param_FFTSize);
	P_GET_ENUM(EFFTPeakInterpolationMethod,Z_Param_InterpolationMethod);
	P_GET_ENUM(EFFTWindowType,Z_Param_WindowType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HopSize);
	P_GET_ENUM(EAudioSpectrumType,Z_Param_SpectrumType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSpectralAnalysis(Z_Param_WorldContextObject,EFFTSize(Z_Param_FFTSize),EFFTPeakInterpolationMethod(Z_Param_InterpolationMethod),EFFTWindowType(Z_Param_WindowType),Z_Param_HopSize,EAudioSpectrumType(Z_Param_SpectrumType));
	P_NATIVE_END;
}
// End Class USoundSubmix Function StartSpectralAnalysis

// Begin Class USoundSubmix Function StopEnvelopeFollowing
struct Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics
{
	struct SoundSubmix_eventStopEnvelopeFollowing_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "Comment", "// Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStopEnvelopeFollowing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StopEnvelopeFollowing", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::SoundSubmix_eventStopEnvelopeFollowing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::SoundSubmix_eventStopEnvelopeFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execStopEnvelopeFollowing)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopEnvelopeFollowing(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USoundSubmix Function StopEnvelopeFollowing

// Begin Class USoundSubmix Function StopRecordingOutput
struct Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics
{
	struct SoundSubmix_eventStopRecordingOutput_Parms
	{
		const UObject* WorldContextObject;
		EAudioRecordingExportType ExportType;
		FString Name;
		FString Path;
		USoundWave* ExistingSoundWaveToOverwrite;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Bounce" },
		{ "Comment", "// Finish recording the audio from this submix and export it as a wav file or a USoundWave.\n" },
		{ "CPP_Default_ExistingSoundWaveToOverwrite", "None" },
		{ "DisplayName", "Finish Recording Submix Output" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Finish recording the audio from this submix and export it as a wav file or a USoundWave." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExportType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExistingSoundWaveToOverwrite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType = { "ExportType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, ExportType), Z_Construct_UEnum_Engine_EAudioRecordingExportType, METADATA_PARAMS(0, nullptr) }; // 633269224
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite = { "ExistingSoundWaveToOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, ExistingSoundWaveToOverwrite), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StopRecordingOutput", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::SoundSubmix_eventStopRecordingOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::SoundSubmix_eventStopRecordingOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_StopRecordingOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execStopRecordingOutput)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EAudioRecordingExportType,Z_Param_ExportType);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_OBJECT(USoundWave,Z_Param_ExistingSoundWaveToOverwrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecordingOutput(Z_Param_WorldContextObject,EAudioRecordingExportType(Z_Param_ExportType),Z_Param_Name,Z_Param_Path,Z_Param_ExistingSoundWaveToOverwrite);
	P_NATIVE_END;
}
// End Class USoundSubmix Function StopRecordingOutput

// Begin Class USoundSubmix Function StopSpectralAnalysis
struct Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics
{
	struct SoundSubmix_eventStopSpectralAnalysis_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Stop spectrum analysis of the audio output. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Stop spectrum analysis of the audio output." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundSubmix_eventStopSpectralAnalysis_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StopSpectralAnalysis", nullptr, nullptr, Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::SoundSubmix_eventStopSpectralAnalysis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::SoundSubmix_eventStopSpectralAnalysis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundSubmix::execStopSpectralAnalysis)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSpectralAnalysis(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USoundSubmix Function StopSpectralAnalysis

// Begin Class USoundSubmix
void USoundSubmix::StaticRegisterNativesUSoundSubmix()
{
	UClass* Class = USoundSubmix::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddEnvelopeFollowerDelegate", &USoundSubmix::execAddEnvelopeFollowerDelegate },
		{ "AddSpectralAnalysisDelegate", &USoundSubmix::execAddSpectralAnalysisDelegate },
		{ "RemoveSpectralAnalysisDelegate", &USoundSubmix::execRemoveSpectralAnalysisDelegate },
		{ "SetDryVolumeModulation", &USoundSubmix::execSetDryVolumeModulation },
		{ "SetOutputVolumeModulation", &USoundSubmix::execSetOutputVolumeModulation },
		{ "SetSubmixDryLevel", &USoundSubmix::execSetSubmixDryLevel },
		{ "SetSubmixOutputVolume", &USoundSubmix::execSetSubmixOutputVolume },
		{ "SetSubmixWetLevel", &USoundSubmix::execSetSubmixWetLevel },
		{ "SetWetVolumeModulation", &USoundSubmix::execSetWetVolumeModulation },
		{ "StartEnvelopeFollowing", &USoundSubmix::execStartEnvelopeFollowing },
		{ "StartRecordingOutput", &USoundSubmix::execStartRecordingOutput },
		{ "StartSpectralAnalysis", &USoundSubmix::execStartSpectralAnalysis },
		{ "StopEnvelopeFollowing", &USoundSubmix::execStopEnvelopeFollowing },
		{ "StopRecordingOutput", &USoundSubmix::execStopRecordingOutput },
		{ "StopSpectralAnalysis", &USoundSubmix::execStopSpectralAnalysis },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSubmix);
UClass* Z_Construct_UClass_USoundSubmix_NoRegister()
{
	return USoundSubmix::StaticClass();
}
struct Z_Construct_UClass_USoundSubmix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for applying an effect to the downmixed sum of multiple audio sources.\n */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for applying an effect to the downmixed sum of multiple audio sources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMuteWhenBackgrounded_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "/** Mute this submix when the application is muted or in the background. Used to prevent submix effect tails from continuing when tabbing out of application or if application is muted. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Mute this submix when the application is muted or in the background. Used to prevent submix effect tails from continuing when tabbing out of application or if application is muted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbisonicsPluginSettings_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "/** Optional settings used by plugins which support ambisonics file playback. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Optional settings used by plugins which support ambisonics file playback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "EnvelopeFollower" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "EnvelopeFollower" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputVolumeModulation_MetaData[] = {
		{ "AudioParam", "Volume" },
		{ "AudioParamClass", "SoundModulationParameterVolume" },
		{ "BlueprintSetter", "SetOutputVolumeModulation" },
		{ "Category", "SubmixLevel" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** The output volume of the submix in Decibels. Applied after submix effects and analysis are performed.*/" },
		{ "DisplayName", "Output Volume (dB)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The output volume of the submix in Decibels. Applied after submix effects and analysis are performed." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-96.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetLevelModulation_MetaData[] = {
		{ "AudioParam", "Volume" },
		{ "AudioParamClass", "SoundModulationParameterVolume" },
		{ "BlueprintSetter", "SetWetVolumeModulation" },
		{ "Category", "SubmixLevel" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** The wet level of the submixin Decibels. Applied after submix effects and analysis are performed. */" },
		{ "DisplayName", "Wet Level (dB)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The wet level of the submixin Decibels. Applied after submix effects and analysis are performed." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-96.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryLevelModulation_MetaData[] = {
		{ "AudioParam", "Volume" },
		{ "AudioParamClass", "SoundModulationParameterVolume" },
		{ "BlueprintSetter", "SetWetVolumeModulation" },
		{ "Category", "SubmixLevel" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** The dry level of the submix in Decibels. Applied before submix effects and analysis are performed. */" },
		{ "DisplayName", "Dry Level (dB)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The dry level of the submix in Decibels. Applied before submix effects and analysis are performed." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-96.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendToAudioLink_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "Comment", "/** Whether to send this Submix to AudioLink (when AudioLink is Enabled)*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Whether to send this Submix to AudioLink (when AudioLink is Enabled)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioLinkSettings_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "Comment", "/** Optional Audio Link Settings Object */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Optional Audio Link Settings Object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSubmixRecordedFileDone_MetaData[] = {
		{ "Comment", "// Blueprint delegate for when a recorded file is finished exporting.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Blueprint delegate for when a recorded file is finished exporting." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputVolume_MetaData[] = {
		{ "Comment", "// Forever deprecated properties.\n// These must be kept to always be able to migrate older assets.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Forever deprecated properties.\nThese must be kept to always be able to migrate older assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bMuteWhenBackgrounded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuteWhenBackgrounded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmbisonicsPluginSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputVolumeModulation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WetLevelModulation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DryLevelModulation;
	static void NewProp_bSendToAudioLink_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendToAudioLink;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioLinkSettings;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubmixRecordedFileDone;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate, "AddEnvelopeFollowerDelegate" }, // 2451452752
		{ &Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate, "AddSpectralAnalysisDelegate" }, // 1115072249
		{ &Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate, "RemoveSpectralAnalysisDelegate" }, // 521379729
		{ &Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation, "SetDryVolumeModulation" }, // 3963373947
		{ &Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation, "SetOutputVolumeModulation" }, // 4015208759
		{ &Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel, "SetSubmixDryLevel" }, // 4134242033
		{ &Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume, "SetSubmixOutputVolume" }, // 2578094341
		{ &Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel, "SetSubmixWetLevel" }, // 1416191572
		{ &Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation, "SetWetVolumeModulation" }, // 397508763
		{ &Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing, "StartEnvelopeFollowing" }, // 1099063233
		{ &Z_Construct_UFunction_USoundSubmix_StartRecordingOutput, "StartRecordingOutput" }, // 177104527
		{ &Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis, "StartSpectralAnalysis" }, // 2135867639
		{ &Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing, "StopEnvelopeFollowing" }, // 2009419967
		{ &Z_Construct_UFunction_USoundSubmix_StopRecordingOutput, "StopRecordingOutput" }, // 461842778
		{ &Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis, "StopSpectralAnalysis" }, // 4083534767
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmix>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_SetBit(void* Obj)
{
	((USoundSubmix*)Obj)->bMuteWhenBackgrounded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded = { "bMuteWhenBackgrounded", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundSubmix), &Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMuteWhenBackgrounded_MetaData), NewProp_bMuteWhenBackgrounded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixEffectChain_MetaData), NewProp_SubmixEffectChain_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings = { "AmbisonicsPluginSettings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, AmbisonicsPluginSettings), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbisonicsPluginSettings_MetaData), NewProp_AmbisonicsPluginSettings_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, EnvelopeFollowerAttackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerAttackTime_MetaData), NewProp_EnvelopeFollowerAttackTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, EnvelopeFollowerReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeFollowerReleaseTime_MetaData), NewProp_EnvelopeFollowerReleaseTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolumeModulation = { "OutputVolumeModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, OutputVolumeModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputVolumeModulation_MetaData), NewProp_OutputVolumeModulation_MetaData) }; // 4199692720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevelModulation = { "WetLevelModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, WetLevelModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetLevelModulation_MetaData), NewProp_WetLevelModulation_MetaData) }; // 4199692720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevelModulation = { "DryLevelModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, DryLevelModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryLevelModulation_MetaData), NewProp_DryLevelModulation_MetaData) }; // 4199692720
void Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink_SetBit(void* Obj)
{
	((USoundSubmix*)Obj)->bSendToAudioLink = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink = { "bSendToAudioLink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundSubmix), &Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendToAudioLink_MetaData), NewProp_bSendToAudioLink_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_AudioLinkSettings = { "AudioLinkSettings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, AudioLinkSettings), Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioLinkSettings_MetaData), NewProp_AudioLinkSettings_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone = { "OnSubmixRecordedFileDone", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, OnSubmixRecordedFileDone), Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSubmixRecordedFileDone_MetaData), NewProp_OnSubmixRecordedFileDone_MetaData) }; // 944469341
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume = { "OutputVolume", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, OutputVolume_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputVolume_MetaData), NewProp_OutputVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, WetLevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetLevel_MetaData), NewProp_WetLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSubmix, DryLevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DryLevel_MetaData), NewProp_DryLevel_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolumeModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevelModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevelModulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_AudioLinkSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevel,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundSubmix_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundSubmixWithParentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmix_Statics::ClassParams = {
	&USoundSubmix::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USoundSubmix_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::PropPointers),
	0,
	0x008810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundSubmix()
{
	if (!Z_Registration_Info_UClass_USoundSubmix.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSubmix.OuterSingleton, Z_Construct_UClass_USoundSubmix_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundSubmix.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundSubmix>()
{
	return USoundSubmix::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmix);
USoundSubmix::~USoundSubmix() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundSubmix)
// End Class USoundSubmix

// Begin Class USoundfieldSubmix
void USoundfieldSubmix::StaticRegisterNativesUSoundfieldSubmix()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundfieldSubmix);
UClass* Z_Construct_UClass_USoundfieldSubmix_NoRegister()
{
	return USoundfieldSubmix::StaticClass();
}
struct Z_Construct_UClass_USoundfieldSubmix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for use with soundfield formats, such as Ambisonics.\n */" },
		{ "DisplayName", "Sound Submix Soundfield" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for use with soundfield formats, such as Ambisonics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEncodingFormat_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "Comment", "/** Currently used format. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Currently used format." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncodingSettings_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "Comment", "/** Which encoding settings to use the sound field. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Which encoding settings to use the sound field." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEffectChain_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "Comment", "/** Soundfield effect chain to use for the sound field. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Soundfield effect chain to use for the sound field." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncodingSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SoundfieldEncodingFormat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EncodingSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundfieldEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundfieldEffectChain;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EncodingSettingsClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldSubmix>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat = { "SoundfieldEncodingFormat", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundfieldSubmix, SoundfieldEncodingFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundfieldEncodingFormat_MetaData), NewProp_SoundfieldEncodingFormat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings = { "EncodingSettings", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundfieldSubmix, EncodingSettings), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncodingSettings_MetaData), NewProp_EncodingSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_Inner = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundfieldEffectBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundfieldSubmix, SoundfieldEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundfieldEffectChain_MetaData), NewProp_SoundfieldEffectChain_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass = { "EncodingSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundfieldSubmix, EncodingSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncodingSettingsClass_MetaData), NewProp_EncodingSettingsClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundfieldSubmix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundfieldSubmix_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundSubmixWithParentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldSubmix_Statics::ClassParams = {
	&USoundfieldSubmix::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundfieldSubmix_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::PropPointers),
	0,
	0x000810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundfieldSubmix_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundfieldSubmix()
{
	if (!Z_Registration_Info_UClass_USoundfieldSubmix.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundfieldSubmix.OuterSingleton, Z_Construct_UClass_USoundfieldSubmix_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundfieldSubmix.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundfieldSubmix>()
{
	return USoundfieldSubmix::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldSubmix);
USoundfieldSubmix::~USoundfieldSubmix() {}
// End Class USoundfieldSubmix

// Begin Class UEndpointSubmix
void UEndpointSubmix::StaticRegisterNativesUEndpointSubmix()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEndpointSubmix);
UClass* Z_Construct_UClass_UEndpointSubmix_NoRegister()
{
	return UEndpointSubmix::StaticClass();
}
struct Z_Construct_UClass_UEndpointSubmix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for sending audio to an external endpoint, such as controller haptics or an additional audio device.\n */" },
		{ "DisplayName", "Sound Submix Endpoint" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for sending audio to an external endpoint, such as controller haptics or an additional audio device." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndpointType_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "Comment", "/** Currently used format. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Currently used format." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettings_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndpointType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EndpointSettingsClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndpointSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndpointSubmix>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType = { "EndpointType", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndpointSubmix, EndpointType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndpointType_MetaData), NewProp_EndpointType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass = { "EndpointSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndpointSubmix, EndpointSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndpointSettingsClass_MetaData), NewProp_EndpointSettingsClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings = { "EndpointSettings", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndpointSubmix, EndpointSettings), Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndpointSettings_MetaData), NewProp_EndpointSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndpointSubmix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEndpointSubmix_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundSubmixBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndpointSubmix_Statics::ClassParams = {
	&UEndpointSubmix::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEndpointSubmix_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::PropPointers),
	0,
	0x000810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndpointSubmix_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEndpointSubmix()
{
	if (!Z_Registration_Info_UClass_UEndpointSubmix.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndpointSubmix.OuterSingleton, Z_Construct_UClass_UEndpointSubmix_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEndpointSubmix.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEndpointSubmix>()
{
	return UEndpointSubmix::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEndpointSubmix);
UEndpointSubmix::~UEndpointSubmix() {}
// End Class UEndpointSubmix

// Begin Class USoundfieldEndpointSubmix
void USoundfieldEndpointSubmix::StaticRegisterNativesUSoundfieldEndpointSubmix()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundfieldEndpointSubmix);
UClass* Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister()
{
	return USoundfieldEndpointSubmix::StaticClass();
}
struct Z_Construct_UClass_USoundfieldEndpointSubmix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for sending soundfield-encoded audio to an external endpoint, such as a hardware binaural renderer that supports ambisonics.\n */" },
		{ "DisplayName", "Sound Submix Soundfield Endpoint" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for sending soundfield-encoded audio to an external endpoint, such as a hardware binaural renderer that supports ambisonics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEndpointType_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "Comment", "/** Currently used format. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Currently used format." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettings_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncodingSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncodingSettings_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEffectChain_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SoundfieldEndpointType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EndpointSettingsClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndpointSettings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EncodingSettingsClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EncodingSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundfieldEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundfieldEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEndpointSubmix>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType = { "SoundfieldEndpointType", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, SoundfieldEndpointType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundfieldEndpointType_MetaData), NewProp_SoundfieldEndpointType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass = { "EndpointSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, EndpointSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndpointSettingsClass_MetaData), NewProp_EndpointSettingsClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings = { "EndpointSettings", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, EndpointSettings), Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndpointSettings_MetaData), NewProp_EndpointSettings_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass = { "EncodingSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, EncodingSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncodingSettingsClass_MetaData), NewProp_EncodingSettingsClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings = { "EncodingSettings", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, EncodingSettings), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncodingSettings_MetaData), NewProp_EncodingSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_Inner = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundfieldEffectBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundfieldEndpointSubmix, SoundfieldEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundfieldEffectChain_MetaData), NewProp_SoundfieldEffectChain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundSubmixBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::ClassParams = {
	&USoundfieldEndpointSubmix::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::PropPointers),
	0,
	0x000810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundfieldEndpointSubmix()
{
	if (!Z_Registration_Info_UClass_USoundfieldEndpointSubmix.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundfieldEndpointSubmix.OuterSingleton, Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundfieldEndpointSubmix.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundfieldEndpointSubmix>()
{
	return USoundfieldEndpointSubmix::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEndpointSubmix);
USoundfieldEndpointSubmix::~USoundfieldEndpointSubmix() {}
// End Class USoundfieldEndpointSubmix

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFFTSize_StaticEnum, TEXT("EFFTSize"), &Z_Registration_Info_UEnum_EFFTSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1363042091U) },
		{ EFFTPeakInterpolationMethod_StaticEnum, TEXT("EFFTPeakInterpolationMethod"), &Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 935194663U) },
		{ EFFTWindowType_StaticEnum, TEXT("EFFTWindowType"), &Z_Registration_Info_UEnum_EFFTWindowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 12023531U) },
		{ EAudioSpectrumType_StaticEnum, TEXT("EAudioSpectrumType"), &Z_Registration_Info_UEnum_EAudioSpectrumType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1072666962U) },
		{ EGainParamMode_StaticEnum, TEXT("EGainParamMode"), &Z_Registration_Info_UEnum_EGainParamMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3783464000U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDynamicChildSubmix::StaticStruct, Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::NewStructOps, TEXT("DynamicChildSubmix"), &Z_Registration_Info_UScriptStruct_DynamicChildSubmix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicChildSubmix), 1111427115U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundSubmixBase, USoundSubmixBase::StaticClass, TEXT("USoundSubmixBase"), &Z_Registration_Info_UClass_USoundSubmixBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSubmixBase), 1102946814U) },
		{ Z_Construct_UClass_USoundSubmixWithParentBase, USoundSubmixWithParentBase::StaticClass, TEXT("USoundSubmixWithParentBase"), &Z_Registration_Info_UClass_USoundSubmixWithParentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSubmixWithParentBase), 2482715734U) },
		{ Z_Construct_UClass_USoundSubmix, USoundSubmix::StaticClass, TEXT("USoundSubmix"), &Z_Registration_Info_UClass_USoundSubmix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSubmix), 1237605390U) },
		{ Z_Construct_UClass_USoundfieldSubmix, USoundfieldSubmix::StaticClass, TEXT("USoundfieldSubmix"), &Z_Registration_Info_UClass_USoundfieldSubmix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundfieldSubmix), 991292047U) },
		{ Z_Construct_UClass_UEndpointSubmix, UEndpointSubmix::StaticClass, TEXT("UEndpointSubmix"), &Z_Registration_Info_UClass_UEndpointSubmix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndpointSubmix), 1058072568U) },
		{ Z_Construct_UClass_USoundfieldEndpointSubmix, USoundfieldEndpointSubmix::StaticClass, TEXT("USoundfieldEndpointSubmix"), &Z_Registration_Info_UClass_USoundfieldEndpointSubmix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundfieldEndpointSubmix), 1465682933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_2337821318(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
