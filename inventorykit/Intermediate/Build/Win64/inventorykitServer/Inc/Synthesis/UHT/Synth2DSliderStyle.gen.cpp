// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Public/UI/Synth2DSliderStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynth2DSliderStyle() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynth2DSliderStyle();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSynth2DSliderStyle
static_assert(std::is_polymorphic<FSynth2DSliderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSynth2DSliderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Synth2DSliderStyle;
class UScriptStruct* FSynth2DSliderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynth2DSliderStyle, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("Synth2DSliderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSynth2DSliderStyle>()
{
	return FSynth2DSliderStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Represents the appearance of an SSynth2DSlider\n*/" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
		{ "ToolTip", "Represents the appearance of an SSynth2DSlider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the 2D handle\n" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
		{ "ToolTip", "Image to use for the 2D handle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the 2D handle\n" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
		{ "ToolTip", "Image to use for the 2D handle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalThumbImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledThumbImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalBarImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledBarImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BarThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynth2DSliderStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage = { "NormalThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynth2DSliderStyle, NormalThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalThumbImage_MetaData), NewProp_NormalThumbImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage = { "DisabledThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynth2DSliderStyle, DisabledThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledThumbImage_MetaData), NewProp_DisabledThumbImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage = { "NormalBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynth2DSliderStyle, NormalBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalBarImage_MetaData), NewProp_NormalBarImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage = { "DisabledBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynth2DSliderStyle, DisabledBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledBarImage_MetaData), NewProp_DisabledBarImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynth2DSliderStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) }; // 1704263518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness = { "BarThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynth2DSliderStyle, BarThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarThickness_MetaData), NewProp_BarThickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"Synth2DSliderStyle",
	Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::PropPointers),
	sizeof(FSynth2DSliderStyle),
	alignof(FSynth2DSliderStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSynth2DSliderStyle()
{
	if (!Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.InnerSingleton, Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.InnerSingleton;
}
// End ScriptStruct FSynth2DSliderStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSynth2DSliderStyle::StaticStruct, Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewStructOps, TEXT("Synth2DSliderStyle"), &Z_Registration_Info_UScriptStruct_Synth2DSliderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSynth2DSliderStyle), 4282380092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h_402894757(TEXT("/Script/Synthesis"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
