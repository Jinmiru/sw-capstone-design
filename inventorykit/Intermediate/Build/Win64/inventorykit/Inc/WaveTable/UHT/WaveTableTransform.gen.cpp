// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveTable/Public/WaveTableTransform.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "WaveTable/Public/WaveTable.h"
#include "WaveTable/Public/WaveTableSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveTableTransform() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
UPackage* Z_Construct_UPackage__Script_WaveTable();
WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableCurve();
WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableData();
WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableSettings();
WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableTransform();
// End Cross Module References

// Begin ScriptStruct FWaveTableTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveTableTransform;
class UScriptStruct* FWaveTableTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveTableTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveTableTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableTransform, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("WaveTableTransform"));
	}
	return Z_Registration_Info_UScriptStruct_WaveTableTransform.OuterSingleton;
}
template<> WAVETABLE_API UScriptStruct* StaticStruct<FWaveTableTransform>()
{
	return FWaveTableTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWaveTableTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The curve to apply when transforming the output. */" },
		{ "DisplayName", "Curve Type" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
		{ "ToolTip", "The curve to apply when transforming the output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scalar_MetaData[] = {
		{ "Category", "Input" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** When curve set to log, exponential or exponential inverse, value is factor 'b' in following equations with output 'y' and input 'x':\n\x09 *  Exponential: y = x * 10^-b(1-x)\n\x09 *  Exponential (Inverse): y = ((x - 1) * 10^(-bx)) + 1\n\x09 *  Logarithmic: y = b * log(x) + 1\n\x09 */" },
		{ "DisplayName", "Exponential Scalar" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
		{ "ToolTip", "When curve set to log, exponential or exponential inverse, value is factor 'b' in following equations with output 'y' and input 'x':\nExponential: y = x * 10^-b(1-x)\nExponential (Inverse): y = ((x - 1) * 10^(-bx)) + 1\nLogarithmic: y = b * log(x) + 1" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveCustom_MetaData[] = {
		{ "Comment", "/** Custom curve to apply if output curve type is set to 'Custom.' */" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
		{ "ToolTip", "Custom curve to apply if output curve type is set to 'Custom.'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveShared_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Asset curve reference to apply if output curve type is set to 'Shared.' */" },
		{ "DisplayName", "Asset" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
		{ "ToolTip", "Asset curve reference to apply if output curve type is set to 'Shared.'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TableData_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Input" },
		{ "ClampMin", "0.001" },
		{ "Comment", "// Duration of curve or file.  Only valid if parent SampleRate is set and SamplingMode is set to 'FixedSampleRate'\n// (If set to 'FixedResolution', duration is variable depending on the resolution (number of samples in the table data)\n// and device's sample rate.\n" },
		{ "DisplayName", "Duration (Sec)" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
		{ "ToolTip", "Duration of curve or file.  Only valid if parent SampleRate is set and SamplingMode is set to 'FixedSampleRate'\n(If set to 'FixedResolution', duration is variable depending on the resolution (number of samples in the table data)\nand device's sample rate." },
		{ "UIMin", "0.001" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveTableSettings_MetaData[] = {
		{ "Category", "WaveTable" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveTable_MetaData[] = {
		{ "Deprecated", "5.3" },
		{ "DeprecationMessage", "WaveTable data now supports multiple bit depths and has moved to TableData" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalValue_MetaData[] = {
		{ "Deprecated", "5.3" },
		{ "DeprecationMessage", "WaveTable data now supports multiple bit depths and FinalValue has moved to TableData" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Curve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scalar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveCustom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveShared;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TableData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveTableSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveTable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WaveTable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalValue;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveTableTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableTransform, Curve), Z_Construct_UEnum_WaveTable_EWaveTableCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) }; // 3813316123
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Scalar = { "Scalar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableTransform, Scalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scalar_MetaData), NewProp_Scalar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveCustom = { "CurveCustom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableTransform, CurveCustom), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveCustom_MetaData), NewProp_CurveCustom_MetaData) }; // 1340883375
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveShared = { "CurveShared", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableTransform, CurveShared), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveShared_MetaData), NewProp_CurveShared_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_TableData = { "TableData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableTransform, TableData), Z_Construct_UScriptStruct_FWaveTableData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TableData_MetaData), NewProp_TableData_MetaData) }; // 2890722187
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableTransform, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTableSettings = { "WaveTableSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableTransform, WaveTableSettings), Z_Construct_UScriptStruct_FWaveTableSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveTableSettings_MetaData), NewProp_WaveTableSettings_MetaData) }; // 1363606618
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable_Inner = { "WaveTable", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable = { "WaveTable", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableTransform, WaveTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveTable_MetaData), NewProp_WaveTable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_FinalValue = { "FinalValue", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableTransform, FinalValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalValue_MetaData), NewProp_FinalValue_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveTableTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Scalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveCustom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveShared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_TableData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Duration,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTableSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_FinalValue,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WaveTable,
	nullptr,
	&NewStructOps,
	"WaveTableTransform",
	Z_Construct_UScriptStruct_FWaveTableTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::PropPointers),
	sizeof(FWaveTableTransform),
	alignof(FWaveTableTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaveTableTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaveTableTransform()
{
	if (!Z_Registration_Info_UScriptStruct_WaveTableTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveTableTransform.InnerSingleton, Z_Construct_UScriptStruct_FWaveTableTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WaveTableTransform.InnerSingleton;
}
// End ScriptStruct FWaveTableTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWaveTableTransform::StaticStruct, Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewStructOps, TEXT("WaveTableTransform"), &Z_Registration_Info_UScriptStruct_WaveTableTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveTableTransform), 3143390815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h_1712007911(TEXT("/Script/WaveTable"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
