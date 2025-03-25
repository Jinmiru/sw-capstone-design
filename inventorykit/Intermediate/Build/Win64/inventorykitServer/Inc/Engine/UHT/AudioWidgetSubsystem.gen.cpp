// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Audio/AudioWidgetSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioWidgetSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioWidgetSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UAudioWidgetSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAudioWidgetSubsystem
void UAudioWidgetSubsystem::StaticRegisterNativesUAudioWidgetSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioWidgetSubsystem);
UClass* Z_Construct_UClass_UAudioWidgetSubsystem_NoRegister()
{
	return UAudioWidgetSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAudioWidgetSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Audio/AudioWidgetSubsystem.h" },
		{ "ModuleRelativePath", "Public/Audio/AudioWidgetSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioWidgetSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioWidgetSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioWidgetSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioWidgetSubsystem_Statics::ClassParams = {
	&UAudioWidgetSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioWidgetSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioWidgetSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioWidgetSubsystem()
{
	if (!Z_Registration_Info_UClass_UAudioWidgetSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioWidgetSubsystem.OuterSingleton, Z_Construct_UClass_UAudioWidgetSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioWidgetSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAudioWidgetSubsystem>()
{
	return UAudioWidgetSubsystem::StaticClass();
}
UAudioWidgetSubsystem::UAudioWidgetSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioWidgetSubsystem);
UAudioWidgetSubsystem::~UAudioWidgetSubsystem() {}
// End Class UAudioWidgetSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioWidgetSubsystem, UAudioWidgetSubsystem::StaticClass, TEXT("UAudioWidgetSubsystem"), &Z_Registration_Info_UClass_UAudioWidgetSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioWidgetSubsystem), 2548409442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_4042155081(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
