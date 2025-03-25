// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LegacyScreenPercentageDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyScreenPercentageDriver() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EScreenPercentageMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EViewStatusForScreenPercentage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewStatusForScreenPercentage;
static UEnum* EViewStatusForScreenPercentage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EViewStatusForScreenPercentage"));
	}
	return Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EViewStatusForScreenPercentage>()
{
	return EViewStatusForScreenPercentage_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// Status of view being rendered to select the corresponding screen percentage setting\n" },
		{ "Desktop.Comment", "// For desktop renderer\n" },
		{ "Desktop.DisplayName", "Desktop Rendered" },
		{ "Desktop.Name", "EViewStatusForScreenPercentage::Desktop" },
		{ "Desktop.ToolTip", "For desktop renderer" },
		{ "Mobile.Comment", "// For mobile renderer\n" },
		{ "Mobile.DisplayName", "Mobile Rendered" },
		{ "Mobile.Name", "EViewStatusForScreenPercentage::Mobile" },
		{ "Mobile.ToolTip", "For mobile renderer" },
		{ "ModuleRelativePath", "Public/LegacyScreenPercentageDriver.h" },
		{ "NonRealtime.Comment", "// For editor viewports not refreshing every frames.\n" },
		{ "NonRealtime.DisplayName", "Non-Realtime" },
		{ "NonRealtime.Name", "EViewStatusForScreenPercentage::NonRealtime" },
		{ "NonRealtime.ToolTip", "For editor viewports not refreshing every frames." },
		{ "PathTracer.Comment", "// For path tracer\n" },
		{ "PathTracer.DisplayName", "Path Traced" },
		{ "PathTracer.Name", "EViewStatusForScreenPercentage::PathTracer" },
		{ "PathTracer.ToolTip", "For path tracer" },
		{ "ToolTip", "Status of view being rendered to select the corresponding screen percentage setting" },
		{ "VR.Comment", "// For VR rendering\n" },
		{ "VR.DisplayName", "VR Rendered" },
		{ "VR.Name", "EViewStatusForScreenPercentage::VR" },
		{ "VR.ToolTip", "For VR rendering" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EViewStatusForScreenPercentage::NonRealtime", (int64)EViewStatusForScreenPercentage::NonRealtime },
		{ "EViewStatusForScreenPercentage::Desktop", (int64)EViewStatusForScreenPercentage::Desktop },
		{ "EViewStatusForScreenPercentage::Mobile", (int64)EViewStatusForScreenPercentage::Mobile },
		{ "EViewStatusForScreenPercentage::VR", (int64)EViewStatusForScreenPercentage::VR },
		{ "EViewStatusForScreenPercentage::PathTracer", (int64)EViewStatusForScreenPercentage::PathTracer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EViewStatusForScreenPercentage",
	"EViewStatusForScreenPercentage",
	Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage()
{
	if (!Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.InnerSingleton, Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.InnerSingleton;
}
// End Enum EViewStatusForScreenPercentage

// Begin Enum EScreenPercentageMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScreenPercentageMode;
static UEnum* EScreenPercentageMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EScreenPercentageMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EScreenPercentageMode"));
	}
	return Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EScreenPercentageMode>()
{
	return EScreenPercentageMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BasedOnDisplayResolution.Comment", "// Automatic control the screen percentage based on the display resolution\n" },
		{ "BasedOnDisplayResolution.DisplayName", "Based on display resolution" },
		{ "BasedOnDisplayResolution.Name", "EScreenPercentageMode::BasedOnDisplayResolution" },
		{ "BasedOnDisplayResolution.ToolTip", "Automatic control the screen percentage based on the display resolution" },
		{ "BasedOnDPIScale.Comment", "// Based on DPI scale\n" },
		{ "BasedOnDPIScale.DisplayName", "Based on operating system's DPI scale" },
		{ "BasedOnDPIScale.Name", "EScreenPercentageMode::BasedOnDPIScale" },
		{ "BasedOnDPIScale.ToolTip", "Based on DPI scale" },
		{ "Comment", "// Mode for the computation of the screen percentage.\n" },
		{ "Manual.Comment", "// Directly controls the screen percentage manually\n" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "EScreenPercentageMode::Manual" },
		{ "Manual.ToolTip", "Directly controls the screen percentage manually" },
		{ "ModuleRelativePath", "Public/LegacyScreenPercentageDriver.h" },
		{ "ToolTip", "Mode for the computation of the screen percentage." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScreenPercentageMode::Manual", (int64)EScreenPercentageMode::Manual },
		{ "EScreenPercentageMode::BasedOnDisplayResolution", (int64)EScreenPercentageMode::BasedOnDisplayResolution },
		{ "EScreenPercentageMode::BasedOnDPIScale", (int64)EScreenPercentageMode::BasedOnDPIScale },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EScreenPercentageMode",
	"EScreenPercentageMode",
	Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EScreenPercentageMode()
{
	if (!Z_Registration_Info_UEnum_EScreenPercentageMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScreenPercentageMode.InnerSingleton, Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScreenPercentageMode.InnerSingleton;
}
// End Enum EScreenPercentageMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EViewStatusForScreenPercentage_StaticEnum, TEXT("EViewStatusForScreenPercentage"), &Z_Registration_Info_UEnum_EViewStatusForScreenPercentage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 314578966U) },
		{ EScreenPercentageMode_StaticEnum, TEXT("EScreenPercentageMode"), &Z_Registration_Info_UEnum_EScreenPercentageMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4136715601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h_4130299929(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
