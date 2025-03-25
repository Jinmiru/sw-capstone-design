// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveTimecodeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWaveTimecodeInfo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSoundWaveTimecodeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo;
class UScriptStruct* FSoundWaveTimecodeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveTimecodeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveTimecodeInfo>()
{
	return FSoundWaveTimecodeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesSinceMidnight_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesPerSecond_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginatorTime_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginatorDate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginatorDescription_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginatorReference_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTimecodeIsDropFrame_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_NumSamplesSinceMidnight;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumSamplesPerSecond;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OriginatorTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OriginatorDate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OriginatorDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OriginatorReference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeRate;
	static void NewProp_bTimecodeIsDropFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimecodeIsDropFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveTimecodeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesSinceMidnight = { "NumSamplesSinceMidnight", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveTimecodeInfo, NumSamplesSinceMidnight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplesSinceMidnight_MetaData), NewProp_NumSamplesSinceMidnight_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesPerSecond = { "NumSamplesPerSecond", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveTimecodeInfo, NumSamplesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplesPerSecond_MetaData), NewProp_NumSamplesPerSecond_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveTimecodeInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorTime = { "OriginatorTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveTimecodeInfo, OriginatorTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginatorTime_MetaData), NewProp_OriginatorTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDate = { "OriginatorDate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveTimecodeInfo, OriginatorDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginatorDate_MetaData), NewProp_OriginatorDate_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDescription = { "OriginatorDescription", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveTimecodeInfo, OriginatorDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginatorDescription_MetaData), NewProp_OriginatorDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorReference = { "OriginatorReference", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveTimecodeInfo, OriginatorReference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginatorReference_MetaData), NewProp_OriginatorReference_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_TimecodeRate = { "TimecodeRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveTimecodeInfo, TimecodeRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimecodeRate_MetaData), NewProp_TimecodeRate_MetaData) };
void Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame_SetBit(void* Obj)
{
	((FSoundWaveTimecodeInfo*)Obj)->bTimecodeIsDropFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame = { "bTimecodeIsDropFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundWaveTimecodeInfo), &Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTimecodeIsDropFrame_MetaData), NewProp_bTimecodeIsDropFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesSinceMidnight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_TimecodeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundWaveTimecodeInfo",
	Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::PropPointers),
	sizeof(FSoundWaveTimecodeInfo),
	alignof(FSoundWaveTimecodeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.InnerSingleton;
}
// End ScriptStruct FSoundWaveTimecodeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveTimecodeInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundWaveTimecodeInfo::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewStructOps, TEXT("SoundWaveTimecodeInfo"), &Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveTimecodeInfo), 2819690162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveTimecodeInfo_h_1054249941(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveTimecodeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveTimecodeInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
