// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioSpectrogramViewport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSpectrogramViewport() {}

// Begin Cross Module References
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode();
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Enum EAudioSpectrogramFrequencyAxisScale
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale;
static UEnum* EAudioSpectrogramFrequencyAxisScale_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioSpectrogramFrequencyAxisScale"));
	}
	return Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioSpectrogramFrequencyAxisScale>()
{
	return EAudioSpectrogramFrequencyAxisScale_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Linear.Name", "EAudioSpectrogramFrequencyAxisScale::Linear" },
		{ "Logarithmic.Name", "EAudioSpectrogramFrequencyAxisScale::Logarithmic" },
		{ "ModuleRelativePath", "Public/AudioSpectrogramViewport.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioSpectrogramFrequencyAxisScale::Linear", (int64)EAudioSpectrogramFrequencyAxisScale::Linear },
		{ "EAudioSpectrogramFrequencyAxisScale::Logarithmic", (int64)EAudioSpectrogramFrequencyAxisScale::Logarithmic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioSpectrogramFrequencyAxisScale",
	"EAudioSpectrogramFrequencyAxisScale",
	Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.InnerSingleton;
}
// End Enum EAudioSpectrogramFrequencyAxisScale

// Begin Enum EAudioSpectrogramFrequencyAxisPixelBucketMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode;
static UEnum* EAudioSpectrogramFrequencyAxisPixelBucketMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioSpectrogramFrequencyAxisPixelBucketMode"));
	}
	return Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioSpectrogramFrequencyAxisPixelBucketMode>()
{
	return EAudioSpectrogramFrequencyAxisPixelBucketMode_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.Name", "EAudioSpectrogramFrequencyAxisPixelBucketMode::Average" },
		{ "Average.ToolTip", "Plot the average of the data points in each frequency axis pixel bucket." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AudioSpectrogramViewport.h" },
		{ "Peak.Name", "EAudioSpectrogramFrequencyAxisPixelBucketMode::Peak" },
		{ "Peak.ToolTip", "Plot one data point per frequency axis pixel bucket only, choosing the data point with the highest sound level." },
		{ "Sample.Name", "EAudioSpectrogramFrequencyAxisPixelBucketMode::Sample" },
		{ "Sample.ToolTip", "Plot one data point per frequency axis pixel bucket only, choosing the data point nearest the pixel center." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioSpectrogramFrequencyAxisPixelBucketMode::Sample", (int64)EAudioSpectrogramFrequencyAxisPixelBucketMode::Sample },
		{ "EAudioSpectrogramFrequencyAxisPixelBucketMode::Peak", (int64)EAudioSpectrogramFrequencyAxisPixelBucketMode::Peak },
		{ "EAudioSpectrogramFrequencyAxisPixelBucketMode::Average", (int64)EAudioSpectrogramFrequencyAxisPixelBucketMode::Average },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioSpectrogramFrequencyAxisPixelBucketMode",
	"EAudioSpectrogramFrequencyAxisPixelBucketMode",
	Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode()
{
	if (!Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.InnerSingleton;
}
// End Enum EAudioSpectrogramFrequencyAxisPixelBucketMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogramViewport_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioSpectrogramFrequencyAxisScale_StaticEnum, TEXT("EAudioSpectrogramFrequencyAxisScale"), &Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 736546941U) },
		{ EAudioSpectrogramFrequencyAxisPixelBucketMode_StaticEnum, TEXT("EAudioSpectrogramFrequencyAxisPixelBucketMode"), &Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3734462976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogramViewport_h_457559694(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogramViewport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogramViewport_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
