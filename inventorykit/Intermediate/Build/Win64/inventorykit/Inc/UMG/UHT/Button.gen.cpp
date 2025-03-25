// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButton() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonClickMethod();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonPressMethod();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonTouchMethod();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
UMG_API UClass* Z_Construct_UClass_UButton();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UContentWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnButtonClickedEvent
struct Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnButtonClickedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonClickedEvent)
{
	OnButtonClickedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnButtonClickedEvent

// Begin Delegate FOnButtonPressedEvent
struct Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnButtonPressedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonPressedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonPressedEvent)
{
	OnButtonPressedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnButtonPressedEvent

// Begin Delegate FOnButtonReleasedEvent
struct Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnButtonReleasedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonReleasedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonReleasedEvent)
{
	OnButtonReleasedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnButtonReleasedEvent

// Begin Delegate FOnButtonHoverEvent
struct Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnButtonHoverEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonHoverEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonHoverEvent)
{
	OnButtonHoverEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnButtonHoverEvent

// Begin Class UButton Function IsPressed
struct Z_Construct_UFunction_UButton_IsPressed_Statics
{
	struct Button_eventIsPressed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "Comment", "/**\n\x09 * Returns true if the user is actively pressing the button.  Do not use this for detecting 'Clicks', use the OnClicked event instead.\n\x09 *\n\x09 * @return true if the user is actively pressing the button otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Returns true if the user is actively pressing the button.  Do not use this for detecting 'Clicks', use the OnClicked event instead.\n\n@return true if the user is actively pressing the button otherwise false." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UButton_IsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Button_eventIsPressed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UButton_IsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Button_eventIsPressed_Parms), &Z_Construct_UFunction_UButton_IsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_IsPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_IsPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_IsPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_IsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "IsPressed", nullptr, nullptr, Z_Construct_UFunction_UButton_IsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_IsPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UButton_IsPressed_Statics::Button_eventIsPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_IsPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButton_IsPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UButton_IsPressed_Statics::Button_eventIsPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UButton_IsPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_IsPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UButton::execIsPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPressed();
	P_NATIVE_END;
}
// End Class UButton Function IsPressed

