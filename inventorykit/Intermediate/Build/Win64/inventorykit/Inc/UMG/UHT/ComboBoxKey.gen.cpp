// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/ComboBoxKey.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBoxKey() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle();
UMG_API UClass* Z_Construct_UClass_UComboBoxKey();
UMG_API UClass* Z_Construct_UClass_UComboBoxKey_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnSelectionChangedEvent
struct Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics
{
	struct ComboBoxKey_eventOnSelectionChangedEvent_Parms
	{
		FName SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxKey_eventOnSelectionChangedEvent_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxKey_eventOnSelectionChangedEvent_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "OnSelectionChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::ComboBoxKey_eventOnSelectionChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::ComboBoxKey_eventOnSelectionChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UComboBoxKey::FOnSelectionChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedEvent, FName SelectedItem, ESelectInfo::Type SelectionType)
{
	struct ComboBoxKey_eventOnSelectionChangedEvent_Parms
	{
		FName SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
	ComboBoxKey_eventOnSelectionChangedEvent_Parms Parms;
	Parms.SelectedItem=SelectedItem;
	Parms.SelectionType=SelectionType;
	OnSelectionChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSelectionChangedEvent

// Begin Delegate FOnOpeningEvent
struct Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "OnOpeningEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UComboBoxKey::FOnOpeningEvent_DelegateWrapper(const FMulticastScriptDelegate& OnOpeningEvent)
{
	OnOpeningEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnOpeningEvent

// Begin Delegate FGenerateWidgetEvent
struct Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics
{
	struct ComboBoxKey_eventGenerateWidgetEvent_Parms
	{
		FName Item;
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxKey_eventGenerateWidgetEvent_Parms, Item), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxKey_eventGenerateWidgetEvent_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "GenerateWidgetEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::ComboBoxKey_eventGenerateWidgetEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::ComboBoxKey_eventGenerateWidgetEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
UWidget* UComboBoxKey::FGenerateWidgetEvent_DelegateWrapper(const FScriptDelegate& GenerateWidgetEvent, FName Item)
{
	struct ComboBoxKey_eventGenerateWidgetEvent_Parms
	{
		FName Item;
		UWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		ComboBoxKey_eventGenerateWidgetEvent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	ComboBoxKey_eventGenerateWidgetEvent_Parms Parms;
	Parms.Item=Item;
	GenerateWidgetEvent.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGenerateWidgetEvent

// Begin Class UComboBoxKey Function AddOption
struct Z_Construct_UFunction_UComboBoxKey_AddOption_Statics
{
	struct ComboBoxKey_eventAddOption_Parms
	{
		FName Option;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Add an element to the option list. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Add an element to the option list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Option;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxKey_eventAddOption_Parms, Option), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::NewProp_Option,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "AddOption", nullptr, nullptr, Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::ComboBoxKey_eventAddOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::ComboBoxKey_eventAddOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxKey_AddOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_AddOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxKey::execAddOption)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Option);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOption(Z_Param_Option);
	P_NATIVE_END;
}
// End Class UComboBoxKey Function AddOption

// Begin Class UComboBoxKey Function ClearOptions
struct Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Remove all the elements of the option list. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Remove all the elements of the option list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "ClearOptions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UComboBoxKey_ClearOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_ClearOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxKey::execClearOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearOptions();
	P_NATIVE_END;
}
// End Class UComboBoxKey Function ClearOptions

// Begin Class UComboBoxKey Function ClearSelection
struct Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Clear the current selection. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Clear the current selection." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "ClearSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UComboBoxKey_ClearSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_ClearSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxKey::execClearSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSelection();
	P_NATIVE_END;
}
// End Class UComboBoxKey Function ClearSelection

// Begin Class UComboBoxKey Function GetSelectedOption
struct Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics
{
	struct ComboBoxKey_eventGetSelectedOption_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Get the current selected option */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Get the current selected option" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxKey_eventGetSelectedOption_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "GetSelectedOption", nullptr, nullptr, Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::ComboBoxKey_eventGetSelectedOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::ComboBoxKey_eventGetSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxKey_GetSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_GetSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxKey::execGetSelectedOption)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSelectedOption();
	P_NATIVE_END;
}
// End Class UComboBoxKey Function GetSelectedOption

// Begin Class UComboBoxKey Function IsOpen
struct Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics
{
	struct ComboBoxKey_eventIsOpen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Is the combobox menu opened. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ReturnDisplayName", "bOpen" },
		{ "ToolTip", "Is the combobox menu opened." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ComboBoxKey_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboBoxKey_eventIsOpen_Parms), &Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "IsOpen", nullptr, nullptr, Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::ComboBoxKey_eventIsOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::ComboBoxKey_eventIsOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxKey_IsOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_IsOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxKey::execIsOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOpen();
	P_NATIVE_END;
}
// End Class UComboBoxKey Function IsOpen

// Begin Class UComboBoxKey Function RemoveOption
struct Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics
{
	struct ComboBoxKey_eventRemoveOption_Parms
	{
		FName Option;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Remove an element to the option list. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Remove an element to the option list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Option;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxKey_eventRemoveOption_Parms, Option), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ComboBoxKey_eventRemoveOption_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboBoxKey_eventRemoveOption_Parms), &Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_Option,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "RemoveOption", nullptr, nullptr, Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::ComboBoxKey_eventRemoveOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::ComboBoxKey_eventRemoveOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxKey_RemoveOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_RemoveOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxKey::execRemoveOption)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Option);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveOption(Z_Param_Option);
	P_NATIVE_END;
}
// End Class UComboBoxKey Function RemoveOption

// Begin Class UComboBoxKey Function SetSelectedOption
struct Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics
{
	struct ComboBoxKey_eventSetSelectedOption_Parms
	{
		FName Option;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "Comment", "/** Set the current selected option. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Set the current selected option." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Option;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBoxKey_eventSetSelectedOption_Parms, Option), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::NewProp_Option,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxKey, nullptr, "SetSelectedOption", nullptr, nullptr, Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::ComboBoxKey_eventSetSelectedOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::ComboBoxKey_eventSetSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBoxKey_SetSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBoxKey_SetSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboBoxKey::execSetSelectedOption)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Option);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedOption(Z_Param_Option);
	P_NATIVE_END;
}
// End Class UComboBoxKey Function SetSelectedOption

