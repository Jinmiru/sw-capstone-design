// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/SAudioOscilloscopePanelWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAudioOscilloscopePanelWidget() {}

// Begin Cross Module References
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit();
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Enum EXAxisLabelsUnit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXAxisLabelsUnit;
static UEnum* EXAxisLabelsUnit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXAxisLabelsUnit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXAxisLabelsUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EXAxisLabelsUnit"));
	}
	return Z_Registration_Info_UEnum_EXAxisLabelsUnit.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EXAxisLabelsUnit>()
{
	return EXAxisLabelsUnit_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SAudioOscilloscopePanelWidget.h" },
		{ "Samples.DisplayName", "Samples" },
		{ "Samples.Name", "EXAxisLabelsUnit::Samples" },
		{ "Seconds.DisplayName", "Seconds" },
		{ "Seconds.Name", "EXAxisLabelsUnit::Seconds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXAxisLabelsUnit::Samples", (int64)EXAxisLabelsUnit::Samples },
		{ "EXAxisLabelsUnit::Seconds", (int64)EXAxisLabelsUnit::Seconds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EXAxisLabelsUnit",
	"EXAxisLabelsUnit",
	Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit()
{
	if (!Z_Registration_Info_UEnum_EXAxisLabelsUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXAxisLabelsUnit.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXAxisLabelsUnit.InnerSingleton;
}
// End Enum EXAxisLabelsUnit

// Begin Enum EYAxisLabelsUnit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYAxisLabelsUnit;
static UEnum* EYAxisLabelsUnit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYAxisLabelsUnit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYAxisLabelsUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EYAxisLabelsUnit"));
	}
	return Z_Registration_Info_UEnum_EYAxisLabelsUnit.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EYAxisLabelsUnit>()
{
	return EYAxisLabelsUnit_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Db.DisplayName", "dB" },
		{ "Db.Name", "EYAxisLabelsUnit::Db" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "EYAxisLabelsUnit::Linear" },
		{ "ModuleRelativePath", "Public/SAudioOscilloscopePanelWidget.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYAxisLabelsUnit::Linear", (int64)EYAxisLabelsUnit::Linear },
		{ "EYAxisLabelsUnit::Db", (int64)EYAxisLabelsUnit::Db },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EYAxisLabelsUnit",
	"EYAxisLabelsUnit",
	Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit()
{
	if (!Z_Registration_Info_UEnum_EYAxisLabelsUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYAxisLabelsUnit.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYAxisLabelsUnit.InnerSingleton;
}
// End Enum EYAxisLabelsUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioOscilloscopePanelWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EXAxisLabelsUnit_StaticEnum, TEXT("EXAxisLabelsUnit"), &Z_Registration_Info_UEnum_EXAxisLabelsUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 605374246U) },
		{ EYAxisLabelsUnit_StaticEnum, TEXT("EYAxisLabelsUnit"), &Z_Registration_Info_UEnum_EYAxisLabelsUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3468123400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioOscilloscopePanelWidget_h_1377849365(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioOscilloscopePanelWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioOscilloscopePanelWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
