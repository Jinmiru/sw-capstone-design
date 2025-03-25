// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Styling/ToolBarStyle.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/SlateCore/Public/Types/SlateVector2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolBarStyle() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDeprecateSlateVector2D();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FToolBarStyle();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin ScriptStruct FToolBarStyle
static_assert(std::is_polymorphic<FToolBarStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FToolBarStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolBarStyle;
class UScriptStruct* FToolBarStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolBarStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolBarStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolBarStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ToolBarStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ToolBarStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FToolBarStyle>()
{
	return FToolBarStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolBarStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a toolbar \n */" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
		{ "ToolTip", "Represents the appearance of a toolbar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush used for the background of the toolbar */" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
		{ "ToolTip", "The brush used for the background of the toolbar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush used for the expand arrow when the toolbar runs out of room and needs to display toolbar items in a menu*/" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
		{ "ToolTip", "The brush used for the expand arrow when the toolbar runs out of room and needs to display toolbar items in a menu" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeparatorBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsComboButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsToggleButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniformBlockWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniformBlockHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumColumns_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeparatorPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndentedBlockPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowLabels_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContentMaxWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContentFillWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconPaddingWithVisibleLabel_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconPaddingWithCollapsedLabel_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpandBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeparatorBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditableTextStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToggleButton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsComboButton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsToggleButton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelPadding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UniformBlockWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UniformBlockHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumColumns;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeparatorPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckBoxPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndentedBlockPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
	static void NewProp_bShowLabels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLabels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ButtonContentMaxWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ButtonContentFillWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconPaddingWithVisibleLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconPaddingWithCollapsedLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolBarStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBrush_MetaData), NewProp_BackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush = { "ExpandBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ExpandBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandBrush_MetaData), NewProp_ExpandBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush = { "SeparatorBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, SeparatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeparatorBrush_MetaData), NewProp_SeparatorBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle = { "LabelStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, LabelStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelStyle_MetaData), NewProp_LabelStyle_MetaData) }; // 4086975916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle = { "EditableTextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, EditableTextStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextStyle_MetaData), NewProp_EditableTextStyle_MetaData) }; // 661305945
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton = { "ToggleButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ToggleButton), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleButton_MetaData), NewProp_ToggleButton_MetaData) }; // 2899985267
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle = { "ComboButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboButtonStyle_MetaData), NewProp_ComboButtonStyle_MetaData) }; // 486627810
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle = { "SettingsButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, SettingsButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsButtonStyle_MetaData), NewProp_SettingsButtonStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton = { "SettingsComboButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, SettingsComboButton), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsComboButton_MetaData), NewProp_SettingsComboButton_MetaData) }; // 486627810
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton = { "SettingsToggleButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, SettingsToggleButton), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsToggleButton_MetaData), NewProp_SettingsToggleButton_MetaData) }; // 2899985267
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStyle_MetaData), NewProp_ButtonStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding = { "LabelPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, LabelPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelPadding_MetaData), NewProp_LabelPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockWidth = { "UniformBlockWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, UniformBlockWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniformBlockWidth_MetaData), NewProp_UniformBlockWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockHeight = { "UniformBlockHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, UniformBlockHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniformBlockHeight_MetaData), NewProp_UniformBlockHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_NumColumns = { "NumColumns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, NumColumns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumColumns_MetaData), NewProp_NumColumns_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPadding = { "IconPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, IconPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconPadding_MetaData), NewProp_IconPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding = { "SeparatorPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, SeparatorPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeparatorPadding_MetaData), NewProp_SeparatorPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding = { "ComboButtonPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ComboButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboButtonPadding_MetaData), NewProp_ComboButtonPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding = { "ButtonPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonPadding_MetaData), NewProp_ButtonPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding = { "CheckBoxPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, CheckBoxPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBoxPadding_MetaData), NewProp_CheckBoxPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding = { "BlockPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, BlockPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockPadding_MetaData), NewProp_BlockPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding = { "IndentedBlockPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, IndentedBlockPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndentedBlockPadding_MetaData), NewProp_IndentedBlockPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding = { "BackgroundPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, BackgroundPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundPadding_MetaData), NewProp_BackgroundPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, IconSize), Z_Construct_UScriptStruct_FDeprecateSlateVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSize_MetaData), NewProp_IconSize_MetaData) }; // 3213486062
void Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_SetBit(void* Obj)
{
	((FToolBarStyle*)Obj)->bShowLabels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels = { "bShowLabels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FToolBarStyle), &Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowLabels_MetaData), NewProp_bShowLabels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentMaxWidth = { "ButtonContentMaxWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ButtonContentMaxWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonContentMaxWidth_MetaData), NewProp_ButtonContentMaxWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentFillWidth = { "ButtonContentFillWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, ButtonContentFillWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonContentFillWidth_MetaData), NewProp_ButtonContentFillWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithVisibleLabel = { "IconPaddingWithVisibleLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, IconPaddingWithVisibleLabel), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconPaddingWithVisibleLabel_MetaData), NewProp_IconPaddingWithVisibleLabel_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithCollapsedLabel = { "IconPaddingWithCollapsedLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolBarStyle, IconPaddingWithCollapsedLabel), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconPaddingWithCollapsedLabel_MetaData), NewProp_IconPaddingWithCollapsedLabel_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_UniformBlockHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_NumColumns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentMaxWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonContentFillWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithVisibleLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconPaddingWithCollapsedLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ToolBarStyle",
	Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers),
	sizeof(FToolBarStyle),
	alignof(FToolBarStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolBarStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolBarStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ToolBarStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolBarStyle.InnerSingleton, Z_Construct_UScriptStruct_FToolBarStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolBarStyle.InnerSingleton;
}
// End ScriptStruct FToolBarStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FToolBarStyle::StaticStruct, Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewStructOps, TEXT("ToolBarStyle"), &Z_Registration_Info_UScriptStruct_ToolBarStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolBarStyle), 609044290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_4070416480(TEXT("/Script/SlateCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
