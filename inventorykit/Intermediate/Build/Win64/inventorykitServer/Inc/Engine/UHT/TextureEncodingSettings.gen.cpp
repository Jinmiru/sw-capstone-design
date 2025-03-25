// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/TextureEncodingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureEncodingSettings() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureEncodeEffort();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureUniversalTiling();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ETextureEncodeEffort
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureEncodeEffort;
static UEnum* ETextureEncodeEffort_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureEncodeEffort, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureEncodeEffort"));
	}
	return Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETextureEncodeEffort>()
{
	return ETextureEncodeEffort_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// For encoders that support it (i.e. Oodle), this controls how much time to\n// spend on finding better encoding.\n// (These need to match the Oodle OodleTex_EncodeEffortLevel values if you are \n// using Oodle.)\n" },
		{ "Default.Name", "ETextureEncodeEffort::Default" },
		{ "Default.ToolTip", "Let the encoder decide what's best." },
		{ "High.Name", "ETextureEncodeEffort::High" },
		{ "High.ToolTip", "More time, better quality - good for nightlies / unattended cooks." },
		{ "Low.Name", "ETextureEncodeEffort::Low" },
		{ "Low.ToolTip", "Faster encoding, lower quality. Probably don't ship textures encoded at this effort level" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "Normal.Name", "ETextureEncodeEffort::Normal" },
		{ "Normal.ToolTip", "Reasonable compromise" },
		{ "ToolTip", "For encoders that support it (i.e. Oodle), this controls how much time to\nspend on finding better encoding.\n(These need to match the Oodle OodleTex_EncodeEffortLevel values if you are\nusing Oodle.)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextureEncodeEffort::Default", (int64)ETextureEncodeEffort::Default },
		{ "ETextureEncodeEffort::Low", (int64)ETextureEncodeEffort::Low },
		{ "ETextureEncodeEffort::Normal", (int64)ETextureEncodeEffort::Normal },
		{ "ETextureEncodeEffort::High", (int64)ETextureEncodeEffort::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETextureEncodeEffort",
	"ETextureEncodeEffort",
	Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETextureEncodeEffort()
{
	if (!Z_Registration_Info_UEnum_ETextureEncodeEffort.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureEncodeEffort.InnerSingleton, Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureEncodeEffort.InnerSingleton;
}
// End Enum ETextureEncodeEffort

// Begin Enum ETextureUniversalTiling
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureUniversalTiling;
static UEnum* ETextureUniversalTiling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureUniversalTiling, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureUniversalTiling"));
	}
	return Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETextureUniversalTiling>()
{
	return ETextureUniversalTiling_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// enum values must match exactly with OodleTex_RDO_UniversalTiling\n" },
		{ "Disabled.Name", "ETextureUniversalTiling::Disabled" },
		{ "Enabled_256KB.Name", "ETextureUniversalTiling::Enabled_256KB" },
		{ "Enabled_64KB.Name", "ETextureUniversalTiling::Enabled_64KB" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "enum values must match exactly with OodleTex_RDO_UniversalTiling" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextureUniversalTiling::Disabled", (int64)ETextureUniversalTiling::Disabled },
		{ "ETextureUniversalTiling::Enabled_256KB", (int64)ETextureUniversalTiling::Enabled_256KB },
		{ "ETextureUniversalTiling::Enabled_64KB", (int64)ETextureUniversalTiling::Enabled_64KB },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETextureUniversalTiling",
	"ETextureUniversalTiling",
	Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETextureUniversalTiling()
{
	if (!Z_Registration_Info_UEnum_ETextureUniversalTiling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureUniversalTiling.InnerSingleton, Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureUniversalTiling.InnerSingleton;
}
// End Enum ETextureUniversalTiling

// Begin Enum ETextureEncodeSpeedOverride
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride;
static UEnum* ETextureEncodeSpeedOverride_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureEncodeSpeedOverride"));
	}
	return Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETextureEncodeSpeedOverride>()
{
	return ETextureEncodeSpeedOverride_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// Enum that allows for not overriding what the existing setting is - all the\n// other values have the same meaning as ETextureEncodeSpeed\n" },
		{ "Disabled.Name", "ETextureEncodeSpeedOverride::Disabled" },
		{ "Fast.Name", "ETextureEncodeSpeedOverride::Fast" },
		{ "Final.Comment", "// don't override.\n" },
		{ "Final.Name", "ETextureEncodeSpeedOverride::Final" },
		{ "Final.ToolTip", "don't override." },
		{ "FinalIfAvailable.Name", "ETextureEncodeSpeedOverride::FinalIfAvailable" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Enum that allows for not overriding what the existing setting is - all the\nother values have the same meaning as ETextureEncodeSpeed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextureEncodeSpeedOverride::Disabled", (int64)ETextureEncodeSpeedOverride::Disabled },
		{ "ETextureEncodeSpeedOverride::Final", (int64)ETextureEncodeSpeedOverride::Final },
		{ "ETextureEncodeSpeedOverride::FinalIfAvailable", (int64)ETextureEncodeSpeedOverride::FinalIfAvailable },
		{ "ETextureEncodeSpeedOverride::Fast", (int64)ETextureEncodeSpeedOverride::Fast },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETextureEncodeSpeedOverride",
	"ETextureEncodeSpeedOverride",
	Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride()
{
	if (!Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.InnerSingleton, Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.InnerSingleton;
}
// End Enum ETextureEncodeSpeedOverride

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETextureEncodeEffort_StaticEnum, TEXT("ETextureEncodeEffort"), &Z_Registration_Info_UEnum_ETextureEncodeEffort, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1945876810U) },
		{ ETextureUniversalTiling_StaticEnum, TEXT("ETextureUniversalTiling"), &Z_Registration_Info_UEnum_ETextureUniversalTiling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1588265898U) },
		{ ETextureEncodeSpeedOverride_StaticEnum, TEXT("ETextureEncodeSpeedOverride"), &Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2048272143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_3933795930(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
