// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/MultiLineEditableText.h"
#include "Runtime/Slate/Public/Widgets/Input/IVirtualKeyboardEntry.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiLineEditableText() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText();
UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnMultiLineEditableTextChangedEvent
struct Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics
{
	struct MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms
	{
		FText Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "OnMultiLineEditableTextChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMultiLineEditableText::FOnMultiLineEditableTextChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextChangedEvent, FText const& Text)
{
	struct MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms
	{
		FText Text;
	};
	MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms Parms;
	Parms.Text=Text;
	OnMultiLineEditableTextChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMultiLineEditableTextChangedEvent

// Begin Delegate FOnMultiLineEditableTextCommittedEvent
struct Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics
{
	struct MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "OnMultiLineEditableTextCommittedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMultiLineEditableText::FOnMultiLineEditableTextCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod)
{
	struct MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
	MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms Parms;
	Parms.Text=Text;
	Parms.CommitMethod=CommitMethod;
	OnMultiLineEditableTextCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMultiLineEditableTextCommittedEvent

// Begin Class UMultiLineEditableText Function GetFont
struct Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics
{
	struct MultiLineEditableText_eventGetFont_Parms
	{
		FSlateFontInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventGetFont_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2419385967
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "GetFont", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::MultiLineEditableText_eventGetFont_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::MultiLineEditableText_eventGetFont_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableText_GetFont()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_GetFont_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableText::execGetFont)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateFontInfo*)Z_Param__Result=P_THIS->GetFont();
	P_NATIVE_END;
}
// End Class UMultiLineEditableText Function GetFont

// Begin Class UMultiLineEditableText Function GetHintText
struct Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics
{
	struct MultiLineEditableText_eventGetHintText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns the Hint text that appears when there is no text in the text box */" },
		{ "DisplayName", "GetHintText (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Returns the Hint text that appears when there is no text in the text box" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventGetHintText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "GetHintText", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::MultiLineEditableText_eventGetHintText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::MultiLineEditableText_eventGetHintText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableText_GetHintText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableText::execGetHintText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetHintText();
	P_NATIVE_END;
}
// End Class UMultiLineEditableText Function GetHintText

// Begin Class UMultiLineEditableText Function GetText
struct Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics
{
	struct MultiLineEditableText_eventGetText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09* Gets the widget text\n\x09* @return The widget text\n\x09*/" },
		{ "DisplayName", "GetText (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Gets the widget text\n@return The widget text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::MultiLineEditableText_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::MultiLineEditableText_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableText_GetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableText::execGetText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetText();
	P_NATIVE_END;
}
// End Class UMultiLineEditableText Function GetText

// Begin Class UMultiLineEditableText Function SetFont
struct Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics
{
	struct MultiLineEditableText_eventSetFont_Parms
	{
		FSlateFontInfo InFontInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFontInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::NewProp_InFontInfo = { "InFontInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventSetFont_Parms, InFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(0, nullptr) }; // 2419385967
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::NewProp_InFontInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetFont", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::MultiLineEditableText_eventSetFont_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::MultiLineEditableText_eventSetFont_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetFont()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetFont_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableText::execSetFont)
{
	P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFont(Z_Param_InFontInfo);
	P_NATIVE_END;
}
// End Class UMultiLineEditableText Function SetFont

// Begin Class UMultiLineEditableText Function SetFontMaterial
struct Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics
{
	struct MultiLineEditableText_eventSetFontMaterial_Parms
	{
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventSetFontMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetFontMaterial", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::MultiLineEditableText_eventSetFontMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::MultiLineEditableText_eventSetFontMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableText::execSetFontMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFontMaterial(Z_Param_InMaterial);
	P_NATIVE_END;
}
// End Class UMultiLineEditableText Function SetFontMaterial

// Begin Class UMultiLineEditableText Function SetFontOutlineMaterial
struct Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics
{
	struct MultiLineEditableText_eventSetFontOutlineMaterial_Parms
	{
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventSetFontOutlineMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetFontOutlineMaterial", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::MultiLineEditableText_eventSetFontOutlineMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::MultiLineEditableText_eventSetFontOutlineMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableText::execSetFontOutlineMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFontOutlineMaterial(Z_Param_InMaterial);
	P_NATIVE_END;
}
// End Class UMultiLineEditableText Function SetFontOutlineMaterial

// Begin Class UMultiLineEditableText Function SetHintText
struct Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics
{
	struct MultiLineEditableText_eventSetHintText_Parms
	{
		FText InHintText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** \n\x09* Sets the Hint text that appears when there is no text in the text box \n\x09* @param InHintText The text that appears when there is no text in the text box \n\x09*/" },
		{ "DisplayName", "SetHintText (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Sets the Hint text that appears when there is no text in the text box\n@param InHintText The text that appears when there is no text in the text box" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InHintText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::NewProp_InHintText = { "InHintText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventSetHintText_Parms, InHintText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::NewProp_InHintText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetHintText", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::MultiLineEditableText_eventSetHintText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::MultiLineEditableText_eventSetHintText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetHintText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableText::execSetHintText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InHintText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHintText(Z_Param_InHintText);
	P_NATIVE_END;
}
// End Class UMultiLineEditableText Function SetHintText

// Begin Class UMultiLineEditableText Function SetIsReadOnly
struct Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics
{
	struct MultiLineEditableText_eventSetIsReadOnly_Parms
	{
		bool bReadOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the Text as Readonly to prevent it from being modified interactively by the user */" },
		{ "DisplayName", "SetIsReadOnly (Multi-Line Editable Text" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Sets the Text as Readonly to prevent it from being modified interactively by the user" },
	};
#endif // WITH_METADATA
	static void NewProp_bReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit(void* Obj)
{
	((MultiLineEditableText_eventSetIsReadOnly_Parms*)Obj)->bReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiLineEditableText_eventSetIsReadOnly_Parms), &Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetIsReadOnly", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::MultiLineEditableText_eventSetIsReadOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::MultiLineEditableText_eventSetIsReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableText::execSetIsReadOnly)
{
	P_GET_UBOOL(Z_Param_bReadOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsReadOnly(Z_Param_bReadOnly);
	P_NATIVE_END;
}
// End Class UMultiLineEditableText Function SetIsReadOnly

// Begin Class UMultiLineEditableText Function SetText
struct Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics
{
	struct MultiLineEditableText_eventSetText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09* Directly sets the widget text.\n\x09* @param InText The text to assign to the widget\n\x09*/" },
		{ "DisplayName", "SetText (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Directly sets the widget text.\n@param InText The text to assign to the widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventSetText_Parms, InText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::MultiLineEditableText_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::MultiLineEditableText_eventSetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableText::execSetText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetText(Z_Param_InText);
	P_NATIVE_END;
}
// End Class UMultiLineEditableText Function SetText

// Begin Class UMultiLineEditableText Function SetWidgetStyle
struct Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics
{
	struct MultiLineEditableText_eventSetWidgetStyle_Parms
	{
		FTextBlockStyle InWidgetStyle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidgetStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWidgetStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::NewProp_InWidgetStyle = { "InWidgetStyle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiLineEditableText_eventSetWidgetStyle_Parms, InWidgetStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidgetStyle_MetaData), NewProp_InWidgetStyle_MetaData) }; // 4086975916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::NewProp_InWidgetStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetWidgetStyle", nullptr, nullptr, Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::MultiLineEditableText_eventSetWidgetStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::MultiLineEditableText_eventSetWidgetStyle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiLineEditableText::execSetWidgetStyle)
{
	P_GET_STRUCT_REF(FTextBlockStyle,Z_Param_Out_InWidgetStyle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetStyle(Z_Param_Out_InWidgetStyle);
	P_NATIVE_END;
}
// End Class UMultiLineEditableText Function SetWidgetStyle

// Begin Class UMultiLineEditableText
void UMultiLineEditableText::GetText_WrapperImpl(const void* Object, void* OutValue)
{
	const UMultiLineEditableText* Obj = (const UMultiLineEditableText*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetText();
}
void UMultiLineEditableText::SetText_WrapperImpl(void* Object, const void* InValue)
{
	UMultiLineEditableText* Obj = (UMultiLineEditableText*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetText(Value);
}
void UMultiLineEditableText::GetHintText_WrapperImpl(const void* Object, void* OutValue)
{
	const UMultiLineEditableText* Obj = (const UMultiLineEditableText*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetHintText();
}
void UMultiLineEditableText::SetHintText_WrapperImpl(void* Object, const void* InValue)
{
	UMultiLineEditableText* Obj = (UMultiLineEditableText*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetHintText(Value);
}
void UMultiLineEditableText::GetbIsReadOnly_WrapperImpl(const void* Object, void* OutValue)
{
	const UMultiLineEditableText* Obj = (const UMultiLineEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsReadOnly();
}
void UMultiLineEditableText::SetbIsReadOnly_WrapperImpl(void* Object, const void* InValue)
{
	UMultiLineEditableText* Obj = (UMultiLineEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsReadOnly(Value);
}
void UMultiLineEditableText::GetSelectAllTextWhenFocused_WrapperImpl(const void* Object, void* OutValue)
{
	const UMultiLineEditableText* Obj = (const UMultiLineEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetSelectAllTextWhenFocused();
}
void UMultiLineEditableText::SetSelectAllTextWhenFocused_WrapperImpl(void* Object, const void* InValue)
{
	UMultiLineEditableText* Obj = (UMultiLineEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetSelectAllTextWhenFocused(Value);
}
void UMultiLineEditableText::GetRevertTextOnEscape_WrapperImpl(const void* Object, void* OutValue)
{
	const UMultiLineEditableText* Obj = (const UMultiLineEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetRevertTextOnEscape();
}
void UMultiLineEditableText::SetRevertTextOnEscape_WrapperImpl(void* Object, const void* InValue)
{
	UMultiLineEditableText* Obj = (UMultiLineEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetRevertTextOnEscape(Value);
}
void UMultiLineEditableText::GetClearKeyboardFocusOnCommit_WrapperImpl(const void* Object, void* OutValue)
{
	const UMultiLineEditableText* Obj = (const UMultiLineEditableText*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetClearKeyboardFocusOnCommit();
}
void UMultiLineEditableText::SetClearKeyboardFocusOnCommit_WrapperImpl(void* Object, const void* InValue)
{
	UMultiLineEditableText* Obj = (UMultiLineEditableText*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetClearKeyboardFocusOnCommit(Value);
}
void UMultiLineEditableText::StaticRegisterNativesUMultiLineEditableText()
{
	UClass* Class = UMultiLineEditableText::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFont", &UMultiLineEditableText::execGetFont },
		{ "GetHintText", &UMultiLineEditableText::execGetHintText },
		{ "GetText", &UMultiLineEditableText::execGetText },
		{ "SetFont", &UMultiLineEditableText::execSetFont },
		{ "SetFontMaterial", &UMultiLineEditableText::execSetFontMaterial },
		{ "SetFontOutlineMaterial", &UMultiLineEditableText::execSetFontOutlineMaterial },
		{ "SetHintText", &UMultiLineEditableText::execSetHintText },
		{ "SetIsReadOnly", &UMultiLineEditableText::execSetIsReadOnly },
		{ "SetText", &UMultiLineEditableText::execSetText },
		{ "SetWidgetStyle", &UMultiLineEditableText::execSetWidgetStyle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiLineEditableText);
UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister()
{
	return UMultiLineEditableText::StaticClass();
}
struct Z_Construct_UClass_UMultiLineEditableText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editable text box widget\n */" },
		{ "DisplayName", "Editable Text (Multi-Line)" },
		{ "IncludePath", "Components/MultiLineEditableText.h" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Editable text box widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "BlueprintGetter", "GetText" },
		{ "BlueprintSetter", "SetText" },
		{ "Category", "Content" },
		{ "Comment", "/** The text content for this editable text box widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text content for this editable text box widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[] = {
		{ "BlueprintGetter", "GetHintText" },
		{ "BlueprintSetter", "SetHintText" },
		{ "Category", "Content" },
		{ "Comment", "/** Hint text that appears when there is no text in the text box */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Hint text that appears when there is no text in the text box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the hint text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "BlueprintSetter", "SetWidgetStyle" },
		{ "Category", "Style" },
		{ "Comment", "/** The style */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[] = {
		{ "BlueprintSetter", "SetIsReadOnly" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the Text as Readonly to prevent it from being modified interactively by the user */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Sets the Text as Readonly to prevent it from being modified interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextWhenFocused_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to select all text when the user clicks to give focus on the widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to select all text when the user clicks to give focus on the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearTextSelectionOnFocusLoss_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to clear text selection when focus is lost */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to clear text selection when focus is lost" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevertTextOnEscape_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to allow the user to back out of changes when they press the escape key */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to allow the user to back out of changes when they press the escape key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to clear keyboard focus when pressing enter to commit changes */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to clear keyboard focus when pressing enter to commit changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether the context menu can be opened */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether the context menu can be opened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardOptions_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Additional options for the virtual keyboard */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Additional options for the virtual keyboard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardDismissAction_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** What action should be taken when the virtual keyboard is dismissed? */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "What action should be taken when the virtual keyboard is dismissed?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is changed programmatically or interactively by the user */" },
		{ "DisplayName", "OnTextChanged (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Called whenever the text is changed programmatically or interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus. */" },
		{ "DisplayName", "OnTextCommitted (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FTextPropertyParams NewProp_HintText;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static void NewProp_bIsReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
	static void NewProp_SelectAllTextWhenFocused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextWhenFocused;
	static void NewProp_ClearTextSelectionOnFocusLoss_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearTextSelectionOnFocusLoss;
	static void NewProp_RevertTextOnEscape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RevertTextOnEscape;
	static void NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearKeyboardFocusOnCommit;
	static void NewProp_AllowContextMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualKeyboardOptions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualKeyboardDismissAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualKeyboardDismissAction;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiLineEditableText_GetFont, "GetFont" }, // 2638971083
		{ &Z_Construct_UFunction_UMultiLineEditableText_GetHintText, "GetHintText" }, // 2061558844
		{ &Z_Construct_UFunction_UMultiLineEditableText_GetText, "GetText" }, // 1195140433
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature, "OnMultiLineEditableTextChangedEvent__DelegateSignature" }, // 2083476107
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature, "OnMultiLineEditableTextCommittedEvent__DelegateSignature" }, // 849309418
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetFont, "SetFont" }, // 2631939503
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetFontMaterial, "SetFontMaterial" }, // 608881732
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetFontOutlineMaterial, "SetFontOutlineMaterial" }, // 741164815
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetHintText, "SetHintText" }, // 4178488450
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly, "SetIsReadOnly" }, // 622240012
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetText, "SetText" }, // 1103694816
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle, "SetWidgetStyle" }, // 1457090876
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiLineEditableText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UMultiLineEditableText::SetText_WrapperImpl, &UMultiLineEditableText::GetText_WrapperImpl, 1, STRUCT_OFFSET(UMultiLineEditableText, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText = { "HintText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UMultiLineEditableText::SetHintText_WrapperImpl, &UMultiLineEditableText::GetHintText_WrapperImpl, 1, STRUCT_OFFSET(UMultiLineEditableText, HintText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintText_MetaData), NewProp_HintText_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate = { "HintTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableText, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintTextDelegate_MetaData), NewProp_HintTextDelegate_MetaData) }; // 1712476551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableText, WidgetStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 4086975916
void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
{
	((UMultiLineEditableText*)Obj)->bIsReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UMultiLineEditableText::SetbIsReadOnly_WrapperImpl, &UMultiLineEditableText::GetbIsReadOnly_WrapperImpl, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReadOnly_MetaData), NewProp_bIsReadOnly_MetaData) };
void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_SetBit(void* Obj)
{
	((UMultiLineEditableText*)Obj)->SelectAllTextWhenFocused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused = { "SelectAllTextWhenFocused", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UMultiLineEditableText::SetSelectAllTextWhenFocused_WrapperImpl, &UMultiLineEditableText::GetSelectAllTextWhenFocused_WrapperImpl, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectAllTextWhenFocused_MetaData), NewProp_SelectAllTextWhenFocused_MetaData) };
void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_SetBit(void* Obj)
{
	((UMultiLineEditableText*)Obj)->ClearTextSelectionOnFocusLoss = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss = { "ClearTextSelectionOnFocusLoss", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearTextSelectionOnFocusLoss_MetaData), NewProp_ClearTextSelectionOnFocusLoss_MetaData) };
void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_SetBit(void* Obj)
{
	((UMultiLineEditableText*)Obj)->RevertTextOnEscape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape = { "RevertTextOnEscape", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UMultiLineEditableText::SetRevertTextOnEscape_WrapperImpl, &UMultiLineEditableText::GetRevertTextOnEscape_WrapperImpl, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevertTextOnEscape_MetaData), NewProp_RevertTextOnEscape_MetaData) };
void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj)
{
	((UMultiLineEditableText*)Obj)->ClearKeyboardFocusOnCommit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit = { "ClearKeyboardFocusOnCommit", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UMultiLineEditableText::SetClearKeyboardFocusOnCommit_WrapperImpl, &UMultiLineEditableText::GetClearKeyboardFocusOnCommit_WrapperImpl, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearKeyboardFocusOnCommit_MetaData), NewProp_ClearKeyboardFocusOnCommit_MetaData) };
void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_SetBit(void* Obj)
{
	((UMultiLineEditableText*)Obj)->AllowContextMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu = { "AllowContextMenu", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowContextMenu_MetaData), NewProp_AllowContextMenu_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions = { "VirtualKeyboardOptions", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableText, VirtualKeyboardOptions), Z_Construct_UScriptStruct_FVirtualKeyboardOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualKeyboardOptions_MetaData), NewProp_VirtualKeyboardOptions_MetaData) }; // 1065072347
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction = { "VirtualKeyboardDismissAction", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableText, VirtualKeyboardDismissAction), Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualKeyboardDismissAction_MetaData), NewProp_VirtualKeyboardDismissAction_MetaData) }; // 2069404810
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged = { "OnTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableText, OnTextChanged), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextChanged_MetaData), NewProp_OnTextChanged_MetaData) }; // 2083476107
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted = { "OnTextCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiLineEditableText, OnTextCommitted), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextCommitted_MetaData), NewProp_OnTextCommitted_MetaData) }; // 849309418
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiLineEditableText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMultiLineEditableText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiLineEditableText_Statics::ClassParams = {
	&UMultiLineEditableText::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMultiLineEditableText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiLineEditableText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiLineEditableText()
{
	if (!Z_Registration_Info_UClass_UMultiLineEditableText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiLineEditableText.OuterSingleton, Z_Construct_UClass_UMultiLineEditableText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiLineEditableText.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UMultiLineEditableText>()
{
	return UMultiLineEditableText::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiLineEditableText);
UMultiLineEditableText::~UMultiLineEditableText() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMultiLineEditableText, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UMultiLineEditableText)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMultiLineEditableText, Text)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UMultiLineEditableText);
// End Class UMultiLineEditableText

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiLineEditableText, UMultiLineEditableText::StaticClass, TEXT("UMultiLineEditableText"), &Z_Registration_Info_UClass_UMultiLineEditableText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiLineEditableText), 518012382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_3217788101(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
