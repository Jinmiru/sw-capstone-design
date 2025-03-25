// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Public/UI/SynthKnobStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthKnobStyle() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthKnobSize();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynthKnobStyle();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Enum ESynthKnobSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthKnobSize;
static UEnum* ESynthKnobSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthKnobSize, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthKnobSize"));
	}
	return Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<ESynthKnobSize>()
{
	return ESynthKnobSize_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthKnobSize::Count" },
		{ "Large.Name", "ESynthKnobSize::Large" },
		{ "Medium.Name", "ESynthKnobSize::Medium" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESynthKnobSize::Medium", (int64)ESynthKnobSize::Medium },
		{ "ESynthKnobSize::Large", (int64)ESynthKnobSize::Large },
		{ "ESynthKnobSize::Count", (int64)ESynthKnobSize::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"ESynthKnobSize",
	"ESynthKnobSize",
	Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_ESynthKnobSize()
{
	if (!Z_Registration_Info_UEnum_ESynthKnobSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthKnobSize.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESynthKnobSize.InnerSingleton;
}
// End Enum ESynthKnobSize

// Begin ScriptStruct FSynthKnobStyle
static_assert(std::is_polymorphic<FSynthKnobStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSynthKnobStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SynthKnobStyle;
class UScriptStruct* FSynthKnobStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SynthKnobStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SynthKnobStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynthKnobStyle, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SynthKnobStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SynthKnobStyle.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSynthKnobStyle>()
{
	return FSynthKnobStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSynthKnobStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSynthKnob\n */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Represents the appearance of an SSynthKnob" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LargeKnob_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the large knob\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the large knob" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LargeKnobOverlay_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the dot handle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumKnob_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the medium large knob\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the medium large knob" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumKnobOverlay_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the medium knob dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the medium knob dot handle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValueAngle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the medium knob dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the medium knob dot handle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValueAngle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the medium knob dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the medium knob dot handle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnobSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The size of the knobs to use. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "The size of the knobs to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LargeKnob;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LargeKnobOverlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediumKnob;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediumKnobOverlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValueAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValueAngle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KnobSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KnobSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynthKnobStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob = { "LargeKnob", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynthKnobStyle, LargeKnob), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LargeKnob_MetaData), NewProp_LargeKnob_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay = { "LargeKnobOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynthKnobStyle, LargeKnobOverlay), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LargeKnobOverlay_MetaData), NewProp_LargeKnobOverlay_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob = { "MediumKnob", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynthKnobStyle, MediumKnob), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumKnob_MetaData), NewProp_MediumKnob_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay = { "MediumKnobOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynthKnobStyle, MediumKnobOverlay), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumKnobOverlay_MetaData), NewProp_MediumKnobOverlay_MetaData) }; // 1704263518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle = { "MinValueAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynthKnobStyle, MinValueAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValueAngle_MetaData), NewProp_MinValueAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle = { "MaxValueAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynthKnobStyle, MaxValueAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValueAngle_MetaData), NewProp_MaxValueAngle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize = { "KnobSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynthKnobStyle, KnobSize), Z_Construct_UEnum_Synthesis_ESynthKnobSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnobSize_MetaData), NewProp_KnobSize_MetaData) }; // 3937410478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"SynthKnobStyle",
	Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::PropPointers),
	sizeof(FSynthKnobStyle),
	alignof(FSynthKnobStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSynthKnobStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SynthKnobStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SynthKnobStyle.InnerSingleton, Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SynthKnobStyle.InnerSingleton;
}
// End ScriptStruct FSynthKnobStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESynthKnobSize_StaticEnum, TEXT("ESynthKnobSize"), &Z_Registration_Info_UEnum_ESynthKnobSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3937410478U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSynthKnobStyle::StaticStruct, Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewStructOps, TEXT("SynthKnobStyle"), &Z_Registration_Info_UScriptStruct_SynthKnobStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSynthKnobStyle), 314433972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_3725784139(TEXT("/Script/Synthesis"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
