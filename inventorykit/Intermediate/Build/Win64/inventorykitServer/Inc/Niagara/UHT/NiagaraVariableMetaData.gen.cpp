// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraVariableMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraVariableMetaData() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EUnit();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetNamedInputValue();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetSegmentValueOverride();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraInputConditionMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata;
class UScriptStruct* FNiagaraInputConditionMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraInputConditionMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraInputConditionMetadata>()
{
	return FNiagaraInputConditionMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines options for conditionally editing and showing script inputs in the UI. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "Defines options for conditionally editing and showing script inputs in the UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "Category", "Input Condition" },
		{ "Comment", "/** The name of the input to use for matching the target values. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "The name of the input to use for matching the target values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetValues_MetaData[] = {
		{ "Category", "Input Condition" },
		{ "Comment", "/** The list of target values which will satisfy the input condition.  If this is empty it's assumed to be a single value of \"true\" for matching bool inputs. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "The list of target values which will satisfy the input condition.  If this is empty it's assumed to be a single value of \"true\" for matching bool inputs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInputConditionMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInputConditionMetadata, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_Inner = { "TargetValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues = { "TargetValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInputConditionMetadata, TargetValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetValues_MetaData), NewProp_TargetValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraInputConditionMetadata",
	Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers),
	sizeof(FNiagaraInputConditionMetadata),
	alignof(FNiagaraInputConditionMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.InnerSingleton;
}
// End ScriptStruct FNiagaraInputConditionMetadata

// Begin ScriptStruct FNiagaraEnumParameterMetaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData;
class UScriptStruct* FNiagaraEnumParameterMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEnumParameterMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEnumParameterMetaData>()
{
	return FNiagaraEnumParameterMetaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines override data for enum parameters displayed in the UI. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "Defines override data for enum parameters displayed in the UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[] = {
		{ "Category", "Enum Override" },
		{ "Comment", "/** If specified, this name will be used for the given enum entry. Useful for shortening names. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "If specified, this name will be used for the given enum entry. Useful for shortening names." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconOverride_MetaData[] = {
		{ "Category", "Enum Override" },
		{ "Comment", "/** If specified, this icon will be used for the given enum entry. If OverrideName isn't empty, the icon takes priority. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "If specified, this icon will be used for the given enum entry. If OverrideName isn't empty, the icon takes priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseColorOverride_MetaData[] = {
		{ "Category", "Enum Override" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorOverride_MetaData[] = {
		{ "Category", "Enum Override" },
		{ "EditCondition", "bUseColorOverride" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconOverride;
	static void NewProp_bUseColorOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseColorOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEnumParameterMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEnumParameterMetaData, OverrideName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideName_MetaData), NewProp_OverrideName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_IconOverride = { "IconOverride", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEnumParameterMetaData, IconOverride), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconOverride_MetaData), NewProp_IconOverride_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride_SetBit(void* Obj)
{
	((FNiagaraEnumParameterMetaData*)Obj)->bUseColorOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride = { "bUseColorOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraEnumParameterMetaData), &Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseColorOverride_MetaData), NewProp_bUseColorOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_ColorOverride = { "ColorOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEnumParameterMetaData, ColorOverride), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorOverride_MetaData), NewProp_ColorOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_OverrideName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_IconOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_ColorOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEnumParameterMetaData",
	Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::PropPointers),
	sizeof(FNiagaraEnumParameterMetaData),
	alignof(FNiagaraEnumParameterMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.InnerSingleton;
}
// End ScriptStruct FNiagaraEnumParameterMetaData

// Begin Enum ENiagaraInputWidgetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraInputWidgetType;
static UEnum* ENiagaraInputWidgetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraInputWidgetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraInputWidgetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraInputWidgetType"));
	}
	return Z_Registration_Info_UEnum_ENiagaraInputWidgetType.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraInputWidgetType>()
{
	return ENiagaraInputWidgetType_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Comment", "// Default input widget\n" },
		{ "Default.Name", "ENiagaraInputWidgetType::Default" },
		{ "Default.ToolTip", "Default input widget" },
		{ "EnumStyle.Comment", "// (for integer inputs only) A dropdown that behaves like an enum; only allows the exact pre-defined values.\n" },
		{ "EnumStyle.Name", "ENiagaraInputWidgetType::EnumStyle" },
		{ "EnumStyle.ToolTip", "(for integer inputs only) A dropdown that behaves like an enum; only allows the exact pre-defined values." },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "NumericDropdown.Comment", "// a numeric input, but also has a dropdown with named values\n" },
		{ "NumericDropdown.Name", "ENiagaraInputWidgetType::NumericDropdown" },
		{ "NumericDropdown.ToolTip", "a numeric input, but also has a dropdown with named values" },
		{ "SegmentedButtons.Comment", "// (for enum inputs only) Instead of the normal dropdown, the enum values are all displayed in a button grid.\n// This shows all possible values at once, so only makes sense if there are few input values. \n" },
		{ "SegmentedButtons.Name", "ENiagaraInputWidgetType::SegmentedButtons" },
		{ "SegmentedButtons.ToolTip", "(for enum inputs only) Instead of the normal dropdown, the enum values are all displayed in a button grid.\nThis shows all possible values at once, so only makes sense if there are few input values." },
		{ "Slider.Comment", "// slider widget, for float and int type\n" },
		{ "Slider.Name", "ENiagaraInputWidgetType::Slider" },
		{ "Slider.ToolTip", "slider widget, for float and int type" },
		{ "Volume.Comment", "// audio volume slider with mute control, for float input only\n" },
		{ "Volume.Name", "ENiagaraInputWidgetType::Volume" },
		{ "Volume.ToolTip", "audio volume slider with mute control, for float input only" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraInputWidgetType::Default", (int64)ENiagaraInputWidgetType::Default },
		{ "ENiagaraInputWidgetType::Slider", (int64)ENiagaraInputWidgetType::Slider },
		{ "ENiagaraInputWidgetType::Volume", (int64)ENiagaraInputWidgetType::Volume },
		{ "ENiagaraInputWidgetType::NumericDropdown", (int64)ENiagaraInputWidgetType::NumericDropdown },
		{ "ENiagaraInputWidgetType::EnumStyle", (int64)ENiagaraInputWidgetType::EnumStyle },
		{ "ENiagaraInputWidgetType::SegmentedButtons", (int64)ENiagaraInputWidgetType::SegmentedButtons },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraInputWidgetType",
	"ENiagaraInputWidgetType",
	Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType()
{
	if (!Z_Registration_Info_UEnum_ENiagaraInputWidgetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraInputWidgetType.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraInputWidgetType.InnerSingleton;
}
// End Enum ENiagaraInputWidgetType

// Begin ScriptStruct FWidgetNamedInputValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetNamedInputValue;
class UScriptStruct* FWidgetNamedInputValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetNamedInputValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetNamedInputValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetNamedInputValue, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("WidgetNamedInputValue"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetNamedInputValue.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FWidgetNamedInputValue>()
{
	return FWidgetNamedInputValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetNamedInputValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetNamedInputValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetNamedInputValue, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetNamedInputValue, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::NewProp_Tooltip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"WidgetNamedInputValue",
	Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::PropPointers),
	sizeof(FWidgetNamedInputValue),
	alignof(FWidgetNamedInputValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetNamedInputValue()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetNamedInputValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetNamedInputValue.InnerSingleton, Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetNamedInputValue.InnerSingleton;
}
// End ScriptStruct FWidgetNamedInputValue

// Begin ScriptStruct FWidgetSegmentValueOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetSegmentValueOverride;
class UScriptStruct* FWidgetSegmentValueOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetSegmentValueOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetSegmentValueOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSegmentValueOverride, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("WidgetSegmentValueOverride"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetSegmentValueOverride.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FWidgetSegmentValueOverride>()
{
	return FWidgetSegmentValueOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumIndexToOverride_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDisplayName_MetaData[] = {
		{ "Category", "Customization" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameOverride_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "// This will be used as display name instead of the enum value\n" },
		{ "EditCondition", "bOverrideDisplayName" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "This will be used as display name instead of the enum value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayIcon_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "// If set, then this icon will be displayed on the button\n" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "If set, then this icon will be displayed on the button" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnumIndexToOverride;
	static void NewProp_bOverrideDisplayName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayNameOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetSegmentValueOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_EnumIndexToOverride = { "EnumIndexToOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetSegmentValueOverride, EnumIndexToOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumIndexToOverride_MetaData), NewProp_EnumIndexToOverride_MetaData) };
void Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_bOverrideDisplayName_SetBit(void* Obj)
{
	((FWidgetSegmentValueOverride*)Obj)->bOverrideDisplayName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_bOverrideDisplayName = { "bOverrideDisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWidgetSegmentValueOverride), &Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_bOverrideDisplayName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDisplayName_MetaData), NewProp_bOverrideDisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_DisplayNameOverride = { "DisplayNameOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetSegmentValueOverride, DisplayNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayNameOverride_MetaData), NewProp_DisplayNameOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_DisplayIcon = { "DisplayIcon", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetSegmentValueOverride, DisplayIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayIcon_MetaData), NewProp_DisplayIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_EnumIndexToOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_bOverrideDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_DisplayNameOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_DisplayIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"WidgetSegmentValueOverride",
	Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::PropPointers),
	sizeof(FWidgetSegmentValueOverride),
	alignof(FWidgetSegmentValueOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetSegmentValueOverride()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetSegmentValueOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetSegmentValueOverride.InnerSingleton, Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetSegmentValueOverride.InnerSingleton;
}
// End ScriptStruct FWidgetSegmentValueOverride

// Begin ScriptStruct FNiagaraWidgetNamedIntegerInputValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraWidgetNamedIntegerInputValue;
class UScriptStruct* FNiagaraWidgetNamedIntegerInputValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraWidgetNamedIntegerInputValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraWidgetNamedIntegerInputValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraWidgetNamedIntegerInputValue"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraWidgetNamedIntegerInputValue.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraWidgetNamedIntegerInputValue>()
{
	return FNiagaraWidgetNamedIntegerInputValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A struct that serves as display metadata for integer type static switches. Is used in conjuction with the 'EnumStyle' widget customization. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "A struct that serves as display metadata for integer type static switches. Is used in conjuction with the 'EnumStyle' widget customization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "MultiLine", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraWidgetNamedIntegerInputValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraWidgetNamedIntegerInputValue, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraWidgetNamedIntegerInputValue, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::NewProp_Tooltip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraWidgetNamedIntegerInputValue",
	Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::PropPointers),
	sizeof(FNiagaraWidgetNamedIntegerInputValue),
	alignof(FNiagaraWidgetNamedIntegerInputValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraWidgetNamedIntegerInputValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraWidgetNamedIntegerInputValue.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraWidgetNamedIntegerInputValue.InnerSingleton;
}
// End ScriptStruct FNiagaraWidgetNamedIntegerInputValue

// Begin ScriptStruct FNiagaraInputParameterCustomization
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraInputParameterCustomization;
class UScriptStruct* FNiagaraInputParameterCustomization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInputParameterCustomization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraInputParameterCustomization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraInputParameterCustomization"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInputParameterCustomization.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraInputParameterCustomization>()
{
	return FNiagaraInputParameterCustomization::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetType_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "// Changes the widget implementation used for the input\n" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "Changes the widget implementation used for the input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMinValue_MetaData[] = {
		{ "Category", "Customization" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/** min ui value (float and int types only) */" },
		{ "EditCondition", "bHasMinValue" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "min ui value (float and int types only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMaxValue_MetaData[] = {
		{ "Category", "Customization" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/** max ui value (float and int types only) */" },
		{ "EditCondition", "bHasMaxValue" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "max ui value (float and int types only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasStepWidth_MetaData[] = {
		{ "Category", "Customization" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepWidth_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/** Step width used by the input when dragging */" },
		{ "EditCondition", "bHasStepWidth" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "Step width used by the input when dragging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDropdownValues_MetaData[] = {
		{ "Category", "Customization" },
		{ "EditCondition", "WidgetType == ENiagaraInputWidgetType::NumericDropdown" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumStyleDropdownValues_MetaData[] = {
		{ "Category", "Customization" },
		{ "EditCondition", "WidgetType == ENiagaraInputWidgetType::EnumStyle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSegmentsPerRow_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "// Limits the number of buttons shown per row, 0 = unlimited\n" },
		{ "EditCondition", "WidgetType == ENiagaraInputWidgetType::SegmentedButtons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "Limits the number of buttons shown per row, 0 = unlimited" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentValueOverrides_MetaData[] = {
		{ "Category", "Customization" },
		{ "EditCondition", "WidgetType == ENiagaraInputWidgetType::SegmentedButtons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBroadcastValueChangesOnCommitOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetType;
	static void NewProp_bHasMinValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static void NewProp_bHasMaxValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaxValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static void NewProp_bHasStepWidth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStepWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputDropdownValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputDropdownValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnumStyleDropdownValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnumStyleDropdownValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSegmentsPerRow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentValueOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SegmentValueOverrides;
	static void NewProp_bBroadcastValueChangesOnCommitOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBroadcastValueChangesOnCommitOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInputParameterCustomization>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_WidgetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_WidgetType = { "WidgetType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInputParameterCustomization, WidgetType), Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetType_MetaData), NewProp_WidgetType_MetaData) }; // 242153426
void Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasMinValue_SetBit(void* Obj)
{
	((FNiagaraInputParameterCustomization*)Obj)->bHasMinValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasMinValue = { "bHasMinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraInputParameterCustomization), &Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasMinValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMinValue_MetaData), NewProp_bHasMinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInputParameterCustomization, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasMaxValue_SetBit(void* Obj)
{
	((FNiagaraInputParameterCustomization*)Obj)->bHasMaxValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasMaxValue = { "bHasMaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraInputParameterCustomization), &Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasMaxValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMaxValue_MetaData), NewProp_bHasMaxValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInputParameterCustomization, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasStepWidth_SetBit(void* Obj)
{
	((FNiagaraInputParameterCustomization*)Obj)->bHasStepWidth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasStepWidth = { "bHasStepWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraInputParameterCustomization), &Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasStepWidth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasStepWidth_MetaData), NewProp_bHasStepWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_StepWidth = { "StepWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInputParameterCustomization, StepWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepWidth_MetaData), NewProp_StepWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_InputDropdownValues_Inner = { "InputDropdownValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWidgetNamedInputValue, METADATA_PARAMS(0, nullptr) }; // 2515176645
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_InputDropdownValues = { "InputDropdownValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInputParameterCustomization, InputDropdownValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDropdownValues_MetaData), NewProp_InputDropdownValues_MetaData) }; // 2515176645
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_EnumStyleDropdownValues_Inner = { "EnumStyleDropdownValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue, METADATA_PARAMS(0, nullptr) }; // 4049385185
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_EnumStyleDropdownValues = { "EnumStyleDropdownValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInputParameterCustomization, EnumStyleDropdownValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumStyleDropdownValues_MetaData), NewProp_EnumStyleDropdownValues_MetaData) }; // 4049385185
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_MaxSegmentsPerRow = { "MaxSegmentsPerRow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInputParameterCustomization, MaxSegmentsPerRow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSegmentsPerRow_MetaData), NewProp_MaxSegmentsPerRow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_SegmentValueOverrides_Inner = { "SegmentValueOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWidgetSegmentValueOverride, METADATA_PARAMS(0, nullptr) }; // 1696402345
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_SegmentValueOverrides = { "SegmentValueOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInputParameterCustomization, SegmentValueOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentValueOverrides_MetaData), NewProp_SegmentValueOverrides_MetaData) }; // 1696402345
void Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bBroadcastValueChangesOnCommitOnly_SetBit(void* Obj)
{
	((FNiagaraInputParameterCustomization*)Obj)->bBroadcastValueChangesOnCommitOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bBroadcastValueChangesOnCommitOnly = { "bBroadcastValueChangesOnCommitOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraInputParameterCustomization), &Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bBroadcastValueChangesOnCommitOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBroadcastValueChangesOnCommitOnly_MetaData), NewProp_bBroadcastValueChangesOnCommitOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_WidgetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_WidgetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasStepWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_StepWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_InputDropdownValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_InputDropdownValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_EnumStyleDropdownValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_EnumStyleDropdownValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_MaxSegmentsPerRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_SegmentValueOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_SegmentValueOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bBroadcastValueChangesOnCommitOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraInputParameterCustomization",
	Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::PropPointers),
	sizeof(FNiagaraInputParameterCustomization),
	alignof(FNiagaraInputParameterCustomization),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInputParameterCustomization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraInputParameterCustomization.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInputParameterCustomization.InnerSingleton;
}
// End ScriptStruct FNiagaraInputParameterCustomization

// Begin Enum ENiagaraBoolDisplayMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode;
static UEnum* ENiagaraBoolDisplayMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraBoolDisplayMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraBoolDisplayMode>()
{
	return ENiagaraBoolDisplayMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DisplayAlways.Name", "ENiagaraBoolDisplayMode::DisplayAlways" },
		{ "DisplayIfFalse.Name", "ENiagaraBoolDisplayMode::DisplayIfFalse" },
		{ "DisplayIfTrue.Name", "ENiagaraBoolDisplayMode::DisplayIfTrue" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraBoolDisplayMode::DisplayAlways", (int64)ENiagaraBoolDisplayMode::DisplayAlways },
		{ "ENiagaraBoolDisplayMode::DisplayIfTrue", (int64)ENiagaraBoolDisplayMode::DisplayIfTrue },
		{ "ENiagaraBoolDisplayMode::DisplayIfFalse", (int64)ENiagaraBoolDisplayMode::DisplayIfFalse },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraBoolDisplayMode",
	"ENiagaraBoolDisplayMode",
	Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.InnerSingleton;
}
// End Enum ENiagaraBoolDisplayMode

// Begin ScriptStruct FNiagaraBoolParameterMetaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData;
class UScriptStruct* FNiagaraBoolParameterMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBoolParameterMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBoolParameterMetaData>()
{
	return FNiagaraBoolParameterMetaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMode_MetaData[] = {
		{ "Category", "Bool Override" },
		{ "Comment", "/** The mode used determines the cases in which a bool parameter is displayed.\n\x09 *  If set to DisplayAlways, both True and False cases will display. \n\x09 *  If set to DisplayIfTrue, it will only display if the bool evaluates to True.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "The mode used determines the cases in which a bool parameter is displayed.\nIf set to DisplayAlways, both True and False cases will display.\nIf set to DisplayIfTrue, it will only display if the bool evaluates to True." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNameTrue_MetaData[] = {
		{ "Category", "Bool Override" },
		{ "Comment", "/** If specified, this name will be used for the given bool if it evaluates to True. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "If specified, this name will be used for the given bool if it evaluates to True." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNameFalse_MetaData[] = {
		{ "Category", "Bool Override" },
		{ "Comment", "/** If specified, this name will be used for the given bool if it evaluates to False. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "If specified, this name will be used for the given bool if it evaluates to False." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconOverrideTrue_MetaData[] = {
		{ "Category", "Bool Override" },
		{ "Comment", "/** If specified, this icon will be used for the given bool if it evaluates to True. If OverrideName isn't empty, the icon takes priority. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "If specified, this icon will be used for the given bool if it evaluates to True. If OverrideName isn't empty, the icon takes priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconOverrideFalse_MetaData[] = {
		{ "Category", "Bool Override" },
		{ "Comment", "/** If specified, this icon will be used for the given bool if it evaluates to False. If OverrideName isn't empty, the icon takes priority. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "If specified, this icon will be used for the given bool if it evaluates to False. If OverrideName isn't empty, the icon takes priority." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideNameTrue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideNameFalse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconOverrideTrue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconOverrideFalse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBoolParameterMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode = { "DisplayMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraBoolParameterMetaData, DisplayMode), Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayMode_MetaData), NewProp_DisplayMode_MetaData) }; // 824621302
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameTrue = { "OverrideNameTrue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraBoolParameterMetaData, OverrideNameTrue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideNameTrue_MetaData), NewProp_OverrideNameTrue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameFalse = { "OverrideNameFalse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraBoolParameterMetaData, OverrideNameFalse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideNameFalse_MetaData), NewProp_OverrideNameFalse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideTrue = { "IconOverrideTrue", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraBoolParameterMetaData, IconOverrideTrue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconOverrideTrue_MetaData), NewProp_IconOverrideTrue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideFalse = { "IconOverrideFalse", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraBoolParameterMetaData, IconOverrideFalse), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconOverrideFalse_MetaData), NewProp_IconOverrideFalse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameFalse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideFalse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraBoolParameterMetaData",
	Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::PropPointers),
	sizeof(FNiagaraBoolParameterMetaData),
	alignof(FNiagaraBoolParameterMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.InnerSingleton;
}
// End ScriptStruct FNiagaraBoolParameterMetaData

// Begin ScriptStruct FNiagaraVariableMetaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData;
class UScriptStruct* FNiagaraVariableMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableMetaData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableMetaData>()
{
	return FNiagaraVariableMetaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Variable" },
		{ "DisplayName", "Tooltip" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "MultiLine", "TRUE" },
		{ "SkipForCompileHash", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayUnit_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** The unit to display next to input fields for this parameter - note that this is only a visual indicator and does not change any of the calculations. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "The unit to display next to input fields for this parameter - note that this is only a visual indicator and does not change any of the calculations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdvancedDisplay_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares that this input is advanced and should only be visible if expanded inputs have been expanded. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares that this input is advanced and should only be visible if expanded inputs have been expanded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInOverviewStack_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares that this parameter's value will be shown in the overview node if it's set to a local value. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares that this parameter's value will be shown in the overview node if it's set to a local value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlineParameterSortPriority_MetaData[] = {
		{ "Category", "Variable" },
		{ "EditCondition", "bDisplayInOverviewStack" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Affects the sort order for parameters shown inline in the overview. Use a smaller number to push it to the top. Defaults to zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideColor_MetaData[] = {
		{ "Category", "Variable" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "The color used to display a parameter in the overview. If no color is specified, the type color is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlineParameterColorOverride_MetaData[] = {
		{ "Category", "Variable" },
		{ "EditCondition", "bOverrideColor" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "The color used to display a parameter in the overview. If no color is specified, the type color is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlineParameterEnumOverrides_MetaData[] = {
		{ "Category", "Variable" },
		{ "EditCondition", "bDisplayInOverviewStack" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "The index of the entry maps to the index of an enum value. Useful for overriding how an enum parameter is displayed in the overview." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBoolOverride_MetaData[] = {
		{ "Category", "Variable" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Useful to override inline bool visualization in the overview." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlineParameterBoolOverride_MetaData[] = {
		{ "Category", "Variable" },
		{ "EditCondition", "bEnableBoolOverride" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Useful to override inline bool visualization in the overview." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorSortPriority_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Affects the sort order in the editor stacks. Use a smaller number to push it to the top. Defaults to zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInlineEditConditionToggle_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input is used as an inline edit condition toggle, so it should be hidden and edited as a \n\x09""checkbox inline with the input which was designated as its edit condition. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input is used as an inline edit condition toggle, so it should be hidden and edited as a\n      checkbox inline with the input which was designated as its edit condition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditCondition_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input should be conditionally editable based on the value of another input. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input should be conditionally editable based on the value of another input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleCondition_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input should be conditionally visible based on the value of another input. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input should be conditionally visible based on the value of another input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyMetaData_MetaData[] = {
		{ "Category", "Variable" },
		{ "DisplayName", "Property Metadata" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Property Metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentAttribute_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "If set, this attribute is visually displayed as a child under the given parent attribute. Currently, only static switches are supported as parent attributes!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlternateAliases_MetaData[] = {
		{ "Category", "Variable" },
		{ "DisplayName", "Alternate Aliases For Variable" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "List of alternate/previous names for this variable. Note that this is not normally needed if you rename through the UX. However, if you delete and then add a different variable, intending for it to match, you will likely want to add the prior name here.\n\nYou may need to restart and reload assets after making this change to have it take effect on already loaded assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetCustomization_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Changes how the input is displayed. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Changes how the input is displayed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[] = {
		{ "Comment", "/** A unique identifier for the variable that can be used by function call nodes to find renamed variables. */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "A unique identifier for the variable that can be used by function call nodes to find renamed variables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaticSwitch_MetaData[] = {
		{ "Comment", "/** This is a read-only variable that designates if the metadata is tied to a static switch or not.\n\x09 * DEPRECATED: Migrated to UNiagaraScriptVariable::bIsStaticSwitch.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "This is a read-only variable that designates if the metadata is tied to a static switch or not.\nDEPRECATED: Migrated to UNiagaraScriptVariable::bIsStaticSwitch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchDefaultValue_MetaData[] = {
		{ "Comment", "/** The default value to use when creating new pins or stack entries for a static switch parameter\n\x09 * DEPRECATED: Migrated to UNiagaraScriptVariable::StaticSwitchDefaultValue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraVariableMetaData.h" },
		{ "ToolTip", "The default value to use when creating new pins or stack entries for a static switch parameter\nDEPRECATED: Migrated to UNiagaraScriptVariable::StaticSwitchDefaultValue." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayUnit;
	static void NewProp_bAdvancedDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedDisplay;
	static void NewProp_bDisplayInOverviewStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInOverviewStack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InlineParameterSortPriority;
	static void NewProp_bOverrideColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlineParameterColorOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlineParameterEnumOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InlineParameterEnumOverrides;
	static void NewProp_bEnableBoolOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBoolOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlineParameterBoolOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EditorSortPriority;
	static void NewProp_bInlineEditConditionToggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInlineEditConditionToggle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditCondition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisibleCondition;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyMetaData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyMetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PropertyMetaData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlternateAliases_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AlternateAliases;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetCustomization;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
	static void NewProp_bIsStaticSwitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaticSwitch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticSwitchDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_DisplayUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_DisplayUnit = { "DisplayUnit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, DisplayUnit), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayUnit_MetaData), NewProp_DisplayUnit_MetaData) }; // 3716074733
void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_SetBit(void* Obj)
{
	((FNiagaraVariableMetaData*)Obj)->bAdvancedDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay = { "bAdvancedDisplay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdvancedDisplay_MetaData), NewProp_bAdvancedDisplay_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack_SetBit(void* Obj)
{
	((FNiagaraVariableMetaData*)Obj)->bDisplayInOverviewStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack = { "bDisplayInOverviewStack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayInOverviewStack_MetaData), NewProp_bDisplayInOverviewStack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterSortPriority = { "InlineParameterSortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, InlineParameterSortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlineParameterSortPriority_MetaData), NewProp_InlineParameterSortPriority_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor_SetBit(void* Obj)
{
	((FNiagaraVariableMetaData*)Obj)->bOverrideColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor = { "bOverrideColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideColor_MetaData), NewProp_bOverrideColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterColorOverride = { "InlineParameterColorOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, InlineParameterColorOverride), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlineParameterColorOverride_MetaData), NewProp_InlineParameterColorOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides_Inner = { "InlineParameterEnumOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData, METADATA_PARAMS(0, nullptr) }; // 2291550941
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides = { "InlineParameterEnumOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, InlineParameterEnumOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlineParameterEnumOverrides_MetaData), NewProp_InlineParameterEnumOverrides_MetaData) }; // 2291550941
void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride_SetBit(void* Obj)
{
	((FNiagaraVariableMetaData*)Obj)->bEnableBoolOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride = { "bEnableBoolOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBoolOverride_MetaData), NewProp_bEnableBoolOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterBoolOverride = { "InlineParameterBoolOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, InlineParameterBoolOverride), Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlineParameterBoolOverride_MetaData), NewProp_InlineParameterBoolOverride_MetaData) }; // 3751584254
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority = { "EditorSortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, EditorSortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorSortPriority_MetaData), NewProp_EditorSortPriority_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_SetBit(void* Obj)
{
	((FNiagaraVariableMetaData*)Obj)->bInlineEditConditionToggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle = { "bInlineEditConditionToggle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInlineEditConditionToggle_MetaData), NewProp_bInlineEditConditionToggle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition = { "EditCondition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, EditCondition), Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditCondition_MetaData), NewProp_EditCondition_MetaData) }; // 247756637
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition = { "VisibleCondition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, VisibleCondition), Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleCondition_MetaData), NewProp_VisibleCondition_MetaData) }; // 247756637
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_ValueProp = { "PropertyMetaData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_Key_KeyProp = { "PropertyMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData = { "PropertyMetaData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, PropertyMetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyMetaData_MetaData), NewProp_PropertyMetaData_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute = { "ParentAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, ParentAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentAttribute_MetaData), NewProp_ParentAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases_Inner = { "AlternateAliases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases = { "AlternateAliases", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, AlternateAliases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlternateAliases_MetaData), NewProp_AlternateAliases_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_WidgetCustomization = { "WidgetCustomization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, WidgetCustomization), Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetCustomization_MetaData), NewProp_WidgetCustomization_MetaData) }; // 2932080088
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableGuid_MetaData), NewProp_VariableGuid_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_SetBit(void* Obj)
{
	((FNiagaraVariableMetaData*)Obj)->bIsStaticSwitch_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch = { "bIsStaticSwitch", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStaticSwitch_MetaData), NewProp_bIsStaticSwitch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue = { "StaticSwitchDefaultValue", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, StaticSwitchDefaultValue_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticSwitchDefaultValue_MetaData), NewProp_StaticSwitchDefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_DisplayUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_DisplayUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterSortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterColorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterBoolOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_WidgetCustomization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraVariableMetaData",
	Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers),
	sizeof(FNiagaraVariableMetaData),
	alignof(FNiagaraVariableMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.InnerSingleton;
}
// End ScriptStruct FNiagaraVariableMetaData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraInputWidgetType_StaticEnum, TEXT("ENiagaraInputWidgetType"), &Z_Registration_Info_UEnum_ENiagaraInputWidgetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 242153426U) },
		{ ENiagaraBoolDisplayMode_StaticEnum, TEXT("ENiagaraBoolDisplayMode"), &Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 824621302U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraInputConditionMetadata::StaticStruct, Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewStructOps, TEXT("NiagaraInputConditionMetadata"), &Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraInputConditionMetadata), 247756637U) },
		{ FNiagaraEnumParameterMetaData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewStructOps, TEXT("NiagaraEnumParameterMetaData"), &Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEnumParameterMetaData), 2291550941U) },
		{ FWidgetNamedInputValue::StaticStruct, Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::NewStructOps, TEXT("WidgetNamedInputValue"), &Z_Registration_Info_UScriptStruct_WidgetNamedInputValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetNamedInputValue), 2515176645U) },
		{ FWidgetSegmentValueOverride::StaticStruct, Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewStructOps, TEXT("WidgetSegmentValueOverride"), &Z_Registration_Info_UScriptStruct_WidgetSegmentValueOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetSegmentValueOverride), 1696402345U) },
		{ FNiagaraWidgetNamedIntegerInputValue::StaticStruct, Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::NewStructOps, TEXT("NiagaraWidgetNamedIntegerInputValue"), &Z_Registration_Info_UScriptStruct_NiagaraWidgetNamedIntegerInputValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraWidgetNamedIntegerInputValue), 4049385185U) },
		{ FNiagaraInputParameterCustomization::StaticStruct, Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewStructOps, TEXT("NiagaraInputParameterCustomization"), &Z_Registration_Info_UScriptStruct_NiagaraInputParameterCustomization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraInputParameterCustomization), 2932080088U) },
		{ FNiagaraBoolParameterMetaData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewStructOps, TEXT("NiagaraBoolParameterMetaData"), &Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBoolParameterMetaData), 3751584254U) },
		{ FNiagaraVariableMetaData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewStructOps, TEXT("NiagaraVariableMetaData"), &Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableMetaData), 2418414521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_179588675(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
