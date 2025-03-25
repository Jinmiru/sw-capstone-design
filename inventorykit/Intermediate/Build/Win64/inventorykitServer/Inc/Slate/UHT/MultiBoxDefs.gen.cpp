// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/MultiBox/MultiBoxDefs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiBoxDefs() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBlockType();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBoxType();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Enum EMultiBoxType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiBoxType;
static UEnum* EMultiBoxType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMultiBoxType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMultiBoxType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EMultiBoxType, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EMultiBoxType"));
	}
	return Z_Registration_Info_UEnum_EMultiBoxType.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<EMultiBoxType>()
{
	return EMultiBoxType_StaticEnum();
}
struct Z_Construct_UEnum_Slate_EMultiBoxType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ButtonRow.Comment", "/** Buttons arranged in rows, with a maximum number of buttons per row, like a toolbar but can have multiple rows*/" },
		{ "ButtonRow.Name", "EMultiBoxType::ButtonRow" },
		{ "ButtonRow.ToolTip", "Buttons arranged in rows, with a maximum number of buttons per row, like a toolbar but can have multiple rows" },
		{ "Comment", "/**\n * Types of MultiBoxes\n */" },
		{ "Menu.Comment", "/** Vertical menu (pull-down menu, or context menu) */" },
		{ "Menu.Name", "EMultiBoxType::Menu" },
		{ "Menu.ToolTip", "Vertical menu (pull-down menu, or context menu)" },
		{ "MenuBar.Comment", "/** Horizontal menu bar */" },
		{ "MenuBar.Name", "EMultiBoxType::MenuBar" },
		{ "MenuBar.ToolTip", "Horizontal menu bar" },
		{ "ModuleRelativePath", "Public/Framework/MultiBox/MultiBoxDefs.h" },
		{ "SlimHorizontalToolBar.Comment", "/** Toolbar which is a slim version of the toolbar that aligns an icon and a text element horizontally */" },
		{ "SlimHorizontalToolBar.Name", "EMultiBoxType::SlimHorizontalToolBar" },
		{ "SlimHorizontalToolBar.ToolTip", "Toolbar which is a slim version of the toolbar that aligns an icon and a text element horizontally" },
		{ "SlimHorizontalUniformToolBar.Comment", "/** A toolbar with horizontally-oriented buttons that tries to arrange all toolbar items uniformly */" },
		{ "SlimHorizontalUniformToolBar.Name", "EMultiBoxType::SlimHorizontalUniformToolBar" },
		{ "SlimHorizontalUniformToolBar.ToolTip", "A toolbar with horizontally-oriented buttons that tries to arrange all toolbar items uniformly" },
		{ "ToolBar.Comment", "/** Horizontal tool bar */" },
		{ "ToolBar.Name", "EMultiBoxType::ToolBar" },
		{ "ToolBar.ToolTip", "Horizontal tool bar" },
		{ "ToolTip", "Types of MultiBoxes" },
		{ "UniformToolBar.Comment", "/** A toolbar that tries to arrange all toolbar items uniformly (supports only horizontal toolbars for now) */" },
		{ "UniformToolBar.Name", "EMultiBoxType::UniformToolBar" },
		{ "UniformToolBar.ToolTip", "A toolbar that tries to arrange all toolbar items uniformly (supports only horizontal toolbars for now)" },
		{ "VerticalToolBar.Comment", "/** Vertical tool bar */" },
		{ "VerticalToolBar.Name", "EMultiBoxType::VerticalToolBar" },
		{ "VerticalToolBar.ToolTip", "Vertical tool bar" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMultiBoxType::MenuBar", (int64)EMultiBoxType::MenuBar },
		{ "EMultiBoxType::ToolBar", (int64)EMultiBoxType::ToolBar },
		{ "EMultiBoxType::VerticalToolBar", (int64)EMultiBoxType::VerticalToolBar },
		{ "EMultiBoxType::SlimHorizontalToolBar", (int64)EMultiBoxType::SlimHorizontalToolBar },
		{ "EMultiBoxType::UniformToolBar", (int64)EMultiBoxType::UniformToolBar },
		{ "EMultiBoxType::Menu", (int64)EMultiBoxType::Menu },
		{ "EMultiBoxType::ButtonRow", (int64)EMultiBoxType::ButtonRow },
		{ "EMultiBoxType::SlimHorizontalUniformToolBar", (int64)EMultiBoxType::SlimHorizontalUniformToolBar },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EMultiBoxType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"EMultiBoxType",
	"EMultiBoxType",
	Z_Construct_UEnum_Slate_EMultiBoxType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EMultiBoxType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EMultiBoxType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_EMultiBoxType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_EMultiBoxType()
{
	if (!Z_Registration_Info_UEnum_EMultiBoxType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiBoxType.InnerSingleton, Z_Construct_UEnum_Slate_EMultiBoxType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMultiBoxType.InnerSingleton;
}
// End Enum EMultiBoxType

// Begin Enum EMultiBlockType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiBlockType;
static UEnum* EMultiBlockType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMultiBlockType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMultiBlockType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EMultiBlockType, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EMultiBlockType"));
	}
	return Z_Registration_Info_UEnum_EMultiBlockType.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<EMultiBlockType>()
{
	return EMultiBlockType_StaticEnum();
}
struct Z_Construct_UEnum_Slate_EMultiBlockType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ButtonRow.Name", "EMultiBlockType::ButtonRow" },
		{ "Comment", "/**\n * Types of MultiBlocks\n */" },
		{ "EditableText.Name", "EMultiBlockType::EditableText" },
		{ "Heading.Name", "EMultiBlockType::Heading" },
		{ "MenuEntry.Name", "EMultiBlockType::MenuEntry" },
		{ "ModuleRelativePath", "Public/Framework/MultiBox/MultiBoxDefs.h" },
		{ "None.Name", "EMultiBlockType::None" },
		{ "Separator.Name", "EMultiBlockType::Separator" },
		{ "ToolBarButton.Name", "EMultiBlockType::ToolBarButton" },
		{ "ToolBarComboButton.Name", "EMultiBlockType::ToolBarComboButton" },
		{ "ToolTip", "Types of MultiBlocks" },
		{ "Widget.Name", "EMultiBlockType::Widget" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMultiBlockType::None", (int64)EMultiBlockType::None },
		{ "EMultiBlockType::ButtonRow", (int64)EMultiBlockType::ButtonRow },
		{ "EMultiBlockType::EditableText", (int64)EMultiBlockType::EditableText },
		{ "EMultiBlockType::Heading", (int64)EMultiBlockType::Heading },
		{ "EMultiBlockType::MenuEntry", (int64)EMultiBlockType::MenuEntry },
		{ "EMultiBlockType::Separator", (int64)EMultiBlockType::Separator },
		{ "EMultiBlockType::ToolBarButton", (int64)EMultiBlockType::ToolBarButton },
		{ "EMultiBlockType::ToolBarComboButton", (int64)EMultiBlockType::ToolBarComboButton },
		{ "EMultiBlockType::Widget", (int64)EMultiBlockType::Widget },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EMultiBlockType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"EMultiBlockType",
	"EMultiBlockType",
	Z_Construct_UEnum_Slate_EMultiBlockType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EMultiBlockType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EMultiBlockType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_EMultiBlockType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_EMultiBlockType()
{
	if (!Z_Registration_Info_UEnum_EMultiBlockType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiBlockType.InnerSingleton, Z_Construct_UEnum_Slate_EMultiBlockType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMultiBlockType.InnerSingleton;
}
// End Enum EMultiBlockType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_MultiBoxDefs_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMultiBoxType_StaticEnum, TEXT("EMultiBoxType"), &Z_Registration_Info_UEnum_EMultiBoxType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3653144851U) },
		{ EMultiBlockType_StaticEnum, TEXT("EMultiBlockType"), &Z_Registration_Info_UEnum_EMultiBlockType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2624468472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_MultiBoxDefs_h_2257225368(TEXT("/Script/Slate"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_MultiBoxDefs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_MultiBoxDefs_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
