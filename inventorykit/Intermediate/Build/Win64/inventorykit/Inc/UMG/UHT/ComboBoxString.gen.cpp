// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/ComboBoxString.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBoxString() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle();
UMG_API UClass* Z_Construct_UClass_UComboBoxString();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnSelectionChangedEvent
struct Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics
{
	struct ComboBoxString_eventOnSelectionChangedEvent_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventOnSelectionChangedEvent_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventOnSelectionChangedEvent_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "OnSelectionChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::ComboBoxString_eventOnSelectionChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::ComboBoxString_eventOnSelectionChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UComboBoxString::FOnSelectionChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedEvent, const FString& SelectedItem, ESelectInfo::Type SelectionType)
{
	struct ComboBoxString_eventOnSelectionChangedEvent_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
	ComboBoxString_eventOnSelectionChangedEvent_Parms Parms;
	Parms.SelectedItem=SelectedItem;
	Parms.SelectionType=SelectionType;
	OnSelectionChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSelectionChangedEvent

// Begin Delegate FOnOpeningEvent
struct Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "OnOpeningEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UComboBoxString::FOnOpeningEvent_DelegateWrapper(const FMulticastScriptDelegate& OnOpeningEvent)
{
	OnOpeningEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnOpeningEvent

// Begin Class UComboBoxString Function AddOption
struct Z_Construct_UFunction_UComboBoxString_AddOption_Statics
{
	struct ComboBoxString_eventAddOption_Parms
	{
		FString Option;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Option;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_AddOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventAddOption_Parms, Option), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Option_MetaData), NewProp_Option_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_AddOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_AddOption_Statics::NewProp_Option,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_AddOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_AddOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "AddOption", nullptr, nullptr, Z_Construct_UFunction_UComboBoxString_AddOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_AddOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxString_AddOption_Statics::ComboBoxString_eventAddOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_AddOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_AddOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxString_AddOption_Statics::ComboBoxString_eventAddOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxString_AddOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_AddOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execAddOption)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Option);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOption(Z_Param_Option);
	P_NATIVE_END;
}
// End Class UComboBoxString Function AddOption

// Begin Class UComboBoxString Function ClearOptions
struct Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "ClearOptions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UComboBoxString_ClearOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execClearOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearOptions();
	P_NATIVE_END;
}
// End Class UComboBoxString Function ClearOptions

// Begin Class UComboBoxString Function ClearSelection
struct Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "ClearSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UComboBoxString_ClearSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execClearSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSelection();
	P_NATIVE_END;
}
// End Class UComboBoxString Function ClearSelection

// Begin Class UComboBoxString Function FindOptionIndex
struct Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics
{
	struct ComboBoxString_eventFindOptionIndex_Parms
	{
		FString Option;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Option;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventFindOptionIndex_Parms, Option), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Option_MetaData), NewProp_Option_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventFindOptionIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_Option,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "FindOptionIndex", nullptr, nullptr, Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::ComboBoxString_eventFindOptionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::ComboBoxString_eventFindOptionIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxString_FindOptionIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execFindOptionIndex)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Option);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FindOptionIndex(Z_Param_Option);
	P_NATIVE_END;
}
// End Class UComboBoxString Function FindOptionIndex

