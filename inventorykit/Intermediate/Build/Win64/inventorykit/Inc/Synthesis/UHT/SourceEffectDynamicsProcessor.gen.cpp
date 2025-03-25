// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectDynamicsProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectDynamicsProcessor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Enum ESourceEffectDynamicsProcessorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType;
static UEnum* ESourceEffectDynamicsProcessorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectDynamicsProcessorType"));
	}
	return Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectDynamicsProcessorType>()
{
	return ESourceEffectDynamicsProcessorType_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Compressor.Name", "ESourceEffectDynamicsProcessorType::Compressor" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectDynamicsProcessorType::Count" },
		{ "Expander.Name", "ESourceEffectDynamicsProcessorType::Expander" },
		{ "Gate.Name", "ESourceEffectDynamicsProcessorType::Gate" },
		{ "Limiter.Name", "ESourceEffectDynamicsProcessorType::Limiter" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UpwardsCompressor.Name", "ESourceEffectDynamicsProcessorType::UpwardsCompressor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESourceEffectDynamicsProcessorType::Compressor", (int64)ESourceEffectDynamicsProcessorType::Compressor },
		{ "ESourceEffectDynamicsProcessorType::Limiter", (int64)ESourceEffectDynamicsProcessorType::Limiter },
		{ "ESourceEffectDynamicsProcessorType::Expander", (int64)ESourceEffectDynamicsProcessorType::Expander },
		{ "ESourceEffectDynamicsProcessorType::Gate", (int64)ESourceEffectDynamicsProcessorType::Gate },
		{ "ESourceEffectDynamicsProcessorType::UpwardsCompressor", (int64)ESourceEffectDynamicsProcessorType::UpwardsCompressor },
		{ "ESourceEffectDynamicsProcessorType::Count", (int64)ESourceEffectDynamicsProcessorType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"ESourceEffectDynamicsProcessorType",
	"ESourceEffectDynamicsProcessorType",
	Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType()
{
	if (!Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.InnerSingleton;
}
// End Enum ESourceEffectDynamicsProcessorType

// Begin Enum ESourceEffectDynamicsPeakMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode;
static UEnum* ESourceEffectDynamicsPeakMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectDynamicsPeakMode"));
	}
	return Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectDynamicsPeakMode>()
{
	return ESourceEffectDynamicsPeakMode_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectDynamicsPeakMode::Count" },
		{ "MeanSquared.Name", "ESourceEffectDynamicsPeakMode::MeanSquared" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "Peak.Name", "ESourceEffectDynamicsPeakMode::Peak" },
		{ "RootMeanSquared.Name", "ESourceEffectDynamicsPeakMode::RootMeanSquared" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESourceEffectDynamicsPeakMode::MeanSquared", (int64)ESourceEffectDynamicsPeakMode::MeanSquared },
		{ "ESourceEffectDynamicsPeakMode::RootMeanSquared", (int64)ESourceEffectDynamicsPeakMode::RootMeanSquared },
		{ "ESourceEffectDynamicsPeakMode::Peak", (int64)ESourceEffectDynamicsPeakMode::Peak },
		{ "ESourceEffectDynamicsPeakMode::Count", (int64)ESourceEffectDynamicsPeakMode::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"ESourceEffectDynamicsPeakMode",
	"ESourceEffectDynamicsPeakMode",
	Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode()
{
	if (!Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.InnerSingleton;
}
// End Enum ESourceEffectDynamicsPeakMode

// Begin ScriptStruct FSourceEffectDynamicsProcessorSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings;
class UScriptStruct* FSourceEffectDynamicsProcessorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectDynamicsProcessorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectDynamicsProcessorSettings>()
{
	return FSourceEffectDynamicsProcessorSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAheadMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "200.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "20.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "20.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-60.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-60.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KneeBandwidthDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-12.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-12.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStereoLinked_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnalogMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicsProcessorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DynamicsProcessorType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAheadMsec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KneeBandwidthDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
	static void NewProp_bStereoLinked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStereoLinked;
	static void NewProp_bAnalogMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnalogMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectDynamicsProcessorSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType = { "DynamicsProcessorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, DynamicsProcessorType), Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicsProcessorType_MetaData), NewProp_DynamicsProcessorType_MetaData) }; // 2485768060
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, PeakMode), Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakMode_MetaData), NewProp_PeakMode_MetaData) }; // 188330736
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec = { "LookAheadMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, LookAheadMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAheadMsec_MetaData), NewProp_LookAheadMsec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, AttackTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTimeMsec_MetaData), NewProp_AttackTimeMsec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, ReleaseTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseTimeMsec_MetaData), NewProp_ReleaseTimeMsec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, ThresholdDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdDb_MetaData), NewProp_ThresholdDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb = { "KneeBandwidthDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, KneeBandwidthDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KneeBandwidthDb_MetaData), NewProp_KneeBandwidthDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, InputGainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputGainDb_MetaData), NewProp_InputGainDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, OutputGainDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputGainDb_MetaData), NewProp_OutputGainDb_MetaData) };
void Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_SetBit(void* Obj)
{
	((FSourceEffectDynamicsProcessorSettings*)Obj)->bStereoLinked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked = { "bStereoLinked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSourceEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStereoLinked_MetaData), NewProp_bStereoLinked_MetaData) };
void Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit(void* Obj)
{
	((FSourceEffectDynamicsProcessorSettings*)Obj)->bAnalogMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode = { "bAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSourceEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnalogMode_MetaData), NewProp_bAnalogMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectDynamicsProcessorSettings",
	Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::PropPointers),
	sizeof(FSourceEffectDynamicsProcessorSettings),
	alignof(FSourceEffectDynamicsProcessorSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectDynamicsProcessorSettings

// Begin Class USourceEffectDynamicsProcessorPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics
{
	struct SourceEffectDynamicsProcessorPreset_eventSetSettings_Parms
	{
		FSourceEffectDynamicsProcessorSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectDynamicsProcessorPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 115009572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectDynamicsProcessorPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::SourceEffectDynamicsProcessorPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::SourceEffectDynamicsProcessorPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectDynamicsProcessorPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectDynamicsProcessorSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USourceEffectDynamicsProcessorPreset Function SetSettings

// Begin Class USourceEffectDynamicsProcessorPreset
void USourceEffectDynamicsProcessorPreset::StaticRegisterNativesUSourceEffectDynamicsProcessorPreset()
{
	UClass* Class = USourceEffectDynamicsProcessorPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USourceEffectDynamicsProcessorPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectDynamicsProcessorPreset);
UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister()
{
	return USourceEffectDynamicsProcessorPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings, "SetSettings" }, // 3702899827
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectDynamicsProcessorPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectDynamicsProcessorPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 115009572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::ClassParams = {
	&USourceEffectDynamicsProcessorPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.OuterSingleton, Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectDynamicsProcessorPreset>()
{
	return USourceEffectDynamicsProcessorPreset::StaticClass();
}
USourceEffectDynamicsProcessorPreset::USourceEffectDynamicsProcessorPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectDynamicsProcessorPreset);
USourceEffectDynamicsProcessorPreset::~USourceEffectDynamicsProcessorPreset() {}
// End Class USourceEffectDynamicsProcessorPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESourceEffectDynamicsProcessorType_StaticEnum, TEXT("ESourceEffectDynamicsProcessorType"), &Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2485768060U) },
		{ ESourceEffectDynamicsPeakMode_StaticEnum, TEXT("ESourceEffectDynamicsPeakMode"), &Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 188330736U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectDynamicsProcessorSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewStructOps, TEXT("SourceEffectDynamicsProcessorSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectDynamicsProcessorSettings), 115009572U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectDynamicsProcessorPreset, USourceEffectDynamicsProcessorPreset::StaticClass, TEXT("USourceEffectDynamicsProcessorPreset"), &Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectDynamicsProcessorPreset), 1640137435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_512097152(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
