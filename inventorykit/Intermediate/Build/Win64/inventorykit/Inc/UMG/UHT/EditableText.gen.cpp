// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/EditableText.h"
#include "Runtime/Slate/Public/Widgets/Input/IVirtualKeyboardEntry.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableText() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextOverflowPolicy();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UMG_API UClass* Z_Construct_UClass_UEditableText();
UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType();
UMG_API UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnEditableTextChangedEvent
struct Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics
{
	struct EditableText_eventOnEditableTextChangedEvent_Parms
	{
		FText Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventOnEditableTextChangedEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "OnEditableTextChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::EditableText_eventOnEditableTextChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::EditableText_eventOnEditableTextChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEditableText::FOnEditableTextChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextChangedEvent, FText const& Text)
{
	struct EditableText_eventOnEditableTextChangedEvent_Parms
	{
		FText Text;
	};
	EditableText_eventOnEditableTextChangedEvent_Parms Parms;
	Parms.Text=Text;
	OnEditableTextChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEditableTextChangedEvent

// Begin Delegate FOnEditableTextCommittedEvent
struct Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics
{
	struct EditableText_eventOnEditableTextCommittedEvent_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventOnEditableTextCommittedEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventOnEditableTextCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "OnEditableTextCommittedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::EditableText_eventOnEditableTextCommittedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::EditableText_eventOnEditableTextCommittedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEditableText::FOnEditableTextCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod)
{
	struct EditableText_eventOnEditableTextCommittedEvent_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
	EditableText_eventOnEditableTextCommittedEvent_Parms Parms;
	Parms.Text=Text;
	Parms.CommitMethod=CommitMethod;
	OnEditableTextCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEditableTextCommittedEvent

// Begin Class UEditableText Function GetFont
struct Z_Construct_UFunction_UEditableText_GetFont_Statics
{
	struct EditableText_eventGetFont_Parms
	{
		FSlateFontInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableText_GetFont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventGetFont_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2419385967
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_GetFont_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_GetFont_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetFont_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_GetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "GetFont", nullptr, nullptr, Z_Construct_UFunction_UEditableText_GetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetFont_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_GetFont_Statics::EditableText_eventGetFont_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetFont_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_GetFont_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_GetFont_Statics::EditableText_eventGetFont_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_GetFont()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_GetFont_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execGetFont)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateFontInfo*)Z_Param__Result=P_THIS->GetFont();
	P_NATIVE_END;
}
// End Class UEditableText Function GetFont

// Begin Class UEditableText Function GetHintText
struct Z_Construct_UFunction_UEditableText_GetHintText_Statics
{
	struct EditableText_eventGetHintText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Gets the Hint text that appears when there is no text in the text box */" },
		{ "DisplayName", "GetHintText (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Gets the Hint text that appears when there is no text in the text box" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableText_GetHintText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventGetHintText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_GetHintText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_GetHintText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetHintText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_GetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "GetHintText", nullptr, nullptr, Z_Construct_UFunction_UEditableText_GetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetHintText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_GetHintText_Statics::EditableText_eventGetHintText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetHintText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_GetHintText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_GetHintText_Statics::EditableText_eventGetHintText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_GetHintText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_GetHintText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execGetHintText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetHintText();
	P_NATIVE_END;
}
// End Class UEditableText Function GetHintText

// Begin Class UEditableText Function GetJustification
struct Z_Construct_UFunction_UEditableText_GetJustification_Statics
{
	struct EditableText_eventGetJustification_Parms
	{
		TEnumAsByte<ETextJustify::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditableText_GetJustification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventGetJustification_Parms, ReturnValue), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(0, nullptr) }; // 3082493381
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_GetJustification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_GetJustification_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetJustification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_GetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "GetJustification", nullptr, nullptr, Z_Construct_UFunction_UEditableText_GetJustification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetJustification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_GetJustification_Statics::EditableText_eventGetJustification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetJustification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_GetJustification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_GetJustification_Statics::EditableText_eventGetJustification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_GetJustification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_GetJustification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execGetJustification)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ETextJustify::Type>*)Z_Param__Result=P_THIS->GetJustification();
	P_NATIVE_END;
}
// End Class UEditableText Function GetJustification

// Begin Class UEditableText Function GetText
struct Z_Construct_UFunction_UEditableText_GetText_Statics
{
	struct EditableText_eventGetText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the widget text\n\x09 * @return The widget text\n\x09 */" },
		{ "DisplayName", "GetText (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Gets the widget text\n@return The widget text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableText_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_GetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_GetText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_UEditableText_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_GetText_Statics::EditableText_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_GetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_GetText_Statics::EditableText_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_GetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_GetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execGetText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetText();
	P_NATIVE_END;
}
// End Class UEditableText Function GetText

// Begin Class UEditableText Function SetFont
struct Z_Construct_UFunction_UEditableText_SetFont_Statics
{
	struct EditableText_eventSetFont_Parms
	{
		FSlateFontInfo InFontInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFontInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableText_SetFont_Statics::NewProp_InFontInfo = { "InFontInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventSetFont_Parms, InFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(0, nullptr) }; // 2419385967
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetFont_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetFont_Statics::NewProp_InFontInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetFont_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetFont", nullptr, nullptr, Z_Construct_UFunction_UEditableText_SetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetFont_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_SetFont_Statics::EditableText_eventSetFont_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetFont_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_SetFont_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_SetFont_Statics::EditableText_eventSetFont_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_SetFont()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_SetFont_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execSetFont)
{
	P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFont(Z_Param_InFontInfo);
	P_NATIVE_END;
}
// End Class UEditableText Function SetFont

// Begin Class UEditableText Function SetFontMaterial
struct Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics
{
	struct EditableText_eventSetFontMaterial_Parms
	{
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventSetFontMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetFontMaterial", nullptr, nullptr, Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::EditableText_eventSetFontMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::EditableText_eventSetFontMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_SetFontMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_SetFontMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execSetFontMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFontMaterial(Z_Param_InMaterial);
	P_NATIVE_END;
}
// End Class UEditableText Function SetFontMaterial

// Begin Class UEditableText Function SetFontOutlineMaterial
struct Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics
{
	struct EditableText_eventSetFontOutlineMaterial_Parms
	{
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventSetFontOutlineMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetFontOutlineMaterial", nullptr, nullptr, Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::EditableText_eventSetFontOutlineMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::EditableText_eventSetFontOutlineMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execSetFontOutlineMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFontOutlineMaterial(Z_Param_InMaterial);
	P_NATIVE_END;
}
// End Class UEditableText Function SetFontOutlineMaterial

// Begin Class UEditableText Function SetHintText
struct Z_Construct_UFunction_UEditableText_SetHintText_Statics
{
	struct EditableText_eventSetHintText_Parms
	{
		FText InHintText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InHintText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableText_SetHintText_Statics::NewProp_InHintText = { "InHintText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventSetHintText_Parms, InHintText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetHintText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetHintText_Statics::NewProp_InHintText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetHintText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetHintText", nullptr, nullptr, Z_Construct_UFunction_UEditableText_SetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetHintText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_SetHintText_Statics::EditableText_eventSetHintText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetHintText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_SetHintText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_SetHintText_Statics::EditableText_eventSetHintText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_SetHintText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_SetHintText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execSetHintText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InHintText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHintText(Z_Param_InHintText);
	P_NATIVE_END;
}
// End Class UEditableText Function SetHintText

// Begin Class UEditableText Function SetIsPassword
struct Z_Construct_UFunction_UEditableText_SetIsPassword_Statics
{
	struct EditableText_eventSetIsPassword_Parms
	{
		bool InbIsPassword;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InbIsPassword_MetaData[] = {
		{ "DisplayName", "IsPassword" },
	};
#endif // WITH_METADATA
	static void NewProp_InbIsPassword_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InbIsPassword;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword_SetBit(void* Obj)
{
	((EditableText_eventSetIsPassword_Parms*)Obj)->InbIsPassword = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword = { "InbIsPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EditableText_eventSetIsPassword_Parms), &Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InbIsPassword_MetaData), NewProp_InbIsPassword_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::NewProp_InbIsPassword,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetIsPassword", nullptr, nullptr, Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::EditableText_eventSetIsPassword_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::EditableText_eventSetIsPassword_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_SetIsPassword()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_SetIsPassword_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execSetIsPassword)
{
	P_GET_UBOOL(Z_Param_InbIsPassword);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsPassword(Z_Param_InbIsPassword);
	P_NATIVE_END;
}
// End Class UEditableText Function SetIsPassword

// Begin Class UEditableText Function SetIsReadOnly
struct Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics
{
	struct EditableText_eventSetIsReadOnly_Parms
	{
		bool InbIsReadyOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetIsReadOnly (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InbIsReadyOnly_MetaData[] = {
		{ "DisplayName", "ReadyOnly" },
	};
#endif // WITH_METADATA
	static void NewProp_InbIsReadyOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InbIsReadyOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly_SetBit(void* Obj)
{
	((EditableText_eventSetIsReadOnly_Parms*)Obj)->InbIsReadyOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly = { "InbIsReadyOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EditableText_eventSetIsReadOnly_Parms), &Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InbIsReadyOnly_MetaData), NewProp_InbIsReadyOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::NewProp_InbIsReadyOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetIsReadOnly", nullptr, nullptr, Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::EditableText_eventSetIsReadOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::EditableText_eventSetIsReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_SetIsReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_SetIsReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execSetIsReadOnly)
{
	P_GET_UBOOL(Z_Param_InbIsReadyOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsReadOnly(Z_Param_InbIsReadyOnly);
	P_NATIVE_END;
}
// End Class UEditableText Function SetIsReadOnly

// Begin Class UEditableText Function SetJustification
struct Z_Construct_UFunction_UEditableText_SetJustification_Statics
{
	struct EditableText_eventSetJustification_Parms
	{
		TEnumAsByte<ETextJustify::Type> InJustification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InJustification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditableText_SetJustification_Statics::NewProp_InJustification = { "InJustification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventSetJustification_Parms, InJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(0, nullptr) }; // 3082493381
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetJustification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetJustification_Statics::NewProp_InJustification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetJustification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetJustification", nullptr, nullptr, Z_Construct_UFunction_UEditableText_SetJustification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetJustification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_SetJustification_Statics::EditableText_eventSetJustification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetJustification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_SetJustification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_SetJustification_Statics::EditableText_eventSetJustification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_SetJustification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_SetJustification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execSetJustification)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InJustification);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification));
	P_NATIVE_END;
}
// End Class UEditableText Function SetJustification

// Begin Class UEditableText Function SetMinimumDesiredWidth
struct Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics
{
	struct EditableText_eventSetMinimumDesiredWidth_Parms
	{
		float InMinDesiredWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 *  Set the minimum desired width for this text box\n\x09 *\n\x09 *  @param InMinDesiredWidth new minimum desired width\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Set the minimum desired width for this text box\n\n@param InMinDesiredWidth new minimum desired width" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::NewProp_InMinDesiredWidth = { "InMinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventSetMinimumDesiredWidth_Parms, InMinDesiredWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::NewProp_InMinDesiredWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetMinimumDesiredWidth", nullptr, nullptr, Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::EditableText_eventSetMinimumDesiredWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::EditableText_eventSetMinimumDesiredWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execSetMinimumDesiredWidth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinimumDesiredWidth(Z_Param_InMinDesiredWidth);
	P_NATIVE_END;
}
// End Class UEditableText Function SetMinimumDesiredWidth

// Begin Class UEditableText Function SetText
struct Z_Construct_UFunction_UEditableText_SetText_Statics
{
	struct EditableText_eventSetText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Directly sets the widget text.\n\x09 * Warning: This will wipe any binding created for the Text property!\n\x09 * @param InText The text to assign to the widget\n\x09 */" },
		{ "DisplayName", "SetText (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditableText_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventSetText_Parms, InText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_UEditableText_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_SetText_Statics::EditableText_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_SetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_SetText_Statics::EditableText_eventSetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_SetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_SetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execSetText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetText(Z_Param_InText);
	P_NATIVE_END;
}
// End Class UEditableText Function SetText

// Begin Class UEditableText Function SetTextOverflowPolicy
struct Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics
{
	struct EditableText_eventSetTextOverflowPolicy_Parms
	{
		ETextOverflowPolicy InOverflowPolicy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InOverflowPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InOverflowPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy = { "InOverflowPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EditableText_eventSetTextOverflowPolicy_Parms, InOverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(0, nullptr) }; // 3185772914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, nullptr, "SetTextOverflowPolicy", nullptr, nullptr, Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::EditableText_eventSetTextOverflowPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::EditableText_eventSetTextOverflowPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEditableText::execSetTextOverflowPolicy)
{
	P_GET_ENUM(ETextOverflowPolicy,Z_Param_InOverflowPolicy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextOverflowPolicy(ETextOverflowPolicy(Z_Param_InOverflowPolicy));
	P_NATIVE_END;
}
// End Class UEditableText Function SetTextOverflowPolicy

// Begin Class UEditableText
void UEditableText::GetText_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetText();
}
void UEditableText::SetText_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetText(Value);
}
void UEditableText::GetHintText_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetHintText();
}
void UEditableText::SetHintText_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetHintText(Value);
}
void UEditableText::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	FEditableTextStyle& Value = *(FEditableTextStyle*)InValue;
	Obj->SetWidgetStyle(Value);
}
void UEditableText::GetIsReadOnly_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsReadOnly();
}
void UEditableText::SetIsReadOnly_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsReadOnly(Value);
}
void UEditableText::GetIsPassword_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsPassword();
}
void UEditableText::SetIsPassword_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsPassword(Value);
}
void UEditableText::GetMinimumDesiredWidth_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMinimumDesiredWidth();
}
void UEditableText::SetMinimumDesiredWidth_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMinimumDesiredWidth(Value);
}
void UEditableText::GetIsCaretMovedWhenGainFocus_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsCaretMovedWhenGainFocus();
}
void UEditableText::SetIsCaretMovedWhenGainFocus_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsCaretMovedWhenGainFocus(Value);
}
void UEditableText::GetSelectAllTextWhenFocused_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetSelectAllTextWhenFocused();
}
void UEditableText::SetSelectAllTextWhenFocused_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetSelectAllTextWhenFocused(Value);
}
void UEditableText::GetRevertTextOnEscape_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetRevertTextOnEscape();
}
void UEditableText::SetRevertTextOnEscape_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetRevertTextOnEscape(Value);
}
void UEditableText::GetClearKeyboardFocusOnCommit_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetClearKeyboardFocusOnCommit();
}
void UEditableText::SetClearKeyboardFocusOnCommit_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetClearKeyboardFocusOnCommit(Value);
}
void UEditableText::GetSelectAllTextOnCommit_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetSelectAllTextOnCommit();
}
void UEditableText::SetSelectAllTextOnCommit_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetSelectAllTextOnCommit(Value);
}
void UEditableText::GetJustification_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetJustification();
}
void UEditableText::SetJustification_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	ETextJustify::Type Value = (ETextJustify::Type)*(uint8*)InValue;
	Obj->SetJustification(Value);
}
void UEditableText::GetOverflowPolicy_WrapperImpl(const void* Object, void* OutValue)
{
	const UEditableText* Obj = (const UEditableText*)Object;
	ETextOverflowPolicy& Result = *(ETextOverflowPolicy*)OutValue;
	Result = (ETextOverflowPolicy)Obj->GetTextOverflowPolicy();
}
void UEditableText::SetOverflowPolicy_WrapperImpl(void* Object, const void* InValue)
{
	UEditableText* Obj = (UEditableText*)Object;
	ETextOverflowPolicy& Value = *(ETextOverflowPolicy*)InValue;
	Obj->SetTextOverflowPolicy(Value);
}
void UEditableText::StaticRegisterNativesUEditableText()
{
	UClass* Class = UEditableText::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFont", &UEditableText::execGetFont },
		{ "GetHintText", &UEditableText::execGetHintText },
		{ "GetJustification", &UEditableText::execGetJustification },
		{ "GetText", &UEditableText::execGetText },
		{ "SetFont", &UEditableText::execSetFont },
		{ "SetFontMaterial", &UEditableText::execSetFontMaterial },
		{ "SetFontOutlineMaterial", &UEditableText::execSetFontOutlineMaterial },
		{ "SetHintText", &UEditableText::execSetHintText },
		{ "SetIsPassword", &UEditableText::execSetIsPassword },
		{ "SetIsReadOnly", &UEditableText::execSetIsReadOnly },
		{ "SetJustification", &UEditableText::execSetJustification },
		{ "SetMinimumDesiredWidth", &UEditableText::execSetMinimumDesiredWidth },
		{ "SetText", &UEditableText::execSetText },
		{ "SetTextOverflowPolicy", &UEditableText::execSetTextOverflowPolicy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableText);
UClass* Z_Construct_UClass_UEditableText_NoRegister()
{
	return UEditableText::StaticClass();
}
struct Z_Construct_UClass_UEditableText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editable text box widget\n */" },
		{ "IncludePath", "Components/EditableText.h" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Editable text box widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "BlueprintGetter", "GetText" },
		{ "BlueprintSetter", "SetText" },
		{ "Category", "Content" },
		{ "Comment", "/** The text content for this editable text box widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "The text content for this editable text box widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[] = {
		{ "BlueprintGetter", "GetHintText" },
		{ "BlueprintSetter", "SetHintText" },
		{ "Category", "Content" },
		{ "Comment", "/** Hint text that appears when there is no text in the text box */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Hint text that appears when there is no text in the text box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the hint text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether this text box can actually be modified interactively by the user */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Sets whether this text box can actually be modified interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPassword_MetaData[] = {
		{ "BlueprintSetter", "SetIsPassword" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether this text box is for storing a password */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Sets whether this text box is for storing a password" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDesiredWidth_MetaData[] = {
		{ "BlueprintSetter", "SetMinimumDesiredWidth" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The minimum desired Width for the text */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "The minimum desired Width for the text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCaretMovedWhenGainFocus_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** When set to true the caret is moved when gaining focus */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "When set to true the caret is moved when gaining focus" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextWhenFocused_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to select all text when the user clicks to give focus on the widget */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Whether to select all text when the user clicks to give focus on the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevertTextOnEscape_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to allow the user to back out of changes when they press the escape key */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Whether to allow the user to back out of changes when they press the escape key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to clear keyboard focus when pressing enter to commit changes */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Whether to clear keyboard focus when pressing enter to commit changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextOnCommit_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to select all text when pressing enter to commit changes */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Whether to select all text when pressing enter to commit changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether the context menu can be opened */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Whether the context menu can be opened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardType_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use? */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardOptions_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Additional options for the virtual keyboard */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Additional options for the virtual keyboard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardTrigger_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardDismissAction_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** What action should be taken when the virtual keyboard is dismissed? */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "What action should be taken when the virtual keyboard is dismissed?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[] = {
		{ "BlueprintGetter", "GetJustification" },
		{ "BlueprintSetter", "SetJustification" },
		{ "Category", "Appearance" },
		{ "Comment", "/** How the text should be aligned with the margin. */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "How the text should be aligned with the margin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverflowPolicy_MetaData[] = {
		{ "BlueprintSetter", "SetTextOverflowPolicy" },
		{ "Category", "Clipping" },
		{ "Comment", "/** Sets what happens to text that is clipped and doesn't fit within the clip rect for this widget */" },
		{ "DisplayName", "Overflow Policy" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Sets what happens to text that is clipped and doesn't fit within the clip rect for this widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapedTextOptions_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Controls how the text within this widget should be shaped. */" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Controls how the text within this widget should be shaped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is changed programmatically or interactively by the user */" },
		{ "DisplayName", "OnTextChanged (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Called whenever the text is changed programmatically or interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus. */" },
		{ "DisplayName", "OnTextCommitted (Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/EditableText.h" },
		{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate;
	static const UECodeGen_Private::FTextPropertyParams NewProp_HintText;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditableText_GetFont, "GetFont" }, // 2800156099
		{ &Z_Construct_UFunction_UEditableText_GetHintText, "GetHintText" }, // 2783718834
		{ &Z_Construct_UFunction_UEditableText_GetJustification, "GetJustification" }, // 866408896
		{ &Z_Construct_UFunction_UEditableText_GetText, "GetText" }, // 1667681393
		{ &Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature, "OnEditableTextChangedEvent__DelegateSignature" }, // 3444391479
		{ &Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature, "OnEditableTextCommittedEvent__DelegateSignature" }, // 2094704549
		{ &Z_Construct_UFunction_UEditableText_SetFont, "SetFont" }, // 3435817206
		{ &Z_Construct_UFunction_UEditableText_SetFontMaterial, "SetFontMaterial" }, // 3620138390
		{ &Z_Construct_UFunction_UEditableText_SetFontOutlineMaterial, "SetFontOutlineMaterial" }, // 4014584256
		{ &Z_Construct_UFunction_UEditableText_SetHintText, "SetHintText" }, // 717482952
		{ &Z_Construct_UFunction_UEditableText_SetIsPassword, "SetIsPassword" }, // 3303644416
		{ &Z_Construct_UFunction_UEditableText_SetIsReadOnly, "SetIsReadOnly" }, // 3901564647
		{ &Z_Construct_UFunction_UEditableText_SetJustification, "SetJustification" }, // 1164972049
		{ &Z_Construct_UFunction_UEditableText_SetMinimumDesiredWidth, "SetMinimumDesiredWidth" }, // 398949575
		{ &Z_Construct_UFunction_UEditableText_SetText, "SetText" }, // 1350532196
		{ &Z_Construct_UFunction_UEditableText_SetTextOverflowPolicy, "SetTextOverflowPolicy" }, // 166306684
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetText_WrapperImpl, &UEditableText::GetText_WrapperImpl, 1, STRUCT_OFFSET(UEditableText, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_TextDelegate = { "TextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableText, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextDelegate_MetaData), NewProp_TextDelegate_MetaData) }; // 1712476551
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_HintText = { "HintText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetHintText_WrapperImpl, &UEditableText::GetHintText_WrapperImpl, 1, STRUCT_OFFSET(UEditableText, HintText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintText_MetaData), NewProp_HintText_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_HintTextDelegate = { "HintTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableText, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintTextDelegate_MetaData), NewProp_HintTextDelegate_MetaData) }; // 1712476551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetWidgetStyle_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UEditableText, WidgetStyle), Z_Construct_UScriptStruct_FEditableTextStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 1313030009
void Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly_SetBit(void* Obj)
{
	((UEditableText*)Obj)->IsReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly = { "IsReadOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetIsReadOnly_WrapperImpl, &UEditableText::GetIsReadOnly_WrapperImpl, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsReadOnly_MetaData), NewProp_IsReadOnly_MetaData) };
void Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword_SetBit(void* Obj)
{
	((UEditableText*)Obj)->IsPassword = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword = { "IsPassword", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetIsPassword_WrapperImpl, &UEditableText::GetIsPassword_WrapperImpl, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPassword_MetaData), NewProp_IsPassword_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_MinimumDesiredWidth = { "MinimumDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetMinimumDesiredWidth_WrapperImpl, &UEditableText::GetMinimumDesiredWidth_WrapperImpl, 1, STRUCT_OFFSET(UEditableText, MinimumDesiredWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDesiredWidth_MetaData), NewProp_MinimumDesiredWidth_MetaData) };
void Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus_SetBit(void* Obj)
{
	((UEditableText*)Obj)->IsCaretMovedWhenGainFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus = { "IsCaretMovedWhenGainFocus", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetIsCaretMovedWhenGainFocus_WrapperImpl, &UEditableText::GetIsCaretMovedWhenGainFocus_WrapperImpl, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCaretMovedWhenGainFocus_MetaData), NewProp_IsCaretMovedWhenGainFocus_MetaData) };
void Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused_SetBit(void* Obj)
{
	((UEditableText*)Obj)->SelectAllTextWhenFocused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused = { "SelectAllTextWhenFocused", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetSelectAllTextWhenFocused_WrapperImpl, &UEditableText::GetSelectAllTextWhenFocused_WrapperImpl, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectAllTextWhenFocused_MetaData), NewProp_SelectAllTextWhenFocused_MetaData) };
void Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape_SetBit(void* Obj)
{
	((UEditableText*)Obj)->RevertTextOnEscape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape = { "RevertTextOnEscape", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetRevertTextOnEscape_WrapperImpl, &UEditableText::GetRevertTextOnEscape_WrapperImpl, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevertTextOnEscape_MetaData), NewProp_RevertTextOnEscape_MetaData) };
void Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj)
{
	((UEditableText*)Obj)->ClearKeyboardFocusOnCommit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit = { "ClearKeyboardFocusOnCommit", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetClearKeyboardFocusOnCommit_WrapperImpl, &UEditableText::GetClearKeyboardFocusOnCommit_WrapperImpl, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearKeyboardFocusOnCommit_MetaData), NewProp_ClearKeyboardFocusOnCommit_MetaData) };
void Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit_SetBit(void* Obj)
{
	((UEditableText*)Obj)->SelectAllTextOnCommit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit = { "SelectAllTextOnCommit", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetSelectAllTextOnCommit_WrapperImpl, &UEditableText::GetSelectAllTextOnCommit_WrapperImpl, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectAllTextOnCommit_MetaData), NewProp_SelectAllTextOnCommit_MetaData) };
void Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu_SetBit(void* Obj)
{
	((UEditableText*)Obj)->AllowContextMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu = { "AllowContextMenu", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEditableText), &Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowContextMenu_MetaData), NewProp_AllowContextMenu_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_KeyboardType = { "KeyboardType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableText, KeyboardType), Z_Construct_UEnum_UMG_EVirtualKeyboardType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardType_MetaData), NewProp_KeyboardType_MetaData) }; // 2483245499
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardOptions = { "VirtualKeyboardOptions", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableText, VirtualKeyboardOptions), Z_Construct_UScriptStruct_FVirtualKeyboardOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualKeyboardOptions_MetaData), NewProp_VirtualKeyboardOptions_MetaData) }; // 1065072347
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger = { "VirtualKeyboardTrigger", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableText, VirtualKeyboardTrigger), Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualKeyboardTrigger_MetaData), NewProp_VirtualKeyboardTrigger_MetaData) }; // 393615267
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction = { "VirtualKeyboardDismissAction", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableText, VirtualKeyboardDismissAction), Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualKeyboardDismissAction_MetaData), NewProp_VirtualKeyboardDismissAction_MetaData) }; // 2069404810
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetJustification_WrapperImpl, &UEditableText::GetJustification_WrapperImpl, 1, STRUCT_OFFSET(UEditableText, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Justification_MetaData), NewProp_Justification_MetaData) }; // 3082493381
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_OverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_OverflowPolicy = { "OverflowPolicy", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UEditableText::SetOverflowPolicy_WrapperImpl, &UEditableText::GetOverflowPolicy_WrapperImpl, 1, STRUCT_OFFSET(UEditableText, OverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverflowPolicy_MetaData), NewProp_OverflowPolicy_MetaData) }; // 3185772914
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_ShapedTextOptions = { "ShapedTextOptions", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableText, ShapedTextOptions), Z_Construct_UScriptStruct_FShapedTextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapedTextOptions_MetaData), NewProp_ShapedTextOptions_MetaData) }; // 2363626438
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextChanged = { "OnTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableText, OnTextChanged), Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextChanged_MetaData), NewProp_OnTextChanged_MetaData) }; // 3444391479
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextCommitted = { "OnTextCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableText, OnTextCommitted), Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextCommitted_MetaData), NewProp_OnTextCommitted_MetaData) }; // 2094704549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_TextDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_HintText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_HintTextDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_IsReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_IsPassword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_MinimumDesiredWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_IsCaretMovedWhenGainFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextWhenFocused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_RevertTextOnEscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_SelectAllTextOnCommit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_AllowContextMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_KeyboardType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_VirtualKeyboardDismissAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_Justification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_OverflowPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_OverflowPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_ShapedTextOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableText_Statics::NewProp_OnTextCommitted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditableText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableText_Statics::ClassParams = {
	&UEditableText::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEditableText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditableText_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditableText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditableText()
{
	if (!Z_Registration_Info_UClass_UEditableText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableText.OuterSingleton, Z_Construct_UClass_UEditableText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditableText.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UEditableText>()
{
	return UEditableText::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableText);
UEditableText::~UEditableText() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UEditableText, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UEditableText)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UEditableText, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UEditableText);
// End Class UEditableText

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditableText, UEditableText::StaticClass, TEXT("UEditableText"), &Z_Registration_Info_UClass_UEditableText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableText), 2073412721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_2725340099(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
