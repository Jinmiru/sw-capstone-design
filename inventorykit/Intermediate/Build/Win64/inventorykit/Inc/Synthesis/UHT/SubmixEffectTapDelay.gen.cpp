// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectTapDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectTapDelay() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectTapDelayPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectTapDelayPreset_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ETapLineMode();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FTapDelayInfo();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Enum ETapLineMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETapLineMode;
static UEnum* ETapLineMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ETapLineMode, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ETapLineMode"));
	}
	return Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<ETapLineMode>()
{
	return ETapLineMode_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_ETapLineMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "// Disables the tap audio and performs a fadeout\n" },
		{ "Disabled.Name", "ETapLineMode::Disabled" },
		{ "Disabled.ToolTip", "Disables the tap audio and performs a fadeout" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "Panning.Comment", "// Allow tap to pan between channels based on azimuth angle\n" },
		{ "Panning.Name", "ETapLineMode::Panning" },
		{ "Panning.ToolTip", "Allow tap to pan between channels based on azimuth angle" },
		{ "SendToChannel.Comment", "// Send tap audio output to a channel directly\n" },
		{ "SendToChannel.Name", "ETapLineMode::SendToChannel" },
		{ "SendToChannel.ToolTip", "Send tap audio output to a channel directly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETapLineMode::SendToChannel", (int64)ETapLineMode::SendToChannel },
		{ "ETapLineMode::Panning", (int64)ETapLineMode::Panning },
		{ "ETapLineMode::Disabled", (int64)ETapLineMode::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"ETapLineMode",
	"ETapLineMode",
	Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_ETapLineMode()
{
	if (!Z_Registration_Info_UEnum_ETapLineMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETapLineMode.InnerSingleton, Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETapLineMode.InnerSingleton;
}
// End Enum ETapLineMode

// Begin ScriptStruct FTapDelayInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TapDelayInfo;
class UScriptStruct* FTapDelayInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TapDelayInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TapDelayInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTapDelayInfo, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("TapDelayInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TapDelayInfo.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FTapDelayInfo>()
{
	return FTapDelayInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTapDelayInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TapLineMode_MetaData[] = {
		{ "Category", "Realtime" },
		{ "Comment", "// Whether the tap line should send directly to a channel, pan, or not produce sound at all.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Whether the tap line should send directly to a channel, pan, or not produce sound at all." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayLength_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Amount of time before this echo is heard in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Amount of time before this echo is heard in milliseconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMax", "6.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "// How loud this echo should be, in decibels.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "How loud this echo should be, in decibels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputChannel_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "Comment", "// When the Tap Line Mode is set to Send To Channel, designates index of channel from which the echo should play.\n" },
		{ "EditCondition", "TapLineMode == ETapLineMode::SendToChannel" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "When the Tap Line Mode is set to Send To Channel, designates index of channel from which the echo should play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanInDegrees_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "Comment", "// When the Tap Line Mode is set to Panning, designates the angle at which the echo should be panned.\n// On Surround systems, 0 is directly in front of the listener, -90 is left, 90 is right, and 180/-180 is directly behind the listener.\n// On Stereo systems, <-90 is fully in the left ear, and >90 is fully in the right ear\n" },
		{ "EditCondition", "TapLineMode == ETapLineMode::Panning" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "When the Tap Line Mode is set to Panning, designates the angle at which the echo should be panned.\nOn Surround systems, 0 is directly in front of the listener, -90 is left, 90 is right, and 180/-180 is directly behind the listener.\nOn Stereo systems, <-90 is fully in the left ear, and >90 is fully in the right ear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TapId_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TapLineMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TapLineMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PanInDegrees;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TapId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTapDelayInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode = { "TapLineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTapDelayInfo, TapLineMode), Z_Construct_UEnum_Synthesis_ETapLineMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TapLineMode_MetaData), NewProp_TapLineMode_MetaData) }; // 1125576797
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_DelayLength = { "DelayLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTapDelayInfo, DelayLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayLength_MetaData), NewProp_DelayLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTapDelayInfo, Gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain_MetaData), NewProp_Gain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_OutputChannel = { "OutputChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTapDelayInfo, OutputChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputChannel_MetaData), NewProp_OutputChannel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_PanInDegrees = { "PanInDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTapDelayInfo, PanInDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanInDegrees_MetaData), NewProp_PanInDegrees_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapId = { "TapId", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTapDelayInfo, TapId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TapId_MetaData), NewProp_TapId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTapDelayInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_DelayLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_OutputChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_PanInDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"TapDelayInfo",
	Z_Construct_UScriptStruct_FTapDelayInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::PropPointers),
	sizeof(FTapDelayInfo),
	alignof(FTapDelayInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTapDelayInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTapDelayInfo()
{
	if (!Z_Registration_Info_UScriptStruct_TapDelayInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TapDelayInfo.InnerSingleton, Z_Construct_UScriptStruct_FTapDelayInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TapDelayInfo.InnerSingleton;
}
// End ScriptStruct FTapDelayInfo

// Begin ScriptStruct FSubmixEffectTapDelaySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings;
class UScriptStruct* FSubmixEffectTapDelaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectTapDelaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectTapDelaySettings>()
{
	return FSubmixEffectTapDelaySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// FTapDelaySubmixPresetSettings\n// UStruct used to define user-exposed params for use with your effect.\n// ========================================================================\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "FTapDelaySubmixPresetSettings\nUStruct used to define user-exposed params for use with your effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDelayLength_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// Maximum possible length for a delay, in milliseconds. Changing this at runtime will reset the effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Maximum possible length for a delay, in milliseconds. Changing this at runtime will reset the effect." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Number of milliseconds over which a tap will reach it's set length and gain. Smaller values are more responsive, while larger values will make pitching less dramatic.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Number of milliseconds over which a tap will reach it's set length and gain. Smaller values are more responsive, while larger values will make pitching less dramatic." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Taps_MetaData[] = {
		{ "Category", "Realtime" },
		{ "Comment", "// Each tap's metadata\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Each tap's metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Taps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Taps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectTapDelaySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_MaximumDelayLength = { "MaximumDelayLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectTapDelaySettings, MaximumDelayLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumDelayLength_MetaData), NewProp_MaximumDelayLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectTapDelaySettings, InterpolationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationTime_MetaData), NewProp_InterpolationTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps_Inner = { "Taps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTapDelayInfo, METADATA_PARAMS(0, nullptr) }; // 771372517
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps = { "Taps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectTapDelaySettings, Taps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Taps_MetaData), NewProp_Taps_MetaData) }; // 771372517
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_MaximumDelayLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_InterpolationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SubmixEffectTapDelaySettings",
	Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::PropPointers),
	sizeof(FSubmixEffectTapDelaySettings),
	alignof(FSubmixEffectTapDelaySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.InnerSingleton;
}
// End ScriptStruct FSubmixEffectTapDelaySettings

// Begin Class USubmixEffectTapDelayPreset Function AddTap
struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics
{
	struct SubmixEffectTapDelayPreset_eventAddTap_Parms
	{
		int32 TapId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Adds a dynamic tap delay with the given settings. Returns the tap id. \n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Adds a dynamic tap delay with the given settings. Returns the tap id." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TapId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::NewProp_TapId = { "TapId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventAddTap_Parms, TapId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::NewProp_TapId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "AddTap", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::SubmixEffectTapDelayPreset_eventAddTap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::SubmixEffectTapDelayPreset_eventAddTap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execAddTap)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TapId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTap(Z_Param_Out_TapId);
	P_NATIVE_END;
}
// End Class USubmixEffectTapDelayPreset Function AddTap

// Begin Class USubmixEffectTapDelayPreset Function GetMaxDelayInMilliseconds
struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics
{
	struct SubmixEffectTapDelayPreset_eventGetMaxDelayInMilliseconds_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Get the maximum delay possible.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Get the maximum delay possible." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventGetMaxDelayInMilliseconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "GetMaxDelayInMilliseconds", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::SubmixEffectTapDelayPreset_eventGetMaxDelayInMilliseconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::SubmixEffectTapDelayPreset_eventGetMaxDelayInMilliseconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execGetMaxDelayInMilliseconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxDelayInMilliseconds();
	P_NATIVE_END;
}
// End Class USubmixEffectTapDelayPreset Function GetMaxDelayInMilliseconds

// Begin Class USubmixEffectTapDelayPreset Function GetTap
struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics
{
	struct SubmixEffectTapDelayPreset_eventGetTap_Parms
	{
		int32 TapId;
		FTapDelayInfo TapInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Get the current info about a specific tap.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Get the current info about a specific tap." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TapId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TapInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::NewProp_TapId = { "TapId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventGetTap_Parms, TapId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::NewProp_TapInfo = { "TapInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventGetTap_Parms, TapInfo), Z_Construct_UScriptStruct_FTapDelayInfo, METADATA_PARAMS(0, nullptr) }; // 771372517
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::NewProp_TapId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::NewProp_TapInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "GetTap", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::SubmixEffectTapDelayPreset_eventGetTap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::SubmixEffectTapDelayPreset_eventGetTap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execGetTap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TapId);
	P_GET_STRUCT_REF(FTapDelayInfo,Z_Param_Out_TapInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTap(Z_Param_TapId,Z_Param_Out_TapInfo);
	P_NATIVE_END;
}
// End Class USubmixEffectTapDelayPreset Function GetTap

// Begin Class USubmixEffectTapDelayPreset Function GetTapIds
struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics
{
	struct SubmixEffectTapDelayPreset_eventGetTapIds_Parms
	{
		TArray<int32> TapIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Retrieve an array of all tap ids for the submix effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Retrieve an array of all tap ids for the submix effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TapIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TapIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::NewProp_TapIds_Inner = { "TapIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::NewProp_TapIds = { "TapIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventGetTapIds_Parms, TapIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::NewProp_TapIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::NewProp_TapIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "GetTapIds", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::SubmixEffectTapDelayPreset_eventGetTapIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::SubmixEffectTapDelayPreset_eventGetTapIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execGetTapIds)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_TapIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTapIds(Z_Param_Out_TapIds);
	P_NATIVE_END;
}
// End Class USubmixEffectTapDelayPreset Function GetTapIds

// Begin Class USubmixEffectTapDelayPreset Function RemoveTap
struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics
{
	struct SubmixEffectTapDelayPreset_eventRemoveTap_Parms
	{
		int32 TapId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Remove the tap from the preset.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Remove the tap from the preset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TapId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::NewProp_TapId = { "TapId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventRemoveTap_Parms, TapId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::NewProp_TapId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "RemoveTap", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::SubmixEffectTapDelayPreset_eventRemoveTap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::SubmixEffectTapDelayPreset_eventRemoveTap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execRemoveTap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TapId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTap(Z_Param_TapId);
	P_NATIVE_END;
}
// End Class USubmixEffectTapDelayPreset Function RemoveTap

// Begin Class USubmixEffectTapDelayPreset Function SetInterpolationTime
struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics
{
	struct SubmixEffectTapDelayPreset_eventSetInterpolationTime_Parms
	{
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Set the time it takes to interpolate between parameters, in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Set the time it takes to interpolate between parameters, in milliseconds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventSetInterpolationTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "SetInterpolationTime", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::SubmixEffectTapDelayPreset_eventSetInterpolationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::SubmixEffectTapDelayPreset_eventSetInterpolationTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execSetInterpolationTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInterpolationTime(Z_Param_Time);
	P_NATIVE_END;
}
// End Class USubmixEffectTapDelayPreset Function SetInterpolationTime

// Begin Class USubmixEffectTapDelayPreset Function SetSettings
struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics
{
	struct SubmixEffectTapDelayPreset_eventSetSettings_Parms
	{
		FSubmixEffectTapDelaySettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Set all tap delay setting. This will replace any dynamically added or modified taps.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Set all tap delay setting. This will replace any dynamically added or modified taps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 1407215458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::SubmixEffectTapDelayPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::SubmixEffectTapDelayPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSubmixEffectTapDelaySettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USubmixEffectTapDelayPreset Function SetSettings

// Begin Class USubmixEffectTapDelayPreset Function SetTap
struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics
{
	struct SubmixEffectTapDelayPreset_eventSetTap_Parms
	{
		int32 TapId;
		FTapDelayInfo TapInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Modify a specific tap.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Modify a specific tap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TapInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TapId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TapInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapId = { "TapId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventSetTap_Parms, TapId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapInfo = { "TapInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventSetTap_Parms, TapInfo), Z_Construct_UScriptStruct_FTapDelayInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TapInfo_MetaData), NewProp_TapInfo_MetaData) }; // 771372517
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "SetTap", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::SubmixEffectTapDelayPreset_eventSetTap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::SubmixEffectTapDelayPreset_eventSetTap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execSetTap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TapId);
	P_GET_STRUCT_REF(FTapDelayInfo,Z_Param_Out_TapInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTap(Z_Param_TapId,Z_Param_Out_TapInfo);
	P_NATIVE_END;
}
// End Class USubmixEffectTapDelayPreset Function SetTap

// Begin Class USubmixEffectTapDelayPreset
void USubmixEffectTapDelayPreset::StaticRegisterNativesUSubmixEffectTapDelayPreset()
{
	UClass* Class = USubmixEffectTapDelayPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTap", &USubmixEffectTapDelayPreset::execAddTap },
		{ "GetMaxDelayInMilliseconds", &USubmixEffectTapDelayPreset::execGetMaxDelayInMilliseconds },
		{ "GetTap", &USubmixEffectTapDelayPreset::execGetTap },
		{ "GetTapIds", &USubmixEffectTapDelayPreset::execGetTapIds },
		{ "RemoveTap", &USubmixEffectTapDelayPreset::execRemoveTap },
		{ "SetInterpolationTime", &USubmixEffectTapDelayPreset::execSetInterpolationTime },
		{ "SetSettings", &USubmixEffectTapDelayPreset::execSetSettings },
		{ "SetTap", &USubmixEffectTapDelayPreset::execSetTap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectTapDelayPreset);
UClass* Z_Construct_UClass_USubmixEffectTapDelayPreset_NoRegister()
{
	return USubmixEffectTapDelayPreset::StaticClass();
}
struct Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Realtime" },
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "Comment", "// ========================================================================\n// UTapDelaySubmixPreset\n// Class which processes audio streams and uses parameters defined in the preset class.\n// ========================================================================\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "UTapDelaySubmixPreset\nClass which processes audio streams and uses parameters defined in the preset class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap, "AddTap" }, // 2270598360
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds, "GetMaxDelayInMilliseconds" }, // 3455529496
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap, "GetTap" }, // 1911760606
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds, "GetTapIds" }, // 3727131787
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap, "RemoveTap" }, // 244643962
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime, "SetInterpolationTime" }, // 2901733450
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings, "SetSettings" }, // 2522405275
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap, "SetTap" }, // 3894171202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectTapDelayPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectTapDelayPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1407215458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::ClassParams = {
	&USubmixEffectTapDelayPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmixEffectTapDelayPreset()
{
	if (!Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectTapDelayPreset>()
{
	return USubmixEffectTapDelayPreset::StaticClass();
}
USubmixEffectTapDelayPreset::USubmixEffectTapDelayPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectTapDelayPreset);
USubmixEffectTapDelayPreset::~USubmixEffectTapDelayPreset() {}
// End Class USubmixEffectTapDelayPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETapLineMode_StaticEnum, TEXT("ETapLineMode"), &Z_Registration_Info_UEnum_ETapLineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1125576797U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTapDelayInfo::StaticStruct, Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewStructOps, TEXT("TapDelayInfo"), &Z_Registration_Info_UScriptStruct_TapDelayInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTapDelayInfo), 771372517U) },
		{ FSubmixEffectTapDelaySettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewStructOps, TEXT("SubmixEffectTapDelaySettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectTapDelaySettings), 1407215458U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectTapDelayPreset, USubmixEffectTapDelayPreset::StaticClass, TEXT("USubmixEffectTapDelayPreset"), &Z_Registration_Info_UClass_USubmixEffectTapDelayPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectTapDelayPreset), 4091135968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_558260654(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
