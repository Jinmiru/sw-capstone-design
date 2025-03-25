// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioColorMapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioColorMapper() {}

// Begin Cross Module References
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioColorGradient();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Enum EAudioColorGradient
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioColorGradient;
static UEnum* EAudioColorGradient_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioColorGradient, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioColorGradient"));
	}
	return Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioColorGradient>()
{
	return EAudioColorGradient_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioColorGradient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlackToWhite.Name", "EAudioColorGradient::BlackToWhite" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AudioColorMapper.h" },
		{ "WhiteToBlack.Name", "EAudioColorGradient::WhiteToBlack" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioColorGradient::BlackToWhite", (int64)EAudioColorGradient::BlackToWhite },
		{ "EAudioColorGradient::WhiteToBlack", (int64)EAudioColorGradient::WhiteToBlack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioColorGradient_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioColorGradient",
	"EAudioColorGradient",
	Z_Construct_UEnum_AudioWidgets_EAudioColorGradient_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioColorGradient_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioColorGradient_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioColorGradient_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioColorGradient()
{
	if (!Z_Registration_Info_UEnum_EAudioColorGradient.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioColorGradient.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioColorGradient_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioColorGradient.InnerSingleton;
}
// End Enum EAudioColorGradient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioColorMapper_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioColorGradient_StaticEnum, TEXT("EAudioColorGradient"), &Z_Registration_Info_UEnum_EAudioColorGradient, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2838644347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioColorMapper_h_4244284375(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioColorMapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioColorMapper_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
