// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundFields/Public/SoundFields.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundFields() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase();
SOUNDFIELDS_API UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings();
SOUNDFIELDS_API UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoundFields();
// End Cross Module References

// Begin Class UAmbisonicsEncodingSettings
void UAmbisonicsEncodingSettings::StaticRegisterNativesUAmbisonicsEncodingSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbisonicsEncodingSettings);
UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister()
{
	return UAmbisonicsEncodingSettings::StaticClass();
}
struct Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundFields.h" },
		{ "ModuleRelativePath", "Public/SoundFields.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbisonicsOrder_MetaData[] = {
		{ "Category", "EncodingSettings" },
		{ "ClampMax", "5" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/SoundFields.h" },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmbisonicsOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbisonicsEncodingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder = { "AmbisonicsOrder", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbisonicsEncodingSettings, AmbisonicsOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbisonicsOrder_MetaData), NewProp_AmbisonicsOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundfieldEncodingSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SoundFields,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::ClassParams = {
	&UAmbisonicsEncodingSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings()
{
	if (!Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.OuterSingleton, Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.OuterSingleton;
}
template<> SOUNDFIELDS_API UClass* StaticClass<UAmbisonicsEncodingSettings>()
{
	return UAmbisonicsEncodingSettings::StaticClass();
}
UAmbisonicsEncodingSettings::UAmbisonicsEncodingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbisonicsEncodingSettings);
UAmbisonicsEncodingSettings::~UAmbisonicsEncodingSettings() {}
// End Class UAmbisonicsEncodingSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbisonicsEncodingSettings, UAmbisonicsEncodingSettings::StaticClass, TEXT("UAmbisonicsEncodingSettings"), &Z_Registration_Info_UClass_UAmbisonicsEncodingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbisonicsEncodingSettings), 2659641071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_388358221(TEXT("/Script/SoundFields"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
