// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioWidgetsSlateTypes.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioWidgetsSlateTypes() {}

// Begin Cross Module References
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioRadialSliderStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSliderStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioTextBoxStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayheadOverlayStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FSampledSequenceViewerStyle();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin ScriptStruct FAudioTextBoxStyle
static_assert(std::is_polymorphic<FAudioTextBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioTextBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioTextBoxStyle;
class UScriptStruct* FAudioTextBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioTextBoxStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioTextBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioTextBoxStyle>()
{
	return FAudioTextBoxStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an Audio Text Box \n */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Text Box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image for the label border */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Image for the label border" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the label background */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the label background" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioTextBoxStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioTextBoxStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioTextBoxStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"AudioTextBoxStyle",
	Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::PropPointers),
	sizeof(FAudioTextBoxStyle),
	alignof(FAudioTextBoxStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioTextBoxStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.InnerSingleton;
}
// End ScriptStruct FAudioTextBoxStyle

// Begin ScriptStruct FAudioSliderStyle
static_assert(std::is_polymorphic<FAudioSliderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioSliderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioSliderStyle;
class UScriptStruct* FAudioSliderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioSliderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioSliderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioSliderStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioSliderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioSliderStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioSliderStyle>()
{
	return FAudioSliderStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioSliderStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an Audio Slider\n */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Slider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style to use for the underlying SSlider. */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "The style to use for the underlying SSlider." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style to use for the audio text box widget. */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "The style to use for the audio text box widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image for the widget background */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Image for the widget background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the slider background */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the slider background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBackgroundSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Size of the slider background (slider default is vertical)*/" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Size of the slider background (slider default is vertical)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Size of the padding between the label and the slider */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Size of the padding between the label and the slider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the slider bar */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the slider bar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderThumbColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the slider thumb (handle) */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the slider thumb (handle)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the widget background */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the widget background" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextBoxStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetBackgroundImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBackgroundSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LabelPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderThumbColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetBackgroundColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioSliderStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderStyle = { "SliderStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSliderStyle, SliderStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderStyle_MetaData), NewProp_SliderStyle_MetaData) }; // 3452507566
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_TextBoxStyle = { "TextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSliderStyle, TextBoxStyle), Z_Construct_UScriptStruct_FAudioTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBoxStyle_MetaData), NewProp_TextBoxStyle_MetaData) }; // 4205131562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundImage = { "WidgetBackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSliderStyle, WidgetBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBackgroundImage_MetaData), NewProp_WidgetBackgroundImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundColor = { "SliderBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSliderStyle, SliderBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBackgroundColor_MetaData), NewProp_SliderBackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundSize = { "SliderBackgroundSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSliderStyle, SliderBackgroundSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBackgroundSize_MetaData), NewProp_SliderBackgroundSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_LabelPadding = { "LabelPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSliderStyle, LabelPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelPadding_MetaData), NewProp_LabelPadding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSliderStyle, SliderBarColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBarColor_MetaData), NewProp_SliderBarColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderThumbColor = { "SliderThumbColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSliderStyle, SliderThumbColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderThumbColor_MetaData), NewProp_SliderThumbColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundColor = { "WidgetBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSliderStyle, WidgetBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBackgroundColor_MetaData), NewProp_WidgetBackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_TextBoxStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_LabelPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBarColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderThumbColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"AudioSliderStyle",
	Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::PropPointers),
	sizeof(FAudioSliderStyle),
	alignof(FAudioSliderStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioSliderStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioSliderStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioSliderStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioSliderStyle.InnerSingleton;
}
// End ScriptStruct FAudioSliderStyle

