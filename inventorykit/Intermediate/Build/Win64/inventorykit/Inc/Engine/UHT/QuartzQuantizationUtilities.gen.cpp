// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuartzQuantizationUtilities() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzCommandQuantization();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzCommandType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzDelegateType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuarztQuantizationReference();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzClockSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzPulseOverrideStep();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzQuantizationBoundary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzTimeSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzTransportTimeStamp();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EQuartzCommandQuantization
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuartzCommandQuantization;
static UEnum* EQuartzCommandQuantization_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuartzCommandQuantization.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuartzCommandQuantization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandQuantization, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EQuartzCommandQuantization"));
	}
	return Z_Registration_Info_UEnum_EQuartzCommandQuantization.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EQuartzCommandQuantization>()
{
	return EQuartzCommandQuantization_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EQuartzCommandQuantization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bar.DisplayName", "Bar" },
		{ "Bar.Name", "EQuartzCommandQuantization::Bar" },
		{ "Bar.ToolTip", "(dependent on time signature)" },
		{ "Beat.DisplayName", "Beat" },
		{ "Beat.Name", "EQuartzCommandQuantization::Beat" },
		{ "Beat.ToolTip", "(dependent on time signature and Pulse Override)" },
		{ "BlueprintType", "true" },
		{ "Comment", "// An enumeration for specifying quantization for Quartz commands\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EQuartzCommandQuantization::Count" },
		{ "DottedEighthNote.DisplayName", "(dotted) 1/8" },
		{ "DottedEighthNote.Name", "EQuartzCommandQuantization::DottedEighthNote" },
		{ "DottedHalfNote.DisplayName", "(dotted) Half" },
		{ "DottedHalfNote.Name", "EQuartzCommandQuantization::DottedHalfNote" },
		{ "DottedQuarterNote.DisplayName", "(dotted) 1/4" },
		{ "DottedQuarterNote.Name", "EQuartzCommandQuantization::DottedQuarterNote" },
		{ "DottedSixteenthNote.DisplayName", "(dotted) 1/16" },
		{ "DottedSixteenthNote.Name", "EQuartzCommandQuantization::DottedSixteenthNote" },
		{ "DottedWholeNote.DisplayName", "(dotted) Whole" },
		{ "DottedWholeNote.Name", "EQuartzCommandQuantization::DottedWholeNote" },
		{ "EighthNote.DisplayName", "1/8" },
		{ "EighthNote.Name", "EQuartzCommandQuantization::EighthNote" },
		{ "EighthNoteTriplet.DisplayName", "1/8 (triplet)" },
		{ "EighthNoteTriplet.Name", "EQuartzCommandQuantization::EighthNoteTriplet" },
		{ "HalfNote.DisplayName", "Half" },
		{ "HalfNote.Name", "EQuartzCommandQuantization::HalfNote" },
		{ "HalfNoteTriplet.DisplayName", "1/2 (triplet)" },
		{ "HalfNoteTriplet.Name", "EQuartzCommandQuantization::HalfNoteTriplet" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EQuartzCommandQuantization::None" },
		{ "None.ToolTip", "(Execute as soon as possible)" },
		{ "QuarterNote.DisplayName", "1/4" },
		{ "QuarterNote.Name", "EQuartzCommandQuantization::QuarterNote" },
		{ "QuarterNoteTriplet.DisplayName", "1/4 (triplet)" },
		{ "QuarterNoteTriplet.Name", "EQuartzCommandQuantization::QuarterNoteTriplet" },
		{ "SixteenthNote.DisplayName", "1/16" },
		{ "SixteenthNote.Name", "EQuartzCommandQuantization::SixteenthNote" },
		{ "SixteenthNoteTriplet.DisplayName", "1/16 (triplet)" },
		{ "SixteenthNoteTriplet.Name", "EQuartzCommandQuantization::SixteenthNoteTriplet" },
		{ "ThirtySecondNote.DisplayName", "1/32" },
		{ "ThirtySecondNote.Name", "EQuartzCommandQuantization::ThirtySecondNote" },
		{ "Tick.DisplayName", "On Tick (Smallest Value, same as 1/32)" },
		{ "Tick.Name", "EQuartzCommandQuantization::Tick" },
		{ "Tick.ToolTip", "(same as 1/32)" },
		{ "ToolTip", "An enumeration for specifying quantization for Quartz commands" },
		{ "WholeNote.DisplayName", "Whole" },
		{ "WholeNote.Name", "EQuartzCommandQuantization::WholeNote" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuartzCommandQuantization::Bar", (int64)EQuartzCommandQuantization::Bar },
		{ "EQuartzCommandQuantization::Beat", (int64)EQuartzCommandQuantization::Beat },
		{ "EQuartzCommandQuantization::ThirtySecondNote", (int64)EQuartzCommandQuantization::ThirtySecondNote },
		{ "EQuartzCommandQuantization::SixteenthNote", (int64)EQuartzCommandQuantization::SixteenthNote },
		{ "EQuartzCommandQuantization::EighthNote", (int64)EQuartzCommandQuantization::EighthNote },
		{ "EQuartzCommandQuantization::QuarterNote", (int64)EQuartzCommandQuantization::QuarterNote },
		{ "EQuartzCommandQuantization::HalfNote", (int64)EQuartzCommandQuantization::HalfNote },
		{ "EQuartzCommandQuantization::WholeNote", (int64)EQuartzCommandQuantization::WholeNote },
		{ "EQuartzCommandQuantization::DottedSixteenthNote", (int64)EQuartzCommandQuantization::DottedSixteenthNote },
		{ "EQuartzCommandQuantization::DottedEighthNote", (int64)EQuartzCommandQuantization::DottedEighthNote },
		{ "EQuartzCommandQuantization::DottedQuarterNote", (int64)EQuartzCommandQuantization::DottedQuarterNote },
		{ "EQuartzCommandQuantization::DottedHalfNote", (int64)EQuartzCommandQuantization::DottedHalfNote },
		{ "EQuartzCommandQuantization::DottedWholeNote", (int64)EQuartzCommandQuantization::DottedWholeNote },
		{ "EQuartzCommandQuantization::SixteenthNoteTriplet", (int64)EQuartzCommandQuantization::SixteenthNoteTriplet },
		{ "EQuartzCommandQuantization::EighthNoteTriplet", (int64)EQuartzCommandQuantization::EighthNoteTriplet },
		{ "EQuartzCommandQuantization::QuarterNoteTriplet", (int64)EQuartzCommandQuantization::QuarterNoteTriplet },
		{ "EQuartzCommandQuantization::HalfNoteTriplet", (int64)EQuartzCommandQuantization::HalfNoteTriplet },
		{ "EQuartzCommandQuantization::Tick", (int64)EQuartzCommandQuantization::Tick },
		{ "EQuartzCommandQuantization::Count", (int64)EQuartzCommandQuantization::Count },
		{ "EQuartzCommandQuantization::None", (int64)EQuartzCommandQuantization::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EQuartzCommandQuantization_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EQuartzCommandQuantization",
	"EQuartzCommandQuantization",
	Z_Construct_UEnum_Engine_EQuartzCommandQuantization_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuartzCommandQuantization_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuartzCommandQuantization_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EQuartzCommandQuantization_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EQuartzCommandQuantization()
{
	if (!Z_Registration_Info_UEnum_EQuartzCommandQuantization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuartzCommandQuantization.InnerSingleton, Z_Construct_UEnum_Engine_EQuartzCommandQuantization_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuartzCommandQuantization.InnerSingleton;
}
// End Enum EQuartzCommandQuantization

// Begin Enum EQuartzTimeSignatureQuantization
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization;
static UEnum* EQuartzTimeSignatureQuantization_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EQuartzTimeSignatureQuantization"));
	}
	return Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EQuartzTimeSignatureQuantization>()
{
	return EQuartzTimeSignatureQuantization_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// An enumeration for specifying the denominator of time signatures\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EQuartzTimeSignatureQuantization::Count" },
		{ "EighthNote.DisplayName", "/8" },
		{ "EighthNote.Name", "EQuartzTimeSignatureQuantization::EighthNote" },
		{ "HalfNote.DisplayName", "/2" },
		{ "HalfNote.Name", "EQuartzTimeSignatureQuantization::HalfNote" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "QuarterNote.DisplayName", "/4" },
		{ "QuarterNote.Name", "EQuartzTimeSignatureQuantization::QuarterNote" },
		{ "SixteenthNote.DisplayName", "/16" },
		{ "SixteenthNote.Name", "EQuartzTimeSignatureQuantization::SixteenthNote" },
		{ "ThirtySecondNote.DisplayName", "/32" },
		{ "ThirtySecondNote.Name", "EQuartzTimeSignatureQuantization::ThirtySecondNote" },
		{ "ToolTip", "An enumeration for specifying the denominator of time signatures" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuartzTimeSignatureQuantization::HalfNote", (int64)EQuartzTimeSignatureQuantization::HalfNote },
		{ "EQuartzTimeSignatureQuantization::QuarterNote", (int64)EQuartzTimeSignatureQuantization::QuarterNote },
		{ "EQuartzTimeSignatureQuantization::EighthNote", (int64)EQuartzTimeSignatureQuantization::EighthNote },
		{ "EQuartzTimeSignatureQuantization::SixteenthNote", (int64)EQuartzTimeSignatureQuantization::SixteenthNote },
		{ "EQuartzTimeSignatureQuantization::ThirtySecondNote", (int64)EQuartzTimeSignatureQuantization::ThirtySecondNote },
		{ "EQuartzTimeSignatureQuantization::Count", (int64)EQuartzTimeSignatureQuantization::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EQuartzTimeSignatureQuantization",
	"EQuartzTimeSignatureQuantization",
	Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization()
{
	if (!Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.InnerSingleton, Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.InnerSingleton;
}
// End Enum EQuartzTimeSignatureQuantization

// Begin ScriptStruct FQuartzPulseOverrideStep
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuartzPulseOverrideStep;
class UScriptStruct* FQuartzPulseOverrideStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuartzPulseOverrideStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuartzPulseOverrideStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("QuartzPulseOverrideStep"));
	}
	return Z_Registration_Info_UScriptStruct_QuartzPulseOverrideStep.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuartzPulseOverrideStep>()
{
	return FQuartzPulseOverrideStep::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Allows the user to specify non-uniform beat durations in odd meters\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "Allows the user to specify non-uniform beat durations in odd meters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPulses_MetaData[] = {
		{ "Category", "Quantized Audio Clock Time Signature" },
		{ "Comment", "// The number of pulses for this beat duration\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "The number of pulses for this beat duration" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PulseDuration_MetaData[] = {
		{ "Category", "Quantized Audio Clock Time Signature" },
		{ "Comment", "// This Beat duration\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "This Beat duration" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPulses;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PulseDuration_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PulseDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuartzPulseOverrideStep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_NumberOfPulses = { "NumberOfPulses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzPulseOverrideStep, NumberOfPulses), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPulses_MetaData), NewProp_NumberOfPulses_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration = { "PulseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzPulseOverrideStep, PulseDuration), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PulseDuration_MetaData), NewProp_PulseDuration_MetaData) }; // 3792817337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_NumberOfPulses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"QuartzPulseOverrideStep",
	Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::PropPointers),
	sizeof(FQuartzPulseOverrideStep),
	alignof(FQuartzPulseOverrideStep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuartzPulseOverrideStep()
{
	if (!Z_Registration_Info_UScriptStruct_QuartzPulseOverrideStep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuartzPulseOverrideStep.InnerSingleton, Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuartzPulseOverrideStep.InnerSingleton;
}
// End ScriptStruct FQuartzPulseOverrideStep

// Begin ScriptStruct FQuartzTimeSignature
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuartzTimeSignature;
class UScriptStruct* FQuartzTimeSignature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuartzTimeSignature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuartzTimeSignature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuartzTimeSignature, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("QuartzTimeSignature"));
	}
	return Z_Registration_Info_UScriptStruct_QuartzTimeSignature.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuartzTimeSignature>()
{
	return FQuartzTimeSignature::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Quartz Time Signature\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "Quartz Time Signature" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBeats_MetaData[] = {
		{ "Category", "Quantized Audio Clock Time Signature" },
		{ "ClampMin", "1" },
		{ "Comment", "// numerator\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "numerator" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeatType_MetaData[] = {
		{ "Category", "Quantized Audio Clock Time Signature" },
		{ "Comment", "// denominator\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "denominator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalPulseOverride_MetaData[] = {
		{ "Category", "Quantized Audio Clock Time Signature" },
		{ "Comment", "// beat override\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "beat override" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBeats;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BeatType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BeatType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalPulseOverride_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalPulseOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuartzTimeSignature>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_NumBeats = { "NumBeats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzTimeSignature, NumBeats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBeats_MetaData), NewProp_NumBeats_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType = { "BeatType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzTimeSignature, BeatType), Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeatType_MetaData), NewProp_BeatType_MetaData) }; // 1146790871
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride_Inner = { "OptionalPulseOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuartzPulseOverrideStep, METADATA_PARAMS(0, nullptr) }; // 4225161535
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride = { "OptionalPulseOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzTimeSignature, OptionalPulseOverride), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalPulseOverride_MetaData), NewProp_OptionalPulseOverride_MetaData) }; // 4225161535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_NumBeats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"QuartzTimeSignature",
	Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::PropPointers),
	sizeof(FQuartzTimeSignature),
	alignof(FQuartzTimeSignature),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuartzTimeSignature()
{
	if (!Z_Registration_Info_UScriptStruct_QuartzTimeSignature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuartzTimeSignature.InnerSingleton, Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuartzTimeSignature.InnerSingleton;
}
// End ScriptStruct FQuartzTimeSignature

// Begin ScriptStruct FQuartzTransportTimeStamp
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuartzTransportTimeStamp;
class UScriptStruct* FQuartzTransportTimeStamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuartzTransportTimeStamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuartzTransportTimeStamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuartzTransportTimeStamp, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("QuartzTransportTimeStamp"));
	}
	return Z_Registration_Info_UScriptStruct_QuartzTransportTimeStamp.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuartzTransportTimeStamp>()
{
	return FQuartzTransportTimeStamp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Transport Time stamp, used for tracking the musical time stamp on a clock\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "Transport Time stamp, used for tracking the musical time stamp on a clock" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bars_MetaData[] = {
		{ "Category", "Quantized Audio TimeStamp" },
		{ "Comment", "// The current bar this clock is on\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "The current bar this clock is on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Beat_MetaData[] = {
		{ "Category", "Quantized Audio TimeStamp" },
		{ "Comment", "// The current beat this clock is on\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "The current beat this clock is on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeatFraction_MetaData[] = {
		{ "Category", "Quantized Audio TimeStamp" },
		{ "Comment", "// A fractional representation of the time that's played since the last bear\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "A fractional representation of the time that's played since the last bear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[] = {
		{ "Category", "Quantized Audio TimeStamp" },
		{ "Comment", "// The time in seconds that this TimeStamp occured at\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "The time in seconds that this TimeStamp occured at" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bars;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Beat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuartzTransportTimeStamp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewProp_Bars = { "Bars", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzTransportTimeStamp, Bars), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bars_MetaData), NewProp_Bars_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewProp_Beat = { "Beat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzTransportTimeStamp, Beat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Beat_MetaData), NewProp_Beat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewProp_BeatFraction = { "BeatFraction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzTransportTimeStamp, BeatFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeatFraction_MetaData), NewProp_BeatFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzTransportTimeStamp, Seconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seconds_MetaData), NewProp_Seconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewProp_Bars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewProp_Beat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewProp_BeatFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewProp_Seconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"QuartzTransportTimeStamp",
	Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::PropPointers),
	sizeof(FQuartzTransportTimeStamp),
	alignof(FQuartzTransportTimeStamp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuartzTransportTimeStamp()
{
	if (!Z_Registration_Info_UScriptStruct_QuartzTransportTimeStamp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuartzTransportTimeStamp.InnerSingleton, Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuartzTransportTimeStamp.InnerSingleton;
}
// End ScriptStruct FQuartzTransportTimeStamp

// Begin Enum EQuartzDelegateType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuartzDelegateType;
static UEnum* EQuartzDelegateType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuartzDelegateType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuartzDelegateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzDelegateType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EQuartzDelegateType"));
	}
	return Z_Registration_Info_UEnum_EQuartzDelegateType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EQuartzDelegateType>()
{
	return EQuartzDelegateType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EQuartzDelegateType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CommandEvent.Comment", "// uses EAudioMixerCommandQuantization to select subdivision\n" },
		{ "CommandEvent.DisplayName", "Command Event" },
		{ "CommandEvent.Name", "EQuartzDelegateType::CommandEvent" },
		{ "CommandEvent.ToolTip", "uses EAudioMixerCommandQuantization to select subdivision" },
		{ "Comment", "// An enumeration for specifying different TYPES of delegates\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EQuartzDelegateType::Count" },
		{ "MetronomeTick.DisplayName", "Metronome Tick" },
		{ "MetronomeTick.Name", "EQuartzDelegateType::MetronomeTick" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "An enumeration for specifying different TYPES of delegates" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuartzDelegateType::MetronomeTick", (int64)EQuartzDelegateType::MetronomeTick },
		{ "EQuartzDelegateType::CommandEvent", (int64)EQuartzDelegateType::CommandEvent },
		{ "EQuartzDelegateType::Count", (int64)EQuartzDelegateType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EQuartzDelegateType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EQuartzDelegateType",
	"EQuartzDelegateType",
	Z_Construct_UEnum_Engine_EQuartzDelegateType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuartzDelegateType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuartzDelegateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EQuartzDelegateType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EQuartzDelegateType()
{
	if (!Z_Registration_Info_UEnum_EQuartzDelegateType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuartzDelegateType.InnerSingleton, Z_Construct_UEnum_Engine_EQuartzDelegateType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuartzDelegateType.InnerSingleton;
}
// End Enum EQuartzDelegateType

// Begin Enum EQuarztQuantizationReference
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuarztQuantizationReference;
static UEnum* EQuarztQuantizationReference_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuarztQuantizationReference.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuarztQuantizationReference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuarztQuantizationReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EQuarztQuantizationReference"));
	}
	return Z_Registration_Info_UEnum_EQuarztQuantizationReference.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EQuarztQuantizationReference>()
{
	return EQuarztQuantizationReference_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EQuarztQuantizationReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BarRelative.DisplayName", "Bar Relative" },
		{ "BarRelative.Name", "EQuarztQuantizationReference::BarRelative" },
		{ "BarRelative.ToolTip", "Will occur on the next occurence of this duration from the start of a bar (i.e. On beat 3)" },
		{ "BlueprintType", "true" },
		{ "Comment", "// An enumeration for specifying quantization boundary reference frame\n// display name to hide c++ typo for now\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EQuarztQuantizationReference::Count" },
		{ "CurrentTimeRelative.DisplayName", "Current Time Relative" },
		{ "CurrentTimeRelative.Name", "EQuarztQuantizationReference::CurrentTimeRelative" },
		{ "CurrentTimeRelative.ToolTip", "Will occur on the next multiple of this duration from the current time (i.e. In three beats)" },
		{ "DisplayName", "EQuartz Quantization Reference" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "An enumeration for specifying quantization boundary reference frame\ndisplay name to hide c++ typo for now" },
		{ "TransportRelative.DisplayName", "Transport Relative" },
		{ "TransportRelative.Name", "EQuarztQuantizationReference::TransportRelative" },
		{ "TransportRelative.ToolTip", "Will occur on the next multiple of this duration since the clock started ticking (i.e. on the next 4 bar boundary)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuarztQuantizationReference::BarRelative", (int64)EQuarztQuantizationReference::BarRelative },
		{ "EQuarztQuantizationReference::TransportRelative", (int64)EQuarztQuantizationReference::TransportRelative },
		{ "EQuarztQuantizationReference::CurrentTimeRelative", (int64)EQuarztQuantizationReference::CurrentTimeRelative },
		{ "EQuarztQuantizationReference::Count", (int64)EQuarztQuantizationReference::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EQuarztQuantizationReference_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EQuarztQuantizationReference",
	"EQuarztQuantizationReference",
	Z_Construct_UEnum_Engine_EQuarztQuantizationReference_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuarztQuantizationReference_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuarztQuantizationReference_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EQuarztQuantizationReference_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EQuarztQuantizationReference()
{
	if (!Z_Registration_Info_UEnum_EQuarztQuantizationReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuarztQuantizationReference.InnerSingleton, Z_Construct_UEnum_Engine_EQuarztQuantizationReference_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuarztQuantizationReference.InnerSingleton;
}
// End Enum EQuarztQuantizationReference

// Begin Enum EQuartzCommandDelegateSubType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType;
static UEnum* EQuartzCommandDelegateSubType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EQuartzCommandDelegateSubType"));
	}
	return Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EQuartzCommandDelegateSubType>()
{
	return EQuartzCommandDelegateSubType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CommandOnAboutToStart.DisplayName", "About To Start" },
		{ "CommandOnAboutToStart.Name", "EQuartzCommandDelegateSubType::CommandOnAboutToStart" },
		{ "CommandOnAboutToStart.ToolTip", "execute off this to be in sync w/ sound starting" },
		{ "CommandOnCanceled.DisplayName", "Canceled" },
		{ "CommandOnCanceled.Name", "EQuartzCommandDelegateSubType::CommandOnCanceled" },
		{ "CommandOnCanceled.ToolTip", "The command was stopped before it could execute" },
		{ "CommandOnFailedToQueue.DisplayName", "Failed To Queue" },
		{ "CommandOnFailedToQueue.Name", "EQuartzCommandDelegateSubType::CommandOnFailedToQueue" },
		{ "CommandOnFailedToQueue.ToolTip", "The command will not execute (i.e. Clock doesn't exist or PlayQuantized failed concurrency)" },
		{ "CommandOnQueued.DisplayName", "Queued" },
		{ "CommandOnQueued.Name", "EQuartzCommandDelegateSubType::CommandOnQueued" },
		{ "CommandOnQueued.ToolTip", "The command has been passed to the Audio Render Thread" },
		{ "CommandOnStarted.DisplayName", "Started" },
		{ "CommandOnStarted.Name", "EQuartzCommandDelegateSubType::CommandOnStarted" },
		{ "CommandOnStarted.ToolTip", "the command was just executed on the Audio Render Thrtead" },
		{ "Comment", "// An enumeration for specifying different TYPES of delegates\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EQuartzCommandDelegateSubType::Count" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "An enumeration for specifying different TYPES of delegates" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuartzCommandDelegateSubType::CommandOnFailedToQueue", (int64)EQuartzCommandDelegateSubType::CommandOnFailedToQueue },
		{ "EQuartzCommandDelegateSubType::CommandOnQueued", (int64)EQuartzCommandDelegateSubType::CommandOnQueued },
		{ "EQuartzCommandDelegateSubType::CommandOnCanceled", (int64)EQuartzCommandDelegateSubType::CommandOnCanceled },
		{ "EQuartzCommandDelegateSubType::CommandOnAboutToStart", (int64)EQuartzCommandDelegateSubType::CommandOnAboutToStart },
		{ "EQuartzCommandDelegateSubType::CommandOnStarted", (int64)EQuartzCommandDelegateSubType::CommandOnStarted },
		{ "EQuartzCommandDelegateSubType::Count", (int64)EQuartzCommandDelegateSubType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EQuartzCommandDelegateSubType",
	"EQuartzCommandDelegateSubType",
	Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType()
{
	if (!Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.InnerSingleton, Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.InnerSingleton;
}
// End Enum EQuartzCommandDelegateSubType

// Begin Enum EQuartzCommandType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuartzCommandType;
static UEnum* EQuartzCommandType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuartzCommandType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuartzCommandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EQuartzCommandType"));
	}
	return Z_Registration_Info_UEnum_EQuartzCommandType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EQuartzCommandType>()
{
	return EQuartzCommandType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EQuartzCommandType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// An enumeration for specifying Quartz command types\n" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EQuartzCommandType::Custom" },
		{ "Custom.ToolTip", "Quantized custom command" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "Notify.DisplayName", "Quantized Notify" },
		{ "Notify.Name", "EQuartzCommandType::Notify" },
		{ "Notify.ToolTip", "Command used only to get delegates for timing information (basically an empty command)" },
		{ "PlaySound.DisplayName", "Play Sound" },
		{ "PlaySound.Name", "EQuartzCommandType::PlaySound" },
		{ "PlaySound.ToolTip", "Play a sound on a spample-accurate boundary (taking a voice slot immediately)" },
		{ "QueueSoundToPlay.DisplayName", "Queue Sound To Play" },
		{ "QueueSoundToPlay.Name", "EQuartzCommandType::QueueSoundToPlay" },
		{ "QueueSoundToPlay.ToolTip", "Queue a sound to play when it gets closer to its quantization boundary (avoids stealing a voice slot right away)" },
		{ "RetriggerSound.DisplayName", "Re-trigger Sound" },
		{ "RetriggerSound.Name", "EQuartzCommandType::RetriggerSound" },
		{ "RetriggerSound.ToolTip", "Quantized looping of the target sound (event tells the AudioComponent to play the sound again)" },
		{ "StartOtherClock.DisplayName", "Start Other Clock" },
		{ "StartOtherClock.Name", "EQuartzCommandType::StartOtherClock" },
		{ "StartOtherClock.ToolTip", "Quantized start of another clock. Useful for sample accurate synchronization of clocks (i.e. to handle time signature changes)" },
		{ "TickRateChange.DisplayName", "Tick Rate Change" },
		{ "TickRateChange.Name", "EQuartzCommandType::TickRateChange" },
		{ "TickRateChange.ToolTip", "Quantized change of the tick-rate (i.e. BPM change)" },
		{ "ToolTip", "An enumeration for specifying Quartz command types" },
		{ "TransportReset.DisplayName", "Transport Reset" },
		{ "TransportReset.Name", "EQuartzCommandType::TransportReset" },
		{ "TransportReset.ToolTip", "Quantized reset of the clocks transport (back to time = 0 on the boundary)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuartzCommandType::PlaySound", (int64)EQuartzCommandType::PlaySound },
		{ "EQuartzCommandType::QueueSoundToPlay", (int64)EQuartzCommandType::QueueSoundToPlay },
		{ "EQuartzCommandType::RetriggerSound", (int64)EQuartzCommandType::RetriggerSound },
		{ "EQuartzCommandType::TickRateChange", (int64)EQuartzCommandType::TickRateChange },
		{ "EQuartzCommandType::TransportReset", (int64)EQuartzCommandType::TransportReset },
		{ "EQuartzCommandType::StartOtherClock", (int64)EQuartzCommandType::StartOtherClock },
		{ "EQuartzCommandType::Notify", (int64)EQuartzCommandType::Notify },
		{ "EQuartzCommandType::Custom", (int64)EQuartzCommandType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EQuartzCommandType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EQuartzCommandType",
	"EQuartzCommandType",
	Z_Construct_UEnum_Engine_EQuartzCommandType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuartzCommandType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EQuartzCommandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EQuartzCommandType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EQuartzCommandType()
{
	if (!Z_Registration_Info_UEnum_EQuartzCommandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuartzCommandType.InnerSingleton, Z_Construct_UEnum_Engine_EQuartzCommandType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuartzCommandType.InnerSingleton;
}
// End Enum EQuartzCommandType

// Begin Delegate FOnQuartzMetronomeEvent
struct Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnQuartzMetronomeEvent_Parms
	{
		FName ClockName;
		EQuartzCommandQuantization QuantizationType;
		int32 NumBars;
		int32 Beat;
		float BeatFraction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate Declarations\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "Delegate Declarations" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClockName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuantizationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuantizationType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBars;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Beat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatFraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEvent_Parms, ClockName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_QuantizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_QuantizationType = { "QuantizationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEvent_Parms, QuantizationType), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(0, nullptr) }; // 3792817337
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_NumBars = { "NumBars", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEvent_Parms, NumBars), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_Beat = { "Beat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEvent_Parms, Beat), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_BeatFraction = { "BeatFraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEvent_Parms, BeatFraction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_ClockName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_QuantizationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_QuantizationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_NumBars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_Beat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_BeatFraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQuartzMetronomeEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::_Script_Engine_eventOnQuartzMetronomeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::_Script_Engine_eventOnQuartzMetronomeEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuartzMetronomeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnQuartzMetronomeEvent, FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)
{
	struct _Script_Engine_eventOnQuartzMetronomeEvent_Parms
	{
		FName ClockName;
		EQuartzCommandQuantization QuantizationType;
		int32 NumBars;
		int32 Beat;
		float BeatFraction;
	};
	_Script_Engine_eventOnQuartzMetronomeEvent_Parms Parms;
	Parms.ClockName=ClockName;
	Parms.QuantizationType=QuantizationType;
	Parms.NumBars=NumBars;
	Parms.Beat=Beat;
	Parms.BeatFraction=BeatFraction;
	OnQuartzMetronomeEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuartzMetronomeEvent

// Begin Delegate FOnQuartzMetronomeEventBP
struct Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnQuartzMetronomeEventBP_Parms
	{
		FName ClockName;
		EQuartzCommandQuantization QuantizationType;
		int32 NumBars;
		int32 Beat;
		float BeatFraction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClockName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuantizationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuantizationType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBars;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Beat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatFraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms, ClockName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_QuantizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_QuantizationType = { "QuantizationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms, QuantizationType), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(0, nullptr) }; // 3792817337
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_NumBars = { "NumBars", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms, NumBars), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_Beat = { "Beat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms, Beat), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_BeatFraction = { "BeatFraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms, BeatFraction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_ClockName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_QuantizationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_QuantizationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_NumBars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_Beat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_BeatFraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQuartzMetronomeEventBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::_Script_Engine_eventOnQuartzMetronomeEventBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::_Script_Engine_eventOnQuartzMetronomeEventBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuartzMetronomeEventBP_DelegateWrapper(const FScriptDelegate& OnQuartzMetronomeEventBP, FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)
{
	struct _Script_Engine_eventOnQuartzMetronomeEventBP_Parms
	{
		FName ClockName;
		EQuartzCommandQuantization QuantizationType;
		int32 NumBars;
		int32 Beat;
		float BeatFraction;
	};
	_Script_Engine_eventOnQuartzMetronomeEventBP_Parms Parms;
	Parms.ClockName=ClockName;
	Parms.QuantizationType=QuantizationType;
	Parms.NumBars=NumBars;
	Parms.Beat=Beat;
	Parms.BeatFraction=BeatFraction;
	OnQuartzMetronomeEventBP.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnQuartzMetronomeEventBP

// Begin Delegate FOnQuartzCommandEvent
struct Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnQuartzCommandEvent_Parms
	{
		EQuartzCommandDelegateSubType EventType;
		FName Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzCommandEvent_Parms, EventType), Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType, METADATA_PARAMS(0, nullptr) }; // 1102305639
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzCommandEvent_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_EventType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQuartzCommandEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::_Script_Engine_eventOnQuartzCommandEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::_Script_Engine_eventOnQuartzCommandEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuartzCommandEvent_DelegateWrapper(const FMulticastScriptDelegate& OnQuartzCommandEvent, EQuartzCommandDelegateSubType EventType, FName Name)
{
	struct _Script_Engine_eventOnQuartzCommandEvent_Parms
	{
		EQuartzCommandDelegateSubType EventType;
		FName Name;
	};
	_Script_Engine_eventOnQuartzCommandEvent_Parms Parms;
	Parms.EventType=EventType;
	Parms.Name=Name;
	OnQuartzCommandEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuartzCommandEvent

// Begin Delegate FOnQuartzCommandEventBP
struct Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnQuartzCommandEventBP_Parms
	{
		EQuartzCommandDelegateSubType EventType;
		FName Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzCommandEventBP_Parms, EventType), Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType, METADATA_PARAMS(0, nullptr) }; // 1102305639
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzCommandEventBP_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_EventType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQuartzCommandEventBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::_Script_Engine_eventOnQuartzCommandEventBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::_Script_Engine_eventOnQuartzCommandEventBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuartzCommandEventBP_DelegateWrapper(const FScriptDelegate& OnQuartzCommandEventBP, EQuartzCommandDelegateSubType EventType, FName Name)
{
	struct _Script_Engine_eventOnQuartzCommandEventBP_Parms
	{
		EQuartzCommandDelegateSubType EventType;
		FName Name;
	};
	_Script_Engine_eventOnQuartzCommandEventBP_Parms Parms;
	Parms.EventType=EventType;
	Parms.Name=Name;
	OnQuartzCommandEventBP.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnQuartzCommandEventBP

// Begin ScriptStruct FQuartzClockSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuartzClockSettings;
class UScriptStruct* FQuartzClockSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuartzClockSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuartzClockSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuartzClockSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("QuartzClockSettings"));
	}
	return Z_Registration_Info_UScriptStruct_QuartzClockSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuartzClockSettings>()
{
	return FQuartzClockSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuartzClockSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// UStruct version of settings struct used to initialized a clock\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "UStruct version of settings struct used to initialized a clock" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSignature_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "Comment", "// Time Signature (defaults to 4/4)\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "Time Signature (defaults to 4/4)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreLevelChange_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "Comment", "// should the clock start Ticking\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "should the clock start Ticking" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeSignature;
	static void NewProp_bIgnoreLevelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreLevelChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuartzClockSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_TimeSignature = { "TimeSignature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzClockSettings, TimeSignature), Z_Construct_UScriptStruct_FQuartzTimeSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSignature_MetaData), NewProp_TimeSignature_MetaData) }; // 2907077658
void Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange_SetBit(void* Obj)
{
	((FQuartzClockSettings*)Obj)->bIgnoreLevelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange = { "bIgnoreLevelChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuartzClockSettings), &Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreLevelChange_MetaData), NewProp_bIgnoreLevelChange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_TimeSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"QuartzClockSettings",
	Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::PropPointers),
	sizeof(FQuartzClockSettings),
	alignof(FQuartzClockSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuartzClockSettings()
{
	if (!Z_Registration_Info_UScriptStruct_QuartzClockSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuartzClockSettings.InnerSingleton, Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuartzClockSettings.InnerSingleton;
}
// End ScriptStruct FQuartzClockSettings

// Begin ScriptStruct FQuartzQuantizationBoundary
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuartzQuantizationBoundary;
class UScriptStruct* FQuartzQuantizationBoundary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuartzQuantizationBoundary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuartzQuantizationBoundary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("QuartzQuantizationBoundary"));
	}
	return Z_Registration_Info_UScriptStruct_QuartzQuantizationBoundary.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuartzQuantizationBoundary>()
{
	return FQuartzQuantizationBoundary::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// struct used to specify the quantization boundary of an event\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "struct used to specify the quantization boundary of an event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantization_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "Comment", "// resolution we are interested in\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "resolution we are interested in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// how many \"Resolutions\" to wait before the onset we care about\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "how many \"Resolutions\" to wait before the onset we care about" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountingReferencePoint_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFireOnClockStart_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "Comment", "// If this is true and the Clock hasn't started yet, the event will fire immediately when the Clock starts\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "If this is true and the Clock hasn't started yet, the event will fire immediately when the Clock starts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCancelCommandIfClockIsNotRunning_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "Comment", "// If this is true, this command will be canceled if the Clock is stopped or otherwise not running\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "If this is true, this command will be canceled if the Clock is stopped or otherwise not running" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetClockOnQueued_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "Comment", "// If this is true, queueing the sound will also call a Reset Clock command\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "If this is true, queueing the sound will also call a Reset Clock command" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResumeClockOnQueued_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "Comment", "// If this is true, queueing the sound will also call a Resume Clock command\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "If this is true, queueing the sound will also call a Resume Clock command" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quantization_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Quantization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CountingReferencePoint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CountingReferencePoint;
	static void NewProp_bFireOnClockStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireOnClockStart;
	static void NewProp_bCancelCommandIfClockIsNotRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelCommandIfClockIsNotRunning;
	static void NewProp_bResetClockOnQueued_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetClockOnQueued;
	static void NewProp_bResumeClockOnQueued_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResumeClockOnQueued;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuartzQuantizationBoundary>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization = { "Quantization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzQuantizationBoundary, Quantization), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantization_MetaData), NewProp_Quantization_MetaData) }; // 3792817337
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzQuantizationBoundary, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint = { "CountingReferencePoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuartzQuantizationBoundary, CountingReferencePoint), Z_Construct_UEnum_Engine_EQuarztQuantizationReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountingReferencePoint_MetaData), NewProp_CountingReferencePoint_MetaData) }; // 1745936361
void Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bFireOnClockStart_SetBit(void* Obj)
{
	((FQuartzQuantizationBoundary*)Obj)->bFireOnClockStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bFireOnClockStart = { "bFireOnClockStart", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuartzQuantizationBoundary), &Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bFireOnClockStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFireOnClockStart_MetaData), NewProp_bFireOnClockStart_MetaData) };
void Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bCancelCommandIfClockIsNotRunning_SetBit(void* Obj)
{
	((FQuartzQuantizationBoundary*)Obj)->bCancelCommandIfClockIsNotRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bCancelCommandIfClockIsNotRunning = { "bCancelCommandIfClockIsNotRunning", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuartzQuantizationBoundary), &Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bCancelCommandIfClockIsNotRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCancelCommandIfClockIsNotRunning_MetaData), NewProp_bCancelCommandIfClockIsNotRunning_MetaData) };
void Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bResetClockOnQueued_SetBit(void* Obj)
{
	((FQuartzQuantizationBoundary*)Obj)->bResetClockOnQueued = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bResetClockOnQueued = { "bResetClockOnQueued", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuartzQuantizationBoundary), &Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bResetClockOnQueued_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetClockOnQueued_MetaData), NewProp_bResetClockOnQueued_MetaData) };
void Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bResumeClockOnQueued_SetBit(void* Obj)
{
	((FQuartzQuantizationBoundary*)Obj)->bResumeClockOnQueued = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bResumeClockOnQueued = { "bResumeClockOnQueued", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuartzQuantizationBoundary), &Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bResumeClockOnQueued_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResumeClockOnQueued_MetaData), NewProp_bResumeClockOnQueued_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bFireOnClockStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bCancelCommandIfClockIsNotRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bResetClockOnQueued,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bResumeClockOnQueued,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"QuartzQuantizationBoundary",
	Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::PropPointers),
	sizeof(FQuartzQuantizationBoundary),
	alignof(FQuartzQuantizationBoundary),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuartzQuantizationBoundary()
{
	if (!Z_Registration_Info_UScriptStruct_QuartzQuantizationBoundary.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuartzQuantizationBoundary.InnerSingleton, Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuartzQuantizationBoundary.InnerSingleton;
}
// End ScriptStruct FQuartzQuantizationBoundary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQuartzCommandQuantization_StaticEnum, TEXT("EQuartzCommandQuantization"), &Z_Registration_Info_UEnum_EQuartzCommandQuantization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3792817337U) },
		{ EQuartzTimeSignatureQuantization_StaticEnum, TEXT("EQuartzTimeSignatureQuantization"), &Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1146790871U) },
		{ EQuartzDelegateType_StaticEnum, TEXT("EQuartzDelegateType"), &Z_Registration_Info_UEnum_EQuartzDelegateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3396746266U) },
		{ EQuarztQuantizationReference_StaticEnum, TEXT("EQuarztQuantizationReference"), &Z_Registration_Info_UEnum_EQuarztQuantizationReference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1745936361U) },
		{ EQuartzCommandDelegateSubType_StaticEnum, TEXT("EQuartzCommandDelegateSubType"), &Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1102305639U) },
		{ EQuartzCommandType_StaticEnum, TEXT("EQuartzCommandType"), &Z_Registration_Info_UEnum_EQuartzCommandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 76867977U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuartzPulseOverrideStep::StaticStruct, Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewStructOps, TEXT("QuartzPulseOverrideStep"), &Z_Registration_Info_UScriptStruct_QuartzPulseOverrideStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuartzPulseOverrideStep), 4225161535U) },
		{ FQuartzTimeSignature::StaticStruct, Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewStructOps, TEXT("QuartzTimeSignature"), &Z_Registration_Info_UScriptStruct_QuartzTimeSignature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuartzTimeSignature), 2907077658U) },
		{ FQuartzTransportTimeStamp::StaticStruct, Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewStructOps, TEXT("QuartzTransportTimeStamp"), &Z_Registration_Info_UScriptStruct_QuartzTransportTimeStamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuartzTransportTimeStamp), 3304665849U) },
		{ FQuartzClockSettings::StaticStruct, Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewStructOps, TEXT("QuartzClockSettings"), &Z_Registration_Info_UScriptStruct_QuartzClockSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuartzClockSettings), 401001092U) },
		{ FQuartzQuantizationBoundary::StaticStruct, Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewStructOps, TEXT("QuartzQuantizationBoundary"), &Z_Registration_Info_UScriptStruct_QuartzQuantizationBoundary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuartzQuantizationBoundary), 2464416629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_2208523393(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
