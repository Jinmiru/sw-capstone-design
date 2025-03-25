// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioMixer/Classes/Generators/AudioGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGenerator() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioGenerator();
AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioGenerator_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References

// Begin Class UAudioGenerator
void UAudioGenerator::StaticRegisterNativesUAudioGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioGenerator);
UClass* Z_Construct_UClass_UAudioGenerator_NoRegister()
{
	return UAudioGenerator::StaticClass();
}
struct Z_Construct_UClass_UAudioGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Generators/AudioGenerator.h" },
		{ "ModuleRelativePath", "Classes/Generators/AudioGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioGenerator_Statics::ClassParams = {
	&UAudioGenerator::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioGenerator()
{
	if (!Z_Registration_Info_UClass_UAudioGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioGenerator.OuterSingleton, Z_Construct_UClass_UAudioGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioGenerator.OuterSingleton;
}
template<> AUDIOMIXER_API UClass* StaticClass<UAudioGenerator>()
{
	return UAudioGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGenerator);
// End Class UAudioGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioGenerator, UAudioGenerator::StaticClass, TEXT("UAudioGenerator"), &Z_Registration_Info_UClass_UAudioGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioGenerator), 2121158420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_3405613199(TEXT("/Script/AudioMixer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
