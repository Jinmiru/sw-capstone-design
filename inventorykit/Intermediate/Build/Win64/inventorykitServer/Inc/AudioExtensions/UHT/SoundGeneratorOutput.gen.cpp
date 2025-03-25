// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioExtensions/Public/SoundGeneratorOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundGeneratorOutput() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundGeneratorOutput();
UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References

// Begin ScriptStruct FSoundGeneratorOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundGeneratorOutput;
class UScriptStruct* FSoundGeneratorOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundGeneratorOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundGeneratorOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundGeneratorOutput, (UObject*)Z_Construct_UPackage__Script_AudioExtensions(), TEXT("SoundGeneratorOutput"));
	}
	return Z_Registration_Info_UScriptStruct_SoundGeneratorOutput.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UScriptStruct* StaticStruct<FSoundGeneratorOutput>()
{
	return FSoundGeneratorOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for generators that have outputs that can be exposed to other game code.\n *\n * NOTE: This is not widely supported and should be considered experimental.\n */" },
		{ "ModuleRelativePath", "Public/SoundGeneratorOutput.h" },
		{ "ToolTip", "Base class for generators that have outputs that can be exposed to other game code.\n\nNOTE: This is not widely supported and should be considered experimental." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "SoundGeneratorOutput" },
		{ "Comment", "/** The output's name */" },
		{ "ModuleRelativePath", "Public/SoundGeneratorOutput.h" },
		{ "ToolTip", "The output's name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundGeneratorOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundGeneratorOutput, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	nullptr,
	&NewStructOps,
	"SoundGeneratorOutput",
	Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::PropPointers),
	sizeof(FSoundGeneratorOutput),
	alignof(FSoundGeneratorOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundGeneratorOutput()
{
	if (!Z_Registration_Info_UScriptStruct_SoundGeneratorOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundGeneratorOutput.InnerSingleton, Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundGeneratorOutput.InnerSingleton;
}
// End ScriptStruct FSoundGeneratorOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_SoundGeneratorOutput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundGeneratorOutput::StaticStruct, Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::NewStructOps, TEXT("SoundGeneratorOutput"), &Z_Registration_Info_UScriptStruct_SoundGeneratorOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundGeneratorOutput), 1791256771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_SoundGeneratorOutput_h_3929035419(TEXT("/Script/AudioExtensions"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_SoundGeneratorOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_SoundGeneratorOutput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
