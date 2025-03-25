// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/SampledSequenceVectorViewerStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSampledSequenceVectorViewerStyle() {}

// Begin Cross Module References
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin ScriptStruct FSampledSequenceVectorViewerStyle
static_assert(std::is_polymorphic<FSampledSequenceVectorViewerStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSampledSequenceVectorViewerStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SampledSequenceVectorViewerStyle;
class UScriptStruct* FSampledSequenceVectorViewerStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SampledSequenceVectorViewerStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SampledSequenceVectorViewerStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("SampledSequenceVectorViewerStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SampledSequenceVectorViewerStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FSampledSequenceVectorViewerStyle>()
{
	return FSampledSequenceVectorViewerStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a trigger threshold line\n */" },
		{ "ModuleRelativePath", "Public/SampledSequenceVectorViewerStyle.h" },
		{ "ToolTip", "Represents the appearance of a trigger threshold line" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The background color. */" },
		{ "ModuleRelativePath", "Public/SampledSequenceVectorViewerStyle.h" },
		{ "ToolTip", "The background color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/SampledSequenceVectorViewerStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The vector view line color. */" },
		{ "ModuleRelativePath", "Public/SampledSequenceVectorViewerStyle.h" },
		{ "ToolTip", "The vector view line color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The vector view line thickness. */" },
		{ "ModuleRelativePath", "Public/SampledSequenceVectorViewerStyle.h" },
		{ "ToolTip", "The vector view line thickness." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSampledSequenceVectorViewerStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceVectorViewerStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceVectorViewerStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBrush_MetaData), NewProp_BackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceVectorViewerStyle, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampledSequenceVectorViewerStyle, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::NewProp_BackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::NewProp_LineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::NewProp_LineThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"SampledSequenceVectorViewerStyle",
	Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::PropPointers),
	sizeof(FSampledSequenceVectorViewerStyle),
	alignof(FSampledSequenceVectorViewerStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SampledSequenceVectorViewerStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SampledSequenceVectorViewerStyle.InnerSingleton, Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SampledSequenceVectorViewerStyle.InnerSingleton;
}
// End ScriptStruct FSampledSequenceVectorViewerStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SampledSequenceVectorViewerStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSampledSequenceVectorViewerStyle::StaticStruct, Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::NewStructOps, TEXT("SampledSequenceVectorViewerStyle"), &Z_Registration_Info_UScriptStruct_SampledSequenceVectorViewerStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSampledSequenceVectorViewerStyle), 3767068764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SampledSequenceVectorViewerStyle_h_576058185(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SampledSequenceVectorViewerStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SampledSequenceVectorViewerStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
