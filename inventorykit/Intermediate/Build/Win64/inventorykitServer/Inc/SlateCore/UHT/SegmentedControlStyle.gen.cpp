// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Styling/SegmentedControlStyle.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSegmentedControlStyle() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSegmentedControlStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin ScriptStruct FSegmentedControlStyle
static_assert(std::is_polymorphic<FSegmentedControlStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSegmentedControlStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SegmentedControlStyle;
class UScriptStruct* FSegmentedControlStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SegmentedControlStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SegmentedControlStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSegmentedControlStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SegmentedControlStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SegmentedControlStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSegmentedControlStyle>()
{
	return FSegmentedControlStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSegmentedControl\n */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "Represents the appearance of an SSegmentedControl" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our Center Control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "The style to use for our Center Control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstControlStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our Left Control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "The style to use for our Left Control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastControlStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our Left Control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "The style to use for our Left Control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background of the segmented control */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "Background of the segmented control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniformPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Padding between each control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "Padding between each control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstControlStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastControlStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniformPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSegmentedControlStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_ControlStyle = { "ControlStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSegmentedControlStyle, ControlStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlStyle_MetaData), NewProp_ControlStyle_MetaData) }; // 2899985267
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_FirstControlStyle = { "FirstControlStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSegmentedControlStyle, FirstControlStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstControlStyle_MetaData), NewProp_FirstControlStyle_MetaData) }; // 2899985267
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_LastControlStyle = { "LastControlStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSegmentedControlStyle, LastControlStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastControlStyle_MetaData), NewProp_LastControlStyle_MetaData) }; // 2899985267
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSegmentedControlStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBrush_MetaData), NewProp_BackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_UniformPadding = { "UniformPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSegmentedControlStyle, UniformPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniformPadding_MetaData), NewProp_UniformPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_ControlStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_FirstControlStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_LastControlStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_BackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_UniformPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"SegmentedControlStyle",
	Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::PropPointers),
	sizeof(FSegmentedControlStyle),
	alignof(FSegmentedControlStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSegmentedControlStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SegmentedControlStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SegmentedControlStyle.InnerSingleton, Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SegmentedControlStyle.InnerSingleton;
}
// End ScriptStruct FSegmentedControlStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SegmentedControlStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSegmentedControlStyle::StaticStruct, Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewStructOps, TEXT("SegmentedControlStyle"), &Z_Registration_Info_UScriptStruct_SegmentedControlStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSegmentedControlStyle), 832139488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SegmentedControlStyle_h_133303617(TEXT("/Script/SlateCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SegmentedControlStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SegmentedControlStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
