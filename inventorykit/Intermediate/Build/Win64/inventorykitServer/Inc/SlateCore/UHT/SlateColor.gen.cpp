// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateColor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateColorStylingMode();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Enum ESlateColorStylingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateColorStylingMode;
static UEnum* ESlateColorStylingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlateColorStylingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlateColorStylingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateColorStylingMode, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateColorStylingMode"));
	}
	return Z_Registration_Info_UEnum_ESlateColorStylingMode.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<ESlateColorStylingMode>()
{
	return ESlateColorStylingMode_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumerates types of color values that can be held by Slate color.\n *\n * Should we use the specified color? If not, then which color from the style should we use.\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "Enumerates types of color values that can be held by Slate color.\n\nShould we use the specified color? If not, then which color from the style should we use." },
		{ "UseColor_ColorTable.Comment", "/** Color value is stored in the linked color table. */" },
		{ "UseColor_ColorTable.Hidden", "" },
		{ "UseColor_ColorTable.Name", "ESlateColorStylingMode::UseColor_ColorTable" },
		{ "UseColor_ColorTable.ToolTip", "Color value is stored in the linked color table." },
		{ "UseColor_Foreground.Comment", "/** Use the widget's foreground color. */" },
		{ "UseColor_Foreground.DisplayName", "Foreground Color" },
		{ "UseColor_Foreground.Name", "ESlateColorStylingMode::UseColor_Foreground" },
		{ "UseColor_Foreground.ToolTip", "Use the widget's foreground color." },
		{ "UseColor_Foreground_Subdued.Comment", "/** Use the widget's subdued color. */" },
		{ "UseColor_Foreground_Subdued.Hidden", "" },
		{ "UseColor_Foreground_Subdued.Name", "ESlateColorStylingMode::UseColor_Foreground_Subdued" },
		{ "UseColor_Foreground_Subdued.ToolTip", "Use the widget's subdued color." },
		{ "UseColor_Specified.Comment", "/** Color value is stored in this Slate color. */" },
		{ "UseColor_Specified.DisplayName", "Specified Color" },
		{ "UseColor_Specified.Name", "ESlateColorStylingMode::UseColor_Specified" },
		{ "UseColor_Specified.ToolTip", "Color value is stored in this Slate color." },
		{ "UseColor_UseStyle.Comment", "/** Use the foreground color defined in a widget specific style. */" },
		{ "UseColor_UseStyle.Hidden", "" },
		{ "UseColor_UseStyle.Name", "ESlateColorStylingMode::UseColor_UseStyle" },
		{ "UseColor_UseStyle.ToolTip", "Use the foreground color defined in a widget specific style." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlateColorStylingMode::UseColor_Specified", (int64)ESlateColorStylingMode::UseColor_Specified },
		{ "ESlateColorStylingMode::UseColor_ColorTable", (int64)ESlateColorStylingMode::UseColor_ColorTable },
		{ "ESlateColorStylingMode::UseColor_Foreground", (int64)ESlateColorStylingMode::UseColor_Foreground },
		{ "ESlateColorStylingMode::UseColor_Foreground_Subdued", (int64)ESlateColorStylingMode::UseColor_Foreground_Subdued },
		{ "ESlateColorStylingMode::UseColor_UseStyle", (int64)ESlateColorStylingMode::UseColor_UseStyle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"ESlateColorStylingMode",
	"ESlateColorStylingMode",
	Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_ESlateColorStylingMode()
{
	if (!Z_Registration_Info_UEnum_ESlateColorStylingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateColorStylingMode.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlateColorStylingMode.InnerSingleton;
}
// End Enum ESlateColorStylingMode

// Begin ScriptStruct FSlateColor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateColor;
class UScriptStruct* FSlateColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateColor, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateColor"));
	}
	return Z_Registration_Info_UScriptStruct_SlateColor.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateColor>()
{
	return FSlateColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlateColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Slate color can be a directly specified value, or the color can be pulled from a WidgetStyle.\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "A Slate color can be a directly specified value, or the color can be pulled from a WidgetStyle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecifiedColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "// The current specified color; only meaningful when ColorToUse == UseColor_Specified.\n" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "The current specified color; only meaningful when ColorToUse == UseColor_Specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorUseRule_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "// The rule for which color to pick.\n" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "The rule for which color to pick." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecifiedColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorUseRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorUseRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor = { "SpecifiedColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateColor, SpecifiedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecifiedColor_MetaData), NewProp_SpecifiedColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule = { "ColorUseRule", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateColor, ColorUseRule), Z_Construct_UEnum_SlateCore_ESlateColorStylingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorUseRule_MetaData), NewProp_ColorUseRule_MetaData) }; // 443269635
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	&NewStructOps,
	"SlateColor",
	Z_Construct_UScriptStruct_FSlateColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::PropPointers),
	sizeof(FSlateColor),
	alignof(FSlateColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlateColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlateColor()
{
	if (!Z_Registration_Info_UScriptStruct_SlateColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateColor.InnerSingleton, Z_Construct_UScriptStruct_FSlateColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlateColor.InnerSingleton;
}
// End ScriptStruct FSlateColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESlateColorStylingMode_StaticEnum, TEXT("ESlateColorStylingMode"), &Z_Registration_Info_UEnum_ESlateColorStylingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 443269635U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlateColor::StaticStruct, Z_Construct_UScriptStruct_FSlateColor_Statics::NewStructOps, TEXT("SlateColor"), &Z_Registration_Info_UScriptStruct_SlateColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateColor), 2024315916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_1331124220(TEXT("/Script/SlateCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
