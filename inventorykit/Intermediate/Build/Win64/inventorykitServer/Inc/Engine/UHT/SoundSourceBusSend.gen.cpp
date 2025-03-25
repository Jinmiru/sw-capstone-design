// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceBusSend() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESourceBusSendLevelControlMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceBusSendLevelControlMethod;
static UEnum* ESourceBusSendLevelControlMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESourceBusSendLevelControlMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESourceBusSendLevelControlMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESourceBusSendLevelControlMethod"));
	}
	return Z_Registration_Info_UEnum_ESourceBusSendLevelControlMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESourceBusSendLevelControlMethod>()
{
	return ESourceBusSendLevelControlMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A send based on a supplied curve\n" },
		{ "CustomCurve.Name", "ESourceBusSendLevelControlMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A send based on a supplied curve" },
		{ "Linear.Comment", "// A send based on linear interpolation between a distance range and send-level range\n" },
		{ "Linear.Name", "ESourceBusSendLevelControlMethod::Linear" },
		{ "Linear.ToolTip", "A send based on linear interpolation between a distance range and send-level range" },
		{ "Manual.Comment", "// A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "ESourceBusSendLevelControlMethod::Manual" },
		{ "Manual.ToolTip", "A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESourceBusSendLevelControlMethod::Linear", (int64)ESourceBusSendLevelControlMethod::Linear },
		{ "ESourceBusSendLevelControlMethod::CustomCurve", (int64)ESourceBusSendLevelControlMethod::CustomCurve },
		{ "ESourceBusSendLevelControlMethod::Manual", (int64)ESourceBusSendLevelControlMethod::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESourceBusSendLevelControlMethod",
	"ESourceBusSendLevelControlMethod",
	Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod()
{
	if (!Z_Registration_Info_UEnum_ESourceBusSendLevelControlMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceBusSendLevelControlMethod.InnerSingleton, Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESourceBusSendLevelControlMethod.InnerSingleton;
}
// End Enum ESourceBusSendLevelControlMethod

// Begin ScriptStruct FSoundSourceBusSendInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundSourceBusSendInfo;
class UScriptStruct* FSoundSourceBusSendInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSourceBusSendInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundSourceBusSendInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundSourceBusSendInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SoundSourceBusSendInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundSourceBusSendInfo>()
{
	return FSoundSourceBusSendInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBusSendLevelControlMethod_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "/*\n\x09\x09Manual: Use Send Level only\n\x09\x09Linear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\n\x09\x09""Custom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "Manual: Use Send Level only\nLinear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\nCustom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundSourceBus_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// A source Bus to send the audio to. Source buses sonify (make audible) the audio sent to it and are themselves sounds which take up a voice slot in the audio engine.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "A source Bus to send the audio to. Source buses sonify (make audible) the audio sent to it and are themselves sounds which take up a voice slot in the audio engine." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// An audio bus to send the audio to. Audio buses can be used to route audio to DSP effects or other purposes. E.g. side-chaining, analysis, etc. Audio buses are not audible unless hooked up to a source bus.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "An audio bus to send the audio to. Audio buses can be used to route audio to DSP effects or other purposes. E.g. side-chaining, analysis, etc. Audio buses are not audible unless hooked up to a source bus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The amount of audio to send to the bus.\n" },
		{ "DisplayName", "Manual Send Level" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The amount of audio to send to the bus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSendLevel_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The amount to send to the bus when sound is located at a distance equal to value specified in the min send distance.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The amount to send to the bus when sound is located at a distance equal to value specified in the min send distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSendLevel_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The amount to send to the bus when sound is located at a distance equal to value specified in the max send distance.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The amount to send to the bus when sound is located at a distance equal to value specified in the max send distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSendDistance_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The distance at which the min send Level is sent to the bus\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The distance at which the min send Level is sent to the bus" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSendDistance_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The distance at which the max send level is sent to the bus\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The distance at which the max send level is sent to the bus" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSendLevelCurve_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The custom curve to use for distance-based bus send level.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The custom curve to use for distance-based bus send level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceBusSendLevelControlMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceBusSendLevelControlMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSourceBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSendLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSendLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSendDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSendDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSendLevelCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSourceBusSendInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod = { "SourceBusSendLevelControlMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, SourceBusSendLevelControlMethod), Z_Construct_UEnum_Engine_ESourceBusSendLevelControlMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBusSendLevelControlMethod_MetaData), NewProp_SourceBusSendLevelControlMethod_MetaData) }; // 1549234475
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus = { "SoundSourceBus", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, SoundSourceBus), Z_Construct_UClass_USoundSourceBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundSourceBus_MetaData), NewProp_SoundSourceBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBus_MetaData), NewProp_AudioBus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, SendLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendLevel_MetaData), NewProp_SendLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendLevel = { "MinSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, MinSendLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSendLevel_MetaData), NewProp_MinSendLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendLevel = { "MaxSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, MaxSendLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSendLevel_MetaData), NewProp_MaxSendLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendDistance = { "MinSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, MinSendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSendDistance_MetaData), NewProp_MinSendDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendDistance = { "MaxSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, MaxSendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSendDistance_MetaData), NewProp_MaxSendDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_CustomSendLevelCurve = { "CustomSendLevelCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundSourceBusSendInfo, CustomSendLevelCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSendLevelCurve_MetaData), NewProp_CustomSendLevelCurve_MetaData) }; // 762678829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SourceBusSendLevelControlMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_AudioBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MinSendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_MaxSendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_CustomSendLevelCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundSourceBusSendInfo",
	Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::PropPointers),
	sizeof(FSoundSourceBusSendInfo),
	alignof(FSoundSourceBusSendInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSourceBusSendInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundSourceBusSendInfo.InnerSingleton, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundSourceBusSendInfo.InnerSingleton;
}
// End ScriptStruct FSoundSourceBusSendInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBusSend_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESourceBusSendLevelControlMethod_StaticEnum, TEXT("ESourceBusSendLevelControlMethod"), &Z_Registration_Info_UEnum_ESourceBusSendLevelControlMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1549234475U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundSourceBusSendInfo::StaticStruct, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewStructOps, TEXT("SoundSourceBusSendInfo"), &Z_Registration_Info_UScriptStruct_SoundSourceBusSendInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundSourceBusSendInfo), 2379671835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBusSend_h_3164563834(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBusSend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBusSend_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBusSend_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBusSend_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
