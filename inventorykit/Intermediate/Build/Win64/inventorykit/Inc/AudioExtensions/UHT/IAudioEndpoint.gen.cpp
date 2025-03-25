// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioExtensions/Public/IAudioEndpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioEndpoint() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UDummyEndpointSettings();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UDummyEndpointSettings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References

// Begin Class UAudioEndpointSettingsBase
void UAudioEndpointSettingsBase::StaticRegisterNativesUAudioEndpointSettingsBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioEndpointSettingsBase);
UClass* Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister()
{
	return UAudioEndpointSettingsBase::StaticClass();
}
struct Z_Construct_UClass_UAudioEndpointSettingsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This opaque class should be used for specifying settings for how audio should be\n * send to an external endpoint.\n */" },
		{ "IncludePath", "IAudioEndpoint.h" },
		{ "ModuleRelativePath", "Public/IAudioEndpoint.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be\nsend to an external endpoint." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioEndpointSettingsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::ClassParams = {
	&UAudioEndpointSettingsBase::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioEndpointSettingsBase()
{
	if (!Z_Registration_Info_UClass_UAudioEndpointSettingsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioEndpointSettingsBase.OuterSingleton, Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioEndpointSettingsBase.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UClass* StaticClass<UAudioEndpointSettingsBase>()
{
	return UAudioEndpointSettingsBase::StaticClass();
}
UAudioEndpointSettingsBase::UAudioEndpointSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioEndpointSettingsBase);
UAudioEndpointSettingsBase::~UAudioEndpointSettingsBase() {}
// End Class UAudioEndpointSettingsBase

// Begin Class UDummyEndpointSettings
void UDummyEndpointSettings::StaticRegisterNativesUDummyEndpointSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDummyEndpointSettings);
UClass* Z_Construct_UClass_UDummyEndpointSettings_NoRegister()
{
	return UDummyEndpointSettings::StaticClass();
}
struct Z_Construct_UClass_UDummyEndpointSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IAudioEndpoint.h" },
		{ "ModuleRelativePath", "Public/IAudioEndpoint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDummyEndpointSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDummyEndpointSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioEndpointSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDummyEndpointSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDummyEndpointSettings_Statics::ClassParams = {
	&UDummyEndpointSettings::StaticClass,
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
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDummyEndpointSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDummyEndpointSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDummyEndpointSettings()
{
	if (!Z_Registration_Info_UClass_UDummyEndpointSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDummyEndpointSettings.OuterSingleton, Z_Construct_UClass_UDummyEndpointSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDummyEndpointSettings.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UClass* StaticClass<UDummyEndpointSettings>()
{
	return UDummyEndpointSettings::StaticClass();
}
UDummyEndpointSettings::UDummyEndpointSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDummyEndpointSettings);
UDummyEndpointSettings::~UDummyEndpointSettings() {}
// End Class UDummyEndpointSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioEndpointSettingsBase, UAudioEndpointSettingsBase::StaticClass, TEXT("UAudioEndpointSettingsBase"), &Z_Registration_Info_UClass_UAudioEndpointSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioEndpointSettingsBase), 3374565830U) },
		{ Z_Construct_UClass_UDummyEndpointSettings, UDummyEndpointSettings::StaticClass, TEXT("UDummyEndpointSettings"), &Z_Registration_Info_UClass_UDummyEndpointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDummyEndpointSettings), 3728818053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_686632(TEXT("/Script/AudioExtensions"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
