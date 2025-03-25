// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Types/SlateVector2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UClass* Z_Construct_UClass_USlateTypes();
SLATECORE_API UClass* Z_Construct_UClass_USlateTypes_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateCheckBoxType();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextOverflowPolicy();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextTransformPolicy();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDeprecateSlateVector2D();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDockTabStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FExpandableAreaStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHeaderRowStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInlineTextImageStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBorderStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSearchBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSplitterStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableColumnHeaderStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableViewStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeControlStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FWindowStyle();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Enum EConsumeMouseWheel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConsumeMouseWheel;
static UEnum* EConsumeMouseWheel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConsumeMouseWheel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConsumeMouseWheel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EConsumeMouseWheel"));
	}
	return Z_Registration_Info_UEnum_EConsumeMouseWheel.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<EConsumeMouseWheel>()
{
	return EConsumeMouseWheel_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** Always consume mouse wheel event even if we don't scroll at all. */" },
		{ "Always.Name", "EConsumeMouseWheel::Always" },
		{ "Always.ToolTip", "Always consume mouse wheel event even if we don't scroll at all." },
		{ "Comment", "/** Used to determine how we should handle mouse wheel input events when someone scrolls. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "Never.Comment", "/** Never consume the mouse wheel */" },
		{ "Never.Name", "EConsumeMouseWheel::Never" },
		{ "Never.ToolTip", "Never consume the mouse wheel" },
		{ "ToolTip", "Used to determine how we should handle mouse wheel input events when someone scrolls." },
		{ "WhenScrollingPossible.Comment", "/** Only consume the mouse wheel event when we actually scroll some amount. */" },
		{ "WhenScrollingPossible.Name", "EConsumeMouseWheel::WhenScrollingPossible" },
		{ "WhenScrollingPossible.ToolTip", "Only consume the mouse wheel event when we actually scroll some amount." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConsumeMouseWheel::WhenScrollingPossible", (int64)EConsumeMouseWheel::WhenScrollingPossible },
		{ "EConsumeMouseWheel::Always", (int64)EConsumeMouseWheel::Always },
		{ "EConsumeMouseWheel::Never", (int64)EConsumeMouseWheel::Never },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"EConsumeMouseWheel",
	"EConsumeMouseWheel",
	Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel()
{
	if (!Z_Registration_Info_UEnum_EConsumeMouseWheel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConsumeMouseWheel.InnerSingleton, Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConsumeMouseWheel.InnerSingleton;
}
// End Enum EConsumeMouseWheel

// Begin Enum ESlateParentWindowSearchMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod;
static UEnum* ESlateParentWindowSearchMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateParentWindowSearchMethod"));
	}
	return Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<ESlateParentWindowSearchMethod>()
{
	return ESlateParentWindowSearchMethod_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActiveWindow.Comment", "/** Favor using the active window (will fallback to the main window if the active window is unsuitable) */" },
		{ "ActiveWindow.Name", "ESlateParentWindowSearchMethod::ActiveWindow" },
		{ "ActiveWindow.ToolTip", "Favor using the active window (will fallback to the main window if the active window is unsuitable)" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Used to determine which search method we should use when finding a suitable parent window */" },
		{ "MainWindow.Comment", "/** Favor using the main window */" },
		{ "MainWindow.Name", "ESlateParentWindowSearchMethod::MainWindow" },
		{ "MainWindow.ToolTip", "Favor using the main window" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Used to determine which search method we should use when finding a suitable parent window" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlateParentWindowSearchMethod::ActiveWindow", (int64)ESlateParentWindowSearchMethod::ActiveWindow },
		{ "ESlateParentWindowSearchMethod::MainWindow", (int64)ESlateParentWindowSearchMethod::MainWindow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"ESlateParentWindowSearchMethod",
	"ESlateParentWindowSearchMethod",
	Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod()
{
	if (!Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateParentWindowSearchMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod.InnerSingleton;
}
// End Enum ESlateParentWindowSearchMethod

// Begin Enum ESlateCheckBoxType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateCheckBoxType;
static UEnum* ESlateCheckBoxType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlateCheckBoxType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlateCheckBoxType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateCheckBoxType, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateCheckBoxType"));
	}
	return Z_Registration_Info_UEnum_ESlateCheckBoxType.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<ESlateCheckBoxType::Type>()
{
	return ESlateCheckBoxType_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CheckBox.Comment", "/** Traditional check box with check button and label (or other content) */" },
		{ "CheckBox.Name", "ESlateCheckBoxType::CheckBox" },
		{ "CheckBox.ToolTip", "Traditional check box with check button and label (or other content)" },
		{ "Comment", "/** Type of check box */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToggleButton.Comment", "/** Toggle button.  You provide button content (such as an image), and the user can press to toggle it. */" },
		{ "ToggleButton.Name", "ESlateCheckBoxType::ToggleButton" },
		{ "ToggleButton.ToolTip", "Toggle button.  You provide button content (such as an image), and the user can press to toggle it." },
		{ "ToolTip", "Type of check box" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlateCheckBoxType::CheckBox", (int64)ESlateCheckBoxType::CheckBox },
		{ "ESlateCheckBoxType::ToggleButton", (int64)ESlateCheckBoxType::ToggleButton },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"ESlateCheckBoxType",
	"ESlateCheckBoxType::Type",
	Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_ESlateCheckBoxType()
{
	if (!Z_Registration_Info_UEnum_ESlateCheckBoxType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateCheckBoxType.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlateCheckBoxType.InnerSingleton;
}
// End Enum ESlateCheckBoxType

// Begin Enum ECheckBoxState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECheckBoxState;
static UEnum* ECheckBoxState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECheckBoxState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECheckBoxState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ECheckBoxState, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ECheckBoxState"));
	}
	return Z_Registration_Info_UEnum_ECheckBoxState.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<ECheckBoxState>()
{
	return ECheckBoxState_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Checked.Comment", "/** Checked */" },
		{ "Checked.Name", "ECheckBoxState::Checked" },
		{ "Checked.ToolTip", "Checked" },
		{ "Comment", "/** Current state of the check box */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Current state of the check box" },
		{ "Unchecked.Comment", "/** Unchecked */" },
		{ "Unchecked.Name", "ECheckBoxState::Unchecked" },
		{ "Unchecked.ToolTip", "Unchecked" },
		{ "Undetermined.Comment", "/** Neither checked nor unchecked */" },
		{ "Undetermined.Name", "ECheckBoxState::Undetermined" },
		{ "Undetermined.ToolTip", "Neither checked nor unchecked" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECheckBoxState::Unchecked", (int64)ECheckBoxState::Unchecked },
		{ "ECheckBoxState::Checked", (int64)ECheckBoxState::Checked },
		{ "ECheckBoxState::Undetermined", (int64)ECheckBoxState::Undetermined },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"ECheckBoxState",
	"ECheckBoxState",
	Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState()
{
	if (!Z_Registration_Info_UEnum_ECheckBoxState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECheckBoxState.InnerSingleton, Z_Construct_UEnum_SlateCore_ECheckBoxState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECheckBoxState.InnerSingleton;
}
// End Enum ECheckBoxState

// Begin Enum ETextOverflowPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextOverflowPolicy;
static UEnum* ETextOverflowPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextOverflowPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextOverflowPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ETextOverflowPolicy"));
	}
	return Z_Registration_Info_UEnum_ETextOverflowPolicy.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<ETextOverflowPolicy>()
{
	return ETextOverflowPolicy_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clip.Comment", "/** Overflowing text will be clipped */" },
		{ "Clip.Name", "ETextOverflowPolicy::Clip" },
		{ "Clip.ToolTip", "Overflowing text will be clipped" },
		{ "Comment", "/**\n * The different methods that can be used to determine what happens to text when it is longer than its allowed length\n */" },
		{ "Ellipsis.Comment", "/** Overflowing text will be replaced with an ellipsis */" },
		{ "Ellipsis.Name", "ETextOverflowPolicy::Ellipsis" },
		{ "Ellipsis.ToolTip", "Overflowing text will be replaced with an ellipsis" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "MultilineEllipsis.Comment", "/** Overflowing text will be replaced with an ellipsis. A partially clipped line on the vertical axis will be totally clipped, and ellipsis displayed on previous line */" },
		{ "MultilineEllipsis.Name", "ETextOverflowPolicy::MultilineEllipsis" },
		{ "MultilineEllipsis.ToolTip", "Overflowing text will be replaced with an ellipsis. A partially clipped line on the vertical axis will be totally clipped, and ellipsis displayed on previous line" },
		{ "ToolTip", "The different methods that can be used to determine what happens to text when it is longer than its allowed length" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextOverflowPolicy::Clip", (int64)ETextOverflowPolicy::Clip },
		{ "ETextOverflowPolicy::Ellipsis", (int64)ETextOverflowPolicy::Ellipsis },
		{ "ETextOverflowPolicy::MultilineEllipsis", (int64)ETextOverflowPolicy::MultilineEllipsis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"ETextOverflowPolicy",
	"ETextOverflowPolicy",
	Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_ETextOverflowPolicy()
{
	if (!Z_Registration_Info_UEnum_ETextOverflowPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextOverflowPolicy.InnerSingleton, Z_Construct_UEnum_SlateCore_ETextOverflowPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextOverflowPolicy.InnerSingleton;
}
// End Enum ETextOverflowPolicy

// Begin ScriptStruct FCheckBoxStyle
static_assert(std::is_polymorphic<FCheckBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FCheckBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CheckBoxStyle;
class UScriptStruct* FCheckBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CheckBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CheckBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("CheckBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_CheckBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCheckBoxStyle>()
{
	return FCheckBoxStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCheckBoxStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SCheckBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SCheckBox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxType_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The visual type of the checkbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The visual type of the checkbox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when the CheckBox is unchecked (normal) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when the CheckBox is unchecked (normal)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedHoveredImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when the CheckBox is unchecked and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when the CheckBox is unchecked and hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedPressedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when the CheckBox is unchecked and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when the CheckBox is unchecked and hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when the CheckBox is checked */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when the CheckBox is checked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckedHoveredImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when checked and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when checked and hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckedPressedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when checked and pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when checked and pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when the CheckBox is undetermined */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when the CheckBox is undetermined" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedHoveredImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when CheckBox is undetermined and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when CheckBox is undetermined and hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedPressedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* CheckBox appearance when CheckBox is undetermined and pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "CheckBox appearance when CheckBox is undetermined and pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background appearance */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background appearance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundHoveredImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background appearance when hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background appearance when hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundPressedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background appearance when pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background appearance when pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The normal unchecked foreground color */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The normal unchecked foreground color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckedForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when checked */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when checked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckedHoveredForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when checked and pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when checked and pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckedPressedForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when checked and pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when checked and pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when the check state is indeterminate */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when the check state is indeterminate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** BorderBackgroundColor refers to the actual color and opacity of the supplied border image on toggle buttons */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "BorderBackgroundColor refers to the actual color and opacity of the supplied border image on toggle buttons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckedSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the check box should play when checked\n\x09 */" },
		{ "DisplayName", "Checked Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the check box should play when checked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the check box should play when unchecked\n\x09 */" },
		{ "DisplayName", "Unchecked Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the check box should play when unchecked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the check box should play when initially hovered over\n\x09 */" },
		{ "DisplayName", "Hovered Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the check box should play when initially hovered over" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckedSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CheckBoxType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UncheckedImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UncheckedHoveredImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UncheckedPressedImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedHoveredImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedPressedImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UndeterminedImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UndeterminedHoveredImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UndeterminedPressedImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundHoveredImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundPressedImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedHoveredForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedPressedForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UndeterminedForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckedSlateSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UncheckedSlateSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredSlateSound;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CheckedSound;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UncheckedSound;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HoveredSound;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckBoxStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckBoxType = { "CheckBoxType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, CheckBoxType), Z_Construct_UEnum_SlateCore_ESlateCheckBoxType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBoxType_MetaData), NewProp_CheckBoxType_MetaData) }; // 4251772425
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedImage = { "UncheckedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, UncheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncheckedImage_MetaData), NewProp_UncheckedImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedHoveredImage = { "UncheckedHoveredImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, UncheckedHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncheckedHoveredImage_MetaData), NewProp_UncheckedHoveredImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedPressedImage = { "UncheckedPressedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, UncheckedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncheckedPressedImage_MetaData), NewProp_UncheckedPressedImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedImage = { "CheckedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, CheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckedImage_MetaData), NewProp_CheckedImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredImage = { "CheckedHoveredImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, CheckedHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckedHoveredImage_MetaData), NewProp_CheckedHoveredImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedImage = { "CheckedPressedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, CheckedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckedPressedImage_MetaData), NewProp_CheckedPressedImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedImage = { "UndeterminedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndeterminedImage_MetaData), NewProp_UndeterminedImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedHoveredImage = { "UndeterminedHoveredImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndeterminedHoveredImage_MetaData), NewProp_UndeterminedHoveredImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedPressedImage = { "UndeterminedPressedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndeterminedPressedImage_MetaData), NewProp_UndeterminedPressedImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundHoveredImage = { "BackgroundHoveredImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, BackgroundHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundHoveredImage_MetaData), NewProp_BackgroundHoveredImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundPressedImage = { "BackgroundPressedImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, BackgroundPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundPressedImage_MetaData), NewProp_BackgroundPressedImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundColor_MetaData), NewProp_ForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredForeground = { "HoveredForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, HoveredForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredForeground_MetaData), NewProp_HoveredForeground_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_PressedForeground = { "PressedForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, PressedForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedForeground_MetaData), NewProp_PressedForeground_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedForeground = { "CheckedForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, CheckedForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckedForeground_MetaData), NewProp_CheckedForeground_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredForeground = { "CheckedHoveredForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, CheckedHoveredForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckedHoveredForeground_MetaData), NewProp_CheckedHoveredForeground_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedForeground = { "CheckedPressedForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, CheckedPressedForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckedPressedForeground_MetaData), NewProp_CheckedPressedForeground_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedForeground = { "UndeterminedForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndeterminedForeground_MetaData), NewProp_UndeterminedForeground_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BorderBackgroundColor = { "BorderBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, BorderBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderBackgroundColor_MetaData), NewProp_BorderBackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSlateSound = { "CheckedSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, CheckedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckedSlateSound_MetaData), NewProp_CheckedSlateSound_MetaData) }; // 1929474689
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSlateSound = { "UncheckedSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, UncheckedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncheckedSlateSound_MetaData), NewProp_UncheckedSlateSound_MetaData) }; // 1929474689
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSlateSound = { "HoveredSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, HoveredSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredSlateSound_MetaData), NewProp_HoveredSlateSound_MetaData) }; // 1929474689
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSound = { "CheckedSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, CheckedSound_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckedSound_MetaData), NewProp_CheckedSound_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSound = { "UncheckedSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, UncheckedSound_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncheckedSound_MetaData), NewProp_UncheckedSound_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSound = { "HoveredSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckBoxStyle, HoveredSound_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredSound_MetaData), NewProp_HoveredSound_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckBoxType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedHoveredImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedPressedImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedHoveredImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedPressedImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundHoveredImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BackgroundPressedImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_ForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_PressedForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedHoveredForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedPressedForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UndeterminedForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_BorderBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSlateSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSlateSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSlateSound,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_CheckedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_UncheckedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewProp_HoveredSound,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"CheckBoxStyle",
	Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::PropPointers),
	sizeof(FCheckBoxStyle),
	alignof(FCheckBoxStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle()
{
	if (!Z_Registration_Info_UScriptStruct_CheckBoxStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CheckBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CheckBoxStyle.InnerSingleton;
}
// End ScriptStruct FCheckBoxStyle

// Begin Enum ETextTransformPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextTransformPolicy;
static UEnum* ETextTransformPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextTransformPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextTransformPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ETextTransformPolicy, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ETextTransformPolicy"));
	}
	return Z_Registration_Info_UEnum_ETextTransformPolicy.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<ETextTransformPolicy>()
{
	return ETextTransformPolicy_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Text transformation policy that can be applied to the text before displaying it.\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "None.Comment", "/** No transform, just use the given text as-is */" },
		{ "None.Name", "ETextTransformPolicy::None" },
		{ "None.ToolTip", "No transform, just use the given text as-is" },
		{ "ToLower.Comment", "/** Convert the text to lowercase for display */" },
		{ "ToLower.Name", "ETextTransformPolicy::ToLower" },
		{ "ToLower.ToolTip", "Convert the text to lowercase for display" },
		{ "ToolTip", "Text transformation policy that can be applied to the text before displaying it." },
		{ "ToUpper.Comment", "/** Convert the text to uppercase for display */" },
		{ "ToUpper.Name", "ETextTransformPolicy::ToUpper" },
		{ "ToUpper.ToolTip", "Convert the text to uppercase for display" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextTransformPolicy::None", (int64)ETextTransformPolicy::None },
		{ "ETextTransformPolicy::ToLower", (int64)ETextTransformPolicy::ToLower },
		{ "ETextTransformPolicy::ToUpper", (int64)ETextTransformPolicy::ToUpper },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"ETextTransformPolicy",
	"ETextTransformPolicy",
	Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_ETextTransformPolicy()
{
	if (!Z_Registration_Info_UEnum_ETextTransformPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextTransformPolicy.InnerSingleton, Z_Construct_UEnum_SlateCore_ETextTransformPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextTransformPolicy.InnerSingleton;
}
// End Enum ETextTransformPolicy

// Begin ScriptStruct FTextBlockStyle
static_assert(std::is_polymorphic<FTextBlockStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FTextBlockStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextBlockStyle;
class UScriptStruct* FTextBlockStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextBlockStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextBlockStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextBlockStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("TextBlockStyle"));
	}
	return Z_Registration_Info_UScriptStruct_TextBlockStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTextBlockStyle>()
{
	return FTextBlockStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextBlockStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an STextBlock\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an STextBlock" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font family and size to be used when displaying this text. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Font family and size to be used when displaying this text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color and opacity of this text */" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The color and opacity of this text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** How much should the shadow be offset? An offset of 0 implies no shadow. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "How much should the shadow be offset? An offset of 0 implies no shadow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color and opacity of the shadow */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The color and opacity of the shadow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The background color of selected text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The background color of selected text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color of highlighted text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The color of highlighted text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightShape_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The shape of highlighted text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The shape of highlighted text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrikeBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush used to draw an strike through the text (if any) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The brush used to draw an strike through the text (if any)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderlineBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush used to draw an underline under the text (if any) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The brush used to draw an underline under the text (if any)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformPolicy_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The Text Transform Policy (defaults to None) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The Text Transform Policy (defaults to None)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverflowPolicy_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Determines what happens to text that is clipped and doesn't fit within the clip rect of a text widget */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Determines what happens to text that is clipped and doesn't fit within the clip rect of a text widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StrikeBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnderlineBrush;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverflowPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverflowPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextBlockStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData), NewProp_ColorAndOpacity_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, ShadowOffset), Z_Construct_UScriptStruct_FDeprecateSlateVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowOffset_MetaData), NewProp_ShadowOffset_MetaData) }; // 3213486062
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowColorAndOpacity_MetaData), NewProp_ShadowColorAndOpacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_SelectedBackgroundColor = { "SelectedBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, SelectedBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedBackgroundColor_MetaData), NewProp_SelectedBackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightColor = { "HighlightColor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, HighlightColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightColor_MetaData), NewProp_HighlightColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightShape = { "HighlightShape", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, HighlightShape), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightShape_MetaData), NewProp_HighlightShape_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_StrikeBrush = { "StrikeBrush", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, StrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrikeBrush_MetaData), NewProp_StrikeBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_UnderlineBrush = { "UnderlineBrush", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, UnderlineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderlineBrush_MetaData), NewProp_UnderlineBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy = { "TransformPolicy", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, TransformPolicy), Z_Construct_UEnum_SlateCore_ETextTransformPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformPolicy_MetaData), NewProp_TransformPolicy_MetaData) }; // 1188934248
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy = { "OverflowPolicy", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextBlockStyle, OverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverflowPolicy_MetaData), NewProp_OverflowPolicy_MetaData) }; // 3185772914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextBlockStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_ShadowColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_SelectedBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_HighlightShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_StrikeBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_UnderlineBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_TransformPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewProp_OverflowPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextBlockStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"TextBlockStyle",
	Z_Construct_UScriptStruct_FTextBlockStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::PropPointers),
	sizeof(FTextBlockStyle),
	alignof(FTextBlockStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextBlockStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle()
{
	if (!Z_Registration_Info_UScriptStruct_TextBlockStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextBlockStyle.InnerSingleton, Z_Construct_UScriptStruct_FTextBlockStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextBlockStyle.InnerSingleton;
}
// End ScriptStruct FTextBlockStyle

// Begin ScriptStruct FButtonStyle
static_assert(std::is_polymorphic<FButtonStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FButtonStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ButtonStyle;
class UScriptStruct* FButtonStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ButtonStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ButtonStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FButtonStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ButtonStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ButtonStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FButtonStyle>()
{
	return FButtonStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FButtonStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SButton\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SButton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Button appearance when the button is not hovered or pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Button appearance when the button is not hovered or pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hovered_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Button appearance when hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Button appearance when hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pressed_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Button appearance when pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Button appearance when pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Disabled_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Button appearance when disabled, by default this is set to an invalid resource when that is the case default disabled drawing is used. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Button appearance when disabled, by default this is set to an invalid resource when that is the case default disabled drawing is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when the button is not hovered or pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when the button is not hovered or pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when pressed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledForeground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when disabled */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when disabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Padding that accounts for the border in the button's background image.\n\x09 * When this is applied, the content of the button should appear flush\n\x09 * with the button's border. Use this padding when the button is not pressed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding that accounts for the border in the button's background image.\nWhen this is applied, the content of the button should appear flush\nwith the button's border. Use this padding when the button is not pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Same as NormalPadding but used when the button is pressed. Allows for moving the content to match\n\x09 * any \"movement\" in the button's border image.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Same as NormalPadding but used when the button is pressed. Allows for moving the content to match\nany \"movement\" in the button's border image." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the button should play when pressed\n\x09 */" },
		{ "DisplayName", "Pressed Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the button should play when pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the button should play when initially hovered over\n\x09 */" },
		{ "DisplayName", "Hovered Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the button should play when initially hovered over" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hovered;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Disabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedSlateSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredSlateSound;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PressedSound;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HoveredSound;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FButtonStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, Normal), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Hovered = { "Hovered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, Hovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hovered_MetaData), NewProp_Hovered_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, Pressed), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pressed_MetaData), NewProp_Pressed_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Disabled = { "Disabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, Disabled), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Disabled_MetaData), NewProp_Disabled_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalForeground = { "NormalForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, NormalForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalForeground_MetaData), NewProp_NormalForeground_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredForeground = { "HoveredForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, HoveredForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredForeground_MetaData), NewProp_HoveredForeground_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedForeground = { "PressedForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, PressedForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedForeground_MetaData), NewProp_PressedForeground_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_DisabledForeground = { "DisabledForeground", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, DisabledForeground), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledForeground_MetaData), NewProp_DisabledForeground_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalPadding = { "NormalPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, NormalPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalPadding_MetaData), NewProp_NormalPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedPadding = { "PressedPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, PressedPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedPadding_MetaData), NewProp_PressedPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSlateSound = { "PressedSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, PressedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedSlateSound_MetaData), NewProp_PressedSlateSound_MetaData) }; // 1929474689
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSlateSound = { "HoveredSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, HoveredSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredSlateSound_MetaData), NewProp_HoveredSlateSound_MetaData) }; // 1929474689
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSound = { "PressedSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, PressedSound_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedSound_MetaData), NewProp_PressedSound_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSound = { "HoveredSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyle, HoveredSound_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredSound_MetaData), NewProp_HoveredSound_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FButtonStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Hovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_Disabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_DisabledForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_NormalPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSlateSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSlateSound,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_PressedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyle_Statics::NewProp_HoveredSound,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FButtonStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ButtonStyle",
	Z_Construct_UScriptStruct_FButtonStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::PropPointers),
	sizeof(FButtonStyle),
	alignof(FButtonStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FButtonStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ButtonStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ButtonStyle.InnerSingleton, Z_Construct_UScriptStruct_FButtonStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ButtonStyle.InnerSingleton;
}
// End ScriptStruct FButtonStyle

// Begin ScriptStruct FComboButtonStyle
static_assert(std::is_polymorphic<FComboButtonStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FComboButtonStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboButtonStyle;
class UScriptStruct* FComboButtonStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboButtonStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboButtonStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboButtonStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ComboButtonStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ComboButtonStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FComboButtonStyle>()
{
	return FComboButtonStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComboButtonStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SComboButton\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SComboButton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our SButton.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The style to use for our SButton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownArrowImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Image to use for the down arrow.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for the down arrow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09  * How much should the shadow be offset for the down arrow? \n\x09  * An offset of 0 implies no shadow. \n\x09  */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "How much should the shadow be offset for the down arrow?\nAn offset of 0 implies no shadow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** \n\x09  * The color and opacity of the shadow for the down arrow.\n\x09  * Only active if ShadowOffset is not (0,0).\n\x09  */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The color and opacity of the shadow for the down arrow.\nOnly active if ShadowOffset is not (0,0)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuBorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Brush to use to add a \"menu border\" around the drop-down content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush to use to add a \"menu border\" around the drop-down content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuBorderPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Padding to use to add a \"menu border\" around the drop-down content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding to use to add a \"menu border\" around the drop-down content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/*\n\x09 * Button Content Padding \n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "* Button Content Padding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownArrowPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/*\n\x09 * Dropdown arrow padding (if a dropdown arrow exists)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "* Dropdown arrow padding (if a dropdown arrow exists)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownArrowAlign_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/*\n\x09 * Dropdown arrow vertical alignment\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "* Dropdown arrow vertical alignment" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DownArrowImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuBorderBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuBorderPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DownArrowPadding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DownArrowAlign;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboButtonStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboButtonStyle, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStyle_MetaData), NewProp_ButtonStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowImage = { "DownArrowImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboButtonStyle, DownArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownArrowImage_MetaData), NewProp_DownArrowImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboButtonStyle, ShadowOffset), Z_Construct_UScriptStruct_FDeprecateSlateVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowOffset_MetaData), NewProp_ShadowOffset_MetaData) }; // 3213486062
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboButtonStyle, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowColorAndOpacity_MetaData), NewProp_ShadowColorAndOpacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderBrush = { "MenuBorderBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboButtonStyle, MenuBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuBorderBrush_MetaData), NewProp_MenuBorderBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderPadding = { "MenuBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboButtonStyle, MenuBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuBorderPadding_MetaData), NewProp_MenuBorderPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ContentPadding = { "ContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboButtonStyle, ContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentPadding_MetaData), NewProp_ContentPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowPadding = { "DownArrowPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboButtonStyle, DownArrowPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownArrowPadding_MetaData), NewProp_DownArrowPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowAlign = { "DownArrowAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboButtonStyle, DownArrowAlign), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownArrowAlign_MetaData), NewProp_DownArrowAlign_MetaData) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboButtonStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ShadowColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_MenuBorderPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_ContentPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewProp_DownArrowAlign,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboButtonStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ComboButtonStyle",
	Z_Construct_UScriptStruct_FComboButtonStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::PropPointers),
	sizeof(FComboButtonStyle),
	alignof(FComboButtonStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboButtonStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboButtonStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ComboButtonStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboButtonStyle.InnerSingleton, Z_Construct_UScriptStruct_FComboButtonStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComboButtonStyle.InnerSingleton;
}
// End ScriptStruct FComboButtonStyle

// Begin ScriptStruct FComboBoxStyle
static_assert(std::is_polymorphic<FComboBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FComboBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboBoxStyle;
class UScriptStruct* FComboBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ComboBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ComboBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FComboBoxStyle>()
{
	return FComboBoxStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComboBoxStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SComboBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SComboBox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our SComboButton\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The style to use for our SComboButton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the button should play when pressed\n\x09 */" },
		{ "DisplayName", "Pressed Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The sound the button should play when pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionChangeSlateSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The Sound to play when the selection is changed\n\x09 */" },
		{ "DisplayName", "Selection Change Sound" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The Sound to play when the selection is changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/*\n\x09 * Button Content Padding \n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "* Button Content Padding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuRowPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/*\n\x09 * Menu Row Padding \n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "* Menu Row Padding" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionChangeSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedSlateSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionChangeSlateSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuRowPadding;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PressedSound;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectionChangeSound;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboBoxStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ComboButtonStyle = { "ComboButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboBoxStyle, ComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboButtonStyle_MetaData), NewProp_ComboButtonStyle_MetaData) }; // 486627810
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSlateSound = { "PressedSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboBoxStyle, PressedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedSlateSound_MetaData), NewProp_PressedSlateSound_MetaData) }; // 1929474689
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSlateSound = { "SelectionChangeSlateSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboBoxStyle, SelectionChangeSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionChangeSlateSound_MetaData), NewProp_SelectionChangeSlateSound_MetaData) }; // 1929474689
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ContentPadding = { "ContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboBoxStyle, ContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentPadding_MetaData), NewProp_ContentPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_MenuRowPadding = { "MenuRowPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboBoxStyle, MenuRowPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuRowPadding_MetaData), NewProp_MenuRowPadding_MetaData) }; // 2986890016
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSound = { "PressedSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboBoxStyle, PressedSound_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedSound_MetaData), NewProp_PressedSound_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSound = { "SelectionChangeSound", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboBoxStyle, SelectionChangeSound_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionChangeSound_MetaData), NewProp_SelectionChangeSound_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboBoxStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ComboButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSlateSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSlateSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_ContentPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_MenuRowPadding,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_PressedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewProp_SelectionChangeSound,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboBoxStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ComboBoxStyle",
	Z_Construct_UScriptStruct_FComboBoxStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::PropPointers),
	sizeof(FComboBoxStyle),
	alignof(FComboBoxStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboBoxStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboBoxStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ComboBoxStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FComboBoxStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComboBoxStyle.InnerSingleton;
}
// End ScriptStruct FComboBoxStyle

// Begin ScriptStruct FHyperlinkStyle
static_assert(std::is_polymorphic<FHyperlinkStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FHyperlinkStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HyperlinkStyle;
class UScriptStruct* FHyperlinkStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HyperlinkStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HyperlinkStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHyperlinkStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("HyperlinkStyle"));
	}
	return Z_Registration_Info_UScriptStruct_HyperlinkStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FHyperlinkStyle>()
{
	return FHyperlinkStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHyperlinkStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SHyperlink\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SHyperlink" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderlineStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Underline style */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Underline style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Text style */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Text style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnderlineStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHyperlinkStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_UnderlineStyle = { "UnderlineStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHyperlinkStyle, UnderlineStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderlineStyle_MetaData), NewProp_UnderlineStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHyperlinkStyle, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextStyle_MetaData), NewProp_TextStyle_MetaData) }; // 4086975916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHyperlinkStyle, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_UnderlineStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_TextStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewProp_Padding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"HyperlinkStyle",
	Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::PropPointers),
	sizeof(FHyperlinkStyle),
	alignof(FHyperlinkStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle()
{
	if (!Z_Registration_Info_UScriptStruct_HyperlinkStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HyperlinkStyle.InnerSingleton, Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HyperlinkStyle.InnerSingleton;
}
// End ScriptStruct FHyperlinkStyle

// Begin ScriptStruct FEditableTextStyle
static_assert(std::is_polymorphic<FEditableTextStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FEditableTextStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditableTextStyle;
class UScriptStruct* FEditableTextStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditableTextStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditableTextStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditableTextStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EditableTextStyle"));
	}
	return Z_Registration_Info_UScriptStruct_EditableTextStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FEditableTextStyle>()
{
	return FEditableTextStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEditableTextStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SEditableText\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SEditableText" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font family and size to be used when displaying this text. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Font family and size to be used when displaying this text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color and opacity of this text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The color and opacity of this text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageSelected_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background image for the selected text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background image for the selected text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageComposing_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background image for the selected text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background image for the selected text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaretImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image brush used for the caret */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image brush used for the caret" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageSelected;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageComposing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CaretImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditableTextStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextStyle, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData), NewProp_ColorAndOpacity_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageSelected = { "BackgroundImageSelected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextStyle, BackgroundImageSelected), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageSelected_MetaData), NewProp_BackgroundImageSelected_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageComposing = { "BackgroundImageComposing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextStyle, BackgroundImageComposing), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageComposing_MetaData), NewProp_BackgroundImageComposing_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_CaretImage = { "CaretImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextStyle, CaretImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaretImage_MetaData), NewProp_CaretImage_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditableTextStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_ColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_BackgroundImageComposing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewProp_CaretImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditableTextStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"EditableTextStyle",
	Z_Construct_UScriptStruct_FEditableTextStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::PropPointers),
	sizeof(FEditableTextStyle),
	alignof(FEditableTextStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEditableTextStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle()
{
	if (!Z_Registration_Info_UScriptStruct_EditableTextStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditableTextStyle.InnerSingleton, Z_Construct_UScriptStruct_FEditableTextStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EditableTextStyle.InnerSingleton;
}
// End ScriptStruct FEditableTextStyle

// Begin ScriptStruct FScrollBarStyle
static_assert(std::is_polymorphic<FScrollBarStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FScrollBarStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScrollBarStyle;
class UScriptStruct* FScrollBarStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScrollBarStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScrollBarStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScrollBarStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ScrollBarStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ScrollBarStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FScrollBarStyle>()
{
	return FScrollBarStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScrollBarStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SScrollBar\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SScrollBar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background image to use when the scrollbar is oriented horizontally */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background image to use when the scrollbar is oriented horizontally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background image to use when the scrollbar is oriented vertically */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background image to use when the scrollbar is oriented vertically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalTopSlotImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The image to use to represent the track above the thumb when the scrollbar is oriented vertically */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The image to use to represent the track above the thumb when the scrollbar is oriented vertically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalTopSlotImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The image to use to represent the track above the thumb when the scrollbar is oriented horizontally */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The image to use to represent the track above the thumb when the scrollbar is oriented horizontally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBottomSlotImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The image to use to represent the track below the thumb when the scrollbar is oriented vertically */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The image to use to represent the track below the thumb when the scrollbar is oriented vertically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBottomSlotImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The image to use to represent the track below the thumb when the scrollbar is oriented horizontally */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The image to use to represent the track below the thumb when the scrollbar is oriented horizontally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the scrollbar thumb is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the scrollbar thumb is in its normal state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the scrollbar thumb is in its hovered state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the scrollbar thumb is in its hovered state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DraggedThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the scrollbar thumb is in its dragged state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the scrollbar thumb is in its dragged state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalBackgroundImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalBackgroundImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalTopSlotImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalTopSlotImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalBottomSlotImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalBottomSlotImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalThumbImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredThumbImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DraggedThumbImage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScrollBarStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBackgroundImage = { "HorizontalBackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBarStyle, HorizontalBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBackgroundImage_MetaData), NewProp_HorizontalBackgroundImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBackgroundImage = { "VerticalBackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBarStyle, VerticalBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalBackgroundImage_MetaData), NewProp_VerticalBackgroundImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalTopSlotImage = { "VerticalTopSlotImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBarStyle, VerticalTopSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalTopSlotImage_MetaData), NewProp_VerticalTopSlotImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalTopSlotImage = { "HorizontalTopSlotImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBarStyle, HorizontalTopSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalTopSlotImage_MetaData), NewProp_HorizontalTopSlotImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBottomSlotImage = { "VerticalBottomSlotImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBarStyle, VerticalBottomSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalBottomSlotImage_MetaData), NewProp_VerticalBottomSlotImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBottomSlotImage = { "HorizontalBottomSlotImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBarStyle, HorizontalBottomSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBottomSlotImage_MetaData), NewProp_HorizontalBottomSlotImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_NormalThumbImage = { "NormalThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBarStyle, NormalThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalThumbImage_MetaData), NewProp_NormalThumbImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HoveredThumbImage = { "HoveredThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBarStyle, HoveredThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredThumbImage_MetaData), NewProp_HoveredThumbImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_DraggedThumbImage = { "DraggedThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBarStyle, DraggedThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DraggedThumbImage_MetaData), NewProp_DraggedThumbImage_MetaData) }; // 1704263518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBarStyle, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScrollBarStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalTopSlotImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalTopSlotImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_VerticalBottomSlotImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HorizontalBottomSlotImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_NormalThumbImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_HoveredThumbImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_DraggedThumbImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScrollBarStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ScrollBarStyle",
	Z_Construct_UScriptStruct_FScrollBarStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::PropPointers),
	sizeof(FScrollBarStyle),
	alignof(FScrollBarStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBarStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScrollBarStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ScrollBarStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScrollBarStyle.InnerSingleton, Z_Construct_UScriptStruct_FScrollBarStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScrollBarStyle.InnerSingleton;
}
// End ScriptStruct FScrollBarStyle

// Begin ScriptStruct FEditableTextBoxStyle
static_assert(std::is_polymorphic<FEditableTextBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FEditableTextBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditableTextBoxStyle;
class UScriptStruct* FEditableTextBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditableTextBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EditableTextBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FEditableTextBoxStyle>()
{
	return FEditableTextBoxStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SEditableTextBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SEditableTextBox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageNormal_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Border background image when the box is not hovered or focused */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Border background image when the box is not hovered or focused" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageHovered_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Border background image when the box is hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Border background image when the box is hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageFocused_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Border background image when the box is focused */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Border background image when the box is focused" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Border background image when the box is read-only */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Border background image when the box is read-only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style of the text block, which dictates the font, color, and shadow options. Style overrides all other properties! */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The style of the text block, which dictates the font, color, and shadow options. Style overrides all other properties!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The foreground color of text. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The foreground color of text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The background color applied to the active background image */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The background color applied to the active background image" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadOnlyForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The read-only foreground color of text in read-only mode. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The read-only foreground color of text in read-only mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusedForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The foreground color of text when the edit box has keyboard focus. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The foreground color of text when the edit box has keyboard focus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HScrollBarPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding around the horizontal scrollbar */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding around the horizontal scrollbar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VScrollBarPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding around the vertical scrollbar */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding around the vertical scrollbar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used for the scrollbars */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used for the scrollbars" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageHovered;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageFocused;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImageReadOnly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReadOnlyForegroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusedForegroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HScrollBarPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VScrollBarPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditableTextBoxStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageNormal = { "BackgroundImageNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageNormal), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageNormal_MetaData), NewProp_BackgroundImageNormal_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageHovered = { "BackgroundImageHovered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageHovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageHovered_MetaData), NewProp_BackgroundImageHovered_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageFocused = { "BackgroundImageFocused", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageFocused), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageFocused_MetaData), NewProp_BackgroundImageFocused_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageReadOnly = { "BackgroundImageReadOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageReadOnly), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImageReadOnly_MetaData), NewProp_BackgroundImageReadOnly_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) }; // 2419385967
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextStyle_MetaData), NewProp_TextStyle_MetaData) }; // 4086975916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundColor_MetaData), NewProp_ForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ReadOnlyForegroundColor = { "ReadOnlyForegroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, ReadOnlyForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadOnlyForegroundColor_MetaData), NewProp_ReadOnlyForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_FocusedForegroundColor = { "FocusedForegroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, FocusedForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusedForegroundColor_MetaData), NewProp_FocusedForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_HScrollBarPadding = { "HScrollBarPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, HScrollBarPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HScrollBarPadding_MetaData), NewProp_HScrollBarPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_VScrollBarPadding = { "VScrollBarPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, VScrollBarPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VScrollBarPadding_MetaData), NewProp_VScrollBarPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableTextBoxStyle, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBarStyle_MetaData), NewProp_ScrollBarStyle_MetaData) }; // 1456599938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageHovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageFocused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundImageReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Padding,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_Font,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_TextStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ReadOnlyForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_FocusedForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_HScrollBarPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_VScrollBarPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewProp_ScrollBarStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"EditableTextBoxStyle",
	Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::PropPointers),
	sizeof(FEditableTextBoxStyle),
	alignof(FEditableTextBoxStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle()
{
	if (!Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EditableTextBoxStyle.InnerSingleton;
}
// End ScriptStruct FEditableTextBoxStyle

// Begin ScriptStruct FInlineEditableTextBlockStyle
static_assert(std::is_polymorphic<FInlineEditableTextBlockStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FInlineEditableTextBlockStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle;
class UScriptStruct* FInlineEditableTextBlockStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("InlineEditableTextBlockStyle"));
	}
	return Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FInlineEditableTextBlockStyle>()
{
	return FInlineEditableTextBlockStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SInlineEditableTextBlock\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SInlineEditableTextBlock" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style of the editable text box, which dictates the font, color, and shadow options. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The style of the editable text box, which dictates the font, color, and shadow options." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style of the text block, which dictates the font, color, and shadow options. Style overrides all other properties! */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The style of the text block, which dictates the font, color, and shadow options. Style overrides all other properties!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditableTextBoxStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInlineEditableTextBlockStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_EditableTextBoxStyle = { "EditableTextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInlineEditableTextBlockStyle, EditableTextBoxStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBoxStyle_MetaData), NewProp_EditableTextBoxStyle_MetaData) }; // 661305945
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInlineEditableTextBlockStyle, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextStyle_MetaData), NewProp_TextStyle_MetaData) }; // 4086975916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_EditableTextBoxStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewProp_TextStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"InlineEditableTextBlockStyle",
	Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::PropPointers),
	sizeof(FInlineEditableTextBlockStyle),
	alignof(FInlineEditableTextBlockStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle()
{
	if (!Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.InnerSingleton, Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle.InnerSingleton;
}
// End ScriptStruct FInlineEditableTextBlockStyle

// Begin ScriptStruct FProgressBarStyle
static_assert(std::is_polymorphic<FProgressBarStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FProgressBarStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressBarStyle;
class UScriptStruct* FProgressBarStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressBarStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressBarStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressBarStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ProgressBarStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressBarStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FProgressBarStyle>()
{
	return FProgressBarStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressBarStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SProgressBar\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SProgressBar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background image to use for the progress bar */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Background image to use for the progress bar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground image to use for the progress bar */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground image to use for the progress bar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarqueeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for marquee mode */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for marquee mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableFillAnimation_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Enables a simple animation on the fill image to give the appearance that progress has not stalled. Disable this if you have a custom material which animates itself. \n\x09 * This requires a pattern in your material or texture to give the appearance of movement.  A solid color will show no movement. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Enables a simple animation on the fill image to give the appearance that progress has not stalled. Disable this if you have a custom material which animates itself.\nThis requires a pattern in your material or texture to give the appearance of movement.  A solid color will show no movement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarqueeImage;
	static void NewProp_EnableFillAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableFillAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressBarStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressBarStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_FillImage = { "FillImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressBarStyle, FillImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillImage_MetaData), NewProp_FillImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_MarqueeImage = { "MarqueeImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressBarStyle, MarqueeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarqueeImage_MetaData), NewProp_MarqueeImage_MetaData) }; // 1704263518
void Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation_SetBit(void* Obj)
{
	((FProgressBarStyle*)Obj)->EnableFillAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation = { "EnableFillAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProgressBarStyle), &Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableFillAnimation_MetaData), NewProp_EnableFillAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressBarStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_FillImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_MarqueeImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewProp_EnableFillAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressBarStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ProgressBarStyle",
	Z_Construct_UScriptStruct_FProgressBarStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::PropPointers),
	sizeof(FProgressBarStyle),
	alignof(FProgressBarStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressBarStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressBarStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressBarStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressBarStyle.InnerSingleton, Z_Construct_UScriptStruct_FProgressBarStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressBarStyle.InnerSingleton;
}
// End ScriptStruct FProgressBarStyle

// Begin ScriptStruct FExpandableAreaStyle
static_assert(std::is_polymorphic<FExpandableAreaStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FExpandableAreaStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpandableAreaStyle;
class UScriptStruct* FExpandableAreaStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandableAreaStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ExpandableAreaStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FExpandableAreaStyle>()
{
	return FExpandableAreaStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SExpandableArea\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SExpandableArea" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollapsedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the area is collapsed */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the area is collapsed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the area is expanded */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the area is expanded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RolloutAnimationSeconds_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** How long the rollout animation lasts */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "How long the rollout animation lasts" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollapsedImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpandedImage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RolloutAnimationSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandableAreaStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_CollapsedImage = { "CollapsedImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpandableAreaStyle, CollapsedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollapsedImage_MetaData), NewProp_CollapsedImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_ExpandedImage = { "ExpandedImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpandableAreaStyle, ExpandedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandedImage_MetaData), NewProp_ExpandedImage_MetaData) }; // 1704263518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_RolloutAnimationSeconds = { "RolloutAnimationSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExpandableAreaStyle, RolloutAnimationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RolloutAnimationSeconds_MetaData), NewProp_RolloutAnimationSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_CollapsedImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_ExpandedImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewProp_RolloutAnimationSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ExpandableAreaStyle",
	Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::PropPointers),
	sizeof(FExpandableAreaStyle),
	alignof(FExpandableAreaStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExpandableAreaStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.InnerSingleton, Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExpandableAreaStyle.InnerSingleton;
}
// End ScriptStruct FExpandableAreaStyle

// Begin ScriptStruct FSearchBoxStyle
static_assert(std::is_polymorphic<FSearchBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSearchBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchBoxStyle;
class UScriptStruct* FSearchBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SearchBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SearchBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSearchBoxStyle>()
{
	return FSearchBoxStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSearchBoxStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SSearchBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SSearchBox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style to use for the text box part of the search box */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style to use for the text box part of the search box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFontInfo_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font to use for the text box part of the search box when a search term is entered*/" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Font to use for the text box part of the search box when a search term is entered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpArrowImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for the search \"up\" arrow */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for the search \"up\" arrow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownArrowImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for the search \"down\" arrow */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for the search \"down\" arrow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlassImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for the search \"glass\" */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for the search \"glass\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for the search \"clear\" button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use for the search \"clear\" button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImagePadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding to use around the images */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding to use around the images" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftAlignButtons_MetaData[] = {
		{ "Comment", "/** If true, buttons appear to the left of the search text */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use LeftAlignSearchResultButtons and LeftAlignGlassImageAndClearButton instead" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "If true, buttons appear to the left of the search text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftAlignSearchResultButtons_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, search result buttons appear to the left of the search text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "If true, search result buttons appear to the left of the search text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftAlignGlassImageAndClearButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, glass image and clear button appear to the left of the search text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "If true, glass image and clear button appear to the left of the search text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextBoxStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveFontInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpArrowImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DownArrowImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlassImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImagePadding;
	static void NewProp_bLeftAlignButtons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftAlignButtons;
	static void NewProp_bLeftAlignSearchResultButtons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftAlignSearchResultButtons;
	static void NewProp_bLeftAlignGlassImageAndClearButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftAlignGlassImageAndClearButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchBoxStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_TextBoxStyle = { "TextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchBoxStyle, TextBoxStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBoxStyle_MetaData), NewProp_TextBoxStyle_MetaData) }; // 661305945
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ActiveFontInfo = { "ActiveFontInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchBoxStyle, ActiveFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveFontInfo_MetaData), NewProp_ActiveFontInfo_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_UpArrowImage = { "UpArrowImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchBoxStyle, UpArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpArrowImage_MetaData), NewProp_UpArrowImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_DownArrowImage = { "DownArrowImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchBoxStyle, DownArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownArrowImage_MetaData), NewProp_DownArrowImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_GlassImage = { "GlassImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchBoxStyle, GlassImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlassImage_MetaData), NewProp_GlassImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ClearImage = { "ClearImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchBoxStyle, ClearImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearImage_MetaData), NewProp_ClearImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ImagePadding = { "ImagePadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchBoxStyle, ImagePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImagePadding_MetaData), NewProp_ImagePadding_MetaData) }; // 2986890016
void Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons_SetBit(void* Obj)
{
	((FSearchBoxStyle*)Obj)->bLeftAlignButtons_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons = { "bLeftAlignButtons", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSearchBoxStyle), &Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftAlignButtons_MetaData), NewProp_bLeftAlignButtons_MetaData) };
void Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons_SetBit(void* Obj)
{
	((FSearchBoxStyle*)Obj)->bLeftAlignSearchResultButtons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons = { "bLeftAlignSearchResultButtons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSearchBoxStyle), &Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftAlignSearchResultButtons_MetaData), NewProp_bLeftAlignSearchResultButtons_MetaData) };
void Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton_SetBit(void* Obj)
{
	((FSearchBoxStyle*)Obj)->bLeftAlignGlassImageAndClearButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton = { "bLeftAlignGlassImageAndClearButton", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSearchBoxStyle), &Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftAlignGlassImageAndClearButton_MetaData), NewProp_bLeftAlignGlassImageAndClearButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_TextBoxStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ActiveFontInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_UpArrowImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_DownArrowImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_GlassImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ClearImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_ImagePadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignSearchResultButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewProp_bLeftAlignGlassImageAndClearButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"SearchBoxStyle",
	Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::PropPointers),
	sizeof(FSearchBoxStyle),
	alignof(FSearchBoxStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSearchBoxStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SearchBoxStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SearchBoxStyle.InnerSingleton;
}
// End ScriptStruct FSearchBoxStyle

// Begin ScriptStruct FSliderStyle
static_assert(std::is_polymorphic<FSliderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSliderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SliderStyle;
class UScriptStruct* FSliderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SliderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SliderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSliderStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SliderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SliderStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSliderStyle>()
{
	return FSliderStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSliderStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSlider\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SSlider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider bar is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider bar is in its normal state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider bar is in its hovered state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider bar is in its hovered state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider bar is in its disabled state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider bar is in its disabled state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider thumb is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider thumb is in its normal state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider thumb is in its hovered state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider thumb is in its hovered state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider thumb is in its disabled state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider thumb is in its disabled state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalBarImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBarImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledBarImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalThumbImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredThumbImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledThumbImage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BarThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSliderStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalBarImage = { "NormalBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliderStyle, NormalBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalBarImage_MetaData), NewProp_NormalBarImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredBarImage = { "HoveredBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliderStyle, HoveredBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredBarImage_MetaData), NewProp_HoveredBarImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledBarImage = { "DisabledBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliderStyle, DisabledBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledBarImage_MetaData), NewProp_DisabledBarImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalThumbImage = { "NormalThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliderStyle, NormalThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalThumbImage_MetaData), NewProp_NormalThumbImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredThumbImage = { "HoveredThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliderStyle, HoveredThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredThumbImage_MetaData), NewProp_HoveredThumbImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledThumbImage = { "DisabledThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliderStyle, DisabledThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledThumbImage_MetaData), NewProp_DisabledThumbImage_MetaData) }; // 1704263518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_BarThickness = { "BarThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliderStyle, BarThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarThickness_MetaData), NewProp_BarThickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSliderStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalBarImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredBarImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledBarImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_NormalThumbImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_HoveredThumbImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_DisabledThumbImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderStyle_Statics::NewProp_BarThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSliderStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"SliderStyle",
	Z_Construct_UScriptStruct_FSliderStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::PropPointers),
	sizeof(FSliderStyle),
	alignof(FSliderStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSliderStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SliderStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SliderStyle.InnerSingleton, Z_Construct_UScriptStruct_FSliderStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SliderStyle.InnerSingleton;
}
// End ScriptStruct FSliderStyle

// Begin ScriptStruct FVolumeControlStyle
static_assert(std::is_polymorphic<FVolumeControlStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FVolumeControlStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumeControlStyle;
class UScriptStruct* FVolumeControlStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumeControlStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumeControlStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumeControlStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("VolumeControlStyle"));
	}
	return Z_Registration_Info_UScriptStruct_VolumeControlStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FVolumeControlStyle>()
{
	return FVolumeControlStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVolumeControlStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SVolumeControl\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SVolumeControl" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style of the volume control slider */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The style of the volume control slider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighVolumeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the volume is set to high */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the volume is set to high" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidVolumeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the volume is set to mid-range */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the volume is set to mid-range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowVolumeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the volume is set to low */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the volume is set to low" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoVolumeImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the volume is set to off */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the volume is set to off" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutedImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the volume is muted */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the volume is muted" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HighVolumeImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MidVolumeImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowVolumeImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoVolumeImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MutedImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumeControlStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_SliderStyle = { "SliderStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeControlStyle, SliderStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderStyle_MetaData), NewProp_SliderStyle_MetaData) }; // 3452507566
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_HighVolumeImage = { "HighVolumeImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeControlStyle, HighVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighVolumeImage_MetaData), NewProp_HighVolumeImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MidVolumeImage = { "MidVolumeImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeControlStyle, MidVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidVolumeImage_MetaData), NewProp_MidVolumeImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_LowVolumeImage = { "LowVolumeImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeControlStyle, LowVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowVolumeImage_MetaData), NewProp_LowVolumeImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_NoVolumeImage = { "NoVolumeImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeControlStyle, NoVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoVolumeImage_MetaData), NewProp_NoVolumeImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MutedImage = { "MutedImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeControlStyle, MutedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutedImage_MetaData), NewProp_MutedImage_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_SliderStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_HighVolumeImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MidVolumeImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_LowVolumeImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_NoVolumeImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewProp_MutedImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"VolumeControlStyle",
	Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::PropPointers),
	sizeof(FVolumeControlStyle),
	alignof(FVolumeControlStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVolumeControlStyle()
{
	if (!Z_Registration_Info_UScriptStruct_VolumeControlStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumeControlStyle.InnerSingleton, Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VolumeControlStyle.InnerSingleton;
}
// End ScriptStruct FVolumeControlStyle

// Begin ScriptStruct FInlineTextImageStyle
static_assert(std::is_polymorphic<FInlineTextImageStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FInlineTextImageStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InlineTextImageStyle;
class UScriptStruct* FInlineTextImageStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InlineTextImageStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InlineTextImageStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInlineTextImageStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("InlineTextImageStyle"));
	}
	return Z_Registration_Info_UScriptStruct_InlineTextImageStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FInlineTextImageStyle>()
{
	return FInlineTextImageStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an inline image used by rich text\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an inline image used by rich text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider thumb is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image to use when the slider thumb is in its normal state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Baseline_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The offset from the bottom of the image height to the baseline. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The offset from the bottom of the image height to the baseline." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_Baseline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInlineTextImageStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInlineTextImageStyle, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 1704263518
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Baseline = { "Baseline", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInlineTextImageStyle, Baseline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Baseline_MetaData), NewProp_Baseline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewProp_Baseline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"InlineTextImageStyle",
	Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::PropPointers),
	sizeof(FInlineTextImageStyle),
	alignof(FInlineTextImageStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInlineTextImageStyle()
{
	if (!Z_Registration_Info_UScriptStruct_InlineTextImageStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InlineTextImageStyle.InnerSingleton, Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InlineTextImageStyle.InnerSingleton;
}
// End ScriptStruct FInlineTextImageStyle

// Begin ScriptStruct FSpinBoxStyle
static_assert(std::is_polymorphic<FSpinBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSpinBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpinBoxStyle;
class UScriptStruct* FSpinBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpinBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpinBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpinBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SpinBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SpinBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSpinBoxStyle>()
{
	return FSpinBoxStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpinBoxStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSpinBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SSpinBox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the background of the spinbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the background of the spinbox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the background of the spinbox when it's hovered over */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the background of the spinbox when it's hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFillBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to fill the spinbox when it's active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to fill the spinbox when it's active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredFillBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to fill the spinbox when it's hovered and not active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to fill the spinbox when it's hovered and not active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveFillBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to fill the spinbox when it's inactive */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to fill the spinbox when it's inactive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowsImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used to draw the spinbox arrows */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used to draw the spinbox arrows" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
		{ "Comment", "/** Color used to draw the spinbox foreground elements */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used to draw the spinbox foreground elements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding to add around the spinbox and its text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding to add around the spinbox and its text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsetPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding between the background brush and the fill brush */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding between the background brush and the fill brush" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveBackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveFillBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredFillBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveFillBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrowsImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InsetPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpinBoxStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpinBoxStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBrush_MetaData), NewProp_BackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveBackgroundBrush = { "ActiveBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpinBoxStyle, ActiveBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveBackgroundBrush_MetaData), NewProp_ActiveBackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredBackgroundBrush = { "HoveredBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpinBoxStyle, HoveredBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredBackgroundBrush_MetaData), NewProp_HoveredBackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveFillBrush = { "ActiveFillBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpinBoxStyle, ActiveFillBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveFillBrush_MetaData), NewProp_ActiveFillBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredFillBrush = { "HoveredFillBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpinBoxStyle, HoveredFillBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredFillBrush_MetaData), NewProp_HoveredFillBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InactiveFillBrush = { "InactiveFillBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpinBoxStyle, InactiveFillBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveFillBrush_MetaData), NewProp_InactiveFillBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ArrowsImage = { "ArrowsImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpinBoxStyle, ArrowsImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowsImage_MetaData), NewProp_ArrowsImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpinBoxStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundColor_MetaData), NewProp_ForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_TextPadding = { "TextPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpinBoxStyle, TextPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextPadding_MetaData), NewProp_TextPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InsetPadding = { "InsetPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpinBoxStyle, InsetPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsetPadding_MetaData), NewProp_InsetPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_BackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveBackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredBackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ActiveFillBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_HoveredFillBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InactiveFillBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ArrowsImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_ForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_TextPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewProp_InsetPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"SpinBoxStyle",
	Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::PropPointers),
	sizeof(FSpinBoxStyle),
	alignof(FSpinBoxStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SpinBoxStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpinBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpinBoxStyle.InnerSingleton;
}
// End ScriptStruct FSpinBoxStyle

// Begin ScriptStruct FSplitterStyle
static_assert(std::is_polymorphic<FSplitterStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSplitterStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplitterStyle;
class UScriptStruct* FSplitterStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplitterStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplitterStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplitterStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SplitterStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SplitterStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSplitterStyle>()
{
	return FSplitterStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSplitterStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSplitter\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SSplitter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleNormalBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the handle in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the handle in its normal state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleHighlightBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the handle in its highlight state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the handle in its highlight state" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandleNormalBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandleHighlightBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplitterStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleNormalBrush = { "HandleNormalBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplitterStyle, HandleNormalBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleNormalBrush_MetaData), NewProp_HandleNormalBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleHighlightBrush = { "HandleHighlightBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplitterStyle, HandleHighlightBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleHighlightBrush_MetaData), NewProp_HandleHighlightBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplitterStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleNormalBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewProp_HandleHighlightBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplitterStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"SplitterStyle",
	Z_Construct_UScriptStruct_FSplitterStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterStyle_Statics::PropPointers),
	sizeof(FSplitterStyle),
	alignof(FSplitterStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplitterStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSplitterStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSplitterStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SplitterStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplitterStyle.InnerSingleton, Z_Construct_UScriptStruct_FSplitterStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SplitterStyle.InnerSingleton;
}
// End ScriptStruct FSplitterStyle

// Begin ScriptStruct FTableViewStyle
static_assert(std::is_polymorphic<FTableViewStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FTableViewStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TableViewStyle;
class UScriptStruct* FTableViewStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TableViewStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TableViewStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableViewStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("TableViewStyle"));
	}
	return Z_Registration_Info_UScriptStruct_TableViewStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTableViewStyle>()
{
	return FTableViewStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTableViewStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an STableView\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an STableView" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a selected row is active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a selected row is active" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableViewStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableViewStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableViewStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBrush_MetaData), NewProp_BackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTableViewStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableViewStyle_Statics::NewProp_BackgroundBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableViewStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableViewStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"TableViewStyle",
	Z_Construct_UScriptStruct_FTableViewStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableViewStyle_Statics::PropPointers),
	sizeof(FTableViewStyle),
	alignof(FTableViewStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableViewStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTableViewStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTableViewStyle()
{
	if (!Z_Registration_Info_UScriptStruct_TableViewStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TableViewStyle.InnerSingleton, Z_Construct_UScriptStruct_FTableViewStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TableViewStyle.InnerSingleton;
}
// End ScriptStruct FTableViewStyle

// Begin ScriptStruct FTableRowStyle
static_assert(std::is_polymorphic<FTableRowStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FTableRowStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TableRowStyle;
class UScriptStruct* FTableRowStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TableRowStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TableRowStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("TableRowStyle"));
	}
	return Z_Registration_Info_UScriptStruct_TableRowStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTableRowStyle>()
{
	return FTableRowStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTableRowStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an STableRow\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an STableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorFocusedBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used as a selector when a row is focused */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used as a selector when a row is focused" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveHoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a selected row is active and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a selected row is active and hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a selected row is active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a selected row is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveHoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a selected row is inactive and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a selected row is inactive and hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a selected row is inactive */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a selected row is inactive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseParentRowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If using parent row brushes */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "If using parent row brushes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRowBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used for the top parent row  */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used for the top parent row" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRowBackgroundHoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used for the top parent row and row is hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used for the top parent row and row is hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvenRowBackgroundHoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when an even row is hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when an even row is hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvenRowBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when an even row is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when an even row is in its normal state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OddRowBackgroundHoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when an odd row is hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when an odd row is hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OddRowBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush to used when an odd row is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush to used when an odd row is in its normal state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Text color used for all rows */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Text color used for all rows" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTextColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Text color used for the selected row */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Text color used for the selected row" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropIndicator_Above_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to provide feedback that a user can drop above the hovered row. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to provide feedback that a user can drop above the hovered row." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropIndicator_Onto_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to provide feedback that a user can drop onto the hovered row. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to provide feedback that a user can drop onto the hovered row." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropIndicator_Below_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to provide feedback that a user can drop below the hovered row. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to provide feedback that a user can drop below the hovered row." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveHighlightedBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a highlighted row is active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a highlighted row is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveHighlightedBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when a highlighted row is inactive and hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when a highlighted row is inactive and hovered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorFocusedBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHoveredBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveHoveredBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveBrush;
	static void NewProp_bUseParentRowBrush_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParentRowBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentRowBackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentRowBackgroundHoveredBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvenRowBackgroundHoveredBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvenRowBackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OddRowBackgroundHoveredBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OddRowBackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropIndicator_Above;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropIndicator_Onto;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropIndicator_Below;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHighlightedBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveHighlightedBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableRowStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectorFocusedBrush = { "SelectorFocusedBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, SelectorFocusedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorFocusedBrush_MetaData), NewProp_SelectorFocusedBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHoveredBrush = { "ActiveHoveredBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, ActiveHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveHoveredBrush_MetaData), NewProp_ActiveHoveredBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveBrush = { "ActiveBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, ActiveBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveBrush_MetaData), NewProp_ActiveBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHoveredBrush = { "InactiveHoveredBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, InactiveHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveHoveredBrush_MetaData), NewProp_InactiveHoveredBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveBrush = { "InactiveBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, InactiveBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveBrush_MetaData), NewProp_InactiveBrush_MetaData) }; // 1704263518
void Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush_SetBit(void* Obj)
{
	((FTableRowStyle*)Obj)->bUseParentRowBrush = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush = { "bUseParentRowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTableRowStyle), &Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseParentRowBrush_MetaData), NewProp_bUseParentRowBrush_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundBrush = { "ParentRowBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, ParentRowBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRowBackgroundBrush_MetaData), NewProp_ParentRowBackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundHoveredBrush = { "ParentRowBackgroundHoveredBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, ParentRowBackgroundHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRowBackgroundHoveredBrush_MetaData), NewProp_ParentRowBackgroundHoveredBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundHoveredBrush = { "EvenRowBackgroundHoveredBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, EvenRowBackgroundHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvenRowBackgroundHoveredBrush_MetaData), NewProp_EvenRowBackgroundHoveredBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundBrush = { "EvenRowBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, EvenRowBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvenRowBackgroundBrush_MetaData), NewProp_EvenRowBackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundHoveredBrush = { "OddRowBackgroundHoveredBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, OddRowBackgroundHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OddRowBackgroundHoveredBrush_MetaData), NewProp_OddRowBackgroundHoveredBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundBrush = { "OddRowBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, OddRowBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OddRowBackgroundBrush_MetaData), NewProp_OddRowBackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, TextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectedTextColor = { "SelectedTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, SelectedTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTextColor_MetaData), NewProp_SelectedTextColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Above = { "DropIndicator_Above", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, DropIndicator_Above), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropIndicator_Above_MetaData), NewProp_DropIndicator_Above_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Onto = { "DropIndicator_Onto", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, DropIndicator_Onto), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropIndicator_Onto_MetaData), NewProp_DropIndicator_Onto_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Below = { "DropIndicator_Below", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, DropIndicator_Below), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropIndicator_Below_MetaData), NewProp_DropIndicator_Below_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHighlightedBrush = { "ActiveHighlightedBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, ActiveHighlightedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveHighlightedBrush_MetaData), NewProp_ActiveHighlightedBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHighlightedBrush = { "InactiveHighlightedBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableRowStyle, InactiveHighlightedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveHighlightedBrush_MetaData), NewProp_InactiveHighlightedBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTableRowStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectorFocusedBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHoveredBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHoveredBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_bUseParentRowBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ParentRowBackgroundHoveredBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundHoveredBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_EvenRowBackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundHoveredBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_OddRowBackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_SelectedTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Above,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Onto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_DropIndicator_Below,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_ActiveHighlightedBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewProp_InactiveHighlightedBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableRowStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"TableRowStyle",
	Z_Construct_UScriptStruct_FTableRowStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::PropPointers),
	sizeof(FTableRowStyle),
	alignof(FTableRowStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTableRowStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle()
{
	if (!Z_Registration_Info_UScriptStruct_TableRowStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TableRowStyle.InnerSingleton, Z_Construct_UScriptStruct_FTableRowStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TableRowStyle.InnerSingleton;
}
// End ScriptStruct FTableRowStyle

// Begin ScriptStruct FTableColumnHeaderStyle
static_assert(std::is_polymorphic<FTableColumnHeaderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FTableColumnHeaderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle;
class UScriptStruct* FTableColumnHeaderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableColumnHeaderStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("TableColumnHeaderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTableColumnHeaderStyle>()
{
	return FTableColumnHeaderStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an STableColumnHeader\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an STableColumnHeader" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortPrimaryAscendingImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used when a column is primarily sorted in ascending order */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used when a column is primarily sorted in ascending order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortPrimaryDescendingImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used when a column is primarily sorted in descending order */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used when a column is primarily sorted in descending order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortSecondaryAscendingImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used when a column is secondarily sorted in ascending order */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used when a column is secondarily sorted in ascending order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortSecondaryDescendingImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used when a column is secondarily sorted in descending order */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used when a column is secondarily sorted in descending order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the header in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the header in its normal state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the header in its hovered state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the header in its hovered state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuDropdownImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image used for the menu drop-down button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Image used for the menu drop-down button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuDropdownNormalBorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the menu drop-down border in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the menu drop-down border in its normal state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuDropdownHoveredBorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the menu drop-down border in its hovered state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the menu drop-down border in its hovered state" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SortPrimaryAscendingImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SortPrimaryDescendingImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SortSecondaryAscendingImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SortSecondaryDescendingImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuDropdownImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuDropdownNormalBorderBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuDropdownHoveredBorderBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableColumnHeaderStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryAscendingImage = { "SortPrimaryAscendingImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableColumnHeaderStyle, SortPrimaryAscendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortPrimaryAscendingImage_MetaData), NewProp_SortPrimaryAscendingImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryDescendingImage = { "SortPrimaryDescendingImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableColumnHeaderStyle, SortPrimaryDescendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortPrimaryDescendingImage_MetaData), NewProp_SortPrimaryDescendingImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryAscendingImage = { "SortSecondaryAscendingImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableColumnHeaderStyle, SortSecondaryAscendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortSecondaryAscendingImage_MetaData), NewProp_SortSecondaryAscendingImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryDescendingImage = { "SortSecondaryDescendingImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableColumnHeaderStyle, SortSecondaryDescendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortSecondaryDescendingImage_MetaData), NewProp_SortSecondaryDescendingImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_NormalBrush = { "NormalBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableColumnHeaderStyle, NormalBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalBrush_MetaData), NewProp_NormalBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_HoveredBrush = { "HoveredBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableColumnHeaderStyle, HoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredBrush_MetaData), NewProp_HoveredBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownImage = { "MenuDropdownImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableColumnHeaderStyle, MenuDropdownImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuDropdownImage_MetaData), NewProp_MenuDropdownImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownNormalBorderBrush = { "MenuDropdownNormalBorderBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableColumnHeaderStyle, MenuDropdownNormalBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuDropdownNormalBorderBrush_MetaData), NewProp_MenuDropdownNormalBorderBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownHoveredBorderBrush = { "MenuDropdownHoveredBorderBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTableColumnHeaderStyle, MenuDropdownHoveredBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuDropdownHoveredBorderBrush_MetaData), NewProp_MenuDropdownHoveredBorderBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryAscendingImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortPrimaryDescendingImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryAscendingImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_SortSecondaryDescendingImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_NormalBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_HoveredBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownNormalBorderBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewProp_MenuDropdownHoveredBorderBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"TableColumnHeaderStyle",
	Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::PropPointers),
	sizeof(FTableColumnHeaderStyle),
	alignof(FTableColumnHeaderStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTableColumnHeaderStyle()
{
	if (!Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.InnerSingleton, Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle.InnerSingleton;
}
// End ScriptStruct FTableColumnHeaderStyle

// Begin ScriptStruct FHeaderRowStyle
static_assert(std::is_polymorphic<FHeaderRowStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FHeaderRowStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeaderRowStyle;
class UScriptStruct* FHeaderRowStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeaderRowStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeaderRowStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeaderRowStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("HeaderRowStyle"));
	}
	return Z_Registration_Info_UScriptStruct_HeaderRowStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FHeaderRowStyle>()
{
	return FHeaderRowStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHeaderRowStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SHeaderRow\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SHeaderRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style of the normal header row columns */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style of the normal header row columns" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastColumnStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style of the last header row column */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style of the last header row column" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnSplitterStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style of the splitter used between the columns */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style of the splitter used between the columns" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitterHandleSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Size of the splitter used between the columns */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Size of the splitter used between the columns" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the header row background */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the header row background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the header row foreground */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used to draw the header row foreground" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSeparatorBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the splitter between the header and the contents below it*/" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the splitter between the header and the contents below it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSeparatorThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColumnStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastColumnStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColumnSplitterStyle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitterHandleSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalSeparatorBrush;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSeparatorThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeaderRowStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnStyle = { "ColumnStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeaderRowStyle, ColumnStyle), Z_Construct_UScriptStruct_FTableColumnHeaderStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnStyle_MetaData), NewProp_ColumnStyle_MetaData) }; // 3352797615
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_LastColumnStyle = { "LastColumnStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeaderRowStyle, LastColumnStyle), Z_Construct_UScriptStruct_FTableColumnHeaderStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastColumnStyle_MetaData), NewProp_LastColumnStyle_MetaData) }; // 3352797615
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnSplitterStyle = { "ColumnSplitterStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeaderRowStyle, ColumnSplitterStyle), Z_Construct_UScriptStruct_FSplitterStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnSplitterStyle_MetaData), NewProp_ColumnSplitterStyle_MetaData) }; // 631735408
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_SplitterHandleSize = { "SplitterHandleSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeaderRowStyle, SplitterHandleSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitterHandleSize_MetaData), NewProp_SplitterHandleSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeaderRowStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBrush_MetaData), NewProp_BackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeaderRowStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundColor_MetaData), NewProp_ForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorBrush = { "HorizontalSeparatorBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeaderRowStyle, HorizontalSeparatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalSeparatorBrush_MetaData), NewProp_HorizontalSeparatorBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorThickness = { "HorizontalSeparatorThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeaderRowStyle, HorizontalSeparatorThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalSeparatorThickness_MetaData), NewProp_HorizontalSeparatorThickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_LastColumnStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ColumnSplitterStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_SplitterHandleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_BackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_ForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewProp_HorizontalSeparatorThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"HeaderRowStyle",
	Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::PropPointers),
	sizeof(FHeaderRowStyle),
	alignof(FHeaderRowStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHeaderRowStyle()
{
	if (!Z_Registration_Info_UScriptStruct_HeaderRowStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeaderRowStyle.InnerSingleton, Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HeaderRowStyle.InnerSingleton;
}
// End ScriptStruct FHeaderRowStyle

// Begin ScriptStruct FDockTabStyle
static_assert(std::is_polymorphic<FDockTabStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FDockTabStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DockTabStyle;
class UScriptStruct* FDockTabStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DockTabStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DockTabStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDockTabStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("DockTabStyle"));
	}
	return Z_Registration_Info_UScriptStruct_DockTabStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FDockTabStyle>()
{
	return FDockTabStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDockTabStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SDockTab\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SDockTab" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used for the close button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used for the close button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when this tab is in its normal state */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when this tab is in its normal state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorOverlayTabBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to overlay a given color onto this tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to overlay a given color onto this tab" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorOverlayIconBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to overlay a given color onto this tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to overlay a given color onto this tab" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when this tab is in the foreground */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when this tab is in the foreground" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used when this tab is hovered over */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used when this tab is hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentAreaBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the SDockingTabStack to draw the content associated with this tab; Documents, Apps, and Tool Panels have different backgrounds */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used by the SDockingTabStack to draw the content associated with this tab; Documents, Apps, and Tool Panels have different backgrounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabWellBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the SDockingTabStack to draw the content associated with this tab; Documents, Apps, and Tool Panels have different backgrounds */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used by the SDockingTabStack to draw the content associated with this tab; Documents, Apps, and Tool Panels have different backgrounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Tab Text Style */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Tab Text Style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding used around this tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding used around this tab" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Icon size for icons in this tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Icon size for icons in this tab" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The width that this tab will overlap with side-by-side tabs */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The width that this tab will overlap with side-by-side tabs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used when flashing this tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used when flashing this tab" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when the tab is not hovered, pressed, active or in the foreground */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when the tab is not hovered, pressed, active or in the foreground" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when hovered */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when Active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when Active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Foreground Color when this tab is the Foreground tab */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Foreground Color when this tab is the Foreground tab" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconBorderPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The padding applied to the border around the tab icon */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "The padding applied to the border around the tab icon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CloseButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOverlayTabBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOverlayIconBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentAreaBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TabWellBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TabTextStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TabPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlapWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlashColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalForegroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredForegroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveForegroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundForegroundColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IconBorderPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDockTabStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_CloseButtonStyle = { "CloseButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, CloseButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseButtonStyle_MetaData), NewProp_CloseButtonStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalBrush = { "NormalBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, NormalBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalBrush_MetaData), NewProp_NormalBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayTabBrush = { "ColorOverlayTabBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, ColorOverlayTabBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorOverlayTabBrush_MetaData), NewProp_ColorOverlayTabBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayIconBrush = { "ColorOverlayIconBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, ColorOverlayIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorOverlayIconBrush_MetaData), NewProp_ColorOverlayIconBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundBrush = { "ForegroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, ForegroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundBrush_MetaData), NewProp_ForegroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredBrush = { "HoveredBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, HoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredBrush_MetaData), NewProp_HoveredBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ContentAreaBrush = { "ContentAreaBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, ContentAreaBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentAreaBrush_MetaData), NewProp_ContentAreaBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabWellBrush = { "TabWellBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, TabWellBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabWellBrush_MetaData), NewProp_TabWellBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabTextStyle = { "TabTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, TabTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabTextStyle_MetaData), NewProp_TabTextStyle_MetaData) }; // 4086975916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabPadding = { "TabPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, TabPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabPadding_MetaData), NewProp_TabPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, IconSize), Z_Construct_UScriptStruct_FDeprecateSlateVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSize_MetaData), NewProp_IconSize_MetaData) }; // 3213486062
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_OverlapWidth = { "OverlapWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, OverlapWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapWidth_MetaData), NewProp_OverlapWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_FlashColor = { "FlashColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, FlashColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashColor_MetaData), NewProp_FlashColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalForegroundColor = { "NormalForegroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, NormalForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalForegroundColor_MetaData), NewProp_NormalForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredForegroundColor = { "HoveredForegroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, HoveredForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredForegroundColor_MetaData), NewProp_HoveredForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ActiveForegroundColor = { "ActiveForegroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, ActiveForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveForegroundColor_MetaData), NewProp_ActiveForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundForegroundColor = { "ForegroundForegroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, ForegroundForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundForegroundColor_MetaData), NewProp_ForegroundForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconBorderPadding = { "IconBorderPadding", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDockTabStyle, IconBorderPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconBorderPadding_MetaData), NewProp_IconBorderPadding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDockTabStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_CloseButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayTabBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ColorOverlayIconBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ContentAreaBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabWellBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabTextStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_TabPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_OverlapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_FlashColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_NormalForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_HoveredForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ActiveForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_ForegroundForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewProp_IconBorderPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDockTabStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"DockTabStyle",
	Z_Construct_UScriptStruct_FDockTabStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::PropPointers),
	sizeof(FDockTabStyle),
	alignof(FDockTabStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDockTabStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDockTabStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDockTabStyle()
{
	if (!Z_Registration_Info_UScriptStruct_DockTabStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DockTabStyle.InnerSingleton, Z_Construct_UScriptStruct_FDockTabStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DockTabStyle.InnerSingleton;
}
// End ScriptStruct FDockTabStyle

// Begin ScriptStruct FScrollBoxStyle
static_assert(std::is_polymorphic<FScrollBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FScrollBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScrollBoxStyle;
class UScriptStruct* FScrollBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScrollBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScrollBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScrollBoxStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ScrollBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ScrollBoxStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FScrollBoxStyle>()
{
	return FScrollBoxStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScrollBoxStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SScrollBox\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SScrollBox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the top shadow of a scrollbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the top shadow of a scrollbox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the bottom shadow of a scrollbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the bottom shadow of a scrollbox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the left shadow of a scrollbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the left shadow of a scrollbox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the right shadow of a scrollbox */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the right shadow of a scrollbox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalScrolledContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding scroll panel that presents the scrolled content */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding scroll panel that presents the scrolled content" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalScrolledContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding scroll panel that presents the scrolled content */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Padding scroll panel that presents the scrolled content" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BarThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopShadowBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BottomShadowBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftShadowBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightShadowBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalScrolledContentPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalScrolledContentPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScrollBoxStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BarThickness = { "BarThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBoxStyle, BarThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarThickness_MetaData), NewProp_BarThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_TopShadowBrush = { "TopShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBoxStyle, TopShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopShadowBrush_MetaData), NewProp_TopShadowBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BottomShadowBrush = { "BottomShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBoxStyle, BottomShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomShadowBrush_MetaData), NewProp_BottomShadowBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_LeftShadowBrush = { "LeftShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBoxStyle, LeftShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftShadowBrush_MetaData), NewProp_LeftShadowBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_RightShadowBrush = { "RightShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBoxStyle, RightShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightShadowBrush_MetaData), NewProp_RightShadowBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_HorizontalScrolledContentPadding = { "HorizontalScrolledContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBoxStyle, HorizontalScrolledContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalScrolledContentPadding_MetaData), NewProp_HorizontalScrolledContentPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_VerticalScrolledContentPadding = { "VerticalScrolledContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBoxStyle, VerticalScrolledContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalScrolledContentPadding_MetaData), NewProp_VerticalScrolledContentPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BarThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_TopShadowBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_BottomShadowBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_LeftShadowBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_RightShadowBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_HorizontalScrolledContentPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewProp_VerticalScrolledContentPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ScrollBoxStyle",
	Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::PropPointers),
	sizeof(FScrollBoxStyle),
	alignof(FScrollBoxStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ScrollBoxStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScrollBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScrollBoxStyle.InnerSingleton;
}
// End ScriptStruct FScrollBoxStyle

// Begin ScriptStruct FScrollBorderStyle
static_assert(std::is_polymorphic<FScrollBorderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FScrollBorderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScrollBorderStyle;
class UScriptStruct* FScrollBorderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScrollBorderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScrollBorderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScrollBorderStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ScrollBorderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ScrollBorderStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FScrollBorderStyle>()
{
	return FScrollBorderStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScrollBorderStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Represents the appearance of an FScrollBorderStyle\n*/" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an FScrollBorderStyle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the top shadow of a scrollborder */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the top shadow of a scrollborder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomShadowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the bottom shadow of a scrollborder */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the bottom shadow of a scrollborder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopShadowBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BottomShadowBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScrollBorderStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_TopShadowBrush = { "TopShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBorderStyle, TopShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopShadowBrush_MetaData), NewProp_TopShadowBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_BottomShadowBrush = { "BottomShadowBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScrollBorderStyle, BottomShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomShadowBrush_MetaData), NewProp_BottomShadowBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_TopShadowBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewProp_BottomShadowBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ScrollBorderStyle",
	Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::PropPointers),
	sizeof(FScrollBorderStyle),
	alignof(FScrollBorderStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScrollBorderStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ScrollBorderStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScrollBorderStyle.InnerSingleton, Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScrollBorderStyle.InnerSingleton;
}
// End ScriptStruct FScrollBorderStyle

// Begin ScriptStruct FWindowStyle
static_assert(std::is_polymorphic<FWindowStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FWindowStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WindowStyle;
class UScriptStruct* FWindowStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WindowStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WindowStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWindowStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("WindowStyle"));
	}
	return Z_Registration_Info_UScriptStruct_WindowStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FWindowStyle>()
{
	return FWindowStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWindowStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SWindow\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SWindow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimizeButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used to draw the window minimize button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used to draw the window minimize button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximizeButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used to draw the window maximize button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used to draw the window maximize button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestoreButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used to draw the window restore button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used to draw the window restore button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used to draw the window close button */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used to draw the window close button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used to draw the window title text */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Style used to draw the window title text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTitleBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window title area when the window is active */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window title area when the window is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveTitleBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window title area when the window is inactive */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window title area when the window is inactive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashTitleBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window title area when the window is flashing */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window title area when the window is flashing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the window background */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used to draw the window background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window outline */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window outline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the window outline */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used to draw the window outline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window border */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window border" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the window border */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Color used to draw the window border" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the window background */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the window background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used to draw the background of child windows */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Brush used to draw the background of child windows" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowCornerRadius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Window corner rounding.  If this value is <= 0 no rounding will occur.   Used for regular, non-maximized windows only (not tool-tips or decorators.) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Window corner rounding.  If this value is <= 0 no rounding will occur.   Used for regular, non-maximized windows only (not tool-tips or decorators.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Window corner rounding.  If this value is <= 0 no rounding will occur.   Used for regular, non-maximized windows only (not tool-tips or decorators.) */" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "Window corner rounding.  If this value is <= 0 no rounding will occur.   Used for regular, non-maximized windows only (not tool-tips or decorators.)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinimizeButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximizeButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RestoreButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CloseButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TitleTextStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveTitleBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveTitleBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlashTitleBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildBackgroundBrush;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WindowCornerRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWindowStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MinimizeButtonStyle = { "MinimizeButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, MinimizeButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimizeButtonStyle_MetaData), NewProp_MinimizeButtonStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MaximizeButtonStyle = { "MaximizeButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, MaximizeButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximizeButtonStyle_MetaData), NewProp_MaximizeButtonStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_RestoreButtonStyle = { "RestoreButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, RestoreButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestoreButtonStyle_MetaData), NewProp_RestoreButtonStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_CloseButtonStyle = { "CloseButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, CloseButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseButtonStyle_MetaData), NewProp_CloseButtonStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_TitleTextStyle = { "TitleTextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, TitleTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleTextStyle_MetaData), NewProp_TitleTextStyle_MetaData) }; // 4086975916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ActiveTitleBrush = { "ActiveTitleBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, ActiveTitleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTitleBrush_MetaData), NewProp_ActiveTitleBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_InactiveTitleBrush = { "InactiveTitleBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, InactiveTitleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveTitleBrush_MetaData), NewProp_InactiveTitleBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_FlashTitleBrush = { "FlashTitleBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, FlashTitleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashTitleBrush_MetaData), NewProp_FlashTitleBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineBrush = { "OutlineBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, OutlineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineBrush_MetaData), NewProp_OutlineBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, OutlineColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineColor_MetaData), NewProp_OutlineColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderBrush = { "BorderBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, BorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderBrush_MetaData), NewProp_BorderBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, BorderColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderColor_MetaData), NewProp_BorderColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundBrush_MetaData), NewProp_BackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ChildBackgroundBrush = { "ChildBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, ChildBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildBackgroundBrush_MetaData), NewProp_ChildBackgroundBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_WindowCornerRadius = { "WindowCornerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, WindowCornerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowCornerRadius_MetaData), NewProp_WindowCornerRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWindowStyle, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderPadding_MetaData), NewProp_BorderPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWindowStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MinimizeButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_MaximizeButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_RestoreButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_CloseButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_TitleTextStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ActiveTitleBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_InactiveTitleBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_FlashTitleBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_OutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_ChildBackgroundBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_WindowCornerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowStyle_Statics::NewProp_BorderPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWindowStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"WindowStyle",
	Z_Construct_UScriptStruct_FWindowStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::PropPointers),
	sizeof(FWindowStyle),
	alignof(FWindowStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWindowStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWindowStyle()
{
	if (!Z_Registration_Info_UScriptStruct_WindowStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WindowStyle.InnerSingleton, Z_Construct_UScriptStruct_FWindowStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WindowStyle.InnerSingleton;
}
// End ScriptStruct FWindowStyle

// Begin Class USlateTypes
void USlateTypes::StaticRegisterNativesUSlateTypes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateTypes);
UClass* Z_Construct_UClass_USlateTypes_NoRegister()
{
	return USlateTypes::StaticClass();
}
struct Z_Construct_UClass_USlateTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** HACK: We need a UClass here or UHT will complain. */" },
		{ "IncludePath", "Styling/SlateTypes.h" },
		{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
		{ "ToolTip", "HACK: We need a UClass here or UHT will complain." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateTypes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USlateTypes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateTypes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateTypes_Statics::ClassParams = {
	&USlateTypes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateTypes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateTypes()
{
	if (!Z_Registration_Info_UClass_USlateTypes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateTypes.OuterSingleton, Z_Construct_UClass_USlateTypes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateTypes.OuterSingleton;
}
template<> SLATECORE_API UClass* StaticClass<USlateTypes>()
{
	return USlateTypes::StaticClass();
}
USlateTypes::USlateTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateTypes);
USlateTypes::~USlateTypes() {}
// End Class USlateTypes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConsumeMouseWheel_StaticEnum, TEXT("EConsumeMouseWheel"), &Z_Registration_Info_UEnum_EConsumeMouseWheel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3236251701U) },
		{ ESlateParentWindowSearchMethod_StaticEnum, TEXT("ESlateParentWindowSearchMethod"), &Z_Registration_Info_UEnum_ESlateParentWindowSearchMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 876815486U) },
		{ ESlateCheckBoxType_StaticEnum, TEXT("ESlateCheckBoxType"), &Z_Registration_Info_UEnum_ESlateCheckBoxType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4251772425U) },
		{ ECheckBoxState_StaticEnum, TEXT("ECheckBoxState"), &Z_Registration_Info_UEnum_ECheckBoxState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 274390384U) },
		{ ETextOverflowPolicy_StaticEnum, TEXT("ETextOverflowPolicy"), &Z_Registration_Info_UEnum_ETextOverflowPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3185772914U) },
		{ ETextTransformPolicy_StaticEnum, TEXT("ETextTransformPolicy"), &Z_Registration_Info_UEnum_ETextTransformPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1188934248U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCheckBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FCheckBoxStyle_Statics::NewStructOps, TEXT("CheckBoxStyle"), &Z_Registration_Info_UScriptStruct_CheckBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCheckBoxStyle), 2899985267U) },
		{ FTextBlockStyle::StaticStruct, Z_Construct_UScriptStruct_FTextBlockStyle_Statics::NewStructOps, TEXT("TextBlockStyle"), &Z_Registration_Info_UScriptStruct_TextBlockStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextBlockStyle), 4086975916U) },
		{ FButtonStyle::StaticStruct, Z_Construct_UScriptStruct_FButtonStyle_Statics::NewStructOps, TEXT("ButtonStyle"), &Z_Registration_Info_UScriptStruct_ButtonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FButtonStyle), 1298854793U) },
		{ FComboButtonStyle::StaticStruct, Z_Construct_UScriptStruct_FComboButtonStyle_Statics::NewStructOps, TEXT("ComboButtonStyle"), &Z_Registration_Info_UScriptStruct_ComboButtonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboButtonStyle), 486627810U) },
		{ FComboBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FComboBoxStyle_Statics::NewStructOps, TEXT("ComboBoxStyle"), &Z_Registration_Info_UScriptStruct_ComboBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboBoxStyle), 594911996U) },
		{ FHyperlinkStyle::StaticStruct, Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewStructOps, TEXT("HyperlinkStyle"), &Z_Registration_Info_UScriptStruct_HyperlinkStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHyperlinkStyle), 3309235846U) },
		{ FEditableTextStyle::StaticStruct, Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewStructOps, TEXT("EditableTextStyle"), &Z_Registration_Info_UScriptStruct_EditableTextStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditableTextStyle), 1313030009U) },
		{ FScrollBarStyle::StaticStruct, Z_Construct_UScriptStruct_FScrollBarStyle_Statics::NewStructOps, TEXT("ScrollBarStyle"), &Z_Registration_Info_UScriptStruct_ScrollBarStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScrollBarStyle), 1456599938U) },
		{ FEditableTextBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FEditableTextBoxStyle_Statics::NewStructOps, TEXT("EditableTextBoxStyle"), &Z_Registration_Info_UScriptStruct_EditableTextBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditableTextBoxStyle), 661305945U) },
		{ FInlineEditableTextBlockStyle::StaticStruct, Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_Statics::NewStructOps, TEXT("InlineEditableTextBlockStyle"), &Z_Registration_Info_UScriptStruct_InlineEditableTextBlockStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInlineEditableTextBlockStyle), 3488104334U) },
		{ FProgressBarStyle::StaticStruct, Z_Construct_UScriptStruct_FProgressBarStyle_Statics::NewStructOps, TEXT("ProgressBarStyle"), &Z_Registration_Info_UScriptStruct_ProgressBarStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressBarStyle), 1245114315U) },
		{ FExpandableAreaStyle::StaticStruct, Z_Construct_UScriptStruct_FExpandableAreaStyle_Statics::NewStructOps, TEXT("ExpandableAreaStyle"), &Z_Registration_Info_UScriptStruct_ExpandableAreaStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpandableAreaStyle), 755514244U) },
		{ FSearchBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FSearchBoxStyle_Statics::NewStructOps, TEXT("SearchBoxStyle"), &Z_Registration_Info_UScriptStruct_SearchBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchBoxStyle), 3808075766U) },
		{ FSliderStyle::StaticStruct, Z_Construct_UScriptStruct_FSliderStyle_Statics::NewStructOps, TEXT("SliderStyle"), &Z_Registration_Info_UScriptStruct_SliderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSliderStyle), 3452507566U) },
		{ FVolumeControlStyle::StaticStruct, Z_Construct_UScriptStruct_FVolumeControlStyle_Statics::NewStructOps, TEXT("VolumeControlStyle"), &Z_Registration_Info_UScriptStruct_VolumeControlStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumeControlStyle), 62223899U) },
		{ FInlineTextImageStyle::StaticStruct, Z_Construct_UScriptStruct_FInlineTextImageStyle_Statics::NewStructOps, TEXT("InlineTextImageStyle"), &Z_Registration_Info_UScriptStruct_InlineTextImageStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInlineTextImageStyle), 1374328148U) },
		{ FSpinBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewStructOps, TEXT("SpinBoxStyle"), &Z_Registration_Info_UScriptStruct_SpinBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpinBoxStyle), 3058619479U) },
		{ FSplitterStyle::StaticStruct, Z_Construct_UScriptStruct_FSplitterStyle_Statics::NewStructOps, TEXT("SplitterStyle"), &Z_Registration_Info_UScriptStruct_SplitterStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplitterStyle), 631735408U) },
		{ FTableViewStyle::StaticStruct, Z_Construct_UScriptStruct_FTableViewStyle_Statics::NewStructOps, TEXT("TableViewStyle"), &Z_Registration_Info_UScriptStruct_TableViewStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTableViewStyle), 608486405U) },
		{ FTableRowStyle::StaticStruct, Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewStructOps, TEXT("TableRowStyle"), &Z_Registration_Info_UScriptStruct_TableRowStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTableRowStyle), 4275354665U) },
		{ FTableColumnHeaderStyle::StaticStruct, Z_Construct_UScriptStruct_FTableColumnHeaderStyle_Statics::NewStructOps, TEXT("TableColumnHeaderStyle"), &Z_Registration_Info_UScriptStruct_TableColumnHeaderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTableColumnHeaderStyle), 3352797615U) },
		{ FHeaderRowStyle::StaticStruct, Z_Construct_UScriptStruct_FHeaderRowStyle_Statics::NewStructOps, TEXT("HeaderRowStyle"), &Z_Registration_Info_UScriptStruct_HeaderRowStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeaderRowStyle), 2347536515U) },
		{ FDockTabStyle::StaticStruct, Z_Construct_UScriptStruct_FDockTabStyle_Statics::NewStructOps, TEXT("DockTabStyle"), &Z_Registration_Info_UScriptStruct_DockTabStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDockTabStyle), 3960598021U) },
		{ FScrollBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewStructOps, TEXT("ScrollBoxStyle"), &Z_Registration_Info_UScriptStruct_ScrollBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScrollBoxStyle), 2349780815U) },
		{ FScrollBorderStyle::StaticStruct, Z_Construct_UScriptStruct_FScrollBorderStyle_Statics::NewStructOps, TEXT("ScrollBorderStyle"), &Z_Registration_Info_UScriptStruct_ScrollBorderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScrollBorderStyle), 421631245U) },
		{ FWindowStyle::StaticStruct, Z_Construct_UScriptStruct_FWindowStyle_Statics::NewStructOps, TEXT("WindowStyle"), &Z_Registration_Info_UScriptStruct_WindowStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWindowStyle), 4286131661U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateTypes, USlateTypes::StaticClass, TEXT("USlateTypes"), &Z_Registration_Info_UClass_USlateTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateTypes), 4292814562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_2213311928(TEXT("/Script/SlateCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