// Begin Class UButton Function SetBackgroundColor
struct Z_Construct_UFunction_UButton_SetBackgroundColor_Statics
{
	struct Button_eventSetBackgroundColor_Parms
	{
		FLinearColor InBackgroundColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button|Appearance" },
		{ "Comment", "/** Sets the color multiplier for the button background */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Sets the color multiplier for the button background" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBackgroundColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::NewProp_InBackgroundColor = { "InBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Button_eventSetBackgroundColor_Parms, InBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::NewProp_InBackgroundColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetBackgroundColor", nullptr, nullptr, Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::Button_eventSetBackgroundColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::Button_eventSetBackgroundColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UButton_SetBackgroundColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetBackgroundColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UButton::execSetBackgroundColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InBackgroundColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackgroundColor(Z_Param_InBackgroundColor);
	P_NATIVE_END;
}
// End Class UButton Function SetBackgroundColor

// Begin Class UButton Function SetClickMethod
struct Z_Construct_UFunction_UButton_SetClickMethod_Statics
{
	struct Button_eventSetClickMethod_Parms
	{
		TEnumAsByte<EButtonClickMethod::Type> InClickMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InClickMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UButton_SetClickMethod_Statics::NewProp_InClickMethod = { "InClickMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Button_eventSetClickMethod_Parms, InClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(0, nullptr) }; // 1764969274
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetClickMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetClickMethod_Statics::NewProp_InClickMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetClickMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetClickMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetClickMethod", nullptr, nullptr, Z_Construct_UFunction_UButton_SetClickMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetClickMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UButton_SetClickMethod_Statics::Button_eventSetClickMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetClickMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButton_SetClickMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UButton_SetClickMethod_Statics::Button_eventSetClickMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UButton_SetClickMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetClickMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UButton::execSetClickMethod)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InClickMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetClickMethod(EButtonClickMethod::Type(Z_Param_InClickMethod));
	P_NATIVE_END;
}
// End Class UButton Function SetClickMethod

// Begin Class UButton Function SetColorAndOpacity
struct Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics
{
	struct Button_eventSetColorAndOpacity_Parms
	{
		FLinearColor InColorAndOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button|Appearance" },
		{ "Comment", "/** Sets the color multiplier for the button content */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Sets the color multiplier for the button content" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Button_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetColorAndOpacity", nullptr, nullptr, Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::Button_eventSetColorAndOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::Button_eventSetColorAndOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UButton_SetColorAndOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetColorAndOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UButton::execSetColorAndOpacity)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity);
	P_NATIVE_END;
}
// End Class UButton Function SetColorAndOpacity

// Begin Class UButton Function SetPressMethod
struct Z_Construct_UFunction_UButton_SetPressMethod_Statics
{
	struct Button_eventSetPressMethod_Parms
	{
		TEnumAsByte<EButtonPressMethod::Type> InPressMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InPressMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UButton_SetPressMethod_Statics::NewProp_InPressMethod = { "InPressMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Button_eventSetPressMethod_Parms, InPressMethod), Z_Construct_UEnum_SlateCore_EButtonPressMethod, METADATA_PARAMS(0, nullptr) }; // 724634847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetPressMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetPressMethod_Statics::NewProp_InPressMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetPressMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetPressMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetPressMethod", nullptr, nullptr, Z_Construct_UFunction_UButton_SetPressMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetPressMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UButton_SetPressMethod_Statics::Button_eventSetPressMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetPressMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButton_SetPressMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UButton_SetPressMethod_Statics::Button_eventSetPressMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UButton_SetPressMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetPressMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UButton::execSetPressMethod)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InPressMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPressMethod(EButtonPressMethod::Type(Z_Param_InPressMethod));
	P_NATIVE_END;
}
// End Class UButton Function SetPressMethod

// Begin Class UButton Function SetStyle
struct Z_Construct_UFunction_UButton_SetStyle_Statics
{
	struct Button_eventSetStyle_Parms
	{
		FButtonStyle InStyle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button|Appearance" },
		{ "Comment", "/** Sets the color multiplier for the button background */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Sets the color multiplier for the button background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UButton_SetStyle_Statics::NewProp_InStyle = { "InStyle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Button_eventSetStyle_Parms, InStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStyle_MetaData), NewProp_InStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetStyle_Statics::NewProp_InStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetStyle", nullptr, nullptr, Z_Construct_UFunction_UButton_SetStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetStyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UButton_SetStyle_Statics::Button_eventSetStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButton_SetStyle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UButton_SetStyle_Statics::Button_eventSetStyle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UButton_SetStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UButton::execSetStyle)
{
	P_GET_STRUCT_REF(FButtonStyle,Z_Param_Out_InStyle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStyle(Z_Param_Out_InStyle);
	P_NATIVE_END;
}
// End Class UButton Function SetStyle

// Begin Class UButton Function SetTouchMethod
struct Z_Construct_UFunction_UButton_SetTouchMethod_Statics
{
	struct Button_eventSetTouchMethod_Parms
	{
		TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InTouchMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UButton_SetTouchMethod_Statics::NewProp_InTouchMethod = { "InTouchMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Button_eventSetTouchMethod_Parms, InTouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(0, nullptr) }; // 601106521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UButton_SetTouchMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UButton_SetTouchMethod_Statics::NewProp_InTouchMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetTouchMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UButton_SetTouchMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, nullptr, "SetTouchMethod", nullptr, nullptr, Z_Construct_UFunction_UButton_SetTouchMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetTouchMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UButton_SetTouchMethod_Statics::Button_eventSetTouchMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UButton_SetTouchMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UButton_SetTouchMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UButton_SetTouchMethod_Statics::Button_eventSetTouchMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UButton_SetTouchMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UButton_SetTouchMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UButton::execSetTouchMethod)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InTouchMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTouchMethod(EButtonTouchMethod::Type(Z_Param_InTouchMethod));
	P_NATIVE_END;
}
// End Class UButton Function SetTouchMethod

// Begin Class UButton
void UButton::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UButton* Obj = (const UButton*)Object;
	FButtonStyle& Result = *(FButtonStyle*)OutValue;
	Result = (FButtonStyle)Obj->GetStyle();
}
void UButton::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
{
	UButton* Obj = (UButton*)Object;
	FButtonStyle& Value = *(FButtonStyle*)InValue;
	Obj->SetStyle(Value);
}
void UButton::GetColorAndOpacity_WrapperImpl(const void* Object, void* OutValue)
{
	const UButton* Obj = (const UButton*)Object;
	FLinearColor& Result = *(FLinearColor*)OutValue;
	Result = (FLinearColor)Obj->GetColorAndOpacity();
}
void UButton::SetColorAndOpacity_WrapperImpl(void* Object, const void* InValue)
{
	UButton* Obj = (UButton*)Object;
	FLinearColor& Value = *(FLinearColor*)InValue;
	Obj->SetColorAndOpacity(Value);
}
void UButton::GetBackgroundColor_WrapperImpl(const void* Object, void* OutValue)
{
	const UButton* Obj = (const UButton*)Object;
	FLinearColor& Result = *(FLinearColor*)OutValue;
	Result = (FLinearColor)Obj->GetBackgroundColor();
}
void UButton::SetBackgroundColor_WrapperImpl(void* Object, const void* InValue)
{
	UButton* Obj = (UButton*)Object;
	FLinearColor& Value = *(FLinearColor*)InValue;
	Obj->SetBackgroundColor(Value);
}
void UButton::GetClickMethod_WrapperImpl(const void* Object, void* OutValue)
{
	const UButton* Obj = (const UButton*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetClickMethod();
}
void UButton::SetClickMethod_WrapperImpl(void* Object, const void* InValue)
{
	UButton* Obj = (UButton*)Object;
	EButtonClickMethod::Type Value = (EButtonClickMethod::Type)*(uint8*)InValue;
	Obj->SetClickMethod(Value);
}
void UButton::GetTouchMethod_WrapperImpl(const void* Object, void* OutValue)
{
	const UButton* Obj = (const UButton*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetTouchMethod();
}
void UButton::SetTouchMethod_WrapperImpl(void* Object, const void* InValue)
{
	UButton* Obj = (UButton*)Object;
	EButtonTouchMethod::Type Value = (EButtonTouchMethod::Type)*(uint8*)InValue;
	Obj->SetTouchMethod(Value);
}
void UButton::GetPressMethod_WrapperImpl(const void* Object, void* OutValue)
{
	const UButton* Obj = (const UButton*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetPressMethod();
}
void UButton::SetPressMethod_WrapperImpl(void* Object, const void* InValue)
{
	UButton* Obj = (UButton*)Object;
	EButtonPressMethod::Type Value = (EButtonPressMethod::Type)*(uint8*)InValue;
	Obj->SetPressMethod(Value);
}
void UButton::GetIsFocusable_WrapperImpl(const void* Object, void* OutValue)
{
	const UButton* Obj = (const UButton*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsFocusable();
}
void UButton::StaticRegisterNativesUButton()
{
	UClass* Class = UButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPressed", &UButton::execIsPressed },
		{ "SetBackgroundColor", &UButton::execSetBackgroundColor },
		{ "SetClickMethod", &UButton::execSetClickMethod },
		{ "SetColorAndOpacity", &UButton::execSetColorAndOpacity },
		{ "SetPressMethod", &UButton::execSetPressMethod },
		{ "SetStyle", &UButton::execSetStyle },
		{ "SetTouchMethod", &UButton::execSetTouchMethod },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UButton);
UClass* Z_Construct_UClass_UButton_NoRegister()
{
	return UButton::StaticClass();
}
struct Z_Construct_UClass_UButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The button is a click-able primitive widget to enable basic interaction, you\n * can place any other widget inside a button to make a more complex and \n * interesting click-able element in your UI.\n *\n * * Single Child\n * * Clickable\n */" },
		{ "IncludePath", "Components/Button.h" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "The button is a click-able primitive widget to enable basic interaction, you\ncan place any other widget inside a button to make a more complex and\ninteresting click-able element in your UI.\n\n* Single Child\n* Clickable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "BlueprintSetter", "SetStyle" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The button style used at runtime */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "The button style used at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
		{ "BlueprintSetter", "SetColorAndOpacity" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The color multiplier for the button content */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "The color multiplier for the button content" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "BlueprintSetter", "SetBackgroundColor" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The color multiplier for the button background */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "The color multiplier for the button background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickMethod_MetaData[] = {
		{ "BlueprintSetter", "SetClickMethod" },
		{ "Category", "Interaction" },
		{ "Comment", "/** The type of mouse action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "The type of mouse action required by the user to trigger the buttons 'Click'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchMethod_MetaData[] = {
		{ "BlueprintSetter", "SetTouchMethod" },
		{ "Category", "Interaction" },
		{ "Comment", "/** The type of touch action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "The type of touch action required by the user to trigger the buttons 'Click'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressMethod_MetaData[] = {
		{ "BlueprintSetter", "SetPressMethod" },
		{ "Category", "Interaction" },
		{ "Comment", "/** The type of keyboard/gamepad button press action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "The type of keyboard/gamepad button press action required by the user to trigger the buttons 'Click'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Sometimes a button should only be mouse-clickable and never keyboard focusable. */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Sometimes a button should only be mouse-clickable and never keyboard focusable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "Comment", "/** Called when the button is clicked */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Called when the button is clicked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPressed_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "Comment", "/** Called when the button is pressed */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Called when the button is pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReleased_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "Comment", "/** Called when the button is released */" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
		{ "ToolTip", "Called when the button is released" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHovered_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUnhovered_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "ModuleRelativePath", "Public/Components/Button.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClickMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TouchMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PressMethod;
	static void NewProp_IsFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleased;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHovered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnhovered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UButton_IsPressed, "IsPressed" }, // 1313926487
		{ &Z_Construct_UFunction_UButton_SetBackgroundColor, "SetBackgroundColor" }, // 2805646524
		{ &Z_Construct_UFunction_UButton_SetClickMethod, "SetClickMethod" }, // 230028528
		{ &Z_Construct_UFunction_UButton_SetColorAndOpacity, "SetColorAndOpacity" }, // 1867349555
		{ &Z_Construct_UFunction_UButton_SetPressMethod, "SetPressMethod" }, // 3038653395
		{ &Z_Construct_UFunction_UButton_SetStyle, "SetStyle" }, // 1220640186
		{ &Z_Construct_UFunction_UButton_SetTouchMethod, "SetTouchMethod" }, // 2961229414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UButton_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UButton::SetWidgetStyle_WrapperImpl, &UButton::GetWidgetStyle_WrapperImpl, 1, STRUCT_OFFSET(UButton, WidgetStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UButton_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UButton::SetColorAndOpacity_WrapperImpl, &UButton::GetColorAndOpacity_WrapperImpl, 1, STRUCT_OFFSET(UButton, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData), NewProp_ColorAndOpacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UButton_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UButton::SetBackgroundColor_WrapperImpl, &UButton::GetBackgroundColor_WrapperImpl, 1, STRUCT_OFFSET(UButton, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_ClickMethod = { "ClickMethod", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UButton::SetClickMethod_WrapperImpl, &UButton::GetClickMethod_WrapperImpl, 1, STRUCT_OFFSET(UButton, ClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickMethod_MetaData), NewProp_ClickMethod_MetaData) }; // 1764969274
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_TouchMethod = { "TouchMethod", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UButton::SetTouchMethod_WrapperImpl, &UButton::GetTouchMethod_WrapperImpl, 1, STRUCT_OFFSET(UButton, TouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchMethod_MetaData), NewProp_TouchMethod_MetaData) }; // 601106521
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_PressMethod = { "PressMethod", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UButton::SetPressMethod_WrapperImpl, &UButton::GetPressMethod_WrapperImpl, 1, STRUCT_OFFSET(UButton, PressMethod), Z_Construct_UEnum_SlateCore_EButtonPressMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressMethod_MetaData), NewProp_PressMethod_MetaData) }; // 724634847
void Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable_SetBit(void* Obj)
{
	((UButton*)Obj)->IsFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UButton::GetIsFocusable_WrapperImpl, 1, sizeof(bool), sizeof(UButton), &Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFocusable_MetaData), NewProp_IsFocusable_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_OnClicked = { "OnClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButton, OnClicked), Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClicked_MetaData), NewProp_OnClicked_MetaData) }; // 3067245435
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_OnPressed = { "OnPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButton, OnPressed), Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPressed_MetaData), NewProp_OnPressed_MetaData) }; // 2529669347
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_OnReleased = { "OnReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButton, OnReleased), Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReleased_MetaData), NewProp_OnReleased_MetaData) }; // 2296770931
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_OnHovered = { "OnHovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButton, OnHovered), Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHovered_MetaData), NewProp_OnHovered_MetaData) }; // 1037273362
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButton_Statics::NewProp_OnUnhovered = { "OnUnhovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButton, OnUnhovered), Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUnhovered_MetaData), NewProp_OnUnhovered_MetaData) }; // 1037273362
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_ColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_ClickMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_TouchMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_PressMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_IsFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_OnClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_OnPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_OnReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_OnHovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButton_Statics::NewProp_OnUnhovered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UButton_Statics::ClassParams = {
	&UButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UButton()
{
	if (!Z_Registration_Info_UClass_UButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UButton.OuterSingleton, Z_Construct_UClass_UButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UButton.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UButton>()
{
	return UButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UButton);
UButton::~UButton() {}
// End Class UButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UButton, UButton::StaticClass, TEXT("UButton"), &Z_Registration_Info_UClass_UButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UButton), 1561456204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h_585678908(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Button_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
