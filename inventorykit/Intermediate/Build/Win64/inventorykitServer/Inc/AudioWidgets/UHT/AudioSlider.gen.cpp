// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioSlider.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSlider() {}

// Begin Cross Module References
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioFrequencySlider();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioFrequencySlider_NoRegister();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioSlider();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioSlider_NoRegister();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioSliderBase();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioSliderBase_NoRegister();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioVolumeSlider();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioVolumeSlider_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Class UAudioSliderBase Function GetLinValue
struct Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics
{
	struct AudioSliderBase_eventGetLinValue_Parms
	{
		float OutputValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get normalized linear (0 - 1) value from output based on internal lin to output mapping. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "5.1 - GetLinValue is deprecated, please use GetSliderValue instead." },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Get normalized linear (0 - 1) value from output based on internal lin to output mapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::NewProp_OutputValue = { "OutputValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventGetLinValue_Parms, OutputValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputValue_MetaData), NewProp_OutputValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventGetLinValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::NewProp_OutputValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "GetLinValue", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::AudioSliderBase_eventGetLinValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::AudioSliderBase_eventGetLinValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_GetLinValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execGetLinValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OutputValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLinValue(Z_Param_OutputValue);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function GetLinValue

// Begin Class UAudioSliderBase Function GetOutputValue
struct Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics
{
	struct AudioSliderBase_eventGetOutputValue_Parms
	{
		float InSliderValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get output value from normalized linear (0 - 1) based on internal lin to output mapping. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Get output value from normalized linear (0 - 1) based on internal lin to output mapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSliderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSliderValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::NewProp_InSliderValue = { "InSliderValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventGetOutputValue_Parms, InSliderValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSliderValue_MetaData), NewProp_InSliderValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventGetOutputValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::NewProp_InSliderValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "GetOutputValue", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::AudioSliderBase_eventGetOutputValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::AudioSliderBase_eventGetOutputValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_GetOutputValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execGetOutputValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSliderValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOutputValue(Z_Param_InSliderValue);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function GetOutputValue

// Begin Class UAudioSliderBase Function GetSliderValue
struct Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics
{
	struct AudioSliderBase_eventGetSliderValue_Parms
	{
		float OutputValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get normalized linear (0 - 1) slider value from output based on internal lin to output mapping. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Get normalized linear (0 - 1) slider value from output based on internal lin to output mapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::NewProp_OutputValue = { "OutputValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventGetSliderValue_Parms, OutputValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputValue_MetaData), NewProp_OutputValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventGetSliderValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::NewProp_OutputValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "GetSliderValue", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::AudioSliderBase_eventGetSliderValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::AudioSliderBase_eventGetSliderValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_GetSliderValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execGetSliderValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OutputValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSliderValue(Z_Param_OutputValue);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function GetSliderValue

// Begin Class UAudioSliderBase Function SetShowLabelOnlyOnHover
struct Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics
{
	struct AudioSliderBase_eventSetShowLabelOnlyOnHover_Parms
	{
		bool bShowLabelOnlyOnHover;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, show text label only on hover; if false always show label. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "If true, show text label only on hover; if false always show label." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowLabelOnlyOnHover_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowLabelOnlyOnHover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLabelOnlyOnHover;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover_SetBit(void* Obj)
{
	((AudioSliderBase_eventSetShowLabelOnlyOnHover_Parms*)Obj)->bShowLabelOnlyOnHover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover = { "bShowLabelOnlyOnHover", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioSliderBase_eventSetShowLabelOnlyOnHover_Parms), &Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowLabelOnlyOnHover_MetaData), NewProp_bShowLabelOnlyOnHover_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "SetShowLabelOnlyOnHover", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::AudioSliderBase_eventSetShowLabelOnlyOnHover_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::AudioSliderBase_eventSetShowLabelOnlyOnHover_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execSetShowLabelOnlyOnHover)
{
	P_GET_UBOOL(Z_Param_bShowLabelOnlyOnHover);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShowLabelOnlyOnHover(Z_Param_bShowLabelOnlyOnHover);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function SetShowLabelOnlyOnHover

// Begin Class UAudioSliderBase Function SetShowUnitsText
struct Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics
{
	struct AudioSliderBase_eventSetShowUnitsText_Parms
	{
		bool bShowUnitsText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether to show the units text */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Sets whether to show the units text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowUnitsText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowUnitsText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUnitsText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::NewProp_bShowUnitsText_SetBit(void* Obj)
{
	((AudioSliderBase_eventSetShowUnitsText_Parms*)Obj)->bShowUnitsText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::NewProp_bShowUnitsText = { "bShowUnitsText", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioSliderBase_eventSetShowUnitsText_Parms), &Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::NewProp_bShowUnitsText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowUnitsText_MetaData), NewProp_bShowUnitsText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::NewProp_bShowUnitsText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "SetShowUnitsText", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::AudioSliderBase_eventSetShowUnitsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::AudioSliderBase_eventSetShowUnitsText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execSetShowUnitsText)
{
	P_GET_UBOOL(Z_Param_bShowUnitsText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShowUnitsText(Z_Param_bShowUnitsText);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function SetShowUnitsText

// Begin Class UAudioSliderBase Function SetSliderBackgroundColor
struct Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics
{
	struct AudioSliderBase_eventSetSliderBackgroundColor_Parms
	{
		FLinearColor InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the slider background color */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Sets the slider background color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventSetSliderBackgroundColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "SetSliderBackgroundColor", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::AudioSliderBase_eventSetSliderBackgroundColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::AudioSliderBase_eventSetSliderBackgroundColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execSetSliderBackgroundColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSliderBackgroundColor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function SetSliderBackgroundColor

// Begin Class UAudioSliderBase Function SetSliderBarColor
struct Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics
{
	struct AudioSliderBase_eventSetSliderBarColor_Parms
	{
		FLinearColor InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the slider bar color */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Sets the slider bar color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventSetSliderBarColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "SetSliderBarColor", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::AudioSliderBase_eventSetSliderBarColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::AudioSliderBase_eventSetSliderBarColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execSetSliderBarColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSliderBarColor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function SetSliderBarColor

// Begin Class UAudioSliderBase Function SetSliderThumbColor
struct Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics
{
	struct AudioSliderBase_eventSetSliderThumbColor_Parms
	{
		FLinearColor InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the slider thumb color */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Sets the slider thumb color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventSetSliderThumbColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "SetSliderThumbColor", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::AudioSliderBase_eventSetSliderThumbColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::AudioSliderBase_eventSetSliderThumbColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execSetSliderThumbColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSliderThumbColor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function SetSliderThumbColor

// Begin Class UAudioSliderBase Function SetTextLabelBackgroundColor
struct Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics
{
	struct AudioSliderBase_eventSetTextLabelBackgroundColor_Parms
	{
		FSlateColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the label background color */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Sets the label background color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventSetTextLabelBackgroundColor_Parms, InColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(0, nullptr) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "SetTextLabelBackgroundColor", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::AudioSliderBase_eventSetTextLabelBackgroundColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::AudioSliderBase_eventSetTextLabelBackgroundColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execSetTextLabelBackgroundColor)
{
	P_GET_STRUCT(FSlateColor,Z_Param_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextLabelBackgroundColor(Z_Param_InColor);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function SetTextLabelBackgroundColor

// Begin Class UAudioSliderBase Function SetUnitsText
struct Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics
{
	struct AudioSliderBase_eventSetUnitsText_Parms
	{
		FText Units;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the units text */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Sets the units text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Units;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventSetUnitsText_Parms, Units), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Units_MetaData), NewProp_Units_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::NewProp_Units,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "SetUnitsText", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::AudioSliderBase_eventSetUnitsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::AudioSliderBase_eventSetUnitsText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_SetUnitsText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execSetUnitsText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Units);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUnitsText(Z_Param_Units);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function SetUnitsText

// Begin Class UAudioSliderBase Function SetUnitsTextReadOnly
struct Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics
{
	struct AudioSliderBase_eventSetUnitsTextReadOnly_Parms
	{
		bool bIsReadOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether the units text is read only*/" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Sets whether the units text is read only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
{
	((AudioSliderBase_eventSetUnitsTextReadOnly_Parms*)Obj)->bIsReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioSliderBase_eventSetUnitsTextReadOnly_Parms), &Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReadOnly_MetaData), NewProp_bIsReadOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "SetUnitsTextReadOnly", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::AudioSliderBase_eventSetUnitsTextReadOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::AudioSliderBase_eventSetUnitsTextReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execSetUnitsTextReadOnly)
{
	P_GET_UBOOL(Z_Param_bIsReadOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUnitsTextReadOnly(Z_Param_bIsReadOnly);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function SetUnitsTextReadOnly

// Begin Class UAudioSliderBase Function SetValueTextReadOnly
struct Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics
{
	struct AudioSliderBase_eventSetValueTextReadOnly_Parms
	{
		bool bIsReadOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether the value text is read only*/" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Sets whether the value text is read only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
{
	((AudioSliderBase_eventSetValueTextReadOnly_Parms*)Obj)->bIsReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioSliderBase_eventSetValueTextReadOnly_Parms), &Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReadOnly_MetaData), NewProp_bIsReadOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "SetValueTextReadOnly", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::AudioSliderBase_eventSetValueTextReadOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::AudioSliderBase_eventSetValueTextReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execSetValueTextReadOnly)
{
	P_GET_UBOOL(Z_Param_bIsReadOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueTextReadOnly(Z_Param_bIsReadOnly);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function SetValueTextReadOnly

// Begin Class UAudioSliderBase Function SetWidgetBackgroundColor
struct Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics
{
	struct AudioSliderBase_eventSetWidgetBackgroundColor_Parms
	{
		FLinearColor InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the widget background color */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Sets the widget background color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSliderBase_eventSetWidgetBackgroundColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSliderBase, nullptr, "SetWidgetBackgroundColor", nullptr, nullptr, Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::AudioSliderBase_eventSetWidgetBackgroundColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::AudioSliderBase_eventSetWidgetBackgroundColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioSliderBase::execSetWidgetBackgroundColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetBackgroundColor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAudioSliderBase Function SetWidgetBackgroundColor

// Begin Class UAudioSliderBase
void UAudioSliderBase::StaticRegisterNativesUAudioSliderBase()
{
	UClass* Class = UAudioSliderBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLinValue", &UAudioSliderBase::execGetLinValue },
		{ "GetOutputValue", &UAudioSliderBase::execGetOutputValue },
		{ "GetSliderValue", &UAudioSliderBase::execGetSliderValue },
		{ "SetShowLabelOnlyOnHover", &UAudioSliderBase::execSetShowLabelOnlyOnHover },
		{ "SetShowUnitsText", &UAudioSliderBase::execSetShowUnitsText },
		{ "SetSliderBackgroundColor", &UAudioSliderBase::execSetSliderBackgroundColor },
		{ "SetSliderBarColor", &UAudioSliderBase::execSetSliderBarColor },
		{ "SetSliderThumbColor", &UAudioSliderBase::execSetSliderThumbColor },
		{ "SetTextLabelBackgroundColor", &UAudioSliderBase::execSetTextLabelBackgroundColor },
		{ "SetUnitsText", &UAudioSliderBase::execSetUnitsText },
		{ "SetUnitsTextReadOnly", &UAudioSliderBase::execSetUnitsTextReadOnly },
		{ "SetValueTextReadOnly", &UAudioSliderBase::execSetValueTextReadOnly },
		{ "SetWidgetBackgroundColor", &UAudioSliderBase::execSetWidgetBackgroundColor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSliderBase);
UClass* Z_Construct_UClass_UAudioSliderBase_NoRegister()
{
	return UAudioSliderBase::StaticClass();
}
struct Z_Construct_UClass_UAudioSliderBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An audio slider widget. \n */" },
		{ "IncludePath", "AudioSlider.h" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "An audio slider widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The normalized linear (0 - 1) slider value. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "The normalized linear (0 - 1) slider value." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitsText_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The text label units */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "The text label units" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextLabelBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the text label background. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "The color to draw the text label background." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextLabelBackgroundColorDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the TextLabelBackgroundColor. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "A bindable delegate for the TextLabelBackgroundColor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowLabelOnlyOnHover_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, show text label only on hover; if false always show label. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "If true, show text label only on hover; if false always show label." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowUnitsText_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to show the units part of the text label. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Whether to show the units part of the text label." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsUnitsTextReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to set the units part of the text label read only. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Whether to set the units part of the text label read only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsValueTextReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to set the value part of the text label read only. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Whether to set the value part of the text label read only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the slider background. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "The color to draw the slider background." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBackgroundColorDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the SliderBackgroundColor. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "A bindable delegate for the SliderBackgroundColor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the slider bar. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "The color to draw the slider bar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColorDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the SliderBarColor. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "A bindable delegate for the SliderBarColor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderThumbColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the slider thumb. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "The color to draw the slider thumb." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderThumbColorDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the SliderThumbColor. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "A bindable delegate for the SliderThumbColor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the widget background. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "The color to draw the widget background." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBackgroundColorDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the WidgetBackgroundColor. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "A bindable delegate for the WidgetBackgroundColor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The slider's orientation. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "The slider's orientation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by slider or typing. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Called when the value is changed by slider or typing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UnitsText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextLabelBackgroundColor;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TextLabelBackgroundColorDelegate;
	static void NewProp_ShowLabelOnlyOnHover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowLabelOnlyOnHover;
	static void NewProp_ShowUnitsText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowUnitsText;
	static void NewProp_IsUnitsTextReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsUnitsTextReadOnly;
	static void NewProp_IsValueTextReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValueTextReadOnly;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBackgroundColor;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_SliderBackgroundColorDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_SliderBarColorDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderThumbColor;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_SliderThumbColorDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetBackgroundColor;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_WidgetBackgroundColorDelegate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioSliderBase_GetLinValue, "GetLinValue" }, // 3509604861
		{ &Z_Construct_UFunction_UAudioSliderBase_GetOutputValue, "GetOutputValue" }, // 3198078659
		{ &Z_Construct_UFunction_UAudioSliderBase_GetSliderValue, "GetSliderValue" }, // 3906121937
		{ &Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover, "SetShowLabelOnlyOnHover" }, // 3863718868
		{ &Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText, "SetShowUnitsText" }, // 525646409
		{ &Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor, "SetSliderBackgroundColor" }, // 2116020250
		{ &Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor, "SetSliderBarColor" }, // 1763695318
		{ &Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor, "SetSliderThumbColor" }, // 200986726
		{ &Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor, "SetTextLabelBackgroundColor" }, // 1316937996
		{ &Z_Construct_UFunction_UAudioSliderBase_SetUnitsText, "SetUnitsText" }, // 2200793637
		{ &Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly, "SetUnitsTextReadOnly" }, // 3859323160
		{ &Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly, "SetValueTextReadOnly" }, // 2519563142
		{ &Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor, "SetWidgetBackgroundColor" }, // 1439626599
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSliderBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_UnitsText = { "UnitsText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, UnitsText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitsText_MetaData), NewProp_UnitsText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_TextLabelBackgroundColor = { "TextLabelBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, TextLabelBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextLabelBackgroundColor_MetaData), NewProp_TextLabelBackgroundColor_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_TextLabelBackgroundColorDelegate = { "TextLabelBackgroundColorDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, TextLabelBackgroundColorDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextLabelBackgroundColorDelegate_MetaData), NewProp_TextLabelBackgroundColorDelegate_MetaData) }; // 3367946829
void Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ShowLabelOnlyOnHover_SetBit(void* Obj)
{
	((UAudioSliderBase*)Obj)->ShowLabelOnlyOnHover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ShowLabelOnlyOnHover = { "ShowLabelOnlyOnHover", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioSliderBase), &Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ShowLabelOnlyOnHover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowLabelOnlyOnHover_MetaData), NewProp_ShowLabelOnlyOnHover_MetaData) };
void Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ShowUnitsText_SetBit(void* Obj)
{
	((UAudioSliderBase*)Obj)->ShowUnitsText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ShowUnitsText = { "ShowUnitsText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioSliderBase), &Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ShowUnitsText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowUnitsText_MetaData), NewProp_ShowUnitsText_MetaData) };
void Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_IsUnitsTextReadOnly_SetBit(void* Obj)
{
	((UAudioSliderBase*)Obj)->IsUnitsTextReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_IsUnitsTextReadOnly = { "IsUnitsTextReadOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioSliderBase), &Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_IsUnitsTextReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsUnitsTextReadOnly_MetaData), NewProp_IsUnitsTextReadOnly_MetaData) };
void Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_IsValueTextReadOnly_SetBit(void* Obj)
{
	((UAudioSliderBase*)Obj)->IsValueTextReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_IsValueTextReadOnly = { "IsValueTextReadOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioSliderBase), &Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_IsValueTextReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsValueTextReadOnly_MetaData), NewProp_IsValueTextReadOnly_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueDelegate_MetaData), NewProp_ValueDelegate_MetaData) }; // 4086961303
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderBackgroundColor = { "SliderBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, SliderBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBackgroundColor_MetaData), NewProp_SliderBackgroundColor_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderBackgroundColorDelegate = { "SliderBackgroundColorDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, SliderBackgroundColorDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBackgroundColorDelegate_MetaData), NewProp_SliderBackgroundColorDelegate_MetaData) }; // 3367946829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, SliderBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBarColor_MetaData), NewProp_SliderBarColor_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderBarColorDelegate = { "SliderBarColorDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, SliderBarColorDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBarColorDelegate_MetaData), NewProp_SliderBarColorDelegate_MetaData) }; // 3367946829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderThumbColor = { "SliderThumbColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, SliderThumbColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderThumbColor_MetaData), NewProp_SliderThumbColor_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderThumbColorDelegate = { "SliderThumbColorDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, SliderThumbColorDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderThumbColorDelegate_MetaData), NewProp_SliderThumbColorDelegate_MetaData) }; // 3367946829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_WidgetBackgroundColor = { "WidgetBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, WidgetBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBackgroundColor_MetaData), NewProp_WidgetBackgroundColor_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_WidgetBackgroundColorDelegate = { "WidgetBackgroundColorDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, WidgetBackgroundColorDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBackgroundColorDelegate_MetaData), NewProp_WidgetBackgroundColorDelegate_MetaData) }; // 3367946829
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 349032367
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSliderBase, OnValueChanged), Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChanged_MetaData), NewProp_OnValueChanged_MetaData) }; // 99912108
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioSliderBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_UnitsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_TextLabelBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_TextLabelBackgroundColorDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ShowLabelOnlyOnHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ShowUnitsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_IsUnitsTextReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_IsValueTextReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ValueDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderBackgroundColorDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderBarColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderBarColorDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderThumbColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_SliderThumbColorDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_WidgetBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_WidgetBackgroundColorDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_OnValueChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSliderBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioSliderBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSliderBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSliderBase_Statics::ClassParams = {
	&UAudioSliderBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAudioSliderBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSliderBase_Statics::PropPointers),
	0,
	0x00B000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSliderBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioSliderBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioSliderBase()
{
	if (!Z_Registration_Info_UClass_UAudioSliderBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSliderBase.OuterSingleton, Z_Construct_UClass_UAudioSliderBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioSliderBase.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioSliderBase>()
{
	return UAudioSliderBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSliderBase);
UAudioSliderBase::~UAudioSliderBase() {}
// End Class UAudioSliderBase

// Begin Class UAudioSlider
void UAudioSlider::StaticRegisterNativesUAudioSlider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSlider);
UClass* Z_Construct_UClass_UAudioSlider_NoRegister()
{
	return UAudioSlider::StaticClass();
}
struct Z_Construct_UClass_UAudioSlider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An audio slider widget with customizable curves.\n */" },
		{ "IncludePath", "AudioSlider.h" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "An audio slider widget with customizable curves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinToOutputCurve_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Curves for mapping linear to output values. */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Curves for mapping linear to output values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputToLinCurve_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LinToOutputCurve;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OutputToLinCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSlider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAudioSlider_Statics::NewProp_LinToOutputCurve = { "LinToOutputCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSlider, LinToOutputCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinToOutputCurve_MetaData), NewProp_LinToOutputCurve_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAudioSlider_Statics::NewProp_OutputToLinCurve = { "OutputToLinCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSlider, OutputToLinCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputToLinCurve_MetaData), NewProp_OutputToLinCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioSlider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSlider_Statics::NewProp_LinToOutputCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSlider_Statics::NewProp_OutputToLinCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSlider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioSlider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioSliderBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSlider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSlider_Statics::ClassParams = {
	&UAudioSlider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioSlider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSlider_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSlider_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioSlider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioSlider()
{
	if (!Z_Registration_Info_UClass_UAudioSlider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSlider.OuterSingleton, Z_Construct_UClass_UAudioSlider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioSlider.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioSlider>()
{
	return UAudioSlider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSlider);
UAudioSlider::~UAudioSlider() {}
// End Class UAudioSlider

// Begin Class UAudioVolumeSlider
void UAudioVolumeSlider::StaticRegisterNativesUAudioVolumeSlider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioVolumeSlider);
UClass* Z_Construct_UClass_UAudioVolumeSlider_NoRegister()
{
	return UAudioVolumeSlider::StaticClass();
}
struct Z_Construct_UClass_UAudioVolumeSlider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An audio slider widget with default customizable curves for volume (dB).\n */" },
		{ "IncludePath", "AudioSlider.h" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "An audio slider widget with default customizable curves for volume (dB)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioVolumeSlider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioVolumeSlider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioSlider,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioVolumeSlider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioVolumeSlider_Statics::ClassParams = {
	&UAudioVolumeSlider::StaticClass,
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
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioVolumeSlider_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioVolumeSlider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioVolumeSlider()
{
	if (!Z_Registration_Info_UClass_UAudioVolumeSlider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioVolumeSlider.OuterSingleton, Z_Construct_UClass_UAudioVolumeSlider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioVolumeSlider.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioVolumeSlider>()
{
	return UAudioVolumeSlider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioVolumeSlider);
UAudioVolumeSlider::~UAudioVolumeSlider() {}
// End Class UAudioVolumeSlider

// Begin Class UAudioFrequencySlider
void UAudioFrequencySlider::StaticRegisterNativesUAudioFrequencySlider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioFrequencySlider);
UClass* Z_Construct_UClass_UAudioFrequencySlider_NoRegister()
{
	return UAudioFrequencySlider::StaticClass();
}
struct Z_Construct_UClass_UAudioFrequencySlider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An audio slider widget, for use with frequency. \n */" },
		{ "IncludePath", "AudioSlider.h" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "An audio slider widget, for use with frequency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputRange_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Frequency output range */" },
		{ "ModuleRelativePath", "Public/AudioSlider.h" },
		{ "ToolTip", "Frequency output range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioFrequencySlider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioFrequencySlider_Statics::NewProp_OutputRange = { "OutputRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioFrequencySlider, OutputRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputRange_MetaData), NewProp_OutputRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioFrequencySlider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioFrequencySlider_Statics::NewProp_OutputRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioFrequencySlider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioFrequencySlider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioSliderBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioFrequencySlider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioFrequencySlider_Statics::ClassParams = {
	&UAudioFrequencySlider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioFrequencySlider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioFrequencySlider_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioFrequencySlider_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioFrequencySlider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioFrequencySlider()
{
	if (!Z_Registration_Info_UClass_UAudioFrequencySlider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioFrequencySlider.OuterSingleton, Z_Construct_UClass_UAudioFrequencySlider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioFrequencySlider.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioFrequencySlider>()
{
	return UAudioFrequencySlider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioFrequencySlider);
UAudioFrequencySlider::~UAudioFrequencySlider() {}
// End Class UAudioFrequencySlider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSliderBase, UAudioSliderBase::StaticClass, TEXT("UAudioSliderBase"), &Z_Registration_Info_UClass_UAudioSliderBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSliderBase), 2526867886U) },
		{ Z_Construct_UClass_UAudioSlider, UAudioSlider::StaticClass, TEXT("UAudioSlider"), &Z_Registration_Info_UClass_UAudioSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSlider), 2104313978U) },
		{ Z_Construct_UClass_UAudioVolumeSlider, UAudioVolumeSlider::StaticClass, TEXT("UAudioVolumeSlider"), &Z_Registration_Info_UClass_UAudioVolumeSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioVolumeSlider), 2763918581U) },
		{ Z_Construct_UClass_UAudioFrequencySlider, UAudioFrequencySlider::StaticClass, TEXT("UAudioFrequencySlider"), &Z_Registration_Info_UClass_UAudioFrequencySlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioFrequencySlider), 1856853967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_2909779366(TEXT("/Script/AudioWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
