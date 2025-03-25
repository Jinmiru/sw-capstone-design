// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Public/UI/SynthSlateStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthSlateStyle() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthSlateSizeType();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynthSlateStyle();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Enum ESynthSlateSizeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthSlateSizeType;
static UEnum* ESynthSlateSizeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESynthSlateSizeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESynthSlateSizeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthSlateSizeType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthSlateSizeType"));
	}
	return Z_Registration_Info_UEnum_ESynthSlateSizeType.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<ESynthSlateSizeType>()
{
	return ESynthSlateSizeType_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_ESynthSlateSizeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthSlateSizeType::Count" },
		{ "Large.Name", "ESynthSlateSizeType::Large" },
		{ "Medium.Name", "ESynthSlateSizeType::Medium" },
		{ "ModuleRelativePath", "Public/UI/SynthSlateStyle.h" },
		{ "Small.Name", "ESynthSlateSizeType::Small" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESynthSlateSizeType::Small", (int64)ESynthSlateSizeType::Small },
		{ "ESynthSlateSizeType::Medium", (int64)ESynthSlateSizeType::Medium },
		{ "ESynthSlateSizeType::Large", (int64)ESynthSlateSizeType::Large },
		{ "ESynthSlateSizeType::Count", (int64)ESynthSlateSizeType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthSlateSizeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"ESynthSlateSizeType",
	"ESynthSlateSizeType",
	Z_Construct_UEnum_Synthesis_ESynthSlateSizeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthSlateSizeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthSlateSizeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_ESynthSlateSizeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_ESynthSlateSizeType()
{
	if (!Z_Registration_Info_UEnum_ESynthSlateSizeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthSlateSizeType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthSlateSizeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESynthSlateSizeType.InnerSingleton;
}
// End Enum ESynthSlateSizeType

// Begin Enum ESynthSlateColorStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthSlateColorStyle;
static UEnum* ESynthSlateColorStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESynthSlateColorStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESynthSlateColorStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthSlateColorStyle"));
	}
	return Z_Registration_Info_UEnum_ESynthSlateColorStyle.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<ESynthSlateColorStyle>()
{
	return ESynthSlateColorStyle_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthSlateColorStyle::Count" },
		{ "Dark.Name", "ESynthSlateColorStyle::Dark" },
		{ "Light.Name", "ESynthSlateColorStyle::Light" },
		{ "ModuleRelativePath", "Public/UI/SynthSlateStyle.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESynthSlateColorStyle::Light", (int64)ESynthSlateColorStyle::Light },
		{ "ESynthSlateColorStyle::Dark", (int64)ESynthSlateColorStyle::Dark },
		{ "ESynthSlateColorStyle::Count", (int64)ESynthSlateColorStyle::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"ESynthSlateColorStyle",
	"ESynthSlateColorStyle",
	Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle()
{
	if (!Z_Registration_Info_UEnum_ESynthSlateColorStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthSlateColorStyle.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESynthSlateColorStyle.InnerSingleton;
}
// End Enum ESynthSlateColorStyle

// Begin ScriptStruct FSynthSlateStyle
static_assert(std::is_polymorphic<FSynthSlateStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSynthSlateStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SynthSlateStyle;
class UScriptStruct* FSynthSlateStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SynthSlateStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SynthSlateStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynthSlateStyle, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SynthSlateStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SynthSlateStyle.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSynthSlateStyle>()
{
	return FSynthSlateStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSynthSlateStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of synth UI elements in slate.\n */" },
		{ "ModuleRelativePath", "Public/UI/SynthSlateStyle.h" },
		{ "ToolTip", "Represents the appearance of synth UI elements in slate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeType_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The size of the knobs to use. */" },
		{ "ModuleRelativePath", "Public/UI/SynthSlateStyle.h" },
		{ "ToolTip", "The size of the knobs to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use when the slider bar is in its disabled state */" },
		{ "ModuleRelativePath", "Public/UI/SynthSlateStyle.h" },
		{ "ToolTip", "Image to use when the slider bar is in its disabled state" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SizeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynthSlateStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType = { "SizeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynthSlateStyle, SizeType), Z_Construct_UEnum_Synthesis_ESynthSlateSizeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeType_MetaData), NewProp_SizeType_MetaData) }; // 774343753
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle = { "ColorStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSynthSlateStyle, ColorStyle), Z_Construct_UEnum_Synthesis_ESynthSlateColorStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorStyle_MetaData), NewProp_ColorStyle_MetaData) }; // 4053161957
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_SizeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewProp_ColorStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"SynthSlateStyle",
	Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::PropPointers),
	sizeof(FSynthSlateStyle),
	alignof(FSynthSlateStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSynthSlateStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SynthSlateStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SynthSlateStyle.InnerSingleton, Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SynthSlateStyle.InnerSingleton;
}
// End ScriptStruct FSynthSlateStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESynthSlateSizeType_StaticEnum, TEXT("ESynthSlateSizeType"), &Z_Registration_Info_UEnum_ESynthSlateSizeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 774343753U) },
		{ ESynthSlateColorStyle_StaticEnum, TEXT("ESynthSlateColorStyle"), &Z_Registration_Info_UEnum_ESynthSlateColorStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4053161957U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSynthSlateStyle::StaticStruct, Z_Construct_UScriptStruct_FSynthSlateStyle_Statics::NewStructOps, TEXT("SynthSlateStyle"), &Z_Registration_Info_UScriptStruct_SynthSlateStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSynthSlateStyle), 135726619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h_1463701747(TEXT("/Script/Synthesis"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
