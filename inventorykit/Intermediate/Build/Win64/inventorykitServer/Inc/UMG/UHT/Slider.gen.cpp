// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/Slider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlider() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
UMG_API UClass* Z_Construct_UClass_USlider();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnMouseCaptureBeginEvent
struct Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnMouseCaptureBeginEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMouseCaptureBeginEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureBeginEvent)
{
	OnMouseCaptureBeginEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMouseCaptureBeginEvent

// Begin Delegate FOnMouseCaptureEndEvent
struct Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnMouseCaptureEndEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMouseCaptureEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureEndEvent)
{
	OnMouseCaptureEndEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMouseCaptureEndEvent

// Begin Delegate FOnControllerCaptureBeginEvent
struct Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnControllerCaptureBeginEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnControllerCaptureBeginEvent_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureBeginEvent)
{
	OnControllerCaptureBeginEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnControllerCaptureBeginEvent

// Begin Delegate FOnControllerCaptureEndEvent
struct Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnControllerCaptureEndEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnControllerCaptureEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureEndEvent)
{
	OnControllerCaptureEndEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnControllerCaptureEndEvent

// Begin Delegate FOnFloatValueChangedEvent
struct Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics
{
	struct _Script_UMG_eventOnFloatValueChangedEvent_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnFloatValueChangedEvent_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnFloatValueChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::_Script_UMG_eventOnFloatValueChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::_Script_UMG_eventOnFloatValueChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFloatValueChangedEvent, float Value)
{
	struct _Script_UMG_eventOnFloatValueChangedEvent_Parms
	{
		float Value;
	};
	_Script_UMG_eventOnFloatValueChangedEvent_Parms Parms;
	Parms.Value=Value;
	OnFloatValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFloatValueChangedEvent

// Begin Class USlider Function GetNormalizedValue
struct Z_Construct_UFunction_USlider_GetNormalizedValue_Statics
{
	struct Slider_eventGetNormalizedValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current value scaled from 0 to 1 */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Get the current value scaled from 0 to 1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Slider_eventGetNormalizedValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, nullptr, "GetNormalizedValue", nullptr, nullptr, Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::Slider_eventGetNormalizedValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::Slider_eventGetNormalizedValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlider_GetNormalizedValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlider_GetNormalizedValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlider::execGetNormalizedValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNormalizedValue();
	P_NATIVE_END;
}
// End Class USlider Function GetNormalizedValue

// Begin Class USlider Function GetValue
struct Z_Construct_UFunction_USlider_GetValue_Statics
{
	struct Slider_eventGetValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Gets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Gets the current value of the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlider_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Slider_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlider_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlider_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlider_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_USlider_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlider_GetValue_Statics::Slider_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlider_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlider_GetValue_Statics::Slider_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlider_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlider_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlider::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class USlider Function GetValue

// Begin Class USlider Function SetIndentHandle
struct Z_Construct_UFunction_USlider_SetIndentHandle_Statics
{
	struct Slider_eventSetIndentHandle_Parms
	{
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets if the slidable area should be indented to fit the handle. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Sets if the slidable area should be indented to fit the handle." },
	};
#endif // WITH_METADATA
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USlider_SetIndentHandle_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((Slider_eventSetIndentHandle_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlider_SetIndentHandle_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Slider_eventSetIndentHandle_Parms), &Z_Construct_UFunction_USlider_SetIndentHandle_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlider_SetIndentHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlider_SetIndentHandle_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetIndentHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlider_SetIndentHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, nullptr, "SetIndentHandle", nullptr, nullptr, Z_Construct_UFunction_USlider_SetIndentHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetIndentHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlider_SetIndentHandle_Statics::Slider_eventSetIndentHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetIndentHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlider_SetIndentHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlider_SetIndentHandle_Statics::Slider_eventSetIndentHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlider_SetIndentHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlider_SetIndentHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlider::execSetIndentHandle)
{
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIndentHandle(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USlider Function SetIndentHandle

// Begin Class USlider Function SetLocked
struct Z_Construct_UFunction_USlider_SetLocked_Statics
{
	struct Slider_eventSetLocked_Parms
	{
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the handle to be interactive or fixed. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Sets the handle to be interactive or fixed." },
	};
#endif // WITH_METADATA
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USlider_SetLocked_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((Slider_eventSetLocked_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlider_SetLocked_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Slider_eventSetLocked_Parms), &Z_Construct_UFunction_USlider_SetLocked_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlider_SetLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlider_SetLocked_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlider_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, nullptr, "SetLocked", nullptr, nullptr, Z_Construct_UFunction_USlider_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlider_SetLocked_Statics::Slider_eventSetLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlider_SetLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlider_SetLocked_Statics::Slider_eventSetLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlider_SetLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlider_SetLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlider::execSetLocked)
{
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocked(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USlider Function SetLocked

// Begin Class USlider Function SetMaxValue
struct Z_Construct_UFunction_USlider_SetMaxValue_Statics
{
	struct Slider_eventSetMaxValue_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the maximum value of the slider. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Sets the maximum value of the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlider_SetMaxValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Slider_eventSetMaxValue_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlider_SetMaxValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlider_SetMaxValue_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetMaxValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlider_SetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, nullptr, "SetMaxValue", nullptr, nullptr, Z_Construct_UFunction_USlider_SetMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetMaxValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlider_SetMaxValue_Statics::Slider_eventSetMaxValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetMaxValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlider_SetMaxValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlider_SetMaxValue_Statics::Slider_eventSetMaxValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlider_SetMaxValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlider_SetMaxValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlider::execSetMaxValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxValue(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USlider Function SetMaxValue

// Begin Class USlider Function SetMinValue
struct Z_Construct_UFunction_USlider_SetMinValue_Statics
{
	struct Slider_eventSetMinValue_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the minimum value of the slider. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Sets the minimum value of the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlider_SetMinValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Slider_eventSetMinValue_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlider_SetMinValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlider_SetMinValue_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetMinValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlider_SetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, nullptr, "SetMinValue", nullptr, nullptr, Z_Construct_UFunction_USlider_SetMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetMinValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlider_SetMinValue_Statics::Slider_eventSetMinValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetMinValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlider_SetMinValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlider_SetMinValue_Statics::Slider_eventSetMinValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlider_SetMinValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlider_SetMinValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlider::execSetMinValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinValue(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USlider Function SetMinValue

// Begin Class USlider Function SetSliderBarColor
struct Z_Construct_UFunction_USlider_SetSliderBarColor_Statics
{
	struct Slider_eventSetSliderBarColor_Parms
	{
		FLinearColor InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the color of the slider bar. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Sets the color of the slider bar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Slider_eventSetSliderBarColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, nullptr, "SetSliderBarColor", nullptr, nullptr, Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::Slider_eventSetSliderBarColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::Slider_eventSetSliderBarColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlider_SetSliderBarColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlider_SetSliderBarColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlider::execSetSliderBarColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSliderBarColor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USlider Function SetSliderBarColor

// Begin Class USlider Function SetSliderHandleColor
struct Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics
{
	struct Slider_eventSetSliderHandleColor_Parms
	{
		FLinearColor InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the color of the handle bar */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Sets the color of the handle bar" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Slider_eventSetSliderHandleColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, nullptr, "SetSliderHandleColor", nullptr, nullptr, Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::Slider_eventSetSliderHandleColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::Slider_eventSetSliderHandleColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlider_SetSliderHandleColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlider_SetSliderHandleColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlider::execSetSliderHandleColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSliderHandleColor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USlider Function SetSliderHandleColor

// Begin Class USlider Function SetStepSize
struct Z_Construct_UFunction_USlider_SetStepSize_Statics
{
	struct Slider_eventSetStepSize_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the amount to adjust the value by, when using a controller or keyboard. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Sets the amount to adjust the value by, when using a controller or keyboard." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlider_SetStepSize_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Slider_eventSetStepSize_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlider_SetStepSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlider_SetStepSize_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetStepSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlider_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, nullptr, "SetStepSize", nullptr, nullptr, Z_Construct_UFunction_USlider_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetStepSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlider_SetStepSize_Statics::Slider_eventSetStepSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetStepSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlider_SetStepSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlider_SetStepSize_Statics::Slider_eventSetStepSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlider_SetStepSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlider_SetStepSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlider::execSetStepSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStepSize(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USlider Function SetStepSize

// Begin Class USlider Function SetValue
struct Z_Construct_UFunction_USlider_SetValue_Statics
{
	struct Slider_eventSetValue_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Sets the current value of the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlider_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Slider_eventSetValue_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlider_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlider_SetValue_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlider_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlider, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_USlider_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlider_SetValue_Statics::Slider_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlider_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlider_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlider_SetValue_Statics::Slider_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlider_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlider_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlider::execSetValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USlider Function SetValue

// Begin Class USlider
void USlider::GetValue_WrapperImpl(const void* Object, void* OutValue)
{
	const USlider* Obj = (const USlider*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetValue();
}
void USlider::SetValue_WrapperImpl(void* Object, const void* InValue)
{
	USlider* Obj = (USlider*)Object;
	float& Value = *(float*)InValue;
	Obj->SetValue(Value);
}
void USlider::GetMinValue_WrapperImpl(const void* Object, void* OutValue)
{
	const USlider* Obj = (const USlider*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMinValue();
}
void USlider::SetMinValue_WrapperImpl(void* Object, const void* InValue)
{
	USlider* Obj = (USlider*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMinValue(Value);
}
void USlider::GetMaxValue_WrapperImpl(const void* Object, void* OutValue)
{
	const USlider* Obj = (const USlider*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMaxValue();
}
void USlider::SetMaxValue_WrapperImpl(void* Object, const void* InValue)
{
	USlider* Obj = (USlider*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMaxValue(Value);
}
void USlider::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const USlider* Obj = (const USlider*)Object;
	FSliderStyle& Result = *(FSliderStyle*)OutValue;
	Result = (FSliderStyle)Obj->GetWidgetStyle();
}
void USlider::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
{
	USlider* Obj = (USlider*)Object;
	FSliderStyle& Value = *(FSliderStyle*)InValue;
	Obj->SetWidgetStyle(Value);
}
void USlider::GetOrientation_WrapperImpl(const void* Object, void* OutValue)
{
	const USlider* Obj = (const USlider*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetOrientation();
}
void USlider::SetOrientation_WrapperImpl(void* Object, const void* InValue)
{
	USlider* Obj = (USlider*)Object;
	EOrientation Value = (EOrientation)*(uint8*)InValue;
	Obj->SetOrientation(Value);
}
void USlider::GetSliderBarColor_WrapperImpl(const void* Object, void* OutValue)
{
	const USlider* Obj = (const USlider*)Object;
	FLinearColor& Result = *(FLinearColor*)OutValue;
	Result = (FLinearColor)Obj->GetSliderBarColor();
}
void USlider::SetSliderBarColor_WrapperImpl(void* Object, const void* InValue)
{
	USlider* Obj = (USlider*)Object;
	FLinearColor& Value = *(FLinearColor*)InValue;
	Obj->SetSliderBarColor(Value);
}
void USlider::GetSliderHandleColor_WrapperImpl(const void* Object, void* OutValue)
{
	const USlider* Obj = (const USlider*)Object;
	FLinearColor& Result = *(FLinearColor*)OutValue;
	Result = (FLinearColor)Obj->GetSliderHandleColor();
}
void USlider::SetSliderHandleColor_WrapperImpl(void* Object, const void* InValue)
{
	USlider* Obj = (USlider*)Object;
	FLinearColor& Value = *(FLinearColor*)InValue;
	Obj->SetSliderHandleColor(Value);
}
void USlider::GetIndentHandle_WrapperImpl(const void* Object, void* OutValue)
{
	const USlider* Obj = (const USlider*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->HasIndentHandle();
}
void USlider::SetIndentHandle_WrapperImpl(void* Object, const void* InValue)
{
	USlider* Obj = (USlider*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIndentHandle(Value);
}
void USlider::GetLocked_WrapperImpl(const void* Object, void* OutValue)
{
	const USlider* Obj = (const USlider*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsLocked();
}
void USlider::SetLocked_WrapperImpl(void* Object, const void* InValue)
{
	USlider* Obj = (USlider*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetLocked(Value);
}
void USlider::GetStepSize_WrapperImpl(const void* Object, void* OutValue)
{
	const USlider* Obj = (const USlider*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetStepSize();
}
void USlider::SetStepSize_WrapperImpl(void* Object, const void* InValue)
{
	USlider* Obj = (USlider*)Object;
	float& Value = *(float*)InValue;
	Obj->SetStepSize(Value);
}
void USlider::StaticRegisterNativesUSlider()
{
	UClass* Class = USlider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNormalizedValue", &USlider::execGetNormalizedValue },
		{ "GetValue", &USlider::execGetValue },
		{ "SetIndentHandle", &USlider::execSetIndentHandle },
		{ "SetLocked", &USlider::execSetLocked },
		{ "SetMaxValue", &USlider::execSetMaxValue },
		{ "SetMinValue", &USlider::execSetMinValue },
		{ "SetSliderBarColor", &USlider::execSetSliderBarColor },
		{ "SetSliderHandleColor", &USlider::execSetSliderHandleColor },
		{ "SetStepSize", &USlider::execSetStepSize },
		{ "SetValue", &USlider::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlider);
UClass* Z_Construct_UClass_USlider_NoRegister()
{
	return USlider::StaticClass();
}
struct Z_Construct_UClass_USlider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget that shows a sliding bar with a handle that allows you to control the value in a user define range (between 0..1 by default).\n *\n * * No Children\n */" },
		{ "IncludePath", "Components/Slider.h" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value in a user define range (between 0..1 by default).\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "BlueprintGetter", "GetValue" },
		{ "BlueprintSetter", "SetValue" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The volume value to display. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "The volume value to display." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "BlueprintSetter", "SetMinValue" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The minimum value the slider can be set to. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "The minimum value the slider can be set to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "BlueprintSetter", "SetMaxValue" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The maximum value the slider can be set to. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "The maximum value the slider can be set to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The progress bar style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "The progress bar style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The slider's orientation. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "The slider's orientation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[] = {
		{ "BlueprintSetter", "SetSliderBarColor" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the slider bar in. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "The color to draw the slider bar in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderHandleColor_MetaData[] = {
		{ "BlueprintSetter", "SetSliderHandleColor" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the slider handle in. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "The color to draw the slider handle in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndentHandle_MetaData[] = {
		{ "BlueprintSetter", "SetIndentHandle" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the slidable area should be indented to fit the handle. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Whether the slidable area should be indented to fit the handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[] = {
		{ "BlueprintSetter", "SetLocked" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the handle is interactive or fixed. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Whether the handle is interactive or fixed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseUsesStep_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets new value if mouse position is greater/less than half the step size. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Sets new value if mouse position is greater/less than half the step size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiresControllerLock_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether we have to lock input to change the slider value. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Sets whether we have to lock input to change the slider value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
		{ "BlueprintSetter", "SetStepSize" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount to adjust the value by, when using a controller or keyboard */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "The amount to adjust the value by, when using a controller or keyboard" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Should the slider be focusable? */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Should the slider be focusable?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseCaptureBegin_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the mouse is pressed and a capture begins. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Invoked when the mouse is pressed and a capture begins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseCaptureEnd_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the mouse is released and a capture ends. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Invoked when the mouse is released and a capture ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerCaptureBegin_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the controller capture begins. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Invoked when the controller capture begins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerCaptureEnd_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the controller capture ends. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Invoked when the controller capture ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by slider or typing. */" },
		{ "ModuleRelativePath", "Public/Components/Slider.h" },
		{ "ToolTip", "Called when the value is changed by slider or typing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderHandleColor;
	static void NewProp_IndentHandle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IndentHandle;
	static void NewProp_Locked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Locked;
	static void NewProp_MouseUsesStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MouseUsesStep;
	static void NewProp_RequiresControllerLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RequiresControllerLock;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
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
		{ &Z_Construct_UFunction_USlider_GetNormalizedValue, "GetNormalizedValue" }, // 3371709855
		{ &Z_Construct_UFunction_USlider_GetValue, "GetValue" }, // 3563493804
		{ &Z_Construct_UFunction_USlider_SetIndentHandle, "SetIndentHandle" }, // 50349154
		{ &Z_Construct_UFunction_USlider_SetLocked, "SetLocked" }, // 313762969
		{ &Z_Construct_UFunction_USlider_SetMaxValue, "SetMaxValue" }, // 810090240
		{ &Z_Construct_UFunction_USlider_SetMinValue, "SetMinValue" }, // 222627083
		{ &Z_Construct_UFunction_USlider_SetSliderBarColor, "SetSliderBarColor" }, // 1334726796
		{ &Z_Construct_UFunction_USlider_SetSliderHandleColor, "SetSliderHandleColor" }, // 3053799226
		{ &Z_Construct_UFunction_USlider_SetStepSize, "SetStepSize" }, // 1990220244
		{ &Z_Construct_UFunction_USlider_SetValue, "SetValue" }, // 3371287905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USlider::SetValue_WrapperImpl, &USlider::GetValue_WrapperImpl, 1, STRUCT_OFFSET(USlider, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USlider_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlider, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueDelegate_MetaData), NewProp_ValueDelegate_MetaData) }; // 4086961303
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USlider::SetMinValue_WrapperImpl, &USlider::GetMinValue_WrapperImpl, 1, STRUCT_OFFSET(USlider, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USlider::SetMaxValue_WrapperImpl, &USlider::GetMaxValue_WrapperImpl, 1, STRUCT_OFFSET(USlider, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &USlider::SetWidgetStyle_WrapperImpl, &USlider::GetWidgetStyle_WrapperImpl, 1, STRUCT_OFFSET(USlider, WidgetStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 3452507566
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlider_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &USlider::SetOrientation_WrapperImpl, &USlider::GetOrientation_WrapperImpl, 1, STRUCT_OFFSET(USlider, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 349032367
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &USlider::SetSliderBarColor_WrapperImpl, &USlider::GetSliderBarColor_WrapperImpl, 1, STRUCT_OFFSET(USlider, SliderBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBarColor_MetaData), NewProp_SliderBarColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_SliderHandleColor = { "SliderHandleColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &USlider::SetSliderHandleColor_WrapperImpl, &USlider::GetSliderHandleColor_WrapperImpl, 1, STRUCT_OFFSET(USlider, SliderHandleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderHandleColor_MetaData), NewProp_SliderHandleColor_MetaData) };
void Z_Construct_UClass_USlider_Statics::NewProp_IndentHandle_SetBit(void* Obj)
{
	((USlider*)Obj)->IndentHandle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_IndentHandle = { "IndentHandle", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USlider::SetIndentHandle_WrapperImpl, &USlider::GetIndentHandle_WrapperImpl, 1, sizeof(bool), sizeof(USlider), &Z_Construct_UClass_USlider_Statics::NewProp_IndentHandle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndentHandle_MetaData), NewProp_IndentHandle_MetaData) };
void Z_Construct_UClass_USlider_Statics::NewProp_Locked_SetBit(void* Obj)
{
	((USlider*)Obj)->Locked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USlider::SetLocked_WrapperImpl, &USlider::GetLocked_WrapperImpl, 1, sizeof(bool), sizeof(USlider), &Z_Construct_UClass_USlider_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locked_MetaData), NewProp_Locked_MetaData) };
void Z_Construct_UClass_USlider_Statics::NewProp_MouseUsesStep_SetBit(void* Obj)
{
	((USlider*)Obj)->MouseUsesStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_MouseUsesStep = { "MouseUsesStep", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USlider), &Z_Construct_UClass_USlider_Statics::NewProp_MouseUsesStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseUsesStep_MetaData), NewProp_MouseUsesStep_MetaData) };
void Z_Construct_UClass_USlider_Statics::NewProp_RequiresControllerLock_SetBit(void* Obj)
{
	((USlider*)Obj)->RequiresControllerLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_RequiresControllerLock = { "RequiresControllerLock", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USlider), &Z_Construct_UClass_USlider_Statics::NewProp_RequiresControllerLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiresControllerLock_MetaData), NewProp_RequiresControllerLock_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USlider::SetStepSize_WrapperImpl, &USlider::GetStepSize_WrapperImpl, 1, STRUCT_OFFSET(USlider, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
void Z_Construct_UClass_USlider_Statics::NewProp_IsFocusable_SetBit(void* Obj)
{
	((USlider*)Obj)->IsFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlider_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USlider), &Z_Construct_UClass_USlider_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFocusable_MetaData), NewProp_IsFocusable_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USlider_Statics::NewProp_OnMouseCaptureBegin = { "OnMouseCaptureBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlider, OnMouseCaptureBegin), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseCaptureBegin_MetaData), NewProp_OnMouseCaptureBegin_MetaData) }; // 1391283223
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USlider_Statics::NewProp_OnMouseCaptureEnd = { "OnMouseCaptureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlider, OnMouseCaptureEnd), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseCaptureEnd_MetaData), NewProp_OnMouseCaptureEnd_MetaData) }; // 304104496
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USlider_Statics::NewProp_OnControllerCaptureBegin = { "OnControllerCaptureBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlider, OnControllerCaptureBegin), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControllerCaptureBegin_MetaData), NewProp_OnControllerCaptureBegin_MetaData) }; // 4239288549
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USlider_Statics::NewProp_OnControllerCaptureEnd = { "OnControllerCaptureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlider, OnControllerCaptureEnd), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControllerCaptureEnd_MetaData), NewProp_OnControllerCaptureEnd_MetaData) }; // 2669042784
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USlider_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlider, OnValueChanged), Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChanged_MetaData), NewProp_OnValueChanged_MetaData) }; // 99912108
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_ValueDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_SliderBarColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_SliderHandleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_IndentHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_Locked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_MouseUsesStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_RequiresControllerLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_StepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_IsFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_OnMouseCaptureBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_OnMouseCaptureEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_OnControllerCaptureBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_OnControllerCaptureEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlider_Statics::NewProp_OnValueChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlider_Statics::ClassParams = {
	&USlider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USlider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USlider_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlider_Statics::Class_MetaDataParams), Z_Construct_UClass_USlider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlider()
{
	if (!Z_Registration_Info_UClass_USlider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlider.OuterSingleton, Z_Construct_UClass_USlider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlider.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<USlider>()
{
	return USlider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlider);
USlider::~USlider() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(USlider, Value)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(USlider)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(USlider, Value)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(USlider);
// End Class USlider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlider, USlider::StaticClass, TEXT("USlider"), &Z_Registration_Info_UClass_USlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlider), 767989454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_2703356454(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
