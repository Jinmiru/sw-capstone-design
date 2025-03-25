// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioVectorscopePanelStyle.h"
#include "AudioWidgets/Public/AudioWidgetsSlateTypes.h"
#include "AudioWidgets/Public/SampledSequenceVectorViewerStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioVectorscopePanelStyle() {}

// Begin Cross Module References
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin ScriptStruct FAudioVectorscopePanelStyle
static_assert(std::is_polymorphic<FAudioVectorscopePanelStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioVectorscopePanelStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioVectorscopePanelStyle;
class UScriptStruct* FAudioVectorscopePanelStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioVectorscopePanelStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioVectorscopePanelStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioVectorscopePanelStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioVectorscopePanelStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioVectorscopePanelStyle>()
{
	return FAudioVectorscopePanelStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Represents the appearance of an SAudioVectorscopePanelWidget\n*/" },
		{ "ModuleRelativePath", "Public/AudioVectorscopePanelStyle.h" },
		{ "ToolTip", "Represents the appearance of an SAudioVectorscopePanelWidget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueGridStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The value grid style. */" },
		{ "ModuleRelativePath", "Public/AudioVectorscopePanelStyle.h" },
		{ "ToolTip", "The value grid style." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorViewerStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The vector view style. */" },
		{ "ModuleRelativePath", "Public/AudioVectorscopePanelStyle.h" },
		{ "ToolTip", "The vector view style." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueGridStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorViewerStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioVectorscopePanelStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::NewProp_ValueGridStyle = { "ValueGridStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioVectorscopePanelStyle, ValueGridStyle), Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueGridStyle_MetaData), NewProp_ValueGridStyle_MetaData) }; // 2404002347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::NewProp_VectorViewerStyle = { "VectorViewerStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioVectorscopePanelStyle, VectorViewerStyle), Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorViewerStyle_MetaData), NewProp_VectorViewerStyle_MetaData) }; // 3767068764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::NewProp_ValueGridStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::NewProp_VectorViewerStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"AudioVectorscopePanelStyle",
	Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::PropPointers),
	sizeof(FAudioVectorscopePanelStyle),
	alignof(FAudioVectorscopePanelStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle()
{
	if (!Z_Registration_Info_UScriptStruct_AudioVectorscopePanelStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioVectorscopePanelStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioVectorscopePanelStyle.InnerSingleton;
}
// End ScriptStruct FAudioVectorscopePanelStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopePanelStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioVectorscopePanelStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::NewStructOps, TEXT("AudioVectorscopePanelStyle"), &Z_Registration_Info_UScriptStruct_AudioVectorscopePanelStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioVectorscopePanelStyle), 320699454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopePanelStyle_h_3300563990(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopePanelStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopePanelStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
