// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioAnalyzer/Classes/AudioAnalyzerAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioAnalyzerAsset() {}

// Begin Cross Module References
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AudioAnalyzer();
// End Cross Module References

// Begin Class UAudioAnalyzerAssetBase
void UAudioAnalyzerAssetBase::StaticRegisterNativesUAudioAnalyzerAssetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioAnalyzerAssetBase);
UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase_NoRegister()
{
	return UAudioAnalyzerAssetBase::StaticClass();
}
struct Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** UAudioAnalyzerAssetBase\n *\n * UAudioAnalyzerAssetBase provides the base interface for controlling asset actions within the editor.\n */" },
		{ "IncludePath", "AudioAnalyzerAsset.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerAsset.h" },
		{ "ToolTip", "UAudioAnalyzerAssetBase\n\nUAudioAnalyzerAssetBase provides the base interface for controlling asset actions within the editor." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerAssetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::ClassParams = {
	&UAudioAnalyzerAssetBase::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase()
{
	if (!Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.OuterSingleton, Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.OuterSingleton;
}
template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerAssetBase>()
{
	return UAudioAnalyzerAssetBase::StaticClass();
}
UAudioAnalyzerAssetBase::UAudioAnalyzerAssetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerAssetBase);
UAudioAnalyzerAssetBase::~UAudioAnalyzerAssetBase() {}
// End Class UAudioAnalyzerAssetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioAnalyzerAssetBase, UAudioAnalyzerAssetBase::StaticClass, TEXT("UAudioAnalyzerAssetBase"), &Z_Registration_Info_UClass_UAudioAnalyzerAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioAnalyzerAssetBase), 1120367609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_1310578841(TEXT("/Script/AudioAnalyzer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
