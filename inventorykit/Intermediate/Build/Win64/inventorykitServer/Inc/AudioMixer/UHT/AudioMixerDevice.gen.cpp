// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioMixer/Public/AudioMixerDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerDevice() {}

// Begin Cross Module References
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ERequiredSubmixes();
UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References

// Begin Enum ERequiredSubmixes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERequiredSubmixes;
static UEnum* ERequiredSubmixes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERequiredSubmixes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERequiredSubmixes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ERequiredSubmixes, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ERequiredSubmixes"));
	}
	return Z_Registration_Info_UEnum_ERequiredSubmixes.OuterSingleton;
}
template<> AUDIOMIXER_API UEnum* StaticEnum<ERequiredSubmixes>()
{
	return ERequiredSubmixes_StaticEnum();
}
struct Z_Construct_UEnum_AudioMixer_ERequiredSubmixes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BaseDefault.Name", "ERequiredSubmixes::BaseDefault" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ERequiredSubmixes::Count" },
		{ "EQ.Name", "ERequiredSubmixes::EQ" },
		{ "Main.Name", "ERequiredSubmixes::Main" },
		{ "ModuleRelativePath", "Public/AudioMixerDevice.h" },
		{ "Reverb.Name", "ERequiredSubmixes::Reverb" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERequiredSubmixes::Main", (int64)ERequiredSubmixes::Main },
		{ "ERequiredSubmixes::BaseDefault", (int64)ERequiredSubmixes::BaseDefault },
		{ "ERequiredSubmixes::Reverb", (int64)ERequiredSubmixes::Reverb },
		{ "ERequiredSubmixes::EQ", (int64)ERequiredSubmixes::EQ },
		{ "ERequiredSubmixes::Count", (int64)ERequiredSubmixes::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ERequiredSubmixes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	"ERequiredSubmixes",
	"ERequiredSubmixes",
	Z_Construct_UEnum_AudioMixer_ERequiredSubmixes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ERequiredSubmixes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ERequiredSubmixes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioMixer_ERequiredSubmixes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioMixer_ERequiredSubmixes()
{
	if (!Z_Registration_Info_UEnum_ERequiredSubmixes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERequiredSubmixes.InnerSingleton, Z_Construct_UEnum_AudioMixer_ERequiredSubmixes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERequiredSubmixes.InnerSingleton;
}
// End Enum ERequiredSubmixes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerDevice_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERequiredSubmixes_StaticEnum, TEXT("ERequiredSubmixes"), &Z_Registration_Info_UEnum_ERequiredSubmixes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 19919182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerDevice_h_1271110195(TEXT("/Script/AudioMixer"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerDevice_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerDevice_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