// Begin ScriptStruct FAudioRadialSliderStyle
static_assert(std::is_polymorphic<FAudioRadialSliderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioRadialSliderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle;
class UScriptStruct* FAudioRadialSliderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioRadialSliderStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioRadialSliderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioRadialSliderStyle>()
{
	return FAudioRadialSliderStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an Audio Radial Slider\n */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Radial Slider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style to use for the audio text box widget. */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "The style to use for the audio text box widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the slider center background */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the slider center background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the unprogressed slider bar */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the unprogressed slider bar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderProgressColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the progress bar */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the progress bar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Size of the padding between the label and the slider */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Size of the padding between the label and the slider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSliderRadius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Default size of the slider itself (not including label) */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Default size of the slider itself (not including label)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextBoxStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderProgressColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LabelPadding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSliderRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioRadialSliderStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_TextBoxStyle = { "TextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioRadialSliderStyle, TextBoxStyle), Z_Construct_UScriptStruct_FAudioTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBoxStyle_MetaData), NewProp_TextBoxStyle_MetaData) }; // 4205131562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_CenterBackgroundColor = { "CenterBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioRadialSliderStyle, CenterBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterBackgroundColor_MetaData), NewProp_CenterBackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioRadialSliderStyle, SliderBarColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBarColor_MetaData), NewProp_SliderBarColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderProgressColor = { "SliderProgressColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioRadialSliderStyle, SliderProgressColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderProgressColor_MetaData), NewProp_SliderProgressColor_MetaData) }; // 2024315916
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_LabelPadding = { "LabelPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioRadialSliderStyle, LabelPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelPadding_MetaData), NewProp_LabelPadding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_DefaultSliderRadius = { "DefaultSliderRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioRadialSliderStyle, DefaultSliderRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSliderRadius_MetaData), NewProp_DefaultSliderRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_TextBoxStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_CenterBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderBarColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderProgressColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_LabelPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_DefaultSliderRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"AudioRadialSliderStyle",
	Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::PropPointers),
	sizeof(FAudioRadialSliderStyle),
	alignof(FAudioRadialSliderStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioRadialSliderStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.InnerSingleton;
}
// End ScriptStruct FAudioRadialSliderStyle

