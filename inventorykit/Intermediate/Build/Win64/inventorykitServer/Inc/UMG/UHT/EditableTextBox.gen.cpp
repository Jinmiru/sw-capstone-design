// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "Runtime/Slate/Public/Widgets/Input/IVirtualKeyboardEntry.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableTextBox() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextOverflowPolicy();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType();
UMG_API UFunction* Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnEditableTextBoxChangedEvent
struct Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics
{
	struct EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms
	{
		FText Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "OnEditableTextBoxChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEditableTextBox::FOnEditableTextBoxChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextBoxChangedEvent, FText const& Text)
{
	struct EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms
	{
		FText Text;
	};
	EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms Parms;
	Parms.Text=Text;
	OnEditableTextBoxChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEditableTextBoxChangedEvent

// Begin Delegate FOnEditableTextBoxCommittedEvent
struct Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics
{
	struct EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "OnEditableTextBoxCommittedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEditableTextBox::FOnEditableTextBoxCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextBoxCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod)
{
	struct EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
	EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms Parms;
	Parms.Text=Text;
	Parms.CommitMethod=CommitMethod;
	OnEditableTextBoxCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEditableTextBoxCommittedEvent

// Begin Class UEditableTextBox Function ClearError
struct Z_Construct_UFunction_UEditableTextBox_ClearError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_ClearError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "ClearError", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_ClearError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_ClearError_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEditableTextBox_ClearError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_ClearError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execClearError)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearError();
	P_NATIVE_END;
}
// End Class UEditableTextBox Function ClearError

// Begin Class UEditableTextBox Function GetText
struct Z_Construct_UFunction_UEditableTextBox_GetText_Statics
{
	struct EditableTextBox_eventGetText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09* Gets the widget text\n\x09* @return The widget text\n\x09*/" },
		{ "DisplayName", "GetText (Text Box)" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Gets the widget text\n@return The widget text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableTextBox_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableTextBox_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableTextBox_GetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_GetText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_GetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_UEditableTextBox_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableTextBox_GetText_Statics::EditableTextBox_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_GetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableTextBox_GetText_Statics::EditableTextBox_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableTextBox_GetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_GetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execGetText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetText();
	P_NATIVE_END;
}
// End Class UEditableTextBox Function GetText

// Begin Class UEditableTextBox Function HasError
struct Z_Construct_UFunction_UEditableTextBox_HasError_Statics
{
	struct EditableTextBox_eventHasError_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEditableTextBox_HasError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EditableTextBox_eventHasError_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableTextBox_HasError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EditableTextBox_eventHasError_Parms), &Z_Construct_UFunction_UEditableTextBox_HasError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableTextBox_HasError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_HasError_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_HasError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_HasError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "HasError", nullptr, nullptr, Z_Construct_UFunction_UEditableTextBox_HasError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_HasError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableTextBox_HasError_Statics::EditableTextBox_eventHasError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_HasError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_HasError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableTextBox_HasError_Statics::EditableTextBox_eventHasError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableTextBox_HasError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_HasError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execHasError)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasError();
	P_NATIVE_END;
}
// End Class UEditableTextBox Function HasError

// Begin Class UEditableTextBox Function SetError
struct Z_Construct_UFunction_UEditableTextBox_SetError_Statics
{
	struct EditableTextBox_eventSetError_Parms
	{
		FText InError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetError (Text Box)" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableTextBox_SetError_Statics::NewProp_InError = { "InError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableTextBox_eventSetError_Parms, InError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableTextBox_SetError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_SetError_Statics::NewProp_InError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_SetError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "SetError", nullptr, nullptr, Z_Construct_UFunction_UEditableTextBox_SetError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableTextBox_SetError_Statics::EditableTextBox_eventSetError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_SetError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableTextBox_SetError_Statics::EditableTextBox_eventSetError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableTextBox_SetError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_SetError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execSetError)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetError(Z_Param_InError);
	P_NATIVE_END;
}
// End Class UEditableTextBox Function SetError

// Begin Class UEditableTextBox Function SetForegroundColor
struct Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics
{
	struct EditableTextBox_eventSetForegroundColor_Parms
	{
		FLinearColor color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetForegroundColor (Text Box)" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableTextBox_eventSetForegroundColor_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::NewProp_color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "SetForegroundColor", nullptr, nullptr, Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::EditableTextBox_eventSetForegroundColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::EditableTextBox_eventSetForegroundColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableTextBox_SetForegroundColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_SetForegroundColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execSetForegroundColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForegroundColor(Z_Param_color);
	P_NATIVE_END;
}
// End Class UEditableTextBox Function SetForegroundColor

// Begin Class UEditableTextBox Function SetHintText
struct Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics
{
	struct EditableTextBox_eventSetHintText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09* Sets the Hint text that appears when there is no text in the text box\n\x09* @param InHintText The text that appears when there is no text in the text box\n\x09*/" },
		{ "DisplayName", "Set Hint Text (Text Box)" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Sets the Hint text that appears when there is no text in the text box\n@param InHintText The text that appears when there is no text in the text box" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableTextBox_eventSetHintText_Parms, InText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "SetHintText", nullptr, nullptr, Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::EditableTextBox_eventSetHintText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::EditableTextBox_eventSetHintText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableTextBox_SetHintText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_SetHintText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execSetHintText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHintText(Z_Param_InText);
	P_NATIVE_END;
}
// End Class UEditableTextBox Function SetHintText

// Begin Class UEditableTextBox Function SetIsPassword
struct Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics
{
	struct EditableTextBox_eventSetIsPassword_Parms
	{
		bool bIsPassword;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "IsPassword" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPassword_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPassword;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::NewProp_bIsPassword_SetBit(void* Obj)
{
	((EditableTextBox_eventSetIsPassword_Parms*)Obj)->bIsPassword = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::NewProp_bIsPassword = { "bIsPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EditableTextBox_eventSetIsPassword_Parms), &Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::NewProp_bIsPassword_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::NewProp_bIsPassword,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "SetIsPassword", nullptr, nullptr, Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::EditableTextBox_eventSetIsPassword_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::EditableTextBox_eventSetIsPassword_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableTextBox_SetIsPassword()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_SetIsPassword_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execSetIsPassword)
{
	P_GET_UBOOL(Z_Param_bIsPassword);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsPassword(Z_Param_bIsPassword);
	P_NATIVE_END;
}
// End Class UEditableTextBox Function SetIsPassword

// Begin Class UEditableTextBox Function SetIsReadOnly
struct Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics
{
	struct EditableTextBox_eventSetIsReadOnly_Parms
	{
		bool bReadOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the Text as Readonly to prevent it from being modified interactively by the user */" },
		{ "DisplayName", "SetIsReadOnly (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Sets the Text as Readonly to prevent it from being modified interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReadOnly_MetaData[] = {
		{ "DisplayName", "ReadyOnly" },
	};
#endif // WITH_METADATA
	static void NewProp_bReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit(void* Obj)
{
	((EditableTextBox_eventSetIsReadOnly_Parms*)Obj)->bReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EditableTextBox_eventSetIsReadOnly_Parms), &Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReadOnly_MetaData), NewProp_bReadOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "SetIsReadOnly", nullptr, nullptr, Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::EditableTextBox_eventSetIsReadOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::EditableTextBox_eventSetIsReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execSetIsReadOnly)
{
	P_GET_UBOOL(Z_Param_bReadOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsReadOnly(Z_Param_bReadOnly);
	P_NATIVE_END;
}
// End Class UEditableTextBox Function SetIsReadOnly

// Begin Class UEditableTextBox Function SetJustification
struct Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics
{
	struct EditableTextBox_eventSetJustification_Parms
	{
		TEnumAsByte<ETextJustify::Type> InJustification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InJustification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::NewProp_InJustification = { "InJustification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableTextBox_eventSetJustification_Parms, InJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(0, nullptr) }; // 3082493381
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::NewProp_InJustification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "SetJustification", nullptr, nullptr, Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::EditableTextBox_eventSetJustification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::EditableTextBox_eventSetJustification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableTextBox_SetJustification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_SetJustification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execSetJustification)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InJustification);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification));
	P_NATIVE_END;
}
// End Class UEditableTextBox Function SetJustification

// Begin Class UEditableTextBox Function SetText
struct Z_Construct_UFunction_UEditableTextBox_SetText_Statics
{
	struct EditableTextBox_eventSetText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09* Directly sets the widget text.\n\x09* Warning: This will wipe any binding created for the Text property!\n\x09* @param InText The text to assign to the widget\n\x09*/" },
		{ "DisplayName", "SetText (Text Box)" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableTextBox_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableTextBox_eventSetText_Parms, InText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableTextBox_SetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_SetText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_UEditableTextBox_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableTextBox_SetText_Statics::EditableTextBox_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_SetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableTextBox_SetText_Statics::EditableTextBox_eventSetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableTextBox_SetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_SetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execSetText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetText(Z_Param_InText);
	P_NATIVE_END;
}
// End Class UEditableTextBox Function SetText

// Begin Class UEditableTextBox Function SetTextOverflowPolicy
struct Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics
{
	struct EditableTextBox_eventSetTextOverflowPolicy_Parms
	{
		ETextOverflowPolicy InOverflowPolicy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09 * Set the text overflow policy for this text box.\n\x09 *\n\x09 * @param InOverflowPolicy the new text overflow policy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Set the text overflow policy for this text box.\n\n@param InOverflowPolicy the new text overflow policy." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InOverflowPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InOverflowPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy = { "InOverflowPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableTextBox_eventSetTextOverflowPolicy_Parms, InOverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(0, nullptr) }; // 3185772914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, nullptr, "SetTextOverflowPolicy", nullptr, nullptr, Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::EditableTextBox_eventSetTextOverflowPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::EditableTextBox_eventSetTextOverflowPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableTextBox::execSetTextOverflowPolicy)
{
	P_GET_ENUM(ETextOverflowPolicy,Z_Param_InOverflowPolicy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextOverflowPolicy(ETextOverflowPolicy(Z_Param_InOverflowPolicy));
	P_NATIVE_END;
}
// End Class UEditableTextBox Function SetTextOverflowPolicy

// Begin Class UEditableTextBox
void UEditableTextBox::GetText_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetText();
}
void UEditableTextBox::SetText_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetText(Value);
}
void UEditableTextBox::GetHintText_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetHintText();
}
void UEditableTextBox::SetHintText_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetHintText(Value);
}
void UEditableTextBox::GetIsReadOnly_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsReadOnly();
}
void UEditableTextBox::SetIsReadOnly_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsReadOnly(Value);
}
void UEditableTextBox::GetIsPassword_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsPassword();
}
void UEditableTextBox::SetIsPassword_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsPassword(Value);
}
void UEditableTextBox::GetMinimumDesiredWidth_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMinimumDesiredWidth();
}
void UEditableTextBox::SetMinimumDesiredWidth_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMinDesiredWidth(Value);
}
void UEditableTextBox::GetIsCaretMovedWhenGainFocus_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsCaretMovedWhenGainFocus();
}
void UEditableTextBox::SetIsCaretMovedWhenGainFocus_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsCaretMovedWhenGainFocus(Value);
}
void UEditableTextBox::GetSelectAllTextWhenFocused_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetSelectAllTextWhenFocused();
}
void UEditableTextBox::SetSelectAllTextWhenFocused_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetSelectAllTextWhenFocused(Value);
}
void UEditableTextBox::GetRevertTextOnEscape_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetRevertTextOnEscape();
}
void UEditableTextBox::SetRevertTextOnEscape_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetRevertTextOnEscape(Value);
}
void UEditableTextBox::GetClearKeyboardFocusOnCommit_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetClearKeyboardFocusOnCommit();
}
void UEditableTextBox::SetClearKeyboardFocusOnCommit_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetClearKeyboardFocusOnCommit(Value);
}
void UEditableTextBox::GetSelectAllTextOnCommit_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetSelectAllTextOnCommit();
}
void UEditableTextBox::SetSelectAllTextOnCommit_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetSelectAllTextOnCommit(Value);
}
void UEditableTextBox::GetJustification_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetJustification();
}
void UEditableTextBox::SetJustification_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	ETextJustify::Type Value = (ETextJustify::Type)*(uint8*)InValue;
	Obj->SetJustification(Value);
}
void UEditableTextBox::GetOverflowPolicy_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableTextBox* Obj = (const UEditableTextBox*)Object;
	ETextOverflowPolicy& Result = *(ETextOverflowPolicy*)OutValue;
	Result = (ETextOverflowPolicy)Obj->GetTextOverflowPolicy();
}
void UEditableTextBox::SetOverflowPolicy_WrapperImpl(void* Object, const void* InValue)
{
	UEditableTextBox* Obj = (UEditableTextBox*)Object;
	ETextOverflowPolicy& Value = *(ETextOverflowPolicy*)InValue;
	Obj->SetTextOverflowPolicy(Value);
}
void UEditableTextBox::StaticRegisterNativesUEditableTextBox()
{
	UClass* Class = UEditableTextBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearError", &UEditableTextBox::execClearError },
		{ "GetText", &UEditableTextBox::execGetText },
		{ "HasError", &UEditableTextBox::execHasError },
		{ "SetError", &UEditableTextBox::execSetError },
		{ "SetForegroundColor", &UEditableTextBox::execSetForegroundColor },
		{ "SetHintText", &UEditableTextBox::execSetHintText },
		{ "SetIsPassword", &UEditableTextBox::execSetIsPassword },
		{ "SetIsReadOnly", &UEditableTextBox::execSetIsReadOnly },
		{ "SetJustification", &UEditableTextBox::execSetJustification },
		{ "SetText", &UEditableTextBox::execSetText },
		{ "SetTextOverflowPolicy", &UEditableTextBox::execSetTextOverflowPolicy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableTextBox);
UClass* Z_Construct_UClass_UEditableTextBox_NoRegister()
{
	return UEditableTextBox::StaticClass();
}
struct Z_Construct_UClass_UEditableTextBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows the user to type in custom text.  Only permits a single line of text to be entered.\n * \n * * No Children\n * * Text Entry\n */" },
		{ "DisplayName", "Text Box" },
		{ "IncludePath", "Components/EditableTextBox.h" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Allows the user to type in custom text.  Only permits a single line of text to be entered.\n\n* No Children\n* Text Entry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "BlueprintGetter", "GetText" },
		{ "BlueprintSetter", "SetText" },
		{ "Category", "Content" },
		{ "Comment", "/** The text content for this editable text box widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "The text content for this editable text box widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[] = {
		{ "BlueprintSetter", "SetHintText" },
		{ "Category", "Content" },
		{ "Comment", "/** Hint text that appears when there is no text in the text box */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Hint text that appears when there is no text in the text box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the hint text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the Text Box as Readonly to prevent it from being modified interactively by the user */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Sets the Text Box as Readonly to prevent it from being modified interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPassword_MetaData[] = {
		{ "BlueprintSetter", "SetIsPassword" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether this text box is for storing a password */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Sets whether this text box is for storing a password" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The minimum desired size for the text */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "The minimum desired size for the text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCaretMovedWhenGainFocus_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Workaround as we lose focus when the auto completion closes. */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Workaround as we lose focus when the auto completion closes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextWhenFocused_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to select all text when the user clicks to give focus on the widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Whether to select all text when the user clicks to give focus on the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevertTextOnEscape_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to allow the user to back out of changes when they press the escape key */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Whether to allow the user to back out of changes when they press the escape key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to clear keyboard focus when pressing enter to commit changes */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Whether to clear keyboard focus when pressing enter to commit changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextOnCommit_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to select all text when pressing enter to commit changes */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Whether to select all text when pressing enter to commit changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether the context menu can be opened */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Whether the context menu can be opened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardType_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use? */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardOptions_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Additional options to use for the virtual keyboard summoned by this widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Additional options to use for the virtual keyboard summoned by this widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardTrigger_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** The type of event that will trigger the display of the virtual keyboard */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "The type of event that will trigger the display of the virtual keyboard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardDismissAction_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** What action should be taken when the virtual keyboard is dismissed? */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "What action should be taken when the virtual keyboard is dismissed?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[] = {
		{ "BlueprintSetter", "SetJustification" },
		{ "Category", "Appearance" },
		{ "Comment", "/** How the text should be aligned with the margin. */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "How the text should be aligned with the margin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverflowPolicy_MetaData[] = {
		{ "BlueprintSetter", "SetTextOverflowPolicy" },
		{ "Category", "Clipping" },
		{ "Comment", "/** Sets what happens to text that is clipped and doesn't fit within the clip rect for this widget */" },
		{ "DisplayName", "Overflow Policy" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Sets what happens to text that is clipped and doesn't fit within the clip rect for this widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapedTextOptions_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Controls how the text within this widget should be shaped. */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Controls how the text within this widget should be shaped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[] = {
		{ "Category", "TextBox|Event" },
		{ "Comment", "/** Called whenever the text is changed programmatically or interactively by the user */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Called whenever the text is changed programmatically or interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[] = {
		{ "Category", "TextBox|Event" },
		{ "Comment", "/** Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus. */" },
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
		{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFontDeprecationDone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_HintText;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate;
	static void NewProp_IsReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsReadOnly;
	static void NewProp_IsPassword_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPassword;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDesiredWidth;
	static void NewProp_IsCaretMovedWhenGainFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCaretMovedWhenGainFocus;
	static void NewProp_SelectAllTextWhenFocused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextWhenFocused;
	static void NewProp_RevertTextOnEscape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RevertTextOnEscape;
	static void NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearKeyboardFocusOnCommit;
	static void NewProp_SelectAllTextOnCommit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextOnCommit;
	static void NewProp_AllowContextMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyboardType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualKeyboardOptions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualKeyboardTrigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualKeyboardTrigger;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualKeyboardDismissAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualKeyboardDismissAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Justification;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverflowPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverflowPolicy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapedTextOptions;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsFontDeprecationDone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFontDeprecationDone;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditableTextBox_ClearError, "ClearError" }, // 290557797
		{ &Z_Construct_UFunction_UEditableTextBox_GetText, "GetText" }, // 2016469755
		{ &Z_Construct_UFunction_UEditableTextBox_HasError, "HasError" }, // 2054378907
		{ &Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature, "OnEditableTextBoxChangedEvent__DelegateSignature" }, // 3722984909
		{ &Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature, "OnEditableTextBoxCommittedEvent__DelegateSignature" }, // 1318148529
		{ &Z_Construct_UFunction_UEditableTextBox_SetError, "SetError" }, // 2159425080
		{ &Z_Construct_UFunction_UEditableTextBox_SetForegroundColor, "SetForegroundColor" }, // 1288510760
		{ &Z_Construct_UFunction_UEditableTextBox_SetHintText, "SetHintText" }, // 889739638
		{ &Z_Construct_UFunction_UEditableTextBox_SetIsPassword, "SetIsPassword" }, // 57110035
		{ &Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly, "SetIsReadOnly" }, // 1398267648
		{ &Z_Construct_UFunction_UEditableTextBox_SetJustification, "SetJustification" }, // 2376995831
		{ &Z_Construct_UFunction_UEditableTextBox_SetText, "SetText" }, // 3072092308
		{ &Z_Construct_UFunction_UEditableTextBox_SetTextOverflowPolicy, "SetTextOverflowPolicy" }, // 2926913479
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableTextBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetText_WrapperImpl, &UEditableTextBox::GetText_WrapperImpl, 1, STRUCT_OFFSET(UEditableTextBox, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_TextDelegate = { "TextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBox, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextDelegate_MetaData), NewProp_TextDelegate_MetaData) }; // 1712476551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBox, WidgetStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 661305945
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_HintText = { "HintText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetHintText_WrapperImpl, &UEditableTextBox::GetHintText_WrapperImpl, 1, STRUCT_OFFSET(UEditableTextBox, HintText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintText_MetaData), NewProp_HintText_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_HintTextDelegate = { "HintTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBox, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintTextDelegate_MetaData), NewProp_HintTextDelegate_MetaData) }; // 1712476551
void Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsReadOnly_SetBit(void* Obj)
{
	((UEditableTextBox*)Obj)->IsReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsReadOnly = { "IsReadOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetIsReadOnly_WrapperImpl, &UEditableTextBox::GetIsReadOnly_WrapperImpl, 1, sizeof(bool), sizeof(UEditableTextBox), &Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsReadOnly_MetaData), NewProp_IsReadOnly_MetaData) };
void Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsPassword_SetBit(void* Obj)
{
	((UEditableTextBox*)Obj)->IsPassword = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsPassword = { "IsPassword", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetIsPassword_WrapperImpl, &UEditableTextBox::GetIsPassword_WrapperImpl, 1, sizeof(bool), sizeof(UEditableTextBox), &Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsPassword_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPassword_MetaData), NewProp_IsPassword_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_MinimumDesiredWidth = { "MinimumDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetMinimumDesiredWidth_WrapperImpl, &UEditableTextBox::GetMinimumDesiredWidth_WrapperImpl, 1, STRUCT_OFFSET(UEditableTextBox, MinimumDesiredWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDesiredWidth_MetaData), NewProp_MinimumDesiredWidth_MetaData) };
void Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsCaretMovedWhenGainFocus_SetBit(void* Obj)
{
	((UEditableTextBox*)Obj)->IsCaretMovedWhenGainFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsCaretMovedWhenGainFocus = { "IsCaretMovedWhenGainFocus", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetIsCaretMovedWhenGainFocus_WrapperImpl, &UEditableTextBox::GetIsCaretMovedWhenGainFocus_WrapperImpl, 1, sizeof(bool), sizeof(UEditableTextBox), &Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsCaretMovedWhenGainFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCaretMovedWhenGainFocus_MetaData), NewProp_IsCaretMovedWhenGainFocus_MetaData) };
void Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextWhenFocused_SetBit(void* Obj)
{
	((UEditableTextBox*)Obj)->SelectAllTextWhenFocused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextWhenFocused = { "SelectAllTextWhenFocused", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetSelectAllTextWhenFocused_WrapperImpl, &UEditableTextBox::GetSelectAllTextWhenFocused_WrapperImpl, 1, sizeof(bool), sizeof(UEditableTextBox), &Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextWhenFocused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectAllTextWhenFocused_MetaData), NewProp_SelectAllTextWhenFocused_MetaData) };
void Z_Construct_UClass_UEditableTextBox_Statics::NewProp_RevertTextOnEscape_SetBit(void* Obj)
{
	((UEditableTextBox*)Obj)->RevertTextOnEscape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_RevertTextOnEscape = { "RevertTextOnEscape", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetRevertTextOnEscape_WrapperImpl, &UEditableTextBox::GetRevertTextOnEscape_WrapperImpl, 1, sizeof(bool), sizeof(UEditableTextBox), &Z_Construct_UClass_UEditableTextBox_Statics::NewProp_RevertTextOnEscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevertTextOnEscape_MetaData), NewProp_RevertTextOnEscape_MetaData) };
void Z_Construct_UClass_UEditableTextBox_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj)
{
	((UEditableTextBox*)Obj)->ClearKeyboardFocusOnCommit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_ClearKeyboardFocusOnCommit = { "ClearKeyboardFocusOnCommit", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetClearKeyboardFocusOnCommit_WrapperImpl, &UEditableTextBox::GetClearKeyboardFocusOnCommit_WrapperImpl, 1, sizeof(bool), sizeof(UEditableTextBox), &Z_Construct_UClass_UEditableTextBox_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearKeyboardFocusOnCommit_MetaData), NewProp_ClearKeyboardFocusOnCommit_MetaData) };
void Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextOnCommit_SetBit(void* Obj)
{
	((UEditableTextBox*)Obj)->SelectAllTextOnCommit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextOnCommit = { "SelectAllTextOnCommit", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetSelectAllTextOnCommit_WrapperImpl, &UEditableTextBox::GetSelectAllTextOnCommit_WrapperImpl, 1, sizeof(bool), sizeof(UEditableTextBox), &Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextOnCommit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectAllTextOnCommit_MetaData), NewProp_SelectAllTextOnCommit_MetaData) };
void Z_Construct_UClass_UEditableTextBox_Statics::NewProp_AllowContextMenu_SetBit(void* Obj)
{
	((UEditableTextBox*)Obj)->AllowContextMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_AllowContextMenu = { "AllowContextMenu", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEditableTextBox), &Z_Construct_UClass_UEditableTextBox_Statics::NewProp_AllowContextMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowContextMenu_MetaData), NewProp_AllowContextMenu_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_KeyboardType = { "KeyboardType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBox, KeyboardType), Z_Construct_UEnum_UMG_EVirtualKeyboardType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardType_MetaData), NewProp_KeyboardType_MetaData) }; // 2483245499
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_VirtualKeyboardOptions = { "VirtualKeyboardOptions", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBox, VirtualKeyboardOptions), Z_Construct_UScriptStruct_FVirtualKeyboardOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualKeyboardOptions_MetaData), NewProp_VirtualKeyboardOptions_MetaData) }; // 1065072347
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_VirtualKeyboardTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_VirtualKeyboardTrigger = { "VirtualKeyboardTrigger", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBox, VirtualKeyboardTrigger), Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualKeyboardTrigger_MetaData), NewProp_VirtualKeyboardTrigger_MetaData) }; // 393615267
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction = { "VirtualKeyboardDismissAction", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBox, VirtualKeyboardDismissAction), Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualKeyboardDismissAction_MetaData), NewProp_VirtualKeyboardDismissAction_MetaData) }; // 2069404810
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetJustification_WrapperImpl, &UEditableTextBox::GetJustification_WrapperImpl, 1, STRUCT_OFFSET(UEditableTextBox, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Justification_MetaData), NewProp_Justification_MetaData) }; // 3082493381
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_OverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_OverflowPolicy = { "OverflowPolicy", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableTextBox::SetOverflowPolicy_WrapperImpl, &UEditableTextBox::GetOverflowPolicy_WrapperImpl, 1, STRUCT_OFFSET(UEditableTextBox, OverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverflowPolicy_MetaData), NewProp_OverflowPolicy_MetaData) }; // 3185772914
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_ShapedTextOptions = { "ShapedTextOptions", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBox, ShapedTextOptions), Z_Construct_UScriptStruct_FShapedTextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapedTextOptions_MetaData), NewProp_ShapedTextOptions_MetaData) }; // 2363626438
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_OnTextChanged = { "OnTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBox, OnTextChanged), Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextChanged_MetaData), NewProp_OnTextChanged_MetaData) }; // 3722984909
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_OnTextCommitted = { "OnTextCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBox, OnTextCommitted), Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextCommitted_MetaData), NewProp_OnTextCommitted_MetaData) }; // 1318148529
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UEditableTextBox_Statics::NewProp_bIsFontDeprecationDone_SetBit(void* Obj)
{
	((UEditableTextBox*)Obj)->bIsFontDeprecationDone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableTextBox_Statics::NewProp_bIsFontDeprecationDone = { "bIsFontDeprecationDone", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEditableTextBox), &Z_Construct_UClass_UEditableTextBox_Statics::NewProp_bIsFontDeprecationDone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFontDeprecationDone_MetaData), NewProp_bIsFontDeprecationDone_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableTextBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_TextDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_HintText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_HintTextDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsPassword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_MinimumDesiredWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_IsCaretMovedWhenGainFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextWhenFocused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_RevertTextOnEscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_ClearKeyboardFocusOnCommit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextOnCommit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_AllowContextMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_KeyboardType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_VirtualKeyboardOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_VirtualKeyboardTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_VirtualKeyboardTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_Justification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_OverflowPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_OverflowPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_ShapedTextOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_OnTextChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_OnTextCommitted,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBox_Statics::NewProp_bIsFontDeprecationDone,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditableTextBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableTextBox_Statics::ClassParams = {
	&UEditableTextBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEditableTextBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBox_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditableTextBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditableTextBox()
{
	if (!Z_Registration_Info_UClass_UEditableTextBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableTextBox.OuterSingleton, Z_Construct_UClass_UEditableTextBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditableTextBox.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UEditableTextBox>()
{
	return UEditableTextBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableTextBox);
UEditableTextBox::~UEditableTextBox() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UEditableTextBox, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UEditableTextBox)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UEditableTextBox, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UEditableTextBox);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEditableTextBox)
// End Class UEditableTextBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditableTextBox, UEditableTextBox::StaticClass, TEXT("UEditableTextBox"), &Z_Registration_Info_UClass_UEditableTextBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableTextBox), 2471225409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_3110113456(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
