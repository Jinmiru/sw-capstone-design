// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Widgets/WidgetPixelSnapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetPixelSnapping() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Enum EWidgetPixelSnapping
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetPixelSnapping;
static UEnum* EWidgetPixelSnapping_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWidgetPixelSnapping.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWidgetPixelSnapping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EWidgetPixelSnapping"));
	}
	return Z_Registration_Info_UEnum_EWidgetPixelSnapping.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<EWidgetPixelSnapping>()
{
	return EWidgetPixelSnapping_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The different states of pixel snapping a widget can be in.\n */" },
		{ "Disabled.Comment", "/** Draws the widget without snapping. Useful during animations or moving indicators. */" },
		{ "Disabled.Name", "EWidgetPixelSnapping::Disabled" },
		{ "Disabled.ToolTip", "Draws the widget without snapping. Useful during animations or moving indicators." },
		{ "Inherit.Comment", "/** Inherits the snapping method set by the parent widget. */" },
		{ "Inherit.Name", "EWidgetPixelSnapping::Inherit" },
		{ "Inherit.ToolTip", "Inherits the snapping method set by the parent widget." },
		{ "ModuleRelativePath", "Public/Widgets/WidgetPixelSnapping.h" },
		{ "SnapToPixel.Comment", "/** Draws the widget at the nearest pixel. Improves sharpness of widgets. */" },
		{ "SnapToPixel.Name", "EWidgetPixelSnapping::SnapToPixel" },
		{ "SnapToPixel.ToolTip", "Draws the widget at the nearest pixel. Improves sharpness of widgets." },
		{ "ToolTip", "The different states of pixel snapping a widget can be in." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWidgetPixelSnapping::Inherit", (int64)EWidgetPixelSnapping::Inherit },
		{ "EWidgetPixelSnapping::Disabled", (int64)EWidgetPixelSnapping::Disabled },
		{ "EWidgetPixelSnapping::SnapToPixel", (int64)EWidgetPixelSnapping::SnapToPixel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"EWidgetPixelSnapping",
	"EWidgetPixelSnapping",
	Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping()
{
	if (!Z_Registration_Info_UEnum_EWidgetPixelSnapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetPixelSnapping.InnerSingleton, Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWidgetPixelSnapping.InnerSingleton;
}
// End Enum EWidgetPixelSnapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Widgets_WidgetPixelSnapping_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWidgetPixelSnapping_StaticEnum, TEXT("EWidgetPixelSnapping"), &Z_Registration_Info_UEnum_EWidgetPixelSnapping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3249707767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Widgets_WidgetPixelSnapping_h_3600374719(TEXT("/Script/SlateCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Widgets_WidgetPixelSnapping_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Widgets_WidgetPixelSnapping_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