// Begin Class UComboBoxString Function GetOptionAtIndex
struct Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics
{
	struct ComboBoxString_eventGetOptionAtIndex_Parms
	{
		int32 Index;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventGetOptionAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventGetOptionAtIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "GetOptionAtIndex", nullptr, nullptr, Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::ComboBoxString_eventGetOptionAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::ComboBoxString_eventGetOptionAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execGetOptionAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetOptionAtIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UComboBoxString Function GetOptionAtIndex

// Begin Class UComboBoxString Function GetOptionCount
struct Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics
{
	struct ComboBoxString_eventGetOptionCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Returns the number of options */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "Returns the number of options" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventGetOptionCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "GetOptionCount", nullptr, nullptr, Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::ComboBoxString_eventGetOptionCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::ComboBoxString_eventGetOptionCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxString_GetOptionCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execGetOptionCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetOptionCount();
	P_NATIVE_END;
}
// End Class UComboBoxString Function GetOptionCount

// Begin Class UComboBoxString Function GetSelectedIndex
struct Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics
{
	struct ComboBoxString_eventGetSelectedIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventGetSelectedIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "GetSelectedIndex", nullptr, nullptr, Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::ComboBoxString_eventGetSelectedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::ComboBoxString_eventGetSelectedIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxString_GetSelectedIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_GetSelectedIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execGetSelectedIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSelectedIndex();
	P_NATIVE_END;
}
// End Class UComboBoxString Function GetSelectedIndex

// Begin Class UComboBoxString Function GetSelectedOption
struct Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics
{
	struct ComboBoxString_eventGetSelectedOption_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventGetSelectedOption_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "GetSelectedOption", nullptr, nullptr, Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::ComboBoxString_eventGetSelectedOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::ComboBoxString_eventGetSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxString_GetSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execGetSelectedOption)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSelectedOption();
	P_NATIVE_END;
}
// End Class UComboBoxString Function GetSelectedOption

// Begin Class UComboBoxString Function IsOpen
struct Z_Construct_UFunction_UComboBoxString_IsOpen_Statics
{
	struct ComboBoxString_eventIsOpen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ReturnDisplayName", "bOpen" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ComboBoxString_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboBoxString_eventIsOpen_Parms), &Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "IsOpen", nullptr, nullptr, Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::ComboBoxString_eventIsOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::ComboBoxString_eventIsOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxString_IsOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_IsOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execIsOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOpen();
	P_NATIVE_END;
}
// End Class UComboBoxString Function IsOpen

// Begin Class UComboBoxString Function RefreshOptions
struct Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/**\n\x09 * Refreshes the list of options.  If you added new ones, and want to update the list even if it's\n\x09 * currently being displayed use this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "Refreshes the list of options.  If you added new ones, and want to update the list even if it's\ncurrently being displayed use this." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "RefreshOptions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UComboBoxString_RefreshOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execRefreshOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshOptions();
	P_NATIVE_END;
}
// End Class UComboBoxString Function RefreshOptions

// Begin Class UComboBoxString Function RemoveOption
struct Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics
{
	struct ComboBoxString_eventRemoveOption_Parms
	{
		FString Option;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Option;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventRemoveOption_Parms, Option), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Option_MetaData), NewProp_Option_MetaData) };
void Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ComboBoxString_eventRemoveOption_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboBoxString_eventRemoveOption_Parms), &Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_Option,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "RemoveOption", nullptr, nullptr, Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::ComboBoxString_eventRemoveOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::ComboBoxString_eventRemoveOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxString_RemoveOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execRemoveOption)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Option);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveOption(Z_Param_Option);
	P_NATIVE_END;
}
// End Class UComboBoxString Function RemoveOption

// Begin Class UComboBoxString Function SetSelectedIndex
struct Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics
{
	struct ComboBoxString_eventSetSelectedIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventSetSelectedIndex_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "SetSelectedIndex", nullptr, nullptr, Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::ComboBoxString_eventSetSelectedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::ComboBoxString_eventSetSelectedIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxString_SetSelectedIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_SetSelectedIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execSetSelectedIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UComboBoxString Function SetSelectedIndex

// Begin Class UComboBoxString Function SetSelectedOption
struct Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics
{
	struct ComboBoxString_eventSetSelectedOption_Parms
	{
		FString Option;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Option;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxString_eventSetSelectedOption_Parms, Option), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::NewProp_Option,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, nullptr, "SetSelectedOption", nullptr, nullptr, Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::ComboBoxString_eventSetSelectedOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::ComboBoxString_eventSetSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxString_SetSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxString::execSetSelectedOption)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Option);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedOption(Z_Param_Option);
	P_NATIVE_END;
}
// End Class UComboBoxString Function SetSelectedOption

// Begin Class UComboBoxString
void UComboBoxString::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxString* Obj = (const UComboBoxString*)Object;
	FComboBoxStyle& Result = *(FComboBoxStyle*)OutValue;
	Result = (FComboBoxStyle)Obj->GetWidgetStyle();
}
void UComboBoxString::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxString* Obj = (UComboBoxString*)Object;
	FComboBoxStyle& Value = *(FComboBoxStyle*)InValue;
	Obj->SetWidgetStyle(Value);
}
void UComboBoxString::GetItemStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxString* Obj = (const UComboBoxString*)Object;
	FTableRowStyle& Result = *(FTableRowStyle*)OutValue;
	Result = (FTableRowStyle)Obj->GetItemStyle();
}
void UComboBoxString::SetItemStyle_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxString* Obj = (UComboBoxString*)Object;
	FTableRowStyle& Value = *(FTableRowStyle*)InValue;
	Obj->SetItemStyle(Value);
}
void UComboBoxString::GetScrollBarStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxString* Obj = (const UComboBoxString*)Object;
	FScrollBarStyle& Result = *(FScrollBarStyle*)OutValue;
	Result = (FScrollBarStyle)Obj->GetScrollBarStyle();
}
void UComboBoxString::GetContentPadding_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxString* Obj = (const UComboBoxString*)Object;
	FMargin& Result = *(FMargin*)OutValue;
	Result = (FMargin)Obj->GetContentPadding();
}
void UComboBoxString::SetContentPadding_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxString* Obj = (UComboBoxString*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetContentPadding(Value);
}
void UComboBoxString::GetMaxListHeight_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxString* Obj = (const UComboBoxString*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMaxListHeight();
}
void UComboBoxString::SetMaxListHeight_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxString* Obj = (UComboBoxString*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMaxListHeight(Value);
}
void UComboBoxString::GetHasDownArrow_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxString* Obj = (const UComboBoxString*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsHasDownArrow();
}
void UComboBoxString::SetHasDownArrow_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxString* Obj = (UComboBoxString*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetHasDownArrow(Value);
}
void UComboBoxString::GetEnableGamepadNavigationMode_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxString* Obj = (const UComboBoxString*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsEnableGamepadNavigationMode();
}
void UComboBoxString::SetEnableGamepadNavigationMode_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxString* Obj = (UComboBoxString*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetEnableGamepadNavigationMode(Value);
}
void UComboBoxString::GetFont_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxString* Obj = (const UComboBoxString*)Object;
	FSlateFontInfo& Result = *(FSlateFontInfo*)OutValue;
	Result = (FSlateFontInfo)Obj->GetFont();
}
void UComboBoxString::GetForegroundColor_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxString* Obj = (const UComboBoxString*)Object;
	FSlateColor& Result = *(FSlateColor*)OutValue;
	Result = (FSlateColor)Obj->GetForegroundColor();
}
void UComboBoxString::GetbIsFocusable_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxString* Obj = (const UComboBoxString*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsFocusable();
}
void UComboBoxString::StaticRegisterNativesUComboBoxString()
{
	UClass* Class = UComboBoxString::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOption", &UComboBoxString::execAddOption },
		{ "ClearOptions", &UComboBoxString::execClearOptions },
		{ "ClearSelection", &UComboBoxString::execClearSelection },
		{ "FindOptionIndex", &UComboBoxString::execFindOptionIndex },
		{ "GetOptionAtIndex", &UComboBoxString::execGetOptionAtIndex },
		{ "GetOptionCount", &UComboBoxString::execGetOptionCount },
		{ "GetSelectedIndex", &UComboBoxString::execGetSelectedIndex },
		{ "GetSelectedOption", &UComboBoxString::execGetSelectedOption },
		{ "IsOpen", &UComboBoxString::execIsOpen },
		{ "RefreshOptions", &UComboBoxString::execRefreshOptions },
		{ "RemoveOption", &UComboBoxString::execRemoveOption },
		{ "SetSelectedIndex", &UComboBoxString::execSetSelectedIndex },
		{ "SetSelectedOption", &UComboBoxString::execSetSelectedOption },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboBoxString);
UClass* Z_Construct_UClass_UComboBoxString_NoRegister()
{
	return UComboBoxString::StaticClass();
}
struct Z_Construct_UClass_UComboBoxString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.\n */" },
		{ "DisplayName", "ComboBox (String)" },
		{ "IncludePath", "Components/ComboBoxString.h" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The combobox allows you to display a list of options to the user in a dropdown menu for them to select one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOptions_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The default list of items to be displayed on the combobox. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The default list of items to be displayed on the combobox." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOption_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The item in the combobox to select by default */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The item in the combobox to select by default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The style. */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The style." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The item row style. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The item row style." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The scroll bar style. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The scroll bar style." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentPadding_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxListHeight_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The max height of the combobox list that opens */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The max height of the combobox list that opens" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasDownArrow_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/**\n\x09 * When false, the down arrow is not generated and it is up to the API consumer\n\x09 * to make their own visual hint that this is a drop down.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "When false, the down arrow is not generated and it is up to the API consumer\nto make their own visual hint that this is a drop down." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableGamepadNavigationMode_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/**\n\x09* When false, directional keys will change the selection. When true, ComboBox \n\x09* must be activated and will only capture arrow input while activated.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "When false, directional keys will change the selection. When true, ComboBox\nmust be activated and will only capture arrow input while activated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/**\n\x09 * The default font to use in the combobox, only applies if you're not implementing OnGenerateWidgetEvent\n\x09 * to factory each new entry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The default font to use in the combobox, only applies if you're not implementing OnGenerateWidgetEvent\nto factory each new entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The foreground color to pass through the hierarchy. */" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The foreground color to pass through the hierarchy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateWidgetEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the widget is needed for the item. */" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "Called when the widget is needed for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when a new item is selected in the combobox. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "Called when a new item is selected in the combobox." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOpening_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the combobox is opening */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "Called when the combobox is opening" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultOptions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedOption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentPadding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxListHeight;
	static void NewProp_HasDownArrow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasDownArrow;
	static void NewProp_EnableGamepadNavigationMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGamepadNavigationMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
	static void NewProp_bIsFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateWidgetEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOpening;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboBoxString_AddOption, "AddOption" }, // 2411087656
		{ &Z_Construct_UFunction_UComboBoxString_ClearOptions, "ClearOptions" }, // 1002613284
		{ &Z_Construct_UFunction_UComboBoxString_ClearSelection, "ClearSelection" }, // 2714041993
		{ &Z_Construct_UFunction_UComboBoxString_FindOptionIndex, "FindOptionIndex" }, // 3619527849
		{ &Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex, "GetOptionAtIndex" }, // 3845522502
		{ &Z_Construct_UFunction_UComboBoxString_GetOptionCount, "GetOptionCount" }, // 2568037953
		{ &Z_Construct_UFunction_UComboBoxString_GetSelectedIndex, "GetSelectedIndex" }, // 2845268807
		{ &Z_Construct_UFunction_UComboBoxString_GetSelectedOption, "GetSelectedOption" }, // 1060931953
		{ &Z_Construct_UFunction_UComboBoxString_IsOpen, "IsOpen" }, // 2995471661
		{ &Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature, "OnOpeningEvent__DelegateSignature" }, // 3897634480
		{ &Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature, "OnSelectionChangedEvent__DelegateSignature" }, // 942501556
		{ &Z_Construct_UFunction_UComboBoxString_RefreshOptions, "RefreshOptions" }, // 2085083447
		{ &Z_Construct_UFunction_UComboBoxString_RemoveOption, "RemoveOption" }, // 3875719545
		{ &Z_Construct_UFunction_UComboBoxString_SetSelectedIndex, "SetSelectedIndex" }, // 2264913323
		{ &Z_Construct_UFunction_UComboBoxString_SetSelectedOption, "SetSelectedOption" }, // 5664242
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBoxString>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions_Inner = { "DefaultOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions = { "DefaultOptions", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxString, DefaultOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOptions_MetaData), NewProp_DefaultOptions_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxString, SelectedOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedOption_MetaData), NewProp_SelectedOption_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxString::SetWidgetStyle_WrapperImpl, &UComboBoxString::GetWidgetStyle_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxString, WidgetStyle), Z_Construct_UScriptStruct_FComboBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 594911996
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_ItemStyle = { "ItemStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxString::SetItemStyle_WrapperImpl, &UComboBoxString::GetItemStyle_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxString, ItemStyle), Z_Construct_UScriptStruct_FTableRowStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStyle_MetaData), NewProp_ItemStyle_MetaData) }; // 4275354665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UComboBoxString::GetScrollBarStyle_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxString, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBarStyle_MetaData), NewProp_ScrollBarStyle_MetaData) }; // 1456599938
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_ContentPadding = { "ContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxString::SetContentPadding_WrapperImpl, &UComboBoxString::GetContentPadding_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxString, ContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentPadding_MetaData), NewProp_ContentPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_MaxListHeight = { "MaxListHeight", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxString::SetMaxListHeight_WrapperImpl, &UComboBoxString::GetMaxListHeight_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxString, MaxListHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxListHeight_MetaData), NewProp_MaxListHeight_MetaData) };
void Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow_SetBit(void* Obj)
{
	((UComboBoxString*)Obj)->HasDownArrow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow = { "HasDownArrow", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxString::SetHasDownArrow_WrapperImpl, &UComboBoxString::GetHasDownArrow_WrapperImpl, 1, sizeof(bool), sizeof(UComboBoxString), &Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasDownArrow_MetaData), NewProp_HasDownArrow_MetaData) };
void Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode_SetBit(void* Obj)
{
	((UComboBoxString*)Obj)->EnableGamepadNavigationMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode = { "EnableGamepadNavigationMode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxString::SetEnableGamepadNavigationMode_WrapperImpl, &UComboBoxString::GetEnableGamepadNavigationMode_WrapperImpl, 1, sizeof(bool), sizeof(UComboBoxString), &Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableGamepadNavigationMode_MetaData), NewProp_EnableGamepadNavigationMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UComboBoxString::GetFont_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxString, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UComboBoxString::GetForegroundColor_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxString, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundColor_MetaData), NewProp_ForegroundColor_MetaData) }; // 2024315916
void Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
{
	((UComboBoxString*)Obj)->bIsFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable = { "bIsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UComboBoxString::GetbIsFocusable_WrapperImpl, 1, sizeof(bool), sizeof(UComboBoxString), &Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFocusable_MetaData), NewProp_bIsFocusable_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnGenerateWidgetEvent = { "OnGenerateWidgetEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxString, OnGenerateWidgetEvent), Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerateWidgetEvent_MetaData), NewProp_OnGenerateWidgetEvent_MetaData) }; // 3399290350
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxString, OnSelectionChanged), Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData), NewProp_OnSelectionChanged_MetaData) }; // 942501556
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnOpening = { "OnOpening", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxString, OnOpening), Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOpening_MetaData), NewProp_OnOpening_MetaData) }; // 3897634480
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBoxString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_SelectedOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_ItemStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_ScrollBarStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_ContentPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_MaxListHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_ForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnGenerateWidgetEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnSelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnOpening,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComboBoxString_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboBoxString_Statics::ClassParams = {
	&UComboBoxString::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UComboBoxString_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboBoxString_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboBoxString()
{
	if (!Z_Registration_Info_UClass_UComboBoxString.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboBoxString.OuterSingleton, Z_Construct_UClass_UComboBoxString_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboBoxString.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UComboBoxString>()
{
	return UComboBoxString::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxString);
UComboBoxString::~UComboBoxString() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UComboBoxString, SelectedOption)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UComboBoxString)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UComboBoxString, SelectedOption)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UComboBoxString);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UComboBoxString)
// End Class UComboBoxString

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboBoxString, UComboBoxString::StaticClass, TEXT("UComboBoxString"), &Z_Registration_Info_UClass_UComboBoxString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboBoxString), 389189226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_2666384815(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
