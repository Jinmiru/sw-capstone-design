// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesia/Classes/LoudnessNRT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoudnessNRT() {}

// Begin Cross Module References
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessNRT();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessNRT_NoRegister();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessNRTSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessNRTSettings_NoRegister();
AUDIOSYNESTHESIA_API UEnum* Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum();
UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References

// Begin Enum ELoudnessNRTCurveTypeEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum;
static UEnum* ELoudnessNRTCurveTypeEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("ELoudnessNRTCurveTypeEnum"));
	}
	return Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<ELoudnessNRTCurveTypeEnum>()
{
	return ELoudnessNRTCurveTypeEnum_StaticEnum();
}
struct Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "A.Comment", "/** Loudness Curve A Weighting. Commonly used in environmental sound measurements. Best for low level sounds. */" },
		{ "A.DisplayName", "A" },
		{ "A.Name", "ELoudnessNRTCurveTypeEnum::A" },
		{ "A.ToolTip", "Loudness Curve A Weighting. Commonly used in environmental sound measurements. Best for low level sounds." },
		{ "B.Comment", "/** Loudness Curve B Weighting. Relative to \"A\", gives more precedence to frequencies below 1kHz. */" },
		{ "B.DisplayName", "B" },
		{ "B.Name", "ELoudnessNRTCurveTypeEnum::B" },
		{ "B.ToolTip", "Loudness Curve B Weighting. Relative to \"A\", gives more precedence to frequencies below 1kHz." },
		{ "BlueprintType", "true" },
		{ "C.Comment", "/** Loudness Curve C Weighting. Relative to \"A\" and \"B\", gives more precedence to frequencies below 1kHz. */" },
		{ "C.DisplayName", "C" },
		{ "C.Name", "ELoudnessNRTCurveTypeEnum::C" },
		{ "C.ToolTip", "Loudness Curve C Weighting. Relative to \"A\" and \"B\", gives more precedence to frequencies below 1kHz." },
		{ "Comment", "/** ELoudnessNRTCurveTypeEnum\n *\n * Enumeration of available equal loudness curves. Loudness curves based on IEC 61672-1:2013 Electroacoustics - Sound level meters - Part 1: Specifications.\n */" },
		{ "D.Comment", "/** Loudness Curve D Weighting. Similar to \"B\" but with an emphasis on presence in the 2kHz-6KHz frequency range. */" },
		{ "D.DisplayName", "D" },
		{ "D.Name", "ELoudnessNRTCurveTypeEnum::D" },
		{ "D.ToolTip", "Loudness Curve D Weighting. Similar to \"B\" but with an emphasis on presence in the 2kHz-6KHz frequency range." },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "None.Comment", "/** No loudness curve weighting. */" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ELoudnessNRTCurveTypeEnum::None" },
		{ "None.ToolTip", "No loudness curve weighting." },
		{ "ToolTip", "ELoudnessNRTCurveTypeEnum\n\nEnumeration of available equal loudness curves. Loudness curves based on IEC 61672-1:2013 Electroacoustics - Sound level meters - Part 1: Specifications." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELoudnessNRTCurveTypeEnum::A", (int64)ELoudnessNRTCurveTypeEnum::A },
		{ "ELoudnessNRTCurveTypeEnum::B", (int64)ELoudnessNRTCurveTypeEnum::B },
		{ "ELoudnessNRTCurveTypeEnum::C", (int64)ELoudnessNRTCurveTypeEnum::C },
		{ "ELoudnessNRTCurveTypeEnum::D", (int64)ELoudnessNRTCurveTypeEnum::D },
		{ "ELoudnessNRTCurveTypeEnum::None", (int64)ELoudnessNRTCurveTypeEnum::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	nullptr,
	"ELoudnessNRTCurveTypeEnum",
	"ELoudnessNRTCurveTypeEnum",
	Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum()
{
	if (!Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.InnerSingleton, Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.InnerSingleton;
}
// End Enum ELoudnessNRTCurveTypeEnum

// Begin Class ULoudnessNRTSettings
void ULoudnessNRTSettings::StaticRegisterNativesULoudnessNRTSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoudnessNRTSettings);
UClass* Z_Construct_UClass_ULoudnessNRTSettings_NoRegister()
{
	return ULoudnessNRTSettings::StaticClass();
}
struct Z_Construct_UClass_ULoudnessNRTSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** ULoudnessNRTSettings\n *\n * Settings for a ULoudnessNRT analyzer.\n */" },
		{ "IncludePath", "LoudnessNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "ULoudnessNRTSettings\n\nSettings for a ULoudnessNRT analyzer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisPeriod_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.25" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Number of seconds between loudness measurements */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Number of seconds between loudness measurements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Minimum analysis frequency for calculating loudness. */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Minimum analysis frequency for calculating loudness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Maximum analysis frequency for calculating loudness. */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Maximum analysis frequency for calculating loudness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Type of equal loudness curve used in calculations */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Type of equal loudness curve used in calculations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFloorDb_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** dB level to denote silence.  Used when calculating normalized loudness. */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "dB level to denote silence.  Used when calculating normalized loudness." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalysisPeriod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumFrequency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFloorDb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoudnessNRTSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_AnalysisPeriod = { "AnalysisPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoudnessNRTSettings, AnalysisPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalysisPeriod_MetaData), NewProp_AnalysisPeriod_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MinimumFrequency = { "MinimumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoudnessNRTSettings, MinimumFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumFrequency_MetaData), NewProp_MinimumFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MaximumFrequency = { "MaximumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoudnessNRTSettings, MaximumFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumFrequency_MetaData), NewProp_MaximumFrequency_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoudnessNRTSettings, CurveType), Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveType_MetaData), NewProp_CurveType_MetaData) }; // 3663119082
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_NoiseFloorDb = { "NoiseFloorDb", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoudnessNRTSettings, NoiseFloorDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseFloorDb_MetaData), NewProp_NoiseFloorDb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoudnessNRTSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_AnalysisPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MinimumFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MaximumFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_NoiseFloorDb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoudnessNRTSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRTSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::ClassParams = {
	&ULoudnessNRTSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULoudnessNRTSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoudnessNRTSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoudnessNRTSettings()
{
	if (!Z_Registration_Info_UClass_ULoudnessNRTSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoudnessNRTSettings.OuterSingleton, Z_Construct_UClass_ULoudnessNRTSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoudnessNRTSettings.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<ULoudnessNRTSettings>()
{
	return ULoudnessNRTSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoudnessNRTSettings);
ULoudnessNRTSettings::~ULoudnessNRTSettings() {}
// End Class ULoudnessNRTSettings

// Begin Class ULoudnessNRT Function GetChannelLoudnessAtTime
struct Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics
{
	struct LoudnessNRT_eventGetChannelLoudnessAtTime_Parms
	{
		float InSeconds;
		int32 InChannel;
		float OutLoudness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Get a specific channel loudness of the analyzed sound at a given time. */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Get a specific channel loudness of the analyzed sound at a given time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLoudness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoudnessNRT_eventGetChannelLoudnessAtTime_Parms, InSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSeconds_MetaData), NewProp_InSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoudnessNRT_eventGetChannelLoudnessAtTime_Parms, InChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChannel_MetaData), NewProp_InChannel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_OutLoudness = { "OutLoudness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoudnessNRT_eventGetChannelLoudnessAtTime_Parms, OutLoudness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_OutLoudness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoudnessNRT, nullptr, "GetChannelLoudnessAtTime", nullptr, nullptr, Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::LoudnessNRT_eventGetChannelLoudnessAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::LoudnessNRT_eventGetChannelLoudnessAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoudnessNRT::execGetChannelLoudnessAtTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLoudness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetChannelLoudnessAtTime(Z_Param_InSeconds,Z_Param_InChannel,Z_Param_Out_OutLoudness);
	P_NATIVE_END;
}
// End Class ULoudnessNRT Function GetChannelLoudnessAtTime

// Begin Class ULoudnessNRT Function GetLoudnessAtTime
struct Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics
{
	struct LoudnessNRT_eventGetLoudnessAtTime_Parms
	{
		float InSeconds;
		float OutLoudness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Get the overall loudness of the analyzed sound at a given time. */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Get the overall loudness of the analyzed sound at a given time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLoudness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoudnessNRT_eventGetLoudnessAtTime_Parms, InSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSeconds_MetaData), NewProp_InSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_OutLoudness = { "OutLoudness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoudnessNRT_eventGetLoudnessAtTime_Parms, OutLoudness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_OutLoudness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoudnessNRT, nullptr, "GetLoudnessAtTime", nullptr, nullptr, Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::LoudnessNRT_eventGetLoudnessAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::LoudnessNRT_eventGetLoudnessAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoudnessNRT::execGetLoudnessAtTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSeconds);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLoudness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLoudnessAtTime(Z_Param_InSeconds,Z_Param_Out_OutLoudness);
	P_NATIVE_END;
}
// End Class ULoudnessNRT Function GetLoudnessAtTime

// Begin Class ULoudnessNRT Function GetNormalizedChannelLoudnessAtTime
struct Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics
{
	struct LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms
	{
		float InSeconds;
		int32 InChannel;
		float OutLoudness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/**\n\x09\x09 * Get a specific channel normalized loudness of the analyzed sound at a given time. Normalized \n\x09\x09 * loudness is always between 0.0 to 1.0. 0.0 refers to the noise floor while 1.0 refers to the \n\x09\x09 * maximum loudness in the sound.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Get a specific channel normalized loudness of the analyzed sound at a given time. Normalized\nloudness is always between 0.0 to 1.0. 0.0 refers to the noise floor while 1.0 refers to the\nmaximum loudness in the sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLoudness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms, InSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSeconds_MetaData), NewProp_InSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms, InChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChannel_MetaData), NewProp_InChannel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_OutLoudness = { "OutLoudness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms, OutLoudness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_OutLoudness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoudnessNRT, nullptr, "GetNormalizedChannelLoudnessAtTime", nullptr, nullptr, Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoudnessNRT::execGetNormalizedChannelLoudnessAtTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLoudness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNormalizedChannelLoudnessAtTime(Z_Param_InSeconds,Z_Param_InChannel,Z_Param_Out_OutLoudness);
	P_NATIVE_END;
}
// End Class ULoudnessNRT Function GetNormalizedChannelLoudnessAtTime

// Begin Class ULoudnessNRT Function GetNormalizedLoudnessAtTime
struct Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics
{
	struct LoudnessNRT_eventGetNormalizedLoudnessAtTime_Parms
	{
		float InSeconds;
		float OutLoudness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/**\n\x09\x09 * Get the normalized overall loudness of the analyzed sound at a given time. Normalized loudness\n\x09\x09 * is always between 0.0 to 1.0. 0.0 refers to the noise floor while 1.0 refers to the maximum \n\x09\x09 * loudness in the sound.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Get the normalized overall loudness of the analyzed sound at a given time. Normalized loudness\nis always between 0.0 to 1.0. 0.0 refers to the noise floor while 1.0 refers to the maximum\nloudness in the sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLoudness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoudnessNRT_eventGetNormalizedLoudnessAtTime_Parms, InSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSeconds_MetaData), NewProp_InSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_OutLoudness = { "OutLoudness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoudnessNRT_eventGetNormalizedLoudnessAtTime_Parms, OutLoudness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_OutLoudness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoudnessNRT, nullptr, "GetNormalizedLoudnessAtTime", nullptr, nullptr, Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::LoudnessNRT_eventGetNormalizedLoudnessAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::LoudnessNRT_eventGetNormalizedLoudnessAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoudnessNRT::execGetNormalizedLoudnessAtTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSeconds);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLoudness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNormalizedLoudnessAtTime(Z_Param_InSeconds,Z_Param_Out_OutLoudness);
	P_NATIVE_END;
}
// End Class ULoudnessNRT Function GetNormalizedLoudnessAtTime

// Begin Class ULoudnessNRT
void ULoudnessNRT::StaticRegisterNativesULoudnessNRT()
{
	UClass* Class = ULoudnessNRT::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChannelLoudnessAtTime", &ULoudnessNRT::execGetChannelLoudnessAtTime },
		{ "GetLoudnessAtTime", &ULoudnessNRT::execGetLoudnessAtTime },
		{ "GetNormalizedChannelLoudnessAtTime", &ULoudnessNRT::execGetNormalizedChannelLoudnessAtTime },
		{ "GetNormalizedLoudnessAtTime", &ULoudnessNRT::execGetNormalizedLoudnessAtTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoudnessNRT);
UClass* Z_Construct_UClass_ULoudnessNRT_NoRegister()
{
	return ULoudnessNRT::StaticClass();
}
struct Z_Construct_UClass_ULoudnessNRT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** ULoudnessNRT\n *\n * ULoudnessNRT calculates the temporal evolution of perceptual loudness for a given \n * sound. Loudness is available for individual channels or the overall sound asset. Normalized \n * loudness values convert the range to 0.0 to 1.0 where 0.0 is the noise floor and 1.0 is the\n * maximum loudness of the particular sound.\n */" },
		{ "IncludePath", "LoudnessNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "ULoudnessNRT\n\nULoudnessNRT calculates the temporal evolution of perceptual loudness for a given\nsound. Loudness is available for individual channels or the overall sound asset. Normalized\nloudness values convert the range to 0.0 to 1.0 where 0.0 is the noise floor and 1.0 is the\nmaximum loudness of the particular sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "The settings for the audio analyzer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime, "GetChannelLoudnessAtTime" }, // 1919528640
		{ &Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime, "GetLoudnessAtTime" }, // 2940109539
		{ &Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime, "GetNormalizedChannelLoudnessAtTime" }, // 2352832245
		{ &Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime, "GetNormalizedLoudnessAtTime" }, // 2293976088
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoudnessNRT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoudnessNRT_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoudnessNRT, Settings), Z_Construct_UClass_ULoudnessNRTSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoudnessNRT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRT_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRT_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoudnessNRT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRT,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoudnessNRT_Statics::ClassParams = {
	&ULoudnessNRT::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoudnessNRT_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRT_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRT_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoudnessNRT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoudnessNRT()
{
	if (!Z_Registration_Info_UClass_ULoudnessNRT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoudnessNRT.OuterSingleton, Z_Construct_UClass_ULoudnessNRT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoudnessNRT.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<ULoudnessNRT>()
{
	return ULoudnessNRT::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoudnessNRT);
ULoudnessNRT::~ULoudnessNRT() {}
// End Class ULoudnessNRT

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELoudnessNRTCurveTypeEnum_StaticEnum, TEXT("ELoudnessNRTCurveTypeEnum"), &Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3663119082U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoudnessNRTSettings, ULoudnessNRTSettings::StaticClass, TEXT("ULoudnessNRTSettings"), &Z_Registration_Info_UClass_ULoudnessNRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoudnessNRTSettings), 1193507636U) },
		{ Z_Construct_UClass_ULoudnessNRT, ULoudnessNRT::StaticClass, TEXT("ULoudnessNRT"), &Z_Registration_Info_UClass_ULoudnessNRT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoudnessNRT), 3892719527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_2433684246(TEXT("/Script/AudioSynesthesia"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