// Begin ScriptStruct FSampledSequenceViewerStyle
static_assert(std::is_polymorphic<FSampledSequenceViewerStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSampledSequenceViewerStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SampledSequenceViewerStyle;
class UScriptStruct* FSampledSequenceViewerStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SampledSequenceViewerStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SampledSequenceViewerStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSampledSequenceViewerStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("SampledSequenceViewerStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SampledSequenceViewerStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FSampledSequenceViewerStyle>()
{
	return FSampledSequenceViewerStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a Sampled Sequence Viewer\n */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of a Sampled Sequence Viewer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceLineThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MajorGridLineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinorGridLineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZeroCrossingLineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZeroCrossingLineThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMarkersSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceLineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MajorGridLineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinorGridLineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZeroCrossingLineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZeroCrossingLineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleMarkersSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSampledSequenceViewerStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_SequenceColor = { "SequenceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, SequenceColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceColor_MetaData), NewProp_SequenceColor_MetaData) }; // 2024315916
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_SequenceLineThickness = { "SequenceLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, SequenceLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceLineThickness_MetaData), NewProp_SequenceLineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_MajorGridLineColor = { "MajorGridLineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, MajorGridLineColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MajorGridLineColor_MetaData), NewProp_MajorGridLineColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_MinorGridLineColor = { "MinorGridLineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, MinorGridLineColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinorGridLineColor_MetaData), NewProp_MinorGridLineColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_ZeroCrossingLineColor = { "ZeroCrossingLineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, ZeroCrossingLineColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZeroCrossingLineColor_MetaData), NewProp_ZeroCrossingLineColor_MetaData) }; // 2024315916
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_ZeroCrossingLineThickness = { "ZeroCrossingLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, ZeroCrossingLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZeroCrossingLineThickness_MetaData), NewProp_ZeroCrossingLineThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_SampleMarkersSize = { "SampleMarkersSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, SampleMarkersSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMarkersSize_MetaData), NewProp_SampleMarkersSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_SequenceBackgroundColor = { "SequenceBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, SequenceBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceBackgroundColor_MetaData), NewProp_SequenceBackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBrush_MetaData), NewProp_BackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_DesiredWidth = { "DesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, DesiredWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredWidth_MetaData), NewProp_DesiredWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_DesiredHeight = { "DesiredHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceViewerStyle, DesiredHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredHeight_MetaData), NewProp_DesiredHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_SequenceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_SequenceLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_MajorGridLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_MinorGridLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_ZeroCrossingLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_ZeroCrossingLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_SampleMarkersSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_SequenceBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_BackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_DesiredWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewProp_DesiredHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"SampledSequenceViewerStyle",
	Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::PropPointers),
	sizeof(FSampledSequenceViewerStyle),
	alignof(FSampledSequenceViewerStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSampledSequenceViewerStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SampledSequenceViewerStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SampledSequenceViewerStyle.InnerSingleton, Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SampledSequenceViewerStyle.InnerSingleton;
}
// End ScriptStruct FSampledSequenceViewerStyle

// Begin ScriptStruct FPlayheadOverlayStyle
static_assert(std::is_polymorphic<FPlayheadOverlayStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FPlayheadOverlayStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayheadOverlayStyle;
class UScriptStruct* FPlayheadOverlayStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayheadOverlayStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayheadOverlayStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayheadOverlayStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("PlayheadOverlayStyle"));
	}
	return Z_Registration_Info_UScriptStruct_PlayheadOverlayStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FPlayheadOverlayStyle>()
{
	return FPlayheadOverlayStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a Waveform Viewer Overlay style\n */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of a Waveform Viewer Overlay style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayheadColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayheadWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayheadColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayheadWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayheadOverlayStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::NewProp_PlayheadColor = { "PlayheadColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayheadOverlayStyle, PlayheadColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayheadColor_MetaData), NewProp_PlayheadColor_MetaData) }; // 2024315916
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::NewProp_PlayheadWidth = { "PlayheadWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayheadOverlayStyle, PlayheadWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayheadWidth_MetaData), NewProp_PlayheadWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::NewProp_DesiredWidth = { "DesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayheadOverlayStyle, DesiredWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredWidth_MetaData), NewProp_DesiredWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::NewProp_DesiredHeight = { "DesiredHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayheadOverlayStyle, DesiredHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredHeight_MetaData), NewProp_DesiredHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::NewProp_PlayheadColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::NewProp_PlayheadWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::NewProp_DesiredWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::NewProp_DesiredHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"PlayheadOverlayStyle",
	Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::PropPointers),
	sizeof(FPlayheadOverlayStyle),
	alignof(FPlayheadOverlayStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayheadOverlayStyle()
{
	if (!Z_Registration_Info_UScriptStruct_PlayheadOverlayStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayheadOverlayStyle.InnerSingleton, Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayheadOverlayStyle.InnerSingleton;
}
// End ScriptStruct FPlayheadOverlayStyle

// Begin ScriptStruct FFixedSampleSequenceRulerStyle
static_assert(std::is_polymorphic<FFixedSampleSequenceRulerStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FFixedSampleSequenceRulerStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FixedSampleSequenceRulerStyle;
class UScriptStruct* FFixedSampleSequenceRulerStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FixedSampleSequenceRulerStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FixedSampleSequenceRulerStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("FixedSampleSequenceRulerStyle"));
	}
	return Z_Registration_Info_UScriptStruct_FixedSampleSequenceRulerStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FFixedSampleSequenceRulerStyle>()
{
	return FFixedSampleSequenceRulerStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a Sampled Sequence Time Ruler\n */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of a Sampled Sequence Time Ruler" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TicksColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TicksTextColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TicksTextFont_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TicksTextOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandleWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandleColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandleBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TicksColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TicksTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TicksTextFont;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TicksTextOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFixedSampleSequenceRulerStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_HandleWidth = { "HandleWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, HandleWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleWidth_MetaData), NewProp_HandleWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_HandleColor = { "HandleColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, HandleColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleColor_MetaData), NewProp_HandleColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_HandleBrush = { "HandleBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, HandleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleBrush_MetaData), NewProp_HandleBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_TicksColor = { "TicksColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, TicksColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TicksColor_MetaData), NewProp_TicksColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_TicksTextColor = { "TicksTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, TicksTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TicksTextColor_MetaData), NewProp_TicksTextColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_TicksTextFont = { "TicksTextFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, TicksTextFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TicksTextFont_MetaData), NewProp_TicksTextFont_MetaData) }; // 2419385967
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_TicksTextOffset = { "TicksTextOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, TicksTextOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TicksTextOffset_MetaData), NewProp_TicksTextOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBrush_MetaData), NewProp_BackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_DesiredWidth = { "DesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, DesiredWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredWidth_MetaData), NewProp_DesiredWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_DesiredHeight = { "DesiredHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedSampleSequenceRulerStyle, DesiredHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredHeight_MetaData), NewProp_DesiredHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_HandleWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_HandleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_HandleBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_TicksColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_TicksTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_TicksTextFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_TicksTextOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_BackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_DesiredWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewProp_DesiredHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"FixedSampleSequenceRulerStyle",
	Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::PropPointers),
	sizeof(FFixedSampleSequenceRulerStyle),
	alignof(FFixedSampleSequenceRulerStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle()
{
	if (!Z_Registration_Info_UScriptStruct_FixedSampleSequenceRulerStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FixedSampleSequenceRulerStyle.InnerSingleton, Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FixedSampleSequenceRulerStyle.InnerSingleton;
}
// End ScriptStruct FFixedSampleSequenceRulerStyle

// Begin ScriptStruct FSampledSequenceValueGridOverlayStyle
static_assert(std::is_polymorphic<FSampledSequenceValueGridOverlayStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSampledSequenceValueGridOverlayStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SampledSequenceValueGridOverlayStyle;
class UScriptStruct* FSampledSequenceValueGridOverlayStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SampledSequenceValueGridOverlayStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SampledSequenceValueGridOverlayStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("SampledSequenceValueGridOverlayStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SampledSequenceValueGridOverlayStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FSampledSequenceValueGridOverlayStyle>()
{
	return FSampledSequenceValueGridOverlayStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a Sampled Sequence Value Grid Overlay\n */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of a Sampled Sequence Value Grid Overlay" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelTextColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelTextFont_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelTextFont;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSampledSequenceValueGridOverlayStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_GridColor = { "GridColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceValueGridOverlayStyle, GridColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridColor_MetaData), NewProp_GridColor_MetaData) }; // 2024315916
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_GridThickness = { "GridThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceValueGridOverlayStyle, GridThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridThickness_MetaData), NewProp_GridThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_LabelTextColor = { "LabelTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceValueGridOverlayStyle, LabelTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelTextColor_MetaData), NewProp_LabelTextColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_LabelTextFont = { "LabelTextFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceValueGridOverlayStyle, LabelTextFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelTextFont_MetaData), NewProp_LabelTextFont_MetaData) }; // 2419385967
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_DesiredWidth = { "DesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceValueGridOverlayStyle, DesiredWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredWidth_MetaData), NewProp_DesiredWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_DesiredHeight = { "DesiredHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceValueGridOverlayStyle, DesiredHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredHeight_MetaData), NewProp_DesiredHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_GridColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_GridThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_LabelTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_LabelTextFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_DesiredWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewProp_DesiredHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"SampledSequenceValueGridOverlayStyle",
	Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::PropPointers),
	sizeof(FSampledSequenceValueGridOverlayStyle),
	alignof(FSampledSequenceValueGridOverlayStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SampledSequenceValueGridOverlayStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SampledSequenceValueGridOverlayStyle.InnerSingleton, Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SampledSequenceValueGridOverlayStyle.InnerSingleton;
}
// End ScriptStruct FSampledSequenceValueGridOverlayStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioTextBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewStructOps, TEXT("AudioTextBoxStyle"), &Z_Registration_Info_UScriptStruct_AudioTextBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioTextBoxStyle), 4205131562U) },
		{ FAudioSliderStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewStructOps, TEXT("AudioSliderStyle"), &Z_Registration_Info_UScriptStruct_AudioSliderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioSliderStyle), 3264233728U) },
		{ FAudioRadialSliderStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewStructOps, TEXT("AudioRadialSliderStyle"), &Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioRadialSliderStyle), 2042398501U) },
		{ FSampledSequenceViewerStyle::StaticStruct, Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewStructOps, TEXT("SampledSequenceViewerStyle"), &Z_Registration_Info_UScriptStruct_SampledSequenceViewerStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSampledSequenceViewerStyle), 2266691071U) },
		{ FPlayheadOverlayStyle::StaticStruct, Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::NewStructOps, TEXT("PlayheadOverlayStyle"), &Z_Registration_Info_UScriptStruct_PlayheadOverlayStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayheadOverlayStyle), 3547628722U) },
		{ FFixedSampleSequenceRulerStyle::StaticStruct, Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewStructOps, TEXT("FixedSampleSequenceRulerStyle"), &Z_Registration_Info_UScriptStruct_FixedSampleSequenceRulerStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFixedSampleSequenceRulerStyle), 3136440283U) },
		{ FSampledSequenceValueGridOverlayStyle::StaticStruct, Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewStructOps, TEXT("SampledSequenceValueGridOverlayStyle"), &Z_Registration_Info_UScriptStruct_SampledSequenceValueGridOverlayStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSampledSequenceValueGridOverlayStyle), 2404002347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h_3468733765(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
