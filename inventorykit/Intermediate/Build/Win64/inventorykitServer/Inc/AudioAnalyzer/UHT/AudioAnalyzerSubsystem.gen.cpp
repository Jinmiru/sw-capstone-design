// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioAnalyzer/Classes/AudioAnalyzerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioAnalyzerSubsystem() {}

// Begin Cross Module References
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer_NoRegister();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSubsystem();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_AudioAnalyzer();
// End Cross Module References

// Begin Class UAudioAnalyzerSubsystem
void UAudioAnalyzerSubsystem::StaticRegisterNativesUAudioAnalyzerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioAnalyzerSubsystem);
UClass* Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister()
{
	return UAudioAnalyzerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n* Class manages querying analysis results from various audio analyzers.\n*/" },
		{ "IncludePath", "AudioAnalyzerSubsystem.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerSubsystem.h" },
		{ "ToolTip", "Class manages querying analysis results from various audio analyzers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioAnalyzers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AudioAnalyzerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioAnalyzers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioAnalyzers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::NewProp_AudioAnalyzers_Inner = { "AudioAnalyzers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioAnalyzer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::NewProp_AudioAnalyzers = { "AudioAnalyzers", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioAnalyzerSubsystem, AudioAnalyzers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioAnalyzers_MetaData), NewProp_AudioAnalyzers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::NewProp_AudioAnalyzers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::NewProp_AudioAnalyzers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::ClassParams = {
	&UAudioAnalyzerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioAnalyzerSubsystem()
{
	if (!Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.OuterSingleton, Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.OuterSingleton;
}
template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerSubsystem>()
{
	return UAudioAnalyzerSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerSubsystem);
// End Class UAudioAnalyzerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioAnalyzerSubsystem, UAudioAnalyzerSubsystem::StaticClass, TEXT("UAudioAnalyzerSubsystem"), &Z_Registration_Info_UClass_UAudioAnalyzerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioAnalyzerSubsystem), 291320027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h_322792475(TEXT("/Script/AudioAnalyzer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
