// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/InputKeySelector.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputKeySelector() {}

// Begin Cross Module References
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
UMG_API UClass* Z_Construct_UClass_UInputKeySelector();
UMG_API UClass* Z_Construct_UClass_UInputKeySelector_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UMG_API UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnKeySelected
struct Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics
{
	struct InputKeySelector_eventOnKeySelected_Parms
	{
		FInputChord SelectedKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::NewProp_SelectedKey = { "SelectedKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputKeySelector_eventOnKeySelected_Parms, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(0, nullptr) }; // 4109060215
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::NewProp_SelectedKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "OnKeySelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::InputKeySelector_eventOnKeySelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::InputKeySelector_eventOnKeySelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UInputKeySelector::FOnKeySelected_DelegateWrapper(const FMulticastScriptDelegate& OnKeySelected, FInputChord SelectedKey)
{
	struct InputKeySelector_eventOnKeySelected_Parms
	{
		FInputChord SelectedKey;
	};
	InputKeySelector_eventOnKeySelected_Parms Parms;
	Parms.SelectedKey=SelectedKey;
	OnKeySelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnKeySelected

// Begin Delegate FOnIsSelectingKeyChanged
struct Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "OnIsSelectingKeyChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UInputKeySelector::FOnIsSelectingKeyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnIsSelectingKeyChanged)
{
	OnIsSelectingKeyChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnIsSelectingKeyChanged

// Begin Class UInputKeySelector Function GetIsSelectingKey
struct Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics
{
	struct InputKeySelector_eventGetIsSelectingKey_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if the widget is currently selecting a key, otherwise returns false. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Returns true if the widget is currently selecting a key, otherwise returns false." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputKeySelector_eventGetIsSelectingKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputKeySelector_eventGetIsSelectingKey_Parms), &Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "GetIsSelectingKey", nullptr, nullptr, Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::InputKeySelector_eventGetIsSelectingKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::InputKeySelector_eventGetIsSelectingKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputKeySelector::execGetIsSelectingKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsSelectingKey();
	P_NATIVE_END;
}
// End Class UInputKeySelector Function GetIsSelectingKey

// Begin Class UInputKeySelector Function SetAllowGamepadKeys
struct Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics
{
	struct InputKeySelector_eventSetAllowGamepadKeys_Parms
	{
		bool bInAllowGamepadKeys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets whether or not gamepad keys are allowed in the selected key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets whether or not gamepad keys are allowed in the selected key." },
	};
#endif // WITH_METADATA
	static void NewProp_bInAllowGamepadKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllowGamepadKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys_SetBit(void* Obj)
{
	((InputKeySelector_eventSetAllowGamepadKeys_Parms*)Obj)->bInAllowGamepadKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys = { "bInAllowGamepadKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputKeySelector_eventSetAllowGamepadKeys_Parms), &Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::NewProp_bInAllowGamepadKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetAllowGamepadKeys", nullptr, nullptr, Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::InputKeySelector_eventSetAllowGamepadKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::InputKeySelector_eventSetAllowGamepadKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputKeySelector::execSetAllowGamepadKeys)
{
	P_GET_UBOOL(Z_Param_bInAllowGamepadKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllowGamepadKeys(Z_Param_bInAllowGamepadKeys);
	P_NATIVE_END;
}
// End Class UInputKeySelector Function SetAllowGamepadKeys

// Begin Class UInputKeySelector Function SetAllowModifierKeys
struct Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics
{
	struct InputKeySelector_eventSetAllowModifierKeys_Parms
	{
		bool bInAllowModifierKeys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets whether or not modifier keys are allowed in the selected key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets whether or not modifier keys are allowed in the selected key." },
	};
#endif // WITH_METADATA
	static void NewProp_bInAllowModifierKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllowModifierKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys_SetBit(void* Obj)
{
	((InputKeySelector_eventSetAllowModifierKeys_Parms*)Obj)->bInAllowModifierKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys = { "bInAllowModifierKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputKeySelector_eventSetAllowModifierKeys_Parms), &Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::NewProp_bInAllowModifierKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetAllowModifierKeys", nullptr, nullptr, Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::InputKeySelector_eventSetAllowModifierKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::InputKeySelector_eventSetAllowModifierKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputKeySelector::execSetAllowModifierKeys)
{
	P_GET_UBOOL(Z_Param_bInAllowModifierKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllowModifierKeys(Z_Param_bInAllowModifierKeys);
	P_NATIVE_END;
}
// End Class UInputKeySelector Function SetAllowModifierKeys

// Begin Class UInputKeySelector Function SetEscapeKeys
struct Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics
{
	struct InputKeySelector_eventSetEscapeKeys_Parms
	{
		TArray<FKey> InKeys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets escape keys. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets escape keys." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_Inner = { "InKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys = { "InKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputKeySelector_eventSetEscapeKeys_Parms, InKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKeys_MetaData), NewProp_InKeys_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::NewProp_InKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetEscapeKeys", nullptr, nullptr, Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::InputKeySelector_eventSetEscapeKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::InputKeySelector_eventSetEscapeKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputKeySelector::execSetEscapeKeys)
{
	P_GET_TARRAY_REF(FKey,Z_Param_Out_InKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEscapeKeys(Z_Param_Out_InKeys);
	P_NATIVE_END;
}
// End Class UInputKeySelector Function SetEscapeKeys

// Begin Class UInputKeySelector Function SetKeySelectionText
struct Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics
{
	struct InputKeySelector_eventSetKeySelectionText_Parms
	{
		FText InKeySelectionText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the text which is displayed while selecting keys. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text which is displayed while selecting keys." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InKeySelectionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::NewProp_InKeySelectionText = { "InKeySelectionText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputKeySelector_eventSetKeySelectionText_Parms, InKeySelectionText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::NewProp_InKeySelectionText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetKeySelectionText", nullptr, nullptr, Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::InputKeySelector_eventSetKeySelectionText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::InputKeySelector_eventSetKeySelectionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputKeySelector::execSetKeySelectionText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InKeySelectionText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetKeySelectionText(Z_Param_InKeySelectionText);
	P_NATIVE_END;
}
// End Class UInputKeySelector Function SetKeySelectionText

// Begin Class UInputKeySelector Function SetNoKeySpecifiedText
struct Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics
{
	struct InputKeySelector_eventSetNoKeySpecifiedText_Parms
	{
		FText InNoKeySpecifiedText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the text to display when no key text is available or not selecting a key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text to display when no key text is available or not selecting a key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InNoKeySpecifiedText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::NewProp_InNoKeySpecifiedText = { "InNoKeySpecifiedText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputKeySelector_eventSetNoKeySpecifiedText_Parms, InNoKeySpecifiedText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::NewProp_InNoKeySpecifiedText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetNoKeySpecifiedText", nullptr, nullptr, Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::InputKeySelector_eventSetNoKeySpecifiedText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::InputKeySelector_eventSetNoKeySpecifiedText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputKeySelector::execSetNoKeySpecifiedText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InNoKeySpecifiedText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNoKeySpecifiedText(Z_Param_InNoKeySpecifiedText);
	P_NATIVE_END;
}
// End Class UInputKeySelector Function SetNoKeySpecifiedText

// Begin Class UInputKeySelector Function SetSelectedKey
struct Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics
{
	struct InputKeySelector_eventSetSelectedKey_Parms
	{
		FInputChord InSelectedKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the currently selected key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the currently selected key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSelectedKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectedKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey = { "InSelectedKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputKeySelector_eventSetSelectedKey_Parms, InSelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectedKey_MetaData), NewProp_InSelectedKey_MetaData) }; // 4109060215
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::NewProp_InSelectedKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetSelectedKey", nullptr, nullptr, Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::InputKeySelector_eventSetSelectedKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::InputKeySelector_eventSetSelectedKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputKeySelector_SetSelectedKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetSelectedKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputKeySelector::execSetSelectedKey)
{
	P_GET_STRUCT_REF(FInputChord,Z_Param_Out_InSelectedKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedKey(Z_Param_Out_InSelectedKey);
	P_NATIVE_END;
}
// End Class UInputKeySelector Function SetSelectedKey

// Begin Class UInputKeySelector Function SetTextBlockVisibility
struct Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics
{
	struct InputKeySelector_eventSetTextBlockVisibility_Parms
	{
		ESlateVisibility InVisibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the visibility of the text block. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the visibility of the text block." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputKeySelector_eventSetTextBlockVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVisibility_MetaData), NewProp_InVisibility_MetaData) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::NewProp_InVisibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, nullptr, "SetTextBlockVisibility", nullptr, nullptr, Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::InputKeySelector_eventSetTextBlockVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::InputKeySelector_eventSetTextBlockVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputKeySelector::execSetTextBlockVisibility)
{
	P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextBlockVisibility(ESlateVisibility(Z_Param_InVisibility));
	P_NATIVE_END;
}
// End Class UInputKeySelector Function SetTextBlockVisibility

// Begin Class UInputKeySelector
void UInputKeySelector::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
	FButtonStyle& Result = *(FButtonStyle*)OutValue;
	Result = (FButtonStyle)Obj->GetButtonStyle();
}
void UInputKeySelector::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
{
	UInputKeySelector* Obj = (UInputKeySelector*)Object;
	FButtonStyle& Value = *(FButtonStyle*)InValue;
	Obj->SetButtonStyle(Value);
}
void UInputKeySelector::GetTextStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
	FTextBlockStyle& Result = *(FTextBlockStyle*)OutValue;
	Result = (FTextBlockStyle)Obj->GetTextStyle();
}
void UInputKeySelector::SetTextStyle_WrapperImpl(void* Object, const void* InValue)
{
	UInputKeySelector* Obj = (UInputKeySelector*)Object;
	FTextBlockStyle& Value = *(FTextBlockStyle*)InValue;
	Obj->SetTextStyle(Value);
}
void UInputKeySelector::GetSelectedKey_WrapperImpl(const void* Object, void* OutValue)
{
	const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
	FInputChord& Result = *(FInputChord*)OutValue;
	Result = (FInputChord)Obj->GetSelectedKey();
}
void UInputKeySelector::SetSelectedKey_WrapperImpl(void* Object, const void* InValue)
{
	UInputKeySelector* Obj = (UInputKeySelector*)Object;
	FInputChord& Value = *(FInputChord*)InValue;
	Obj->SetSelectedKey(Value);
}
void UInputKeySelector::GetMargin_WrapperImpl(const void* Object, void* OutValue)
{
	const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
	FMargin& Result = *(FMargin*)OutValue;
	Result = (FMargin)Obj->GetMargin();
}
void UInputKeySelector::SetMargin_WrapperImpl(void* Object, const void* InValue)
{
	UInputKeySelector* Obj = (UInputKeySelector*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetMargin(Value);
}
void UInputKeySelector::GetKeySelectionText_WrapperImpl(const void* Object, void* OutValue)
{
	const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetKeySelectionText();
}
void UInputKeySelector::SetKeySelectionText_WrapperImpl(void* Object, const void* InValue)
{
	UInputKeySelector* Obj = (UInputKeySelector*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetKeySelectionText(Value);
}
void UInputKeySelector::GetNoKeySpecifiedText_WrapperImpl(const void* Object, void* OutValue)
{
	const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetNoKeySpecifiedText();
}
void UInputKeySelector::SetNoKeySpecifiedText_WrapperImpl(void* Object, const void* InValue)
{
	UInputKeySelector* Obj = (UInputKeySelector*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetNoKeySpecifiedText(Value);
}
void UInputKeySelector::GetbAllowModifierKeys_WrapperImpl(const void* Object, void* OutValue)
{
	const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->AllowModifierKeys();
}
void UInputKeySelector::SetbAllowModifierKeys_WrapperImpl(void* Object, const void* InValue)
{
	UInputKeySelector* Obj = (UInputKeySelector*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetAllowModifierKeys(Value);
}
void UInputKeySelector::GetbAllowGamepadKeys_WrapperImpl(const void* Object, void* OutValue)
{
	const UInputKeySelector* Obj = (const UInputKeySelector*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->AllowGamepadKeys();
}
void UInputKeySelector::SetbAllowGamepadKeys_WrapperImpl(void* Object, const void* InValue)
{
	UInputKeySelector* Obj = (UInputKeySelector*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetAllowGamepadKeys(Value);
}
void UInputKeySelector::StaticRegisterNativesUInputKeySelector()
{
	UClass* Class = UInputKeySelector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIsSelectingKey", &UInputKeySelector::execGetIsSelectingKey },
		{ "SetAllowGamepadKeys", &UInputKeySelector::execSetAllowGamepadKeys },
		{ "SetAllowModifierKeys", &UInputKeySelector::execSetAllowModifierKeys },
		{ "SetEscapeKeys", &UInputKeySelector::execSetEscapeKeys },
		{ "SetKeySelectionText", &UInputKeySelector::execSetKeySelectionText },
		{ "SetNoKeySpecifiedText", &UInputKeySelector::execSetNoKeySpecifiedText },
		{ "SetSelectedKey", &UInputKeySelector::execSetSelectedKey },
		{ "SetTextBlockVisibility", &UInputKeySelector::execSetTextBlockVisibility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputKeySelector);
UClass* Z_Construct_UClass_UInputKeySelector_NoRegister()
{
	return UInputKeySelector::StaticClass();
}
struct Z_Construct_UClass_UInputKeySelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A widget for selecting a single key or a single key with a modifier. */" },
		{ "IncludePath", "Components/InputKeySelector.h" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "A widget for selecting a single key or a single key with a modifier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The button style used at runtime */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The button style used at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The button style used at runtime */" },
		{ "DisplayName", "Text Style" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The button style used at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedKey_MetaData[] = {
		{ "BlueprintSetter", "SetSelectedKey" },
		{ "Category", "Key Selection" },
		{ "Comment", "/** The currently selected key chord. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The currently selected key chord." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount of blank space around the text used to display the currently selected key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "The amount of blank space around the text used to display the currently selected key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeySelectionText_MetaData[] = {
		{ "BlueprintSetter", "SetKeySelectionText" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the text which is displayed while selecting keys. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text which is displayed while selecting keys." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoKeySpecifiedText_MetaData[] = {
		{ "BlueprintSetter", "SetNoKeySpecifiedText" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the text to display when no key text is available or not selecting a key. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Sets the text to display when no key text is available or not selecting a key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowModifierKeys_MetaData[] = {
		{ "BlueprintSetter", "SetAllowModifierKeys" },
		{ "Category", "Key Selection" },
		{ "Comment", "/**\n\x09 * When true modifier keys such as control and alt are allowed in the\n\x09 * input chord representing the selected key, if false modifier keys are ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "When true modifier keys such as control and alt are allowed in the\ninput chord representing the selected key, if false modifier keys are ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowGamepadKeys_MetaData[] = {
		{ "BlueprintSetter", "SetAllowGamepadKeys" },
		{ "Category", "Key Selection" },
		{ "Comment", "/** When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscapeKeys_MetaData[] = {
		{ "Category", "Key Selection" },
		{ "Comment", "/** When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKeySelected_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever a new key is selected by the user. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Called whenever a new key is selected by the user." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnIsSelectingKeyChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the key selection mode starts or stops. */" },
		{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
		{ "ToolTip", "Called whenever the key selection mode starts or stops." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Margin;
	static const UECodeGen_Private::FTextPropertyParams NewProp_KeySelectionText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NoKeySpecifiedText;
	static void NewProp_bAllowModifierKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowModifierKeys;
	static void NewProp_bAllowGamepadKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGamepadKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EscapeKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EscapeKeys;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeySelected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsSelectingKeyChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey, "GetIsSelectingKey" }, // 1747186656
		{ &Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature, "OnIsSelectingKeyChanged__DelegateSignature" }, // 1562795086
		{ &Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature, "OnKeySelected__DelegateSignature" }, // 2249231630
		{ &Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys, "SetAllowGamepadKeys" }, // 2607191847
		{ &Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys, "SetAllowModifierKeys" }, // 1371726487
		{ &Z_Construct_UFunction_UInputKeySelector_SetEscapeKeys, "SetEscapeKeys" }, // 2243965502
		{ &Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText, "SetKeySelectionText" }, // 1975125527
		{ &Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText, "SetNoKeySpecifiedText" }, // 3766888848
		{ &Z_Construct_UFunction_UInputKeySelector_SetSelectedKey, "SetSelectedKey" }, // 2762918682
		{ &Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility, "SetTextBlockVisibility" }, // 1731449954
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputKeySelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UInputKeySelector::SetWidgetStyle_WrapperImpl, &UInputKeySelector::GetWidgetStyle_WrapperImpl, 1, STRUCT_OFFSET(UInputKeySelector, WidgetStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UInputKeySelector::SetTextStyle_WrapperImpl, &UInputKeySelector::GetTextStyle_WrapperImpl, 1, STRUCT_OFFSET(UInputKeySelector, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextStyle_MetaData), NewProp_TextStyle_MetaData) }; // 4086975916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey = { "SelectedKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UInputKeySelector::SetSelectedKey_WrapperImpl, &UInputKeySelector::GetSelectedKey_WrapperImpl, 1, STRUCT_OFFSET(UInputKeySelector, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedKey_MetaData), NewProp_SelectedKey_MetaData) }; // 4109060215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UInputKeySelector::SetMargin_WrapperImpl, &UInputKeySelector::GetMargin_WrapperImpl, 1, STRUCT_OFFSET(UInputKeySelector, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Margin_MetaData), NewProp_Margin_MetaData) }; // 2986890016
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText = { "KeySelectionText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UInputKeySelector::SetKeySelectionText_WrapperImpl, &UInputKeySelector::GetKeySelectionText_WrapperImpl, 1, STRUCT_OFFSET(UInputKeySelector, KeySelectionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeySelectionText_MetaData), NewProp_KeySelectionText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText = { "NoKeySpecifiedText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UInputKeySelector::SetNoKeySpecifiedText_WrapperImpl, &UInputKeySelector::GetNoKeySpecifiedText_WrapperImpl, 1, STRUCT_OFFSET(UInputKeySelector, NoKeySpecifiedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoKeySpecifiedText_MetaData), NewProp_NoKeySpecifiedText_MetaData) };
void Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_SetBit(void* Obj)
{
	((UInputKeySelector*)Obj)->bAllowModifierKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys = { "bAllowModifierKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UInputKeySelector::SetbAllowModifierKeys_WrapperImpl, &UInputKeySelector::GetbAllowModifierKeys_WrapperImpl, 1, sizeof(bool), sizeof(UInputKeySelector), &Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowModifierKeys_MetaData), NewProp_bAllowModifierKeys_MetaData) };
void Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_SetBit(void* Obj)
{
	((UInputKeySelector*)Obj)->bAllowGamepadKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys = { "bAllowGamepadKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UInputKeySelector::SetbAllowGamepadKeys_WrapperImpl, &UInputKeySelector::GetbAllowGamepadKeys_WrapperImpl, 1, sizeof(bool), sizeof(UInputKeySelector), &Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowGamepadKeys_MetaData), NewProp_bAllowGamepadKeys_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_Inner = { "EscapeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys = { "EscapeKeys", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputKeySelector, EscapeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscapeKeys_MetaData), NewProp_EscapeKeys_MetaData) }; // 658672854
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected = { "OnKeySelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputKeySelector, OnKeySelected), Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKeySelected_MetaData), NewProp_OnKeySelected_MetaData) }; // 2249231630
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged = { "OnIsSelectingKeyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputKeySelector, OnIsSelectingKeyChanged), Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnIsSelectingKeyChanged_MetaData), NewProp_OnIsSelectingKeyChanged_MetaData) }; // 1562795086
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputKeySelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_TextStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_SelectedKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_Margin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_KeySelectionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_NoKeySpecifiedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowModifierKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_bAllowGamepadKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_EscapeKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnKeySelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeySelector_Statics::NewProp_OnIsSelectingKeyChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputKeySelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputKeySelector_Statics::ClassParams = {
	&UInputKeySelector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputKeySelector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeySelector_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputKeySelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputKeySelector()
{
	if (!Z_Registration_Info_UClass_UInputKeySelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputKeySelector.OuterSingleton, Z_Construct_UClass_UInputKeySelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputKeySelector.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UInputKeySelector>()
{
	return UInputKeySelector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputKeySelector);
UInputKeySelector::~UInputKeySelector() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UInputKeySelector, SelectedKey)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UInputKeySelector)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UInputKeySelector, SelectedKey)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UInputKeySelector);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInputKeySelector)
// End Class UInputKeySelector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputKeySelector, UInputKeySelector::StaticClass, TEXT("UInputKeySelector"), &Z_Registration_Info_UClass_UInputKeySelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputKeySelector), 3110590246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_2159943469(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
