// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/TriggerThresholdLineStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerThresholdLineStyle() {}

// Begin Cross Module References
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerThresholdLineStyle();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin ScriptStruct FTriggerThresholdLineStyle
static_assert(std::is_polymorphic<FTriggerThresholdLineStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FTriggerThresholdLineStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TriggerThresholdLineStyle;
class UScriptStruct* FTriggerThresholdLineStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TriggerThresholdLineStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TriggerThresholdLineStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriggerThresholdLineStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("TriggerThresholdLineStyle"));
	}
	return Z_Registration_Info_UScriptStruct_TriggerThresholdLineStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FTriggerThresholdLineStyle>()
{
	return FTriggerThresholdLineStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a trigger threshold line\n */" },
		{ "ModuleRelativePath", "Public/TriggerThresholdLineStyle.h" },
		{ "ToolTip", "Represents the appearance of a trigger threshold line" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The trigger threshold line color. */" },
		{ "ModuleRelativePath", "Public/TriggerThresholdLineStyle.h" },
		{ "ToolTip", "The trigger threshold line color." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriggerThresholdLineStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriggerThresholdLineStyle, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::NewProp_LineColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"TriggerThresholdLineStyle",
	Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::PropPointers),
	sizeof(FTriggerThresholdLineStyle),
	alignof(FTriggerThresholdLineStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTriggerThresholdLineStyle()
{
	if (!Z_Registration_Info_UScriptStruct_TriggerThresholdLineStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TriggerThresholdLineStyle.InnerSingleton, Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TriggerThresholdLineStyle.InnerSingleton;
}
// End ScriptStruct FTriggerThresholdLineStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_TriggerThresholdLineStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTriggerThresholdLineStyle::StaticStruct, Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::NewStructOps, TEXT("TriggerThresholdLineStyle"), &Z_Registration_Info_UScriptStruct_TriggerThresholdLineStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTriggerThresholdLineStyle), 2631247069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_TriggerThresholdLineStyle_h_18880988(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_TriggerThresholdLineStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_TriggerThresholdLineStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
