// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesia/Classes/AudioSynesthesia.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSynesthesia() {}

// Begin Cross Module References
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References

// Begin Class UAudioSynesthesiaSettings
void UAudioSynesthesiaSettings::StaticRegisterNativesUAudioSynesthesiaSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSynesthesiaSettings);
UClass* Z_Construct_UClass_UAudioSynesthesiaSettings_NoRegister()
{
	return UAudioSynesthesiaSettings::StaticClass();
}
struct Z_Construct_UClass_UAudioSynesthesiaSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioSynesthesiaSettings\n *\n * Defines asset actions for derived UAudioSynthesiaSettings subclasses.\n */" },
		{ "IncludePath", "AudioSynesthesia.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesia.h" },
		{ "ToolTip", "UAudioSynesthesiaSettings\n\nDefines asset actions for derived UAudioSynthesiaSettings subclasses." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSynesthesiaSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioSynesthesiaSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSynesthesiaSettings_Statics::ClassParams = {
	&UAudioSynesthesiaSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioSynesthesiaSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioSynesthesiaSettings()
{
	if (!Z_Registration_Info_UClass_UAudioSynesthesiaSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSynesthesiaSettings.OuterSingleton, Z_Construct_UClass_UAudioSynesthesiaSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioSynesthesiaSettings.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UAudioSynesthesiaSettings>()
{
	return UAudioSynesthesiaSettings::StaticClass();
}
UAudioSynesthesiaSettings::UAudioSynesthesiaSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSynesthesiaSettings);
UAudioSynesthesiaSettings::~UAudioSynesthesiaSettings() {}
// End Class UAudioSynesthesiaSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSynesthesiaSettings, UAudioSynesthesiaSettings::StaticClass, TEXT("UAudioSynesthesiaSettings"), &Z_Registration_Info_UClass_UAudioSynesthesiaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSynesthesiaSettings), 2435729968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_1948975756(TEXT("/Script/AudioSynesthesia"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
