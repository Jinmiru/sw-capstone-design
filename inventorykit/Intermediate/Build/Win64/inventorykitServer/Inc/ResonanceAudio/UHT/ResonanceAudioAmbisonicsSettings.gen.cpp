// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResonanceAudio/Public/ResonanceAudioAmbisonicsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResonanceAudioAmbisonicsSettings() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase();
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioSoundfieldSettings();
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioSoundfieldSettings_NoRegister();
RESONANCEAUDIO_API UEnum* Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode();
UPackage* Z_Construct_UPackage__Script_ResonanceAudio();
// End Cross Module References

// Begin Enum EResonanceRenderMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResonanceRenderMode;
static UEnum* EResonanceRenderMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EResonanceRenderMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EResonanceRenderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode, (UObject*)Z_Construct_UPackage__Script_ResonanceAudio(), TEXT("EResonanceRenderMode"));
	}
	return Z_Registration_Info_UEnum_EResonanceRenderMode.OuterSingleton;
}
template<> RESONANCEAUDIO_API UEnum* StaticEnum<EResonanceRenderMode>()
{
	return EResonanceRenderMode_StaticEnum();
}
struct Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BinauralHighQuality.Comment", "// HRTF-based rendering using Third Order Ambisonics, over a virtual array of\n// 26 loudspeakers arranged in a Lebedev grid: https://goo.gl/DX1wh3.\n" },
		{ "BinauralHighQuality.Name", "EResonanceRenderMode::BinauralHighQuality" },
		{ "BinauralHighQuality.ToolTip", "HRTF-based rendering using Third Order Ambisonics, over a virtual array of\n26 loudspeakers arranged in a Lebedev grid: https:goo.gl/DX1wh3." },
		{ "BinauralLowQuality.Comment", "// HRTF-based rendering using First Order Ambisonics, over a virtual array of\n// 8 loudspeakers arranged in a cube configuration around the listener's head.\n" },
		{ "BinauralLowQuality.Name", "EResonanceRenderMode::BinauralLowQuality" },
		{ "BinauralLowQuality.ToolTip", "HRTF-based rendering using First Order Ambisonics, over a virtual array of\n8 loudspeakers arranged in a cube configuration around the listener's head." },
		{ "BinauralMediumQuality.Comment", "// HRTF-based rendering using Second Order Ambisonics, over a virtual array of\n// 12 loudspeakers arranged in a dodecahedral configuration (using faces of\n// the dodecahedron).\n" },
		{ "BinauralMediumQuality.Name", "EResonanceRenderMode::BinauralMediumQuality" },
		{ "BinauralMediumQuality.ToolTip", "HRTF-based rendering using Second Order Ambisonics, over a virtual array of\n12 loudspeakers arranged in a dodecahedral configuration (using faces of\nthe dodecahedron)." },
		{ "ModuleRelativePath", "Public/ResonanceAudioAmbisonicsSettings.h" },
		{ "RoomEffectsOnly.Comment", "// Room effects only rendering. This disables HRTF-based rendering and direct\n// (dry) output of a sound object. Note that this rendering mode should *not*\n// be used for general-purpose sound object spatialization, as it will only\n// render the corresponding room effects of given sound objects without the\n// direct spatialization.\n" },
		{ "RoomEffectsOnly.Name", "EResonanceRenderMode::RoomEffectsOnly" },
		{ "RoomEffectsOnly.ToolTip", "Room effects only rendering. This disables HRTF-based rendering and direct\n(dry) output of a sound object. Note that this rendering mode should *not*\nbe used for general-purpose sound object spatialization, as it will only\nrender the corresponding room effects of given sound objects without the\ndirect spatialization." },
		{ "StereoPanning.Comment", "// Stereo panning, i.e., this disables HRTF-based rendering.\n" },
		{ "StereoPanning.Name", "EResonanceRenderMode::StereoPanning" },
		{ "StereoPanning.ToolTip", "Stereo panning, i.e., this disables HRTF-based rendering." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EResonanceRenderMode::StereoPanning", (int64)EResonanceRenderMode::StereoPanning },
		{ "EResonanceRenderMode::BinauralLowQuality", (int64)EResonanceRenderMode::BinauralLowQuality },
		{ "EResonanceRenderMode::BinauralMediumQuality", (int64)EResonanceRenderMode::BinauralMediumQuality },
		{ "EResonanceRenderMode::BinauralHighQuality", (int64)EResonanceRenderMode::BinauralHighQuality },
		{ "EResonanceRenderMode::RoomEffectsOnly", (int64)EResonanceRenderMode::RoomEffectsOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ResonanceAudio,
	nullptr,
	"EResonanceRenderMode",
	"EResonanceRenderMode",
	Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode()
{
	if (!Z_Registration_Info_UEnum_EResonanceRenderMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResonanceRenderMode.InnerSingleton, Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EResonanceRenderMode.InnerSingleton;
}
// End Enum EResonanceRenderMode

// Begin Class UResonanceAudioSoundfieldSettings
void UResonanceAudioSoundfieldSettings::StaticRegisterNativesUResonanceAudioSoundfieldSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResonanceAudioSoundfieldSettings);
UClass* Z_Construct_UClass_UResonanceAudioSoundfieldSettings_NoRegister()
{
	return UResonanceAudioSoundfieldSettings::StaticClass();
}
struct Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ResonanceAudioAmbisonicsSettings.h" },
		{ "ModuleRelativePath", "Public/ResonanceAudioAmbisonicsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderMode_MetaData[] = {
		{ "Category", "Ambisonics" },
		{ "Comment", "//Which order of ambisonics to use for this submix.\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioAmbisonicsSettings.h" },
		{ "ToolTip", "Which order of ambisonics to use for this submix." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResonanceAudioSoundfieldSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::NewProp_RenderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::NewProp_RenderMode = { "RenderMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResonanceAudioSoundfieldSettings, RenderMode), Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderMode_MetaData), NewProp_RenderMode_MetaData) }; // 2203789677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::NewProp_RenderMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::NewProp_RenderMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundfieldEncodingSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ResonanceAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::ClassParams = {
	&UResonanceAudioSoundfieldSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResonanceAudioSoundfieldSettings()
{
	if (!Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.OuterSingleton, Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.OuterSingleton;
}
template<> RESONANCEAUDIO_API UClass* StaticClass<UResonanceAudioSoundfieldSettings>()
{
	return UResonanceAudioSoundfieldSettings::StaticClass();
}
UResonanceAudioSoundfieldSettings::UResonanceAudioSoundfieldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResonanceAudioSoundfieldSettings);
UResonanceAudioSoundfieldSettings::~UResonanceAudioSoundfieldSettings() {}
// End Class UResonanceAudioSoundfieldSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EResonanceRenderMode_StaticEnum, TEXT("EResonanceRenderMode"), &Z_Registration_Info_UEnum_EResonanceRenderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2203789677U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResonanceAudioSoundfieldSettings, UResonanceAudioSoundfieldSettings::StaticClass, TEXT("UResonanceAudioSoundfieldSettings"), &Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResonanceAudioSoundfieldSettings), 3796843346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_3676297376(TEXT("/Script/ResonanceAudio"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