// Begin Class UComboBoxKey
void UComboBoxKey::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
	FComboBoxStyle& Result = *(FComboBoxStyle*)OutValue;
	Result = (FComboBoxStyle)Obj->GetWidgetStyle();
}
void UComboBoxKey::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxKey* Obj = (UComboBoxKey*)Object;
	FComboBoxStyle& Value = *(FComboBoxStyle*)InValue;
	Obj->SetWidgetStyle(Value);
}
void UComboBoxKey::GetItemStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
	FTableRowStyle& Result = *(FTableRowStyle*)OutValue;
	Result = (FTableRowStyle)Obj->GetItemStyle();
}
void UComboBoxKey::SetItemStyle_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxKey* Obj = (UComboBoxKey*)Object;
	FTableRowStyle& Value = *(FTableRowStyle*)InValue;
	Obj->SetItemStyle(Value);
}
void UComboBoxKey::GetScrollBarStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
	FScrollBarStyle& Result = *(FScrollBarStyle*)OutValue;
	Result = (FScrollBarStyle)Obj->GetScrollBarStyle();
}
void UComboBoxKey::GetForegroundColor_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
	FSlateColor& Result = *(FSlateColor*)OutValue;
	Result = (FSlateColor)Obj->GetForegroundColor();
}
void UComboBoxKey::GetContentPadding_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
	FMargin& Result = *(FMargin*)OutValue;
	Result = (FMargin)Obj->GetContentPadding();
}
void UComboBoxKey::SetContentPadding_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxKey* Obj = (UComboBoxKey*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetContentPadding(Value);
}
void UComboBoxKey::GetMaxListHeight_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMaxListHeight();
}
void UComboBoxKey::SetMaxListHeight_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxKey* Obj = (UComboBoxKey*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMaxListHeight(Value);
}
void UComboBoxKey::GetbHasDownArrow_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsHasDownArrow();
}
void UComboBoxKey::SetbHasDownArrow_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxKey* Obj = (UComboBoxKey*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetHasDownArrow(Value);
}
void UComboBoxKey::GetbEnableGamepadNavigationMode_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsEnableGamepadNavigationMode();
}
void UComboBoxKey::SetbEnableGamepadNavigationMode_WrapperImpl(void* Object, const void* InValue)
{
	UComboBoxKey* Obj = (UComboBoxKey*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetEnableGamepadNavigationMode(Value);
}
void UComboBoxKey::GetbIsFocusable_WrapperImpl(const void* Object, void* OutValue)
{
	const UComboBoxKey* Obj = (const UComboBoxKey*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsFocusable();
}
void UComboBoxKey::StaticRegisterNativesUComboBoxKey()
{
	UClass* Class = UComboBoxKey::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOption", &UComboBoxKey::execAddOption },
		{ "ClearOptions", &UComboBoxKey::execClearOptions },
		{ "ClearSelection", &UComboBoxKey::execClearSelection },
		{ "GetSelectedOption", &UComboBoxKey::execGetSelectedOption },
		{ "IsOpen", &UComboBoxKey::execIsOpen },
		{ "RemoveOption", &UComboBoxKey::execRemoveOption },
		{ "SetSelectedOption", &UComboBoxKey::execSetSelectedOption },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboBoxKey);
UClass* Z_Construct_UClass_UComboBoxKey_NoRegister()
{
	return UComboBoxKey::StaticClass();
}
struct Z_Construct_UClass_UComboBoxKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.\n * Use OnGenerateConentWidgetEvent to return a custom built widget.\n */" },
		{ "DisplayName", "ComboBox (Key)" },
		{ "IncludePath", "Components/ComboBoxKey.h" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.\nUse OnGenerateConentWidgetEvent to return a custom built widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** . */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOption_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The combobox style. */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The combobox style." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The item row style. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The item row style." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The scroll bar style. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The scroll bar style." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The foreground color to pass through the hierarchy. */" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The foreground color to pass through the hierarchy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentPadding_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxListHeight_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The max height of the combobox list that opens */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "The max height of the combobox list that opens" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasDownArrow_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/**\n\x09 * When false, the down arrow is not generated and it is up to the API consumer\n\x09 * to make their own visual hint that this is a drop down.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "When false, the down arrow is not generated and it is up to the API consumer\nto make their own visual hint that this is a drop down." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGamepadNavigationMode_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/**\n\x09 * When false, directional keys will change the selection. When true, ComboBox\n\x09 * must be activated and will only capture arrow input while activated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "When false, directional keys will change the selection. When true, ComboBox\nmust be activated and will only capture arrow input while activated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** When true, allows the combo box to receive keyboard focus */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "When true, allows the combo box to receive keyboard focus" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateContentWidget_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the widget is needed for the content. */" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Called when the widget is needed for the content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateItemWidget_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the widget is needed for the item. */" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Called when the widget is needed for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when a new item is selected in the combobox. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Called when a new item is selected in the combobox." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOpening_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the combobox is opening */" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxKey.h" },
		{ "ToolTip", "Called when the combobox is opening" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedOption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentPadding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxListHeight;
	static void NewProp_bHasDownArrow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDownArrow;
	static void NewProp_bEnableGamepadNavigationMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGamepadNavigationMode;
	static void NewProp_bIsFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateContentWidget;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateItemWidget;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOpening;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboBoxKey_AddOption, "AddOption" }, // 287823881
		{ &Z_Construct_UFunction_UComboBoxKey_ClearOptions, "ClearOptions" }, // 2408435485
		{ &Z_Construct_UFunction_UComboBoxKey_ClearSelection, "ClearSelection" }, // 2683651079
		{ &Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature, "GenerateWidgetEvent__DelegateSignature" }, // 819876356
		{ &Z_Construct_UFunction_UComboBoxKey_GetSelectedOption, "GetSelectedOption" }, // 1036477010
		{ &Z_Construct_UFunction_UComboBoxKey_IsOpen, "IsOpen" }, // 1707523868
		{ &Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature, "OnOpeningEvent__DelegateSignature" }, // 1615357626
		{ &Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature, "OnSelectionChangedEvent__DelegateSignature" }, // 556698293
		{ &Z_Construct_UFunction_UComboBoxKey_RemoveOption, "RemoveOption" }, // 3666019745
		{ &Z_Construct_UFunction_UComboBoxKey_SetSelectedOption, "SetSelectedOption" }, // 324922134
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBoxKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxKey, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxKey, SelectedOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedOption_MetaData), NewProp_SelectedOption_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxKey::SetWidgetStyle_WrapperImpl, &UComboBoxKey::GetWidgetStyle_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxKey, WidgetStyle), Z_Construct_UScriptStruct_FComboBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 594911996
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ItemStyle = { "ItemStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxKey::SetItemStyle_WrapperImpl, &UComboBoxKey::GetItemStyle_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxKey, ItemStyle), Z_Construct_UScriptStruct_FTableRowStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStyle_MetaData), NewProp_ItemStyle_MetaData) }; // 4275354665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UComboBoxKey::GetScrollBarStyle_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxKey, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBarStyle_MetaData), NewProp_ScrollBarStyle_MetaData) }; // 1456599938
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UComboBoxKey::GetForegroundColor_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxKey, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundColor_MetaData), NewProp_ForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ContentPadding = { "ContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxKey::SetContentPadding_WrapperImpl, &UComboBoxKey::GetContentPadding_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxKey, ContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentPadding_MetaData), NewProp_ContentPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_MaxListHeight = { "MaxListHeight", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxKey::SetMaxListHeight_WrapperImpl, &UComboBoxKey::GetMaxListHeight_WrapperImpl, 1, STRUCT_OFFSET(UComboBoxKey, MaxListHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxListHeight_MetaData), NewProp_MaxListHeight_MetaData) };
void Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow_SetBit(void* Obj)
{
	((UComboBoxKey*)Obj)->bHasDownArrow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow = { "bHasDownArrow", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxKey::SetbHasDownArrow_WrapperImpl, &UComboBoxKey::GetbHasDownArrow_WrapperImpl, 1, sizeof(bool), sizeof(UComboBoxKey), &Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasDownArrow_MetaData), NewProp_bHasDownArrow_MetaData) };
void Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode_SetBit(void* Obj)
{
	((UComboBoxKey*)Obj)->bEnableGamepadNavigationMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode = { "bEnableGamepadNavigationMode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UComboBoxKey::SetbEnableGamepadNavigationMode_WrapperImpl, &UComboBoxKey::GetbEnableGamepadNavigationMode_WrapperImpl, 1, sizeof(bool), sizeof(UComboBoxKey), &Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGamepadNavigationMode_MetaData), NewProp_bEnableGamepadNavigationMode_MetaData) };
void Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
{
	((UComboBoxKey*)Obj)->bIsFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable = { "bIsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UComboBoxKey::GetbIsFocusable_WrapperImpl, 1, sizeof(bool), sizeof(UComboBoxKey), &Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFocusable_MetaData), NewProp_bIsFocusable_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateContentWidget = { "OnGenerateContentWidget", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxKey, OnGenerateContentWidget), Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerateContentWidget_MetaData), NewProp_OnGenerateContentWidget_MetaData) }; // 819876356
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateItemWidget = { "OnGenerateItemWidget", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxKey, OnGenerateItemWidget), Z_Construct_UDelegateFunction_UComboBoxKey_GenerateWidgetEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerateItemWidget_MetaData), NewProp_OnGenerateItemWidget_MetaData) }; // 819876356
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxKey, OnSelectionChanged), Z_Construct_UDelegateFunction_UComboBoxKey_OnSelectionChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData), NewProp_OnSelectionChanged_MetaData) }; // 556698293
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnOpening = { "OnOpening", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxKey, OnOpening), Z_Construct_UDelegateFunction_UComboBoxKey_OnOpeningEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOpening_MetaData), NewProp_OnOpening_MetaData) }; // 1615357626
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBoxKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_SelectedOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ItemStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ScrollBarStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_ContentPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_MaxListHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bHasDownArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bEnableGamepadNavigationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_bIsFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateContentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnGenerateItemWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnSelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxKey_Statics::NewProp_OnOpening,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComboBoxKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboBoxKey_Statics::ClassParams = {
	&UComboBoxKey::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UComboBoxKey_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboBoxKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboBoxKey()
{
	if (!Z_Registration_Info_UClass_UComboBoxKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboBoxKey.OuterSingleton, Z_Construct_UClass_UComboBoxKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboBoxKey.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UComboBoxKey>()
{
	return UComboBoxKey::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxKey);
UComboBoxKey::~UComboBoxKey() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UComboBoxKey, SelectedOption)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UComboBoxKey)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UComboBoxKey, SelectedOption)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UComboBoxKey);
// End Class UComboBoxKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboBoxKey, UComboBoxKey::StaticClass, TEXT("UComboBoxKey"), &Z_Registration_Info_UClass_UComboBoxKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboBoxKey), 401721721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_2548843843(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
