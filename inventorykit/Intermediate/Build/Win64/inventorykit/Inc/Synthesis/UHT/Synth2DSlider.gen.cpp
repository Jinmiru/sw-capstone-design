// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Public/UI/Synth2DSlider.h"
#include "Synthesis/Public/UI/Synth2DSliderStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynth2DSlider() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
SYNTHESIS_API UClass* Z_Construct_UClass_USynth2DSlider();
SYNTHESIS_API UClass* Z_Construct_UClass_USynth2DSlider_NoRegister();
SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature();
SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature();
SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature();
SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature();
SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynth2DSliderStyle();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Delegate FOnMouseCaptureBeginEventSynth2D
struct Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnMouseCaptureBeginEventSynth2D__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMouseCaptureBeginEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureBeginEventSynth2D)
{
	OnMouseCaptureBeginEventSynth2D.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMouseCaptureBeginEventSynth2D

// Begin Delegate FOnMouseCaptureEndEventSynth2D
struct Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnMouseCaptureEndEventSynth2D__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMouseCaptureEndEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureEndEventSynth2D)
{
	OnMouseCaptureEndEventSynth2D.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMouseCaptureEndEventSynth2D

// Begin Delegate FOnControllerCaptureBeginEventSynth2D
struct Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnControllerCaptureBeginEventSynth2D__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnControllerCaptureBeginEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureBeginEventSynth2D)
{
	OnControllerCaptureBeginEventSynth2D.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnControllerCaptureBeginEventSynth2D

// Begin Delegate FOnControllerCaptureEndEventSynth2D
struct Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnControllerCaptureEndEventSynth2D__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnControllerCaptureEndEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureEndEventSynth2D)
{
	OnControllerCaptureEndEventSynth2D.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnControllerCaptureEndEventSynth2D

// Begin Delegate FOnFloatValueChangedEventSynth2D
struct Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics
{
	struct _Script_Synthesis_eventOnFloatValueChangedEventSynth2D_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Synthesis_eventOnFloatValueChangedEventSynth2D_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnFloatValueChangedEventSynth2D__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::_Script_Synthesis_eventOnFloatValueChangedEventSynth2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::_Script_Synthesis_eventOnFloatValueChangedEventSynth2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFloatValueChangedEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnFloatValueChangedEventSynth2D, float Value)
{
	struct _Script_Synthesis_eventOnFloatValueChangedEventSynth2D_Parms
	{
		float Value;
	};
	_Script_Synthesis_eventOnFloatValueChangedEventSynth2D_Parms Parms;
	Parms.Value=Value;
	OnFloatValueChangedEventSynth2D.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFloatValueChangedEventSynth2D

// Begin Class USynth2DSlider Function GetValue
struct Z_Construct_UFunction_USynth2DSlider_GetValue_Statics
{
	struct Synth2DSlider_eventGetValue_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Gets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Gets the current value of the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Synth2DSlider_eventGetValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynth2DSlider, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::Synth2DSlider_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::Synth2DSlider_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynth2DSlider_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynth2DSlider_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynth2DSlider::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class USynth2DSlider Function GetValue

// Begin Class USynth2DSlider Function SetIndentHandle
struct Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics
{
	struct Synth2DSlider_eventSetIndentHandle_Parms
	{
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets if the slidable area should be indented to fit the handle */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Sets if the slidable area should be indented to fit the handle" },
	};
#endif // WITH_METADATA
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((Synth2DSlider_eventSetIndentHandle_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Synth2DSlider_eventSetIndentHandle_Parms), &Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynth2DSlider, nullptr, "SetIndentHandle", nullptr, nullptr, Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::Synth2DSlider_eventSetIndentHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::Synth2DSlider_eventSetIndentHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynth2DSlider_SetIndentHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynth2DSlider_SetIndentHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynth2DSlider::execSetIndentHandle)
{
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIndentHandle(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USynth2DSlider Function SetIndentHandle

// Begin Class USynth2DSlider Function SetLocked
struct Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics
{
	struct Synth2DSlider_eventSetLocked_Parms
	{
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the handle to be interactive or fixed */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Sets the handle to be interactive or fixed" },
	};
#endif // WITH_METADATA
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((Synth2DSlider_eventSetLocked_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Synth2DSlider_eventSetLocked_Parms), &Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynth2DSlider, nullptr, "SetLocked", nullptr, nullptr, Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::Synth2DSlider_eventSetLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::Synth2DSlider_eventSetLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynth2DSlider_SetLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynth2DSlider_SetLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynth2DSlider::execSetLocked)
{
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocked(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USynth2DSlider Function SetLocked

// Begin Class USynth2DSlider Function SetSliderHandleColor
struct Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics
{
	struct Synth2DSlider_eventSetSliderHandleColor_Parms
	{
		FLinearColor InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the color of the handle bar */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Sets the color of the handle bar" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Synth2DSlider_eventSetSliderHandleColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynth2DSlider, nullptr, "SetSliderHandleColor", nullptr, nullptr, Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::Synth2DSlider_eventSetSliderHandleColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::Synth2DSlider_eventSetSliderHandleColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynth2DSlider::execSetSliderHandleColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSliderHandleColor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USynth2DSlider Function SetSliderHandleColor

// Begin Class USynth2DSlider Function SetStepSize
struct Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics
{
	struct Synth2DSlider_eventSetStepSize_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the amount to adjust the value by, when using a controller or keyboard */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Sets the amount to adjust the value by, when using a controller or keyboard" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Synth2DSlider_eventSetStepSize_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynth2DSlider, nullptr, "SetStepSize", nullptr, nullptr, Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::Synth2DSlider_eventSetStepSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::Synth2DSlider_eventSetStepSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynth2DSlider_SetStepSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynth2DSlider_SetStepSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynth2DSlider::execSetStepSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStepSize(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USynth2DSlider Function SetStepSize

// Begin Class USynth2DSlider Function SetValue
struct Z_Construct_UFunction_USynth2DSlider_SetValue_Statics
{
	struct Synth2DSlider_eventSetValue_Parms
	{
		FVector2D InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Sets the current value of the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Synth2DSlider_eventSetValue_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynth2DSlider, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::Synth2DSlider_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::Synth2DSlider_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynth2DSlider_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynth2DSlider_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynth2DSlider::execSetValue)
{
	P_GET_STRUCT(FVector2D,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USynth2DSlider Function SetValue

// Begin Class USynth2DSlider
void USynth2DSlider::StaticRegisterNativesUSynth2DSlider()
{
	UClass* Class = USynth2DSlider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetValue", &USynth2DSlider::execGetValue },
		{ "SetIndentHandle", &USynth2DSlider::execSetIndentHandle },
		{ "SetLocked", &USynth2DSlider::execSetLocked },
		{ "SetSliderHandleColor", &USynth2DSlider::execSetSliderHandleColor },
		{ "SetStepSize", &USynth2DSlider::execSetStepSize },
		{ "SetValue", &USynth2DSlider::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynth2DSlider);
UClass* Z_Construct_UClass_USynth2DSlider_NoRegister()
{
	return USynth2DSlider::StaticClass();
}
struct Z_Construct_UClass_USynth2DSlider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n *\n * * No Children\n */" },
		{ "IncludePath", "UI/Synth2DSlider.h" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueX_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueY_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueXDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueYDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The progress bar style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "The progress bar style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderHandleColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the slider handle in. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "The color to draw the slider handle in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndentHandle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the slidable area should be indented to fit the handle. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Whether the slidable area should be indented to fit the handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the handle is interactive or fixed. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Whether the handle is interactive or fixed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount to adjust the value by, when using a controller or keyboard */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "The amount to adjust the value by, when using a controller or keyboard" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Should the slider be focusable? */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Should the slider be focusable?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseCaptureBegin_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the mouse is pressed and a capture begins. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Invoked when the mouse is pressed and a capture begins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseCaptureEnd_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the mouse is released and a capture ends. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Invoked when the mouse is released and a capture ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerCaptureBegin_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the controller capture begins. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Invoked when the controller capture begins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerCaptureEnd_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the controller capture ends. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Invoked when the controller capture ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChangedX_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by slider or typing. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Called when the value is changed by slider or typing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChangedY_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by slider or typing. */" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSlider.h" },
		{ "ToolTip", "Called when the value is changed by slider or typing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueY;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ValueXDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ValueYDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderHandleColor;
	static void NewProp_IndentHandle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IndentHandle;
	static void NewProp_Locked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Locked;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
	static void NewProp_IsFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseCaptureBegin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseCaptureEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerCaptureBegin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerCaptureEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChangedX;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChangedY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USynth2DSlider_GetValue, "GetValue" }, // 376842935
		{ &Z_Construct_UFunction_USynth2DSlider_SetIndentHandle, "SetIndentHandle" }, // 3086889731
		{ &Z_Construct_UFunction_USynth2DSlider_SetLocked, "SetLocked" }, // 3940442263
		{ &Z_Construct_UFunction_USynth2DSlider_SetSliderHandleColor, "SetSliderHandleColor" }, // 230714042
		{ &Z_Construct_UFunction_USynth2DSlider_SetStepSize, "SetStepSize" }, // 2701458164
		{ &Z_Construct_UFunction_USynth2DSlider_SetValue, "SetValue" }, // 670367773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynth2DSlider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_ValueX = { "ValueX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, ValueX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueX_MetaData), NewProp_ValueX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_ValueY = { "ValueY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, ValueY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueY_MetaData), NewProp_ValueY_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_ValueXDelegate = { "ValueXDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, ValueXDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueXDelegate_MetaData), NewProp_ValueXDelegate_MetaData) }; // 4086961303
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_ValueYDelegate = { "ValueYDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, ValueYDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueYDelegate_MetaData), NewProp_ValueYDelegate_MetaData) }; // 4086961303
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, WidgetStyle), Z_Construct_UScriptStruct_FSynth2DSliderStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 4282380092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_SliderHandleColor = { "SliderHandleColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, SliderHandleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderHandleColor_MetaData), NewProp_SliderHandleColor_MetaData) };
void Z_Construct_UClass_USynth2DSlider_Statics::NewProp_IndentHandle_SetBit(void* Obj)
{
	((USynth2DSlider*)Obj)->IndentHandle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_IndentHandle = { "IndentHandle", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USynth2DSlider), &Z_Construct_UClass_USynth2DSlider_Statics::NewProp_IndentHandle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndentHandle_MetaData), NewProp_IndentHandle_MetaData) };
void Z_Construct_UClass_USynth2DSlider_Statics::NewProp_Locked_SetBit(void* Obj)
{
	((USynth2DSlider*)Obj)->Locked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USynth2DSlider), &Z_Construct_UClass_USynth2DSlider_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locked_MetaData), NewProp_Locked_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
void Z_Construct_UClass_USynth2DSlider_Statics::NewProp_IsFocusable_SetBit(void* Obj)
{
	((USynth2DSlider*)Obj)->IsFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USynth2DSlider), &Z_Construct_UClass_USynth2DSlider_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFocusable_MetaData), NewProp_IsFocusable_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnMouseCaptureBegin = { "OnMouseCaptureBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, OnMouseCaptureBegin), Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureBeginEventSynth2D__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseCaptureBegin_MetaData), NewProp_OnMouseCaptureBegin_MetaData) }; // 2408473318
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnMouseCaptureEnd = { "OnMouseCaptureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, OnMouseCaptureEnd), Z_Construct_UDelegateFunction_Synthesis_OnMouseCaptureEndEventSynth2D__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseCaptureEnd_MetaData), NewProp_OnMouseCaptureEnd_MetaData) }; // 824207159
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnControllerCaptureBegin = { "OnControllerCaptureBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, OnControllerCaptureBegin), Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureBeginEventSynth2D__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControllerCaptureBegin_MetaData), NewProp_OnControllerCaptureBegin_MetaData) }; // 3026059544
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnControllerCaptureEnd = { "OnControllerCaptureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, OnControllerCaptureEnd), Z_Construct_UDelegateFunction_Synthesis_OnControllerCaptureEndEventSynth2D__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControllerCaptureEnd_MetaData), NewProp_OnControllerCaptureEnd_MetaData) }; // 2096777698
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnValueChangedX = { "OnValueChangedX", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, OnValueChangedX), Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChangedX_MetaData), NewProp_OnValueChangedX_MetaData) }; // 1109423930
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnValueChangedY = { "OnValueChangedY", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynth2DSlider, OnValueChangedY), Z_Construct_UDelegateFunction_Synthesis_OnFloatValueChangedEventSynth2D__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChangedY_MetaData), NewProp_OnValueChangedY_MetaData) }; // 1109423930
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynth2DSlider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_ValueX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_ValueY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_ValueXDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_ValueYDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_SliderHandleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_IndentHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_Locked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_StepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_IsFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnMouseCaptureBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnMouseCaptureEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnControllerCaptureBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnControllerCaptureEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnValueChangedX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynth2DSlider_Statics::NewProp_OnValueChangedY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynth2DSlider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynth2DSlider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynth2DSlider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynth2DSlider_Statics::ClassParams = {
	&USynth2DSlider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USynth2DSlider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USynth2DSlider_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynth2DSlider_Statics::Class_MetaDataParams), Z_Construct_UClass_USynth2DSlider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynth2DSlider()
{
	if (!Z_Registration_Info_UClass_USynth2DSlider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynth2DSlider.OuterSingleton, Z_Construct_UClass_USynth2DSlider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynth2DSlider.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USynth2DSlider>()
{
	return USynth2DSlider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynth2DSlider);
USynth2DSlider::~USynth2DSlider() {}
// End Class USynth2DSlider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USynth2DSlider, USynth2DSlider::StaticClass, TEXT("USynth2DSlider"), &Z_Registration_Info_UClass_USynth2DSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynth2DSlider), 1469769523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_2063734984(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
