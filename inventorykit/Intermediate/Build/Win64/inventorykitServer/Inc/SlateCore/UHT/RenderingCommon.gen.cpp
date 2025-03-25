// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderingCommon() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EColorVisionDeficiency();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Enum EColorVisionDeficiency
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorVisionDeficiency;
static UEnum* EColorVisionDeficiency_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EColorVisionDeficiency.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EColorVisionDeficiency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EColorVisionDeficiency, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EColorVisionDeficiency"));
	}
	return Z_Registration_Info_UEnum_EColorVisionDeficiency.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<EColorVisionDeficiency>()
{
	return EColorVisionDeficiency_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_EColorVisionDeficiency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates color vision deficiency types.\n */" },
		{ "Deuteranope.DisplayName", "Deuteranope (green weak/blind) (7% of males, 0.4% of females)" },
		{ "Deuteranope.Name", "EColorVisionDeficiency::Deuteranope" },
		{ "ModuleRelativePath", "Public/Rendering/RenderingCommon.h" },
		{ "NormalVision.DisplayName", "Normal Vision" },
		{ "NormalVision.Name", "EColorVisionDeficiency::NormalVision" },
		{ "Protanope.DisplayName", "Protanope (red weak/blind) (2% of males, 0.01% of females)" },
		{ "Protanope.Name", "EColorVisionDeficiency::Protanope" },
		{ "ToolTip", "Enumerates color vision deficiency types." },
		{ "Tritanope.DisplayName", "Tritanope (blue weak/blind) (0.0003% of males)" },
		{ "Tritanope.Name", "EColorVisionDeficiency::Tritanope" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EColorVisionDeficiency::NormalVision", (int64)EColorVisionDeficiency::NormalVision },
		{ "EColorVisionDeficiency::Deuteranope", (int64)EColorVisionDeficiency::Deuteranope },
		{ "EColorVisionDeficiency::Protanope", (int64)EColorVisionDeficiency::Protanope },
		{ "EColorVisionDeficiency::Tritanope", (int64)EColorVisionDeficiency::Tritanope },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EColorVisionDeficiency_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"EColorVisionDeficiency",
	"EColorVisionDeficiency",
	Z_Construct_UEnum_SlateCore_EColorVisionDeficiency_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EColorVisionDeficiency_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EColorVisionDeficiency_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_EColorVisionDeficiency_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_EColorVisionDeficiency()
{
	if (!Z_Registration_Info_UEnum_EColorVisionDeficiency.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorVisionDeficiency.InnerSingleton, Z_Construct_UEnum_SlateCore_EColorVisionDeficiency_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EColorVisionDeficiency.InnerSingleton;
}
// End Enum EColorVisionDeficiency

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Rendering_RenderingCommon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EColorVisionDeficiency_StaticEnum, TEXT("EColorVisionDeficiency"), &Z_Registration_Info_UEnum_EColorVisionDeficiency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 759567682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Rendering_RenderingCommon_h_1166830629(TEXT("/Script/SlateCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Rendering_RenderingCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Rendering_RenderingCommon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
