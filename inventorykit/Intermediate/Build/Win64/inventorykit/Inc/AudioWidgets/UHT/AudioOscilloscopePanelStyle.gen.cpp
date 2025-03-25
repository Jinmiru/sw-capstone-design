// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioOscilloscopePanelStyle.h"
#include "AudioWidgets/Public/AudioWidgetsSlateTypes.h"
#include "AudioWidgets/Public/TriggerThresholdLineStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioOscilloscopePanelStyle() {}

// Begin Cross Module References
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FSampledSequenceViewerStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerThresholdLineStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin ScriptStruct FAudioOscilloscopePanelStyle
static_assert(std::is_polymorphic<FAudioOscilloscopePanelStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioOscilloscopePanelStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioOscilloscopePanelStyle;
class UScriptStruct* FAudioOscilloscopePanelStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioOscilloscopePanelStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioOscilloscopePanelStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioOscilloscopePanelStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioOscilloscopePanelStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioOscilloscopePanelStyle>()
{
	return FAudioOscilloscopePanelStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Represents the appearance of an SAudioOscilloscopePanelWidget\n*/" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopePanelStyle.h" },
		{ "ToolTip", "Represents the appearance of an SAudioOscilloscopePanelWidget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeRulerStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The time rule style. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopePanelStyle.h" },
		{ "ToolTip", "The time rule style." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueGridStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The value grid style. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopePanelStyle.h" },
		{ "ToolTip", "The value grid style." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveViewerStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The waveform view style. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopePanelStyle.h" },
		{ "ToolTip", "The waveform view style." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerThresholdLineStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The triggerthreshold line style. */" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopePanelStyle.h" },
		{ "ToolTip", "The triggerthreshold line style." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeRulerStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueGridStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveViewerStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerThresholdLineStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioOscilloscopePanelStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::NewProp_TimeRulerStyle = { "TimeRulerStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioOscilloscopePanelStyle, TimeRulerStyle), Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeRulerStyle_MetaData), NewProp_TimeRulerStyle_MetaData) }; // 3136440283
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::NewProp_ValueGridStyle = { "ValueGridStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioOscilloscopePanelStyle, ValueGridStyle), Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueGridStyle_MetaData), NewProp_ValueGridStyle_MetaData) }; // 2404002347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::NewProp_WaveViewerStyle = { "WaveViewerStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioOscilloscopePanelStyle, WaveViewerStyle), Z_Construct_UScriptStruct_FSampledSequenceViewerStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveViewerStyle_MetaData), NewProp_WaveViewerStyle_MetaData) }; // 2266691071
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::NewProp_TriggerThresholdLineStyle = { "TriggerThresholdLineStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioOscilloscopePanelStyle, TriggerThresholdLineStyle), Z_Construct_UScriptStruct_FTriggerThresholdLineStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerThresholdLineStyle_MetaData), NewProp_TriggerThresholdLineStyle_MetaData) }; // 2631247069
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::NewProp_TimeRulerStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::NewProp_ValueGridStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::NewProp_WaveViewerStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::NewProp_TriggerThresholdLineStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"AudioOscilloscopePanelStyle",
	Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::PropPointers),
	sizeof(FAudioOscilloscopePanelStyle),
	alignof(FAudioOscilloscopePanelStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioOscilloscopePanelStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioOscilloscopePanelStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioOscilloscopePanelStyle.InnerSingleton;
}
// End ScriptStruct FAudioOscilloscopePanelStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopePanelStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioOscilloscopePanelStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::NewStructOps, TEXT("AudioOscilloscopePanelStyle"), &Z_Registration_Info_UScriptStruct_AudioOscilloscopePanelStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioOscilloscopePanelStyle), 2928964787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopePanelStyle_h_284281968(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopePanelStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopePanelStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
