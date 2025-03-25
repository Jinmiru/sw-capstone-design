// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesia/Classes/AudioSynesthesiaNRT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSynesthesiaNRT() {}

// Begin Cross Module References
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRT();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT_NoRegister();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings();
AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References

// Begin Class UAudioSynesthesiaNRTSettings
void UAudioSynesthesiaNRTSettings::StaticRegisterNativesUAudioSynesthesiaNRTSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSynesthesiaNRTSettings);
UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings_NoRegister()
{
	return UAudioSynesthesiaNRTSettings::StaticClass();
}
struct Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioSynesthesiaNRTSettings\n *\n * Defines asset actions for derived UAudioSynthesiaNRTSettings subclasses.\n */" },
		{ "IncludePath", "AudioSynesthesiaNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaNRT.h" },
		{ "ToolTip", "UAudioSynesthesiaNRTSettings\n\nDefines asset actions for derived UAudioSynthesiaNRTSettings subclasses." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSynesthesiaNRTSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerNRTSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::ClassParams = {
	&UAudioSynesthesiaNRTSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings()
{
	if (!Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.OuterSingleton, Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UAudioSynesthesiaNRTSettings>()
{
	return UAudioSynesthesiaNRTSettings::StaticClass();
}
UAudioSynesthesiaNRTSettings::UAudioSynesthesiaNRTSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSynesthesiaNRTSettings);
UAudioSynesthesiaNRTSettings::~UAudioSynesthesiaNRTSettings() {}
// End Class UAudioSynesthesiaNRTSettings

// Begin Class UAudioSynesthesiaNRT
void UAudioSynesthesiaNRT::StaticRegisterNativesUAudioSynesthesiaNRT()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSynesthesiaNRT);
UClass* Z_Construct_UClass_UAudioSynesthesiaNRT_NoRegister()
{
	return UAudioSynesthesiaNRT::StaticClass();
}
struct Z_Construct_UClass_UAudioSynesthesiaNRT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioSynesthesiaNRT\n *\n * Defines asset actions for derived UAudioSynthesiaNRT subclasses.\n */" },
		{ "IncludePath", "AudioSynesthesiaNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaNRT.h" },
		{ "ToolTip", "UAudioSynesthesiaNRT\n\nDefines asset actions for derived UAudioSynthesiaNRT subclasses." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSynesthesiaNRT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerNRT,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::ClassParams = {
	&UAudioSynesthesiaNRT::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioSynesthesiaNRT()
{
	if (!Z_Registration_Info_UClass_UAudioSynesthesiaNRT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSynesthesiaNRT.OuterSingleton, Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioSynesthesiaNRT.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UAudioSynesthesiaNRT>()
{
	return UAudioSynesthesiaNRT::StaticClass();
}
UAudioSynesthesiaNRT::UAudioSynesthesiaNRT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSynesthesiaNRT);
UAudioSynesthesiaNRT::~UAudioSynesthesiaNRT() {}
// End Class UAudioSynesthesiaNRT

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSynesthesiaNRTSettings, UAudioSynesthesiaNRTSettings::StaticClass, TEXT("UAudioSynesthesiaNRTSettings"), &Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSynesthesiaNRTSettings), 2446317002U) },
		{ Z_Construct_UClass_UAudioSynesthesiaNRT, UAudioSynesthesiaNRT::StaticClass, TEXT("UAudioSynesthesiaNRT"), &Z_Registration_Info_UClass_UAudioSynesthesiaNRT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSynesthesiaNRT), 4278426273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h_1998638336(TEXT("/Script/AudioSynesthesia"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
