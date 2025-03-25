// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SynthComponents/SynthComponentGranulator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponentGranulator() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
SYNTHESIS_API UClass* Z_Construct_UClass_UGranularSynth();
SYNTHESIS_API UClass* Z_Construct_UClass_UGranularSynth_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EGranularSynthSeekType();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Enum EGranularSynthEnvelopeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGranularSynthEnvelopeType;
static UEnum* EGranularSynthEnvelopeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("EGranularSynthEnvelopeType"));
	}
	return Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<EGranularSynthEnvelopeType>()
{
	return EGranularSynthEnvelopeType_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blackman.Name", "EGranularSynthEnvelopeType::Blackman" },
		{ "BlackmanHarris.Name", "EGranularSynthEnvelopeType::BlackmanHarris" },
		{ "BlueprintType", "true" },
		{ "Cosine.Name", "EGranularSynthEnvelopeType::Cosine" },
		{ "CosineSquared.Name", "EGranularSynthEnvelopeType::CosineSquared" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EGranularSynthEnvelopeType::Count" },
		{ "DownwardTriangle.Name", "EGranularSynthEnvelopeType::DownwardTriangle" },
		{ "ExponentialDecay.Name", "EGranularSynthEnvelopeType::ExponentialDecay" },
		{ "ExponentialIncrease.Name", "EGranularSynthEnvelopeType::ExponentialIncrease" },
		{ "Gaussian.Name", "EGranularSynthEnvelopeType::Gaussian" },
		{ "Hanning.Name", "EGranularSynthEnvelopeType::Hanning" },
		{ "Lanczos.Name", "EGranularSynthEnvelopeType::Lanczos" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
		{ "Rectangular.Name", "EGranularSynthEnvelopeType::Rectangular" },
		{ "Triangle.Name", "EGranularSynthEnvelopeType::Triangle" },
		{ "UpwardTriangle.Name", "EGranularSynthEnvelopeType::UpwardTriangle" },
		{ "Welch.Name", "EGranularSynthEnvelopeType::Welch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGranularSynthEnvelopeType::Rectangular", (int64)EGranularSynthEnvelopeType::Rectangular },
		{ "EGranularSynthEnvelopeType::Triangle", (int64)EGranularSynthEnvelopeType::Triangle },
		{ "EGranularSynthEnvelopeType::DownwardTriangle", (int64)EGranularSynthEnvelopeType::DownwardTriangle },
		{ "EGranularSynthEnvelopeType::UpwardTriangle", (int64)EGranularSynthEnvelopeType::UpwardTriangle },
		{ "EGranularSynthEnvelopeType::ExponentialDecay", (int64)EGranularSynthEnvelopeType::ExponentialDecay },
		{ "EGranularSynthEnvelopeType::ExponentialIncrease", (int64)EGranularSynthEnvelopeType::ExponentialIncrease },
		{ "EGranularSynthEnvelopeType::Gaussian", (int64)EGranularSynthEnvelopeType::Gaussian },
		{ "EGranularSynthEnvelopeType::Hanning", (int64)EGranularSynthEnvelopeType::Hanning },
		{ "EGranularSynthEnvelopeType::Lanczos", (int64)EGranularSynthEnvelopeType::Lanczos },
		{ "EGranularSynthEnvelopeType::Cosine", (int64)EGranularSynthEnvelopeType::Cosine },
		{ "EGranularSynthEnvelopeType::CosineSquared", (int64)EGranularSynthEnvelopeType::CosineSquared },
		{ "EGranularSynthEnvelopeType::Welch", (int64)EGranularSynthEnvelopeType::Welch },
		{ "EGranularSynthEnvelopeType::Blackman", (int64)EGranularSynthEnvelopeType::Blackman },
		{ "EGranularSynthEnvelopeType::BlackmanHarris", (int64)EGranularSynthEnvelopeType::BlackmanHarris },
		{ "EGranularSynthEnvelopeType::Count", (int64)EGranularSynthEnvelopeType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"EGranularSynthEnvelopeType",
	"EGranularSynthEnvelopeType",
	Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType()
{
	if (!Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.InnerSingleton, Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGranularSynthEnvelopeType.InnerSingleton;
}
// End Enum EGranularSynthEnvelopeType

// Begin Enum EGranularSynthSeekType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGranularSynthSeekType;
static UEnum* EGranularSynthSeekType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGranularSynthSeekType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGranularSynthSeekType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EGranularSynthSeekType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("EGranularSynthSeekType"));
	}
	return Z_Registration_Info_UEnum_EGranularSynthSeekType.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<EGranularSynthSeekType>()
{
	return EGranularSynthSeekType_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_EGranularSynthSeekType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EGranularSynthSeekType::Count" },
		{ "FromBeginning.Name", "EGranularSynthSeekType::FromBeginning" },
		{ "FromCurrentPosition.Name", "EGranularSynthSeekType::FromCurrentPosition" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGranularSynthSeekType::FromBeginning", (int64)EGranularSynthSeekType::FromBeginning },
		{ "EGranularSynthSeekType::FromCurrentPosition", (int64)EGranularSynthSeekType::FromCurrentPosition },
		{ "EGranularSynthSeekType::Count", (int64)EGranularSynthSeekType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_EGranularSynthSeekType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"EGranularSynthSeekType",
	"EGranularSynthSeekType",
	Z_Construct_UEnum_Synthesis_EGranularSynthSeekType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EGranularSynthSeekType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EGranularSynthSeekType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_EGranularSynthSeekType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_EGranularSynthSeekType()
{
	if (!Z_Registration_Info_UEnum_EGranularSynthSeekType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGranularSynthSeekType.InnerSingleton, Z_Construct_UEnum_Synthesis_EGranularSynthSeekType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGranularSynthSeekType.InnerSingleton;
}
// End Enum EGranularSynthSeekType

// Begin Class UGranularSynth Function GetCurrentPlayheadTime
struct Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics
{
	struct GranularSynth_eventGetCurrentPlayheadTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventGetCurrentPlayheadTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "GetCurrentPlayheadTime", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::GranularSynth_eventGetCurrentPlayheadTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::GranularSynth_eventGetCurrentPlayheadTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execGetCurrentPlayheadTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentPlayheadTime();
	P_NATIVE_END;
}
// End Class UGranularSynth Function GetCurrentPlayheadTime

// Begin Class UGranularSynth Function GetSampleDuration
struct Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics
{
	struct GranularSynth_eventGetSampleDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventGetSampleDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "GetSampleDuration", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::GranularSynth_eventGetSampleDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::GranularSynth_eventGetSampleDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_GetSampleDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_GetSampleDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execGetSampleDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSampleDuration();
	P_NATIVE_END;
}
// End Class UGranularSynth Function GetSampleDuration

// Begin Class UGranularSynth Function IsLoaded
struct Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics
{
	struct GranularSynth_eventIsLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GranularSynth_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GranularSynth_eventIsLoaded_Parms), &Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "IsLoaded", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::GranularSynth_eventIsLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::GranularSynth_eventIsLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_IsLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_IsLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execIsLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoaded();
	P_NATIVE_END;
}
// End Class UGranularSynth Function IsLoaded

// Begin Class UGranularSynth Function NoteOff
struct Z_Construct_UFunction_UGranularSynth_NoteOff_Statics
{
	struct GranularSynth_eventNoteOff_Parms
	{
		float Note;
		bool bKill;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_bKill", "false" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKill_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Note;
	static void NewProp_bKill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKill;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventNoteOff_Parms, Note), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Note_MetaData), NewProp_Note_MetaData) };
void Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill_SetBit(void* Obj)
{
	((GranularSynth_eventNoteOff_Parms*)Obj)->bKill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill = { "bKill", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GranularSynth_eventNoteOff_Parms), &Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKill_MetaData), NewProp_bKill_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_Note,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::NewProp_bKill,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "NoteOff", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::GranularSynth_eventNoteOff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::GranularSynth_eventNoteOff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_NoteOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_NoteOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execNoteOff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Note);
	P_GET_UBOOL(Z_Param_bKill);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NoteOff(Z_Param_Note,Z_Param_bKill);
	P_NATIVE_END;
}
// End Class UGranularSynth Function NoteOff

// Begin Class UGranularSynth Function NoteOn
struct Z_Construct_UFunction_UGranularSynth_NoteOn_Statics
{
	struct GranularSynth_eventNoteOn_Parms
	{
		float Note;
		int32 Velocity;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_Duration", "-1.000000" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Note;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventNoteOn_Parms, Note), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Note_MetaData), NewProp_Note_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventNoteOn_Parms, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventNoteOn_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Note,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "NoteOn", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::GranularSynth_eventNoteOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::GranularSynth_eventNoteOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_NoteOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_NoteOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execNoteOn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Note);
	P_GET_PROPERTY(FIntProperty,Z_Param_Velocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NoteOn(Z_Param_Note,Z_Param_Velocity,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UGranularSynth Function NoteOn

// Begin Class UGranularSynth Function SetAttackTime
struct Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics
{
	struct GranularSynth_eventSetAttackTime_Parms
	{
		float AttackTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetAttackTime_Parms, AttackTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTimeMsec_MetaData), NewProp_AttackTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::NewProp_AttackTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetAttackTime", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::GranularSynth_eventSetAttackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::GranularSynth_eventSetAttackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetAttackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetAttackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetAttackTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttackTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttackTime(Z_Param_AttackTimeMsec);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetAttackTime

// Begin Class UGranularSynth Function SetDecayTime
struct Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics
{
	struct GranularSynth_eventSetDecayTime_Parms
	{
		float DecayTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::NewProp_DecayTimeMsec = { "DecayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetDecayTime_Parms, DecayTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayTimeMsec_MetaData), NewProp_DecayTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::NewProp_DecayTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetDecayTime", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::GranularSynth_eventSetDecayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::GranularSynth_eventSetDecayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetDecayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetDecayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetDecayTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DecayTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDecayTime(Z_Param_DecayTimeMsec);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetDecayTime

// Begin Class UGranularSynth Function SetGrainDuration
struct Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics
{
	struct GranularSynth_eventSetGrainDuration_Parms
	{
		float BaseDurationMsec;
		FVector2D DurationRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_DurationRange", "" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDurationMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDurationMsec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DurationRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_BaseDurationMsec = { "BaseDurationMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainDuration_Parms, BaseDurationMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDurationMsec_MetaData), NewProp_BaseDurationMsec_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_DurationRange = { "DurationRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainDuration_Parms, DurationRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationRange_MetaData), NewProp_DurationRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_BaseDurationMsec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::NewProp_DurationRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainDuration", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::GranularSynth_eventSetGrainDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::GranularSynth_eventSetGrainDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetGrainDuration)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDurationMsec);
	P_GET_STRUCT(FVector2D,Z_Param_DurationRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrainDuration(Z_Param_BaseDurationMsec,Z_Param_DurationRange);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetGrainDuration

// Begin Class UGranularSynth Function SetGrainEnvelopeType
struct Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics
{
	struct GranularSynth_eventSetGrainEnvelopeType_Parms
	{
		EGranularSynthEnvelopeType EnvelopeType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnvelopeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnvelopeType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType = { "EnvelopeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainEnvelopeType_Parms, EnvelopeType), Z_Construct_UEnum_Synthesis_EGranularSynthEnvelopeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeType_MetaData), NewProp_EnvelopeType_MetaData) }; // 2948615683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::NewProp_EnvelopeType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainEnvelopeType", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::GranularSynth_eventSetGrainEnvelopeType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::GranularSynth_eventSetGrainEnvelopeType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetGrainEnvelopeType)
{
	P_GET_ENUM(EGranularSynthEnvelopeType,Z_Param_EnvelopeType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrainEnvelopeType(EGranularSynthEnvelopeType(Z_Param_EnvelopeType));
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetGrainEnvelopeType

// Begin Class UGranularSynth Function SetGrainPan
struct Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics
{
	struct GranularSynth_eventSetGrainPan_Parms
	{
		float BasePan;
		FVector2D PanRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_PanRange", "" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePan_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_BasePan = { "BasePan", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainPan_Parms, BasePan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePan_MetaData), NewProp_BasePan_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_PanRange = { "PanRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainPan_Parms, PanRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanRange_MetaData), NewProp_PanRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_BasePan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::NewProp_PanRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainPan", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::GranularSynth_eventSetGrainPan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::GranularSynth_eventSetGrainPan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainPan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainPan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetGrainPan)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BasePan);
	P_GET_STRUCT(FVector2D,Z_Param_PanRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrainPan(Z_Param_BasePan,Z_Param_PanRange);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetGrainPan

// Begin Class UGranularSynth Function SetGrainPitch
struct Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics
{
	struct GranularSynth_eventSetGrainPitch_Parms
	{
		float BasePitch;
		FVector2D PitchRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_PitchRange", "" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePitch_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePitch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_BasePitch = { "BasePitch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainPitch_Parms, BasePitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePitch_MetaData), NewProp_BasePitch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainPitch_Parms, PitchRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRange_MetaData), NewProp_PitchRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_BasePitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::NewProp_PitchRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainPitch", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::GranularSynth_eventSetGrainPitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::GranularSynth_eventSetGrainPitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainPitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainPitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetGrainPitch)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BasePitch);
	P_GET_STRUCT(FVector2D,Z_Param_PitchRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrainPitch(Z_Param_BasePitch,Z_Param_PitchRange);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetGrainPitch

// Begin Class UGranularSynth Function SetGrainProbability
struct Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics
{
	struct GranularSynth_eventSetGrainProbability_Parms
	{
		float InGrainProbability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrainProbability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InGrainProbability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::NewProp_InGrainProbability = { "InGrainProbability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainProbability_Parms, InGrainProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrainProbability_MetaData), NewProp_InGrainProbability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::NewProp_InGrainProbability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainProbability", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::GranularSynth_eventSetGrainProbability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::GranularSynth_eventSetGrainProbability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainProbability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainProbability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetGrainProbability)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InGrainProbability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrainProbability(Z_Param_InGrainProbability);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetGrainProbability

// Begin Class UGranularSynth Function SetGrainsPerSecond
struct Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics
{
	struct GranularSynth_eventSetGrainsPerSecond_Parms
	{
		float InGrainsPerSecond;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrainsPerSecond_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InGrainsPerSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::NewProp_InGrainsPerSecond = { "InGrainsPerSecond", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainsPerSecond_Parms, InGrainsPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrainsPerSecond_MetaData), NewProp_InGrainsPerSecond_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::NewProp_InGrainsPerSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainsPerSecond", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::GranularSynth_eventSetGrainsPerSecond_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::GranularSynth_eventSetGrainsPerSecond_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetGrainsPerSecond)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InGrainsPerSecond);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrainsPerSecond(Z_Param_InGrainsPerSecond);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetGrainsPerSecond

// Begin Class UGranularSynth Function SetGrainVolume
struct Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics
{
	struct GranularSynth_eventSetGrainVolume_Parms
	{
		float BaseVolume;
		FVector2D VolumeRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_VolumeRange", "" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_BaseVolume = { "BaseVolume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainVolume_Parms, BaseVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseVolume_MetaData), NewProp_BaseVolume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_VolumeRange = { "VolumeRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetGrainVolume_Parms, VolumeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeRange_MetaData), NewProp_VolumeRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_BaseVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::NewProp_VolumeRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetGrainVolume", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::GranularSynth_eventSetGrainVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::GranularSynth_eventSetGrainVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetGrainVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetGrainVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetGrainVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseVolume);
	P_GET_STRUCT(FVector2D,Z_Param_VolumeRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrainVolume(Z_Param_BaseVolume,Z_Param_VolumeRange);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetGrainVolume

// Begin Class UGranularSynth Function SetPlaybackSpeed
struct Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics
{
	struct GranularSynth_eventSetPlaybackSpeed_Parms
	{
		float InPlayheadRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPlayheadRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayheadRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::NewProp_InPlayheadRate = { "InPlayheadRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetPlaybackSpeed_Parms, InPlayheadRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPlayheadRate_MetaData), NewProp_InPlayheadRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::NewProp_InPlayheadRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetPlaybackSpeed", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::GranularSynth_eventSetPlaybackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::GranularSynth_eventSetPlaybackSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetPlaybackSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayheadRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackSpeed(Z_Param_InPlayheadRate);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetPlaybackSpeed

// Begin Class UGranularSynth Function SetPlayheadTime
struct Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics
{
	struct GranularSynth_eventSetPlayheadTime_Parms
	{
		float InPositionSec;
		float LerpTimeSec;
		EGranularSynthSeekType SeekType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_LerpTimeSec", "0.000000" },
		{ "CPP_Default_SeekType", "FromBeginning" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPositionSec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpTimeSec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPositionSec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpTimeSec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeekType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SeekType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_InPositionSec = { "InPositionSec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetPlayheadTime_Parms, InPositionSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPositionSec_MetaData), NewProp_InPositionSec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_LerpTimeSec = { "LerpTimeSec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetPlayheadTime_Parms, LerpTimeSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpTimeSec_MetaData), NewProp_LerpTimeSec_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_SeekType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_SeekType = { "SeekType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetPlayheadTime_Parms, SeekType), Z_Construct_UEnum_Synthesis_EGranularSynthSeekType, METADATA_PARAMS(0, nullptr) }; // 3107395238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_InPositionSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_LerpTimeSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_SeekType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::NewProp_SeekType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetPlayheadTime", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::GranularSynth_eventSetPlayheadTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::GranularSynth_eventSetPlayheadTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetPlayheadTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetPlayheadTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetPlayheadTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPositionSec);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LerpTimeSec);
	P_GET_ENUM(EGranularSynthSeekType,Z_Param_SeekType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayheadTime(Z_Param_InPositionSec,Z_Param_LerpTimeSec,EGranularSynthSeekType(Z_Param_SeekType));
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetPlayheadTime

// Begin Class UGranularSynth Function SetReleaseTimeMsec
struct Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics
{
	struct GranularSynth_eventSetReleaseTimeMsec_Parms
	{
		float ReleaseTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetReleaseTimeMsec_Parms, ReleaseTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleaseTimeMsec_MetaData), NewProp_ReleaseTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::NewProp_ReleaseTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetReleaseTimeMsec", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::GranularSynth_eventSetReleaseTimeMsec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::GranularSynth_eventSetReleaseTimeMsec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetReleaseTimeMsec)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ReleaseTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReleaseTimeMsec(Z_Param_ReleaseTimeMsec);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetReleaseTimeMsec

// Begin Class UGranularSynth Function SetScrubMode
struct Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics
{
	struct GranularSynth_eventSetScrubMode_Parms
	{
		bool bScrubMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScrubMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bScrubMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScrubMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode_SetBit(void* Obj)
{
	((GranularSynth_eventSetScrubMode_Parms*)Obj)->bScrubMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode = { "bScrubMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GranularSynth_eventSetScrubMode_Parms), &Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScrubMode_MetaData), NewProp_bScrubMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::NewProp_bScrubMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetScrubMode", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::GranularSynth_eventSetScrubMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::GranularSynth_eventSetScrubMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetScrubMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetScrubMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetScrubMode)
{
	P_GET_UBOOL(Z_Param_bScrubMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScrubMode(Z_Param_bScrubMode);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetScrubMode

// Begin Class UGranularSynth Function SetSoundWave
struct Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics
{
	struct GranularSynth_eventSetSoundWave_Parms
	{
		USoundWave* InSoundWave;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// This will override the current sound wave if one is set, stop audio, and reload the new sound wave\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
		{ "ToolTip", "This will override the current sound wave if one is set, stop audio, and reload the new sound wave" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSoundWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetSoundWave_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::NewProp_InSoundWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetSoundWave", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::GranularSynth_eventSetSoundWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::GranularSynth_eventSetSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetSoundWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetSoundWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetSoundWave)
{
	P_GET_OBJECT(USoundWave,Z_Param_InSoundWave);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoundWave(Z_Param_InSoundWave);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetSoundWave

// Begin Class UGranularSynth Function SetSustainGain
struct Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics
{
	struct GranularSynth_eventSetSustainGain_Parms
	{
		float SustainGain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SustainGain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SustainGain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::NewProp_SustainGain = { "SustainGain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranularSynth_eventSetSustainGain_Parms, SustainGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SustainGain_MetaData), NewProp_SustainGain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::NewProp_SustainGain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGranularSynth, nullptr, "SetSustainGain", nullptr, nullptr, Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::GranularSynth_eventSetSustainGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::GranularSynth_eventSetSustainGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranularSynth_SetSustainGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranularSynth_SetSustainGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranularSynth::execSetSustainGain)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SustainGain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSustainGain(Z_Param_SustainGain);
	P_NATIVE_END;
}
// End Class UGranularSynth Function SetSustainGain

// Begin Class UGranularSynth
void UGranularSynth::StaticRegisterNativesUGranularSynth()
{
	UClass* Class = UGranularSynth::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentPlayheadTime", &UGranularSynth::execGetCurrentPlayheadTime },
		{ "GetSampleDuration", &UGranularSynth::execGetSampleDuration },
		{ "IsLoaded", &UGranularSynth::execIsLoaded },
		{ "NoteOff", &UGranularSynth::execNoteOff },
		{ "NoteOn", &UGranularSynth::execNoteOn },
		{ "SetAttackTime", &UGranularSynth::execSetAttackTime },
		{ "SetDecayTime", &UGranularSynth::execSetDecayTime },
		{ "SetGrainDuration", &UGranularSynth::execSetGrainDuration },
		{ "SetGrainEnvelopeType", &UGranularSynth::execSetGrainEnvelopeType },
		{ "SetGrainPan", &UGranularSynth::execSetGrainPan },
		{ "SetGrainPitch", &UGranularSynth::execSetGrainPitch },
		{ "SetGrainProbability", &UGranularSynth::execSetGrainProbability },
		{ "SetGrainsPerSecond", &UGranularSynth::execSetGrainsPerSecond },
		{ "SetGrainVolume", &UGranularSynth::execSetGrainVolume },
		{ "SetPlaybackSpeed", &UGranularSynth::execSetPlaybackSpeed },
		{ "SetPlayheadTime", &UGranularSynth::execSetPlayheadTime },
		{ "SetReleaseTimeMsec", &UGranularSynth::execSetReleaseTimeMsec },
		{ "SetScrubMode", &UGranularSynth::execSetScrubMode },
		{ "SetSoundWave", &UGranularSynth::execSetSoundWave },
		{ "SetSustainGain", &UGranularSynth::execSetSustainGain },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGranularSynth);
UClass* Z_Construct_UClass_UGranularSynth_NoRegister()
{
	return UGranularSynth::StaticClass();
}
struct Z_Construct_UClass_UGranularSynth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/SynthComponentGranulator.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GranulatedSoundWave_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentGranulator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GranulatedSoundWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGranularSynth_GetCurrentPlayheadTime, "GetCurrentPlayheadTime" }, // 1215311726
		{ &Z_Construct_UFunction_UGranularSynth_GetSampleDuration, "GetSampleDuration" }, // 3147171972
		{ &Z_Construct_UFunction_UGranularSynth_IsLoaded, "IsLoaded" }, // 2750560418
		{ &Z_Construct_UFunction_UGranularSynth_NoteOff, "NoteOff" }, // 1784493183
		{ &Z_Construct_UFunction_UGranularSynth_NoteOn, "NoteOn" }, // 3842280918
		{ &Z_Construct_UFunction_UGranularSynth_SetAttackTime, "SetAttackTime" }, // 1380410379
		{ &Z_Construct_UFunction_UGranularSynth_SetDecayTime, "SetDecayTime" }, // 1519830317
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainDuration, "SetGrainDuration" }, // 451884836
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainEnvelopeType, "SetGrainEnvelopeType" }, // 4067251666
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainPan, "SetGrainPan" }, // 2097544685
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainPitch, "SetGrainPitch" }, // 3955679095
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainProbability, "SetGrainProbability" }, // 3171589190
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainsPerSecond, "SetGrainsPerSecond" }, // 1675857005
		{ &Z_Construct_UFunction_UGranularSynth_SetGrainVolume, "SetGrainVolume" }, // 1912045544
		{ &Z_Construct_UFunction_UGranularSynth_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 146676225
		{ &Z_Construct_UFunction_UGranularSynth_SetPlayheadTime, "SetPlayheadTime" }, // 1693935183
		{ &Z_Construct_UFunction_UGranularSynth_SetReleaseTimeMsec, "SetReleaseTimeMsec" }, // 2495156287
		{ &Z_Construct_UFunction_UGranularSynth_SetScrubMode, "SetScrubMode" }, // 1489738413
		{ &Z_Construct_UFunction_UGranularSynth_SetSoundWave, "SetSoundWave" }, // 1397628619
		{ &Z_Construct_UFunction_UGranularSynth_SetSustainGain, "SetSustainGain" }, // 3763658070
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGranularSynth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGranularSynth_Statics::NewProp_GranulatedSoundWave = { "GranulatedSoundWave", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGranularSynth, GranulatedSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GranulatedSoundWave_MetaData), NewProp_GranulatedSoundWave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGranularSynth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGranularSynth_Statics::NewProp_GranulatedSoundWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGranularSynth_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGranularSynth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USynthComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGranularSynth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGranularSynth_Statics::ClassParams = {
	&UGranularSynth::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGranularSynth_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGranularSynth_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGranularSynth_Statics::Class_MetaDataParams), Z_Construct_UClass_UGranularSynth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGranularSynth()
{
	if (!Z_Registration_Info_UClass_UGranularSynth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGranularSynth.OuterSingleton, Z_Construct_UClass_UGranularSynth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGranularSynth.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<UGranularSynth>()
{
	return UGranularSynth::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGranularSynth);
// End Class UGranularSynth

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGranularSynthEnvelopeType_StaticEnum, TEXT("EGranularSynthEnvelopeType"), &Z_Registration_Info_UEnum_EGranularSynthEnvelopeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2948615683U) },
		{ EGranularSynthSeekType_StaticEnum, TEXT("EGranularSynthSeekType"), &Z_Registration_Info_UEnum_EGranularSynthSeekType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3107395238U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGranularSynth, UGranularSynth::StaticClass, TEXT("UGranularSynth"), &Z_Registration_Info_UClass_UGranularSynth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGranularSynth), 1855922159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_3997248860(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
