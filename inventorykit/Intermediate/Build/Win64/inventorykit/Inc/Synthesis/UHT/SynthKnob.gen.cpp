// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Public/UI/SynthKnob.h"
#include "Synthesis/Public/UI/SynthKnobStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthKnob() {}

// Begin Cross Module References
SYNTHESIS_API UClass* Z_Construct_UClass_USynthKnob();
SYNTHESIS_API UClass* Z_Construct_UClass_USynthKnob_NoRegister();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynthKnobStyle();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Class USynthKnob Function GetValue
struct Z_Construct_UFunction_USynthKnob_GetValue_Statics
{
	struct SynthKnob_eventGetValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Gets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Gets the current value of the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthKnob_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthKnob_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthKnob_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthKnob_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthKnob_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthKnob, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_USynthKnob_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthKnob_GetValue_Statics::SynthKnob_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthKnob_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthKnob_GetValue_Statics::SynthKnob_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthKnob_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthKnob_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthKnob::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class USynthKnob Function GetValue

// Begin Class USynthKnob Function SetLocked
struct Z_Construct_UFunction_USynthKnob_SetLocked_Statics
{
	struct SynthKnob_eventSetLocked_Parms
	{
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the handle to be interactive or fixed */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Sets the handle to be interactive or fixed" },
	};
#endif // WITH_METADATA
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthKnob_SetLocked_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((SynthKnob_eventSetLocked_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthKnob_SetLocked_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthKnob_eventSetLocked_Parms), &Z_Construct_UFunction_USynthKnob_SetLocked_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthKnob_SetLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthKnob_SetLocked_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthKnob_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthKnob, nullptr, "SetLocked", nullptr, nullptr, Z_Construct_UFunction_USynthKnob_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthKnob_SetLocked_Statics::SynthKnob_eventSetLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthKnob_SetLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthKnob_SetLocked_Statics::SynthKnob_eventSetLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthKnob_SetLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthKnob_SetLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthKnob::execSetLocked)
{
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocked(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USynthKnob Function SetLocked

// Begin Class USynthKnob Function SetStepSize
struct Z_Construct_UFunction_USynthKnob_SetStepSize_Statics
{
	struct SynthKnob_eventSetStepSize_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the amount to adjust the value by, when using a controller or keyboard */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Sets the amount to adjust the value by, when using a controller or keyboard" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthKnob_eventSetStepSize_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthKnob, nullptr, "SetStepSize", nullptr, nullptr, Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::SynthKnob_eventSetStepSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::SynthKnob_eventSetStepSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthKnob_SetStepSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthKnob::execSetStepSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStepSize(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USynthKnob Function SetStepSize

// Begin Class USynthKnob Function SetValue
struct Z_Construct_UFunction_USynthKnob_SetValue_Statics
{
	struct SynthKnob_eventSetValue_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Sets the current value of the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthKnob_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthKnob_eventSetValue_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthKnob_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthKnob_SetValue_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthKnob_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthKnob, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_USynthKnob_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthKnob_SetValue_Statics::SynthKnob_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthKnob_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthKnob_SetValue_Statics::SynthKnob_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthKnob_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthKnob_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthKnob::execSetValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USynthKnob Function SetValue

// Begin Class USynthKnob
void USynthKnob::StaticRegisterNativesUSynthKnob()
{
	UClass* Class = USynthKnob::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetValue", &USynthKnob::execGetValue },
		{ "SetLocked", &USynthKnob::execSetLocked },
		{ "SetStepSize", &USynthKnob::execSetStepSize },
		{ "SetValue", &USynthKnob::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthKnob);
UClass* Z_Construct_UClass_USynthKnob_NoRegister()
{
	return USynthKnob::StaticClass();
}
struct Z_Construct_UClass_USynthKnob_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n *\n * * No Children\n */" },
		{ "IncludePath", "UI/SynthKnob.h" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The volume value to display. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The volume value to display." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount to adjust the value by, when using a controller or keyboard */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The amount to adjust the value by, when using a controller or keyboard" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSpeed_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The speed of the mouse knob control */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The speed of the mouse knob control" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseFineTuneSpeed_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The speed of the mouse knob control when fine-tuning the knob */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The speed of the mouse knob control when fine-tuning the knob" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowTooltipInfo_MetaData[] = {
		{ "Category", "SynthTooltip" },
		{ "Comment", "/** Enable tool tip window to show parameter information while knob turns */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Enable tool tip window to show parameter information while knob turns" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "SynthTooltip" },
		{ "Comment", "/** The name of the pararameter. Will show when knob turns. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The name of the pararameter. Will show when knob turns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterUnits_MetaData[] = {
		{ "Category", "SynthTooltip" },
		{ "Comment", "/** The parameter units (e.g. hz). Will append to synth tooltip info. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The parameter units (e.g. hz). Will append to synth tooltip info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The synth knob style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The synth knob style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the handle is interactive or fixed. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Whether the handle is interactive or fixed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Should the slider be focusable? */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Should the slider be focusable?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseCaptureBegin_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the mouse is pressed and a capture begins. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Invoked when the mouse is pressed and a capture begins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseCaptureEnd_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the mouse is released and a capture ends. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Invoked when the mouse is released and a capture ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerCaptureBegin_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the controller capture begins. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Invoked when the controller capture begins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerCaptureEnd_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the controller capture ends. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Invoked when the controller capture ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by slider or typing. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Called when the value is changed by slider or typing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseFineTuneSpeed;
	static void NewProp_ShowTooltipInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowTooltipInfo;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ParameterUnits;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static void NewProp_Locked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Locked;
	static void NewProp_IsFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseCaptureBegin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseCaptureEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerCaptureBegin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerCaptureEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthKnob_GetValue, "GetValue" }, // 2342543853
		{ &Z_Construct_UFunction_USynthKnob_SetLocked, "SetLocked" }, // 4145817034
		{ &Z_Construct_UFunction_USynthKnob_SetStepSize, "SetStepSize" }, // 2140828788
		{ &Z_Construct_UFunction_USynthKnob_SetValue, "SetValue" }, // 2977146688
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthKnob>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseSpeed = { "MouseSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, MouseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSpeed_MetaData), NewProp_MouseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseFineTuneSpeed = { "MouseFineTuneSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, MouseFineTuneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseFineTuneSpeed_MetaData), NewProp_MouseFineTuneSpeed_MetaData) };
void Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo_SetBit(void* Obj)
{
	((USynthKnob*)Obj)->ShowTooltipInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo = { "ShowTooltipInfo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USynthKnob), &Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowTooltipInfo_MetaData), NewProp_ShowTooltipInfo_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterUnits = { "ParameterUnits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, ParameterUnits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterUnits_MetaData), NewProp_ParameterUnits_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueDelegate_MetaData), NewProp_ValueDelegate_MetaData) }; // 4086961303
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, WidgetStyle), Z_Construct_UScriptStruct_FSynthKnobStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 314433972
void Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked_SetBit(void* Obj)
{
	((USynthKnob*)Obj)->Locked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USynthKnob), &Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locked_MetaData), NewProp_Locked_MetaData) };
void Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable_SetBit(void* Obj)
{
	((USynthKnob*)Obj)->IsFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USynthKnob), &Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFocusable_MetaData), NewProp_IsFocusable_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureBegin = { "OnMouseCaptureBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, OnMouseCaptureBegin), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseCaptureBegin_MetaData), NewProp_OnMouseCaptureBegin_MetaData) }; // 1391283223
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureEnd = { "OnMouseCaptureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, OnMouseCaptureEnd), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseCaptureEnd_MetaData), NewProp_OnMouseCaptureEnd_MetaData) }; // 304104496
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureBegin = { "OnControllerCaptureBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, OnControllerCaptureBegin), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControllerCaptureBegin_MetaData), NewProp_OnControllerCaptureBegin_MetaData) }; // 4239288549
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureEnd = { "OnControllerCaptureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, OnControllerCaptureEnd), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControllerCaptureEnd_MetaData), NewProp_OnControllerCaptureEnd_MetaData) }; // 2669042784
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthKnob, OnValueChanged), Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChanged_MetaData), NewProp_OnValueChanged_MetaData) }; // 99912108
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthKnob_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_StepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseFineTuneSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_ValueDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_OnValueChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynthKnob_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthKnob_Statics::ClassParams = {
	&USynthKnob::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USynthKnob_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::Class_MetaDataParams), Z_Construct_UClass_USynthKnob_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynthKnob()
{
	if (!Z_Registration_Info_UClass_USynthKnob.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthKnob.OuterSingleton, Z_Construct_UClass_USynthKnob_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynthKnob.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USynthKnob>()
{
	return USynthKnob::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynthKnob);
USynthKnob::~USynthKnob() {}
// End Class USynthKnob

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USynthKnob, USynthKnob::StaticClass, TEXT("USynthKnob"), &Z_Registration_Info_UClass_USynthKnob, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthKnob), 578757121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_242842831(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
