// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/LevelSequenceCameraSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceCameraSettings() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin ScriptStruct FLevelSequenceCameraSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings;
class UScriptStruct* FLevelSequenceCameraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceCameraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceCameraSettings>()
{
	return FLevelSequenceCameraSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceCameraSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "Aspect Ratio" },
		{ "ModuleRelativePath", "Public/LevelSequenceCameraSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "Aspect Ratio" },
		{ "EditCondition", "bOverrideAspectRatioAxisConstraint" },
		{ "ModuleRelativePath", "Public/LevelSequenceCameraSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideAspectRatioAxisConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAspectRatioAxisConstraint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceCameraSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_SetBit(void* Obj)
{
	((FLevelSequenceCameraSettings*)Obj)->bOverrideAspectRatioAxisConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint = { "bOverrideAspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceCameraSettings), &Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAspectRatioAxisConstraint_MetaData), NewProp_bOverrideAspectRatioAxisConstraint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint = { "AspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceCameraSettings, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatioAxisConstraint_MetaData), NewProp_AspectRatioAxisConstraint_MetaData) }; // 707974947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"LevelSequenceCameraSettings",
	Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::PropPointers),
	sizeof(FLevelSequenceCameraSettings),
	alignof(FLevelSequenceCameraSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.InnerSingleton;
}
// End ScriptStruct FLevelSequenceCameraSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLevelSequenceCameraSettings::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewStructOps, TEXT("LevelSequenceCameraSettings"), &Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceCameraSettings), 687641197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h_670024442(TEXT("/Script/LevelSequence"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
