// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/MultiLineEditableTextBox.h"
#include "Runtime/Slate/Public/Widgets/Input/IVirtualKeyboardEntry.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiLineEditableTextBox() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox();
UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnMultiLineEditableTextBoxChangedEvent
struct Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics
{
	struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms
	{
		FText Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextBoxChangedEvent, FText const& Text)
{
	struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms
	{
		FText Text;
	};
	MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms Parms;
	Parms.Text=Text;
	OnMultiLineEditableTextBoxChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMultiLineEditableTextBoxChangedEvent

// Begin Delegate FOnMultiLineEditableTextBoxCommittedEvent
struct Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics
{
	struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextBoxCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod)
{
	struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
	MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms Parms;
	Parms.Text=Text;
	Parms.CommitMethod=CommitMethod;
	OnMultiLineEditableTextBoxCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMultiLineEditableTextBoxCommittedEvent

// Begin Class UMultiLineEditableTextBox Function GetHintText
struct Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics
{
	struct MultiLineEditableTextBox_eventGetHintText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns the Hint text that appears when there is no text in the text box */" },
		{ "DisplayName", "GetHintText (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Returns the Hint text that appears when there is no text in the text box" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventGetHintText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "GetHintText", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::MultiLineEditableTextBox_eventGetHintText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::MultiLineEditableTextBox_eventGetHintText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableTextBox::execGetHintText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetHintText();
	P_NATIVE_END;
}
// End Class UMultiLineEditableTextBox Function GetHintText

// Begin Class UMultiLineEditableTextBox Function GetText
struct Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics
{
	struct MultiLineEditableTextBox_eventGetText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the widget text\n\x09 * @return The widget text\n\x09 */" },
		{ "DisplayName", "GetText (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Gets the widget text\n@return The widget text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::MultiLineEditableTextBox_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::MultiLineEditableTextBox_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_GetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_GetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableTextBox::execGetText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetText();
	P_NATIVE_END;
}
// End Class UMultiLineEditableTextBox Function GetText

// Begin Class UMultiLineEditableTextBox Function SetError
struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics
{
	struct MultiLineEditableTextBox_eventSetError_Parms
	{
		FText InError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetError (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::NewProp_InError = { "InError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetError_Parms, InError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::NewProp_InError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetError", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::MultiLineEditableTextBox_eventSetError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::MultiLineEditableTextBox_eventSetError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetError)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetError(Z_Param_InError);
	P_NATIVE_END;
}
// End Class UMultiLineEditableTextBox Function SetError

// Begin Class UMultiLineEditableTextBox Function SetForegroundColor
struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics
{
	struct MultiLineEditableTextBox_eventSetForegroundColor_Parms
	{
		FLinearColor color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetForegroundColor (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetForegroundColor_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::NewProp_color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetForegroundColor", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::MultiLineEditableTextBox_eventSetForegroundColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::MultiLineEditableTextBox_eventSetForegroundColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetForegroundColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForegroundColor(Z_Param_color);
	P_NATIVE_END;
}
// End Class UMultiLineEditableTextBox Function SetForegroundColor

// Begin Class UMultiLineEditableTextBox Function SetHintText
struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics
{
	struct MultiLineEditableTextBox_eventSetHintText_Parms
	{
		FText InHintText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09* Sets the Hint text that appears when there is no text in the text box\n\x09* @param InHintText The text that appears when there is no text in the text box\n\x09*/" },
		{ "DisplayName", "SetHintText (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Sets the Hint text that appears when there is no text in the text box\n@param InHintText The text that appears when there is no text in the text box" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InHintText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::NewProp_InHintText = { "InHintText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetHintText_Parms, InHintText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::NewProp_InHintText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetHintText", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::MultiLineEditableTextBox_eventSetHintText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::MultiLineEditableTextBox_eventSetHintText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetHintText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InHintText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHintText(Z_Param_InHintText);
	P_NATIVE_END;
}
// End Class UMultiLineEditableTextBox Function SetHintText

// Begin Class UMultiLineEditableTextBox Function SetIsReadOnly
struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics
{
	struct MultiLineEditableTextBox_eventSetIsReadOnly_Parms
	{
		bool bReadOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the Text as Readonly to prevent it from being modified interactively by the user */" },
		{ "DisplayName", "SetIsReadOnly (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
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
void Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit(void* Obj)
{
	((MultiLineEditableTextBox_eventSetIsReadOnly_Parms*)Obj)->bReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiLineEditableTextBox_eventSetIsReadOnly_Parms), &Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReadOnly_MetaData), NewProp_bReadOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::NewProp_bReadOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetIsReadOnly", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::MultiLineEditableTextBox_eventSetIsReadOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::MultiLineEditableTextBox_eventSetIsReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetIsReadOnly)
{
	P_GET_UBOOL(Z_Param_bReadOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsReadOnly(Z_Param_bReadOnly);
	P_NATIVE_END;
}
// End Class UMultiLineEditableTextBox Function SetIsReadOnly

// Begin Class UMultiLineEditableTextBox Function SetText
struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics
{
	struct MultiLineEditableTextBox_eventSetText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Directly sets the widget text.\n\x09 * Warning: This will wipe any binding created for the Text property!\n\x09 * @param InText The text to assign to the widget\n\x09 */" },
		{ "DisplayName", "SetText (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetText_Parms, InText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::MultiLineEditableTextBox_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::MultiLineEditableTextBox_eventSetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetText(Z_Param_InText);
	P_NATIVE_END;
}
// End Class UMultiLineEditableTextBox Function SetText

// Begin Class UMultiLineEditableTextBox Function SetTextStyle
struct Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics
{
	struct MultiLineEditableTextBox_eventSetTextStyle_Parms
	{
		FTextBlockStyle InTextStyle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetTextStyle (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTextStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTextStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::NewProp_InTextStyle = { "InTextStyle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetTextStyle_Parms, InTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTextStyle_MetaData), NewProp_InTextStyle_MetaData) }; // 4086975916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::NewProp_InTextStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, nullptr, "SetTextStyle", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::MultiLineEditableTextBox_eventSetTextStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::MultiLineEditableTextBox_eventSetTextStyle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableTextBox::execSetTextStyle)
{
	P_GET_STRUCT_REF(FTextBlockStyle,Z_Param_Out_InTextStyle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextStyle(Z_Param_Out_InTextStyle);
	P_NATIVE_END;
}
// End Class UMultiLineEditableTextBox Function SetTextStyle

// Begin Class UMultiLineEditableTextBox
void UMultiLineEditableTextBox::GetText_WrapperImpl(const void* Object, void* OutValue)
{
	const UMultiLineEditableTextBox* Obj = (const UMultiLineEditableTextBox*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetText();
}
void UMultiLineEditableTextBox::SetText_WrapperImpl(void* Object, const void* InValue)
{
	UMultiLineEditableTextBox* Obj = (UMultiLineEditableTextBox*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetText(Value);
}
void UMultiLineEditableTextBox::GetHintText_WrapperImpl(const void* Object, void* OutValue)
{
	const UMultiLineEditableTextBox* Obj = (const UMultiLineEditableTextBox*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetHintText();
}
void UMultiLineEditableTextBox::SetHintText_WrapperImpl(void* Object, const void* InValue)
{
	UMultiLineEditableTextBox* Obj = (UMultiLineEditableTextBox*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetHintText(Value);
}
void UMultiLineEditableTextBox::GetbIsReadOnly_WrapperImpl(const void* Object, void* OutValue)
{
	const UMultiLineEditableTextBox* Obj = (const UMultiLineEditableTextBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsReadOnly();
}
void UMultiLineEditableTextBox::SetbIsReadOnly_WrapperImpl(void* Object, const void* InValue)
{
	UMultiLineEditableTextBox* Obj = (UMultiLineEditableTextBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsReadOnly(Value);
}
void UMultiLineEditableTextBox::StaticRegisterNativesUMultiLineEditableTextBox()
{
	UClass* Class = UMultiLineEditableTextBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHintText", &UMultiLineEditableTextBox::execGetHintText },
		{ "GetText", &UMultiLineEditableTextBox::execGetText },
		{ "SetError", &UMultiLineEditableTextBox::execSetError },
		{ "SetForegroundColor", &UMultiLineEditableTextBox::execSetForegroundColor },
		{ "SetHintText", &UMultiLineEditableTextBox::execSetHintText },
		{ "SetIsReadOnly", &UMultiLineEditableTextBox::execSetIsReadOnly },
		{ "SetText", &UMultiLineEditableTextBox::execSetText },
		{ "SetTextStyle", &UMultiLineEditableTextBox::execSetTextStyle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiLineEditableTextBox);
UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister()
{
	return UMultiLineEditableTextBox::StaticClass();
}
struct Z_Construct_UClass_UMultiLineEditableTextBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows a user to enter multiple lines of text\n */" },
		{ "DisplayName", "Text Box (Multi-Line)" },
		{ "IncludePath", "Components/MultiLineEditableTextBox.h" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Allows a user to enter multiple lines of text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "BlueprintGetter", "GetText" },
		{ "BlueprintSetter", "SetText" },
		{ "Category", "Content" },
		{ "Comment", "/** The text content for this editable text box widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text content for this editable text box widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[] = {
		{ "BlueprintGetter", "GetHintText" },
		{ "BlueprintSetter", "SetHintText" },
		{ "Category", "Content" },
		{ "Comment", "/** Hint text that appears when there is no text in the text box */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Hint text that appears when there is no text in the text box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the hint text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "The style" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[] = {
		{ "Comment", "/** The text style */" },
		{ "DisplayName", "Text Style" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "The text style" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the Text as Readonly to prevent it from being modified interactively by the user */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Sets the Text as Readonly to prevent it from being modified interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether the context menu can be opened */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Whether the context menu can be opened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardOptions_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Additional options to be used by the virtual keyboard summoned from this widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Additional options to be used by the virtual keyboard summoned from this widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardDismissAction_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** What action should be taken when the virtual keyboard is dismissed? */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "What action should be taken when the virtual keyboard is dismissed?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is changed programmatically or interactively by the user */" },
		{ "DisplayName", "OnTextChanged (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Called whenever the text is changed programmatically or interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus. */" },
		{ "DisplayName", "OnTextCommitted (Multi-Line Text Box)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
		{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFontDeprecationDone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FTextPropertyParams NewProp_HintText;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bIsReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
	static void NewProp_AllowContextMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualKeyboardOptions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualKeyboardDismissAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualKeyboardDismissAction;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsFontDeprecationDone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFontDeprecationDone;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_GetHintText, "GetHintText" }, // 666527443
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_GetText, "GetText" }, // 3056258340
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature" }, // 1702871291
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature" }, // 159430850
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetError, "SetError" }, // 2422481599
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetForegroundColor, "SetForegroundColor" }, // 2577654253
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetHintText, "SetHintText" }, // 3235739929
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly, "SetIsReadOnly" }, // 1355974895
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetText, "SetText" }, // 4082632587
		{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetTextStyle, "SetTextStyle" }, // 741896421
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiLineEditableTextBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UMultiLineEditableTextBox::SetText_WrapperImpl, &UMultiLineEditableTextBox::GetText_WrapperImpl, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText = { "HintText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UMultiLineEditableTextBox::SetHintText_WrapperImpl, &UMultiLineEditableTextBox::GetHintText_WrapperImpl, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, HintText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintText_MetaData), NewProp_HintText_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate = { "HintTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintTextDelegate_MetaData), NewProp_HintTextDelegate_MetaData) }; // 1712476551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, WidgetStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 661305945
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, TextStyle_DEPRECATED), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextStyle_MetaData), NewProp_TextStyle_MetaData) }; // 4086975916
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
{
	((UMultiLineEditableTextBox*)Obj)->bIsReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UMultiLineEditableTextBox::SetbIsReadOnly_WrapperImpl, &UMultiLineEditableTextBox::GetbIsReadOnly_WrapperImpl, 1, sizeof(bool), sizeof(UMultiLineEditableTextBox), &Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReadOnly_MetaData), NewProp_bIsReadOnly_MetaData) };
void Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_SetBit(void* Obj)
{
	((UMultiLineEditableTextBox*)Obj)->AllowContextMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu = { "AllowContextMenu", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMultiLineEditableTextBox), &Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowContextMenu_MetaData), NewProp_AllowContextMenu_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions = { "VirtualKeyboardOptions", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, VirtualKeyboardOptions), Z_Construct_UScriptStruct_FVirtualKeyboardOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualKeyboardOptions_MetaData), NewProp_VirtualKeyboardOptions_MetaData) }; // 1065072347
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction = { "VirtualKeyboardDismissAction", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, VirtualKeyboardDismissAction), Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualKeyboardDismissAction_MetaData), NewProp_VirtualKeyboardDismissAction_MetaData) }; // 2069404810
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged = { "OnTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, OnTextChanged), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextChanged_MetaData), NewProp_OnTextChanged_MetaData) }; // 1702871291
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted = { "OnTextCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableTextBox, OnTextCommitted), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextCommitted_MetaData), NewProp_OnTextCommitted_MetaData) }; // 159430850
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone_SetBit(void* Obj)
{
	((UMultiLineEditableTextBox*)Obj)->bIsFontDeprecationDone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone = { "bIsFontDeprecationDone", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMultiLineEditableTextBox), &Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFontDeprecationDone_MetaData), NewProp_bIsFontDeprecationDone_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiLineEditableTextBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_HintTextDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_WidgetStyle,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_TextStyle,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_AllowContextMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_VirtualKeyboardDismissAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_OnTextCommitted,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableTextBox_Statics::NewProp_bIsFontDeprecationDone,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMultiLineEditableTextBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiLineEditableTextBox_Statics::ClassParams = {
	&UMultiLineEditableTextBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMultiLineEditableTextBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableTextBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiLineEditableTextBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiLineEditableTextBox()
{
	if (!Z_Registration_Info_UClass_UMultiLineEditableTextBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiLineEditableTextBox.OuterSingleton, Z_Construct_UClass_UMultiLineEditableTextBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiLineEditableTextBox.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UMultiLineEditableTextBox>()
{
	return UMultiLineEditableTextBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiLineEditableTextBox);
UMultiLineEditableTextBox::~UMultiLineEditableTextBox() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMultiLineEditableTextBox, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UMultiLineEditableTextBox)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMultiLineEditableTextBox, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UMultiLineEditableTextBox);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMultiLineEditableTextBox)
// End Class UMultiLineEditableTextBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiLineEditableTextBox, UMultiLineEditableTextBox::StaticClass, TEXT("UMultiLineEditableTextBox"), &Z_Registration_Info_UClass_UMultiLineEditableTextBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiLineEditableTextBox), 1746182735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_588432997(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
