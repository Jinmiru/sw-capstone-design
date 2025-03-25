// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundTimecodeOffset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundTimecodeOffset() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundTimecodeOffset();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSoundTimecodeOffset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundTimecodeOffset;
class UScriptStruct* FSoundTimecodeOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundTimecodeOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundTimecodeOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundTimecodeOffset, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundTimecodeOffset"));
	}
	return Z_Registration_Info_UScriptStruct_SoundTimecodeOffset.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundTimecodeOffset>()
{
	return FSoundTimecodeOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundTimecodeOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfSecondsSinceMidnight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundTimecodeOffset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NumOfSecondsSinceMidnight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundTimecodeOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::NewProp_NumOfSecondsSinceMidnight = { "NumOfSecondsSinceMidnight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundTimecodeOffset, NumOfSecondsSinceMidnight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfSecondsSinceMidnight_MetaData), NewProp_NumOfSecondsSinceMidnight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::NewProp_NumOfSecondsSinceMidnight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundTimecodeOffset",
	Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::PropPointers),
	sizeof(FSoundTimecodeOffset),
	alignof(FSoundTimecodeOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundTimecodeOffset()
{
	if (!Z_Registration_Info_UScriptStruct_SoundTimecodeOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundTimecodeOffset.InnerSingleton, Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundTimecodeOffset.InnerSingleton;
}
// End ScriptStruct FSoundTimecodeOffset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundTimecodeOffset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundTimecodeOffset::StaticStruct, Z_Construct_UScriptStruct_FSoundTimecodeOffset_Statics::NewStructOps, TEXT("SoundTimecodeOffset"), &Z_Registration_Info_UScriptStruct_SoundTimecodeOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundTimecodeOffset), 264275588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundTimecodeOffset_h_602968741(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundTimecodeOffset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundTimecodeOffset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
