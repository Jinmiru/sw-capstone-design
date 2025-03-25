// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioSpectrumPlotStyle.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSpectrumPlotStyle() {}

// Begin Cross Module References
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin ScriptStruct FAudioSpectrumPlotStyle
static_assert(std::is_polymorphic<FAudioSpectrumPlotStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioSpectrumPlotStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioSpectrumPlotStyle;
class UScriptStruct* FAudioSpectrumPlotStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioSpectrumPlotStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioSpectrumPlotStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioSpectrumPlotStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioSpectrumPlotStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioSpectrumPlotStyle>()
{
	return FAudioSpectrumPlotStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SAudioSpectrumPlot\n */" },
		{ "ModuleRelativePath", "Public/AudioSpectrumPlotStyle.h" },
		{ "ToolTip", "Represents the appearance of an SAudioSpectrumPlot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioSpectrumPlotStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioSpectrumPlotStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisLabelColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioSpectrumPlotStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisLabelFont_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioSpectrumPlotStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectrumColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioSpectrumPlotStyle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisLabelColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisLabelFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpectrumColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioSpectrumPlotStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSpectrumPlotStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewProp_GridColor = { "GridColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSpectrumPlotStyle, GridColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridColor_MetaData), NewProp_GridColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewProp_AxisLabelColor = { "AxisLabelColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSpectrumPlotStyle, AxisLabelColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisLabelColor_MetaData), NewProp_AxisLabelColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewProp_AxisLabelFont = { "AxisLabelFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSpectrumPlotStyle, AxisLabelFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisLabelFont_MetaData), NewProp_AxisLabelFont_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewProp_SpectrumColor = { "SpectrumColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSpectrumPlotStyle, SpectrumColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectrumColor_MetaData), NewProp_SpectrumColor_MetaData) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewProp_GridColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewProp_AxisLabelColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewProp_AxisLabelFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewProp_SpectrumColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"AudioSpectrumPlotStyle",
	Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::PropPointers),
	sizeof(FAudioSpectrumPlotStyle),
	alignof(FAudioSpectrumPlotStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioSpectrumPlotStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioSpectrumPlotStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioSpectrumPlotStyle.InnerSingleton;
}
// End ScriptStruct FAudioSpectrumPlotStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumPlotStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioSpectrumPlotStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewStructOps, TEXT("AudioSpectrumPlotStyle"), &Z_Registration_Info_UScriptStruct_AudioSpectrumPlotStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioSpectrumPlotStyle), 1107632795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumPlotStyle_h_2716055792(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumPlotStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumPlotStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
