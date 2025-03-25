// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ReplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplayTypes() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FLevelNameAndTime
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelNameAndTime;
class UScriptStruct* FLevelNameAndTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelNameAndTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelNameAndTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelNameAndTime, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LevelNameAndTime"));
	}
	return Z_Registration_Info_UScriptStruct_LevelNameAndTime.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLevelNameAndTime>()
{
	return FLevelNameAndTime::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelNameAndTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelChangeTimeInMS_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplayTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LevelChangeTimeInMS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelNameAndTime>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelNameAndTime, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS = { "LevelChangeTimeInMS", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelNameAndTime, LevelChangeTimeInMS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelChangeTimeInMS_MetaData), NewProp_LevelChangeTimeInMS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LevelNameAndTime",
	Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers),
	sizeof(FLevelNameAndTime),
	alignof(FLevelNameAndTime),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime()
{
	if (!Z_Registration_Info_UScriptStruct_LevelNameAndTime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelNameAndTime.InnerSingleton, Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelNameAndTime.InnerSingleton;
}
// End ScriptStruct FLevelNameAndTime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLevelNameAndTime::StaticStruct, Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewStructOps, TEXT("LevelNameAndTime"), &Z_Registration_Info_UScriptStruct_LevelNameAndTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelNameAndTime), 3804382578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayTypes_h_1943640772(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
