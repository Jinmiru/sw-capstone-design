// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResonanceAudio/Private/ResonanceAudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResonanceAudioSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioSettings();
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioSettings_NoRegister();
RESONANCEAUDIO_API UEnum* Z_Construct_UEnum_ResonanceAudio_ERaQualityMode();
UPackage* Z_Construct_UPackage__Script_ResonanceAudio();
// End Cross Module References

// Begin Class UResonanceAudioSettings
void UResonanceAudioSettings::StaticRegisterNativesUResonanceAudioSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResonanceAudioSettings);
UClass* Z_Construct_UClass_UResonanceAudioSettings_NoRegister()
{
	return UResonanceAudioSettings::StaticClass();
}
struct Z_Construct_UClass_UResonanceAudioSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ResonanceAudioSettings.h" },
		{ "ModuleRelativePath", "Private/ResonanceAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "Reverb" },
		{ "Comment", "// Reference to submix where reverb plugin audio is routed.\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioSettings.h" },
		{ "ToolTip", "Reference to submix where reverb plugin audio is routed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityMode_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Global Quality mode to use for directional sound sources.\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioSettings.h" },
		{ "ToolTip", "Global Quality mode to use for directional sound sources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalReverbPreset_MetaData[] = {
		{ "AllowedClasses", "/Script/ResonanceAudio.ResonanceAudioReverbPluginPreset" },
		{ "Category", "General" },
		{ "Comment", "// Default settings for global reverb: This is overridden when a player enters Audio Volumes.\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioSettings.h" },
		{ "ToolTip", "Default settings for global reverb: This is overridden when a player enters Audio Volumes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSourcePreset_MetaData[] = {
		{ "AllowedClasses", "/Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings" },
		{ "Category", "General" },
		{ "Comment", "// Default settings for global source settings\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioSettings.h" },
		{ "ToolTip", "Default settings for global source settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputSubmix;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QualityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalReverbPreset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSourcePreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResonanceAudioSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResonanceAudioSettings_Statics::NewProp_OutputSubmix = { "OutputSubmix", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSettings, OutputSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputSubmix_MetaData), NewProp_OutputSubmix_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UResonanceAudioSettings_Statics::NewProp_QualityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UResonanceAudioSettings_Statics::NewProp_QualityMode = { "QualityMode", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSettings, QualityMode), Z_Construct_UEnum_ResonanceAudio_ERaQualityMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityMode_MetaData), NewProp_QualityMode_MetaData) }; // 3861981669
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResonanceAudioSettings_Statics::NewProp_GlobalReverbPreset = { "GlobalReverbPreset", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSettings, GlobalReverbPreset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalReverbPreset_MetaData), NewProp_GlobalReverbPreset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResonanceAudioSettings_Statics::NewProp_GlobalSourcePreset = { "GlobalSourcePreset", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSettings, GlobalSourcePreset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalSourcePreset_MetaData), NewProp_GlobalSourcePreset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResonanceAudioSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSettings_Statics::NewProp_OutputSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSettings_Statics::NewProp_QualityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSettings_Statics::NewProp_QualityMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSettings_Statics::NewProp_GlobalReverbPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSettings_Statics::NewProp_GlobalSourcePreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UResonanceAudioSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ResonanceAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResonanceAudioSettings_Statics::ClassParams = {
	&UResonanceAudioSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UResonanceAudioSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UResonanceAudioSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResonanceAudioSettings()
{
	if (!Z_Registration_Info_UClass_UResonanceAudioSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResonanceAudioSettings.OuterSingleton, Z_Construct_UClass_UResonanceAudioSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResonanceAudioSettings.OuterSingleton;
}
template<> RESONANCEAUDIO_API UClass* StaticClass<UResonanceAudioSettings>()
{
	return UResonanceAudioSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResonanceAudioSettings);
UResonanceAudioSettings::~UResonanceAudioSettings() {}
// End Class UResonanceAudioSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResonanceAudioSettings, UResonanceAudioSettings::StaticClass, TEXT("UResonanceAudioSettings"), &Z_Registration_Info_UClass_UResonanceAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResonanceAudioSettings), 3996556782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h_810663826(TEXT("/Script/ResonanceAudio"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
