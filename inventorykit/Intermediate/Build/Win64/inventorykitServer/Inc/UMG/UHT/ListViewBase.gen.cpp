// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/ListViewBase.h"
#include "Runtime/UMG/Public/Blueprint/UserWidgetPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListViewBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UListViewBase();
UMG_API UClass* Z_Construct_UClass_UListViewBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnListEntryGeneratedDynamic
struct Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics
{
	struct _Script_UMG_eventOnListEntryGeneratedDynamic_Parms
	{
		UUserWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnListEntryGeneratedDynamic_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnListEntryGeneratedDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListEntryGeneratedDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListEntryGeneratedDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnListEntryGeneratedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryGeneratedDynamic, UUserWidget* Widget)
{
	struct _Script_UMG_eventOnListEntryGeneratedDynamic_Parms
	{
		UUserWidget* Widget;
	};
	_Script_UMG_eventOnListEntryGeneratedDynamic_Parms Parms;
	Parms.Widget=Widget;
	OnListEntryGeneratedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnListEntryGeneratedDynamic

// Begin Delegate FOnListEntryReleasedDynamic
struct Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics
{
	struct _Script_UMG_eventOnListEntryReleasedDynamic_Parms
	{
		UUserWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnListEntryReleasedDynamic_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnListEntryReleasedDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListEntryReleasedDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListEntryReleasedDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnListEntryReleasedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryReleasedDynamic, UUserWidget* Widget)
{
	struct _Script_UMG_eventOnListEntryReleasedDynamic_Parms
	{
		UUserWidget* Widget;
	};
	_Script_UMG_eventOnListEntryReleasedDynamic_Parms Parms;
	Parms.Widget=Widget;
	OnListEntryReleasedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnListEntryReleasedDynamic

// Begin Class UListViewBase Function GetDisplayedEntryWidgets
struct Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics
{
	struct ListViewBase_eventGetDisplayedEntryWidgets_Parms
	{
		TArray<UUserWidget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListViewBase" },
		{ "Comment", "/** Gets all of the list entry widgets currently being displayed by the list */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Gets all of the list entry widgets currently being displayed by the list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListViewBase_eventGetDisplayedEntryWidgets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListViewBase, nullptr, "GetDisplayedEntryWidgets", nullptr, nullptr, Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::ListViewBase_eventGetDisplayedEntryWidgets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::ListViewBase_eventGetDisplayedEntryWidgets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListViewBase::execGetDisplayedEntryWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UUserWidget*>*)Z_Param__Result=P_THIS->GetDisplayedEntryWidgets();
	P_NATIVE_END;
}
// End Class UListViewBase Function GetDisplayedEntryWidgets

// Begin Class UListViewBase Function GetScrollOffset
struct Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics
{
	struct ListViewBase_eventGetScrollOffset_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListViewBase" },
		{ "Comment", "/** Get the scroll offset of this view (in items) */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Get the scroll offset of this view (in items)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListViewBase_eventGetScrollOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListViewBase, nullptr, "GetScrollOffset", nullptr, nullptr, Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::ListViewBase_eventGetScrollOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::ListViewBase_eventGetScrollOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListViewBase_GetScrollOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListViewBase_GetScrollOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListViewBase::execGetScrollOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScrollOffset();
	P_NATIVE_END;
}
// End Class UListViewBase Function GetScrollOffset

// Begin Class UListViewBase Function RegenerateAllEntries
struct Z_Construct_UFunction_UListViewBase_RegenerateAllEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListViewBase" },
		{ "Comment", "/**\n\x09 * Full regeneration of all entries in the list. Note that the entry UWidget instances will not be destroyed, but they will be released and re-generated.\n\x09 * In other words, entry widgets will not receive Destruct/Construct events. They will receive OnEntryReleased and IUserObjectListEntry implementations will receive OnListItemObjectSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Full regeneration of all entries in the list. Note that the entry UWidget instances will not be destroyed, but they will be released and re-generated.\nIn other words, entry widgets will not receive Destruct/Construct events. They will receive OnEntryReleased and IUserObjectListEntry implementations will receive OnListItemObjectSet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListViewBase_RegenerateAllEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListViewBase, nullptr, "RegenerateAllEntries", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_RegenerateAllEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListViewBase_RegenerateAllEntries_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UListViewBase_RegenerateAllEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListViewBase_RegenerateAllEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListViewBase::execRegenerateAllEntries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenerateAllEntries();
	P_NATIVE_END;
}
// End Class UListViewBase Function RegenerateAllEntries

// Begin Class UListViewBase Function RequestRefresh
struct Z_Construct_UFunction_UListViewBase_RequestRefresh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListViewBase" },
		{ "Comment", "/**\n\x09 * Sets the list to refresh on the next tick.\n\x09 *\n\x09 * Note that refreshing, from a list perspective, is limited to accounting for discrepancies between items and entries.\n\x09 * In other words, it will only release entries that no longer have items and generate entries for new items (or newly visible items).\n\x09 *\n\x09 * It does NOT account for changes within existing items - that is up to the item to announce and an entry to listen to as needed.\n\x09 * This can be onerous to set up for simple cases, so it's also reasonable (though not ideal) to call RegenerateAllEntries when changes within N list items need to be reflected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Sets the list to refresh on the next tick.\n\nNote that refreshing, from a list perspective, is limited to accounting for discrepancies between items and entries.\nIn other words, it will only release entries that no longer have items and generate entries for new items (or newly visible items).\n\nIt does NOT account for changes within existing items - that is up to the item to announce and an entry to listen to as needed.\nThis can be onerous to set up for simple cases, so it's also reasonable (though not ideal) to call RegenerateAllEntries when changes within N list items need to be reflected." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListViewBase_RequestRefresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListViewBase, nullptr, "RequestRefresh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_RequestRefresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListViewBase_RequestRefresh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UListViewBase_RequestRefresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListViewBase_RequestRefresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListViewBase::execRequestRefresh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestRefresh();
	P_NATIVE_END;
}
// End Class UListViewBase Function RequestRefresh

// Begin Class UListViewBase Function ScrollToBottom
struct Z_Construct_UFunction_UListViewBase_ScrollToBottom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListViewBase" },
		{ "Comment", "/** Scroll the entire list down to the bottom-most item */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Scroll the entire list down to the bottom-most item" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListViewBase_ScrollToBottom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListViewBase, nullptr, "ScrollToBottom", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_ScrollToBottom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListViewBase_ScrollToBottom_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UListViewBase_ScrollToBottom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListViewBase_ScrollToBottom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListViewBase::execScrollToBottom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScrollToBottom();
	P_NATIVE_END;
}
// End Class UListViewBase Function ScrollToBottom

// Begin Class UListViewBase Function ScrollToTop
struct Z_Construct_UFunction_UListViewBase_ScrollToTop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListViewBase" },
		{ "Comment", "/** Scroll the entire list up to the first item */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Scroll the entire list up to the first item" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListViewBase_ScrollToTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListViewBase, nullptr, "ScrollToTop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_ScrollToTop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListViewBase_ScrollToTop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UListViewBase_ScrollToTop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListViewBase_ScrollToTop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListViewBase::execScrollToTop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScrollToTop();
	P_NATIVE_END;
}
// End Class UListViewBase Function ScrollToTop

// Begin Class UListViewBase Function SetIsPointerScrollingEnabled
struct Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics
{
	struct ListViewBase_eventSetIsPointerScrollingEnabled_Parms
	{
		bool bInIsPointerScrollingEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListViewBase" },
		{ "Comment", "/** Enable/Disable the ability of the list to scroll. This should be use as a temporary disable. */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Enable/Disable the ability of the list to scroll. This should be use as a temporary disable." },
	};
#endif // WITH_METADATA
	static void NewProp_bInIsPointerScrollingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsPointerScrollingEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::NewProp_bInIsPointerScrollingEnabled_SetBit(void* Obj)
{
	((ListViewBase_eventSetIsPointerScrollingEnabled_Parms*)Obj)->bInIsPointerScrollingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::NewProp_bInIsPointerScrollingEnabled = { "bInIsPointerScrollingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ListViewBase_eventSetIsPointerScrollingEnabled_Parms), &Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::NewProp_bInIsPointerScrollingEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::NewProp_bInIsPointerScrollingEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListViewBase, nullptr, "SetIsPointerScrollingEnabled", nullptr, nullptr, Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::ListViewBase_eventSetIsPointerScrollingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::ListViewBase_eventSetIsPointerScrollingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListViewBase::execSetIsPointerScrollingEnabled)
{
	P_GET_UBOOL(Z_Param_bInIsPointerScrollingEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsPointerScrollingEnabled(Z_Param_bInIsPointerScrollingEnabled);
	P_NATIVE_END;
}
// End Class UListViewBase Function SetIsPointerScrollingEnabled

// Begin Class UListViewBase Function SetScrollbarVisibility
struct Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics
{
	struct ListViewBase_eventSetScrollbarVisibility_Parms
	{
		ESlateVisibility InVisibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListViewBase" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListViewBase_eventSetScrollbarVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::NewProp_InVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::NewProp_InVisibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListViewBase, nullptr, "SetScrollbarVisibility", nullptr, nullptr, Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::ListViewBase_eventSetScrollbarVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::ListViewBase_eventSetScrollbarVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListViewBase::execSetScrollbarVisibility)
{
	P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScrollbarVisibility(ESlateVisibility(Z_Param_InVisibility));
	P_NATIVE_END;
}
// End Class UListViewBase Function SetScrollbarVisibility

// Begin Class UListViewBase Function SetScrollOffset
struct Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics
{
	struct ListViewBase_eventSetScrollOffset_Parms
	{
		float InScrollOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Set the scroll offset of this view (in items) */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Set the scroll offset of this view (in items)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InScrollOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InScrollOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::NewProp_InScrollOffset = { "InScrollOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListViewBase_eventSetScrollOffset_Parms, InScrollOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InScrollOffset_MetaData), NewProp_InScrollOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::NewProp_InScrollOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListViewBase, nullptr, "SetScrollOffset", nullptr, nullptr, Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::ListViewBase_eventSetScrollOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::ListViewBase_eventSetScrollOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListViewBase_SetScrollOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListViewBase_SetScrollOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListViewBase::execSetScrollOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InScrollOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScrollOffset(Z_Param_InScrollOffset);
	P_NATIVE_END;
}
// End Class UListViewBase Function SetScrollOffset

// Begin Class UListViewBase Function SetWheelScrollMultiplier
struct Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics
{
	struct ListViewBase_eventSetWheelScrollMultiplier_Parms
	{
		float NewWheelScrollMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListViewBase" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWheelScrollMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::NewProp_NewWheelScrollMultiplier = { "NewWheelScrollMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListViewBase_eventSetWheelScrollMultiplier_Parms, NewWheelScrollMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::NewProp_NewWheelScrollMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListViewBase, nullptr, "SetWheelScrollMultiplier", nullptr, nullptr, Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::ListViewBase_eventSetWheelScrollMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::ListViewBase_eventSetWheelScrollMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListViewBase::execSetWheelScrollMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewWheelScrollMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWheelScrollMultiplier(Z_Param_NewWheelScrollMultiplier);
	P_NATIVE_END;
}
// End Class UListViewBase Function SetWheelScrollMultiplier

// Begin Class UListViewBase
void UListViewBase::StaticRegisterNativesUListViewBase()
{
	UClass* Class = UListViewBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDisplayedEntryWidgets", &UListViewBase::execGetDisplayedEntryWidgets },
		{ "GetScrollOffset", &UListViewBase::execGetScrollOffset },
		{ "RegenerateAllEntries", &UListViewBase::execRegenerateAllEntries },
		{ "RequestRefresh", &UListViewBase::execRequestRefresh },
		{ "ScrollToBottom", &UListViewBase::execScrollToBottom },
		{ "ScrollToTop", &UListViewBase::execScrollToTop },
		{ "SetIsPointerScrollingEnabled", &UListViewBase::execSetIsPointerScrollingEnabled },
		{ "SetScrollbarVisibility", &UListViewBase::execSetScrollbarVisibility },
		{ "SetScrollOffset", &UListViewBase::execSetScrollOffset },
		{ "SetWheelScrollMultiplier", &UListViewBase::execSetWheelScrollMultiplier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UListViewBase);
UClass* Z_Construct_UClass_UListViewBase_NoRegister()
{
	return UListViewBase::StaticClass();
}
struct Z_Construct_UClass_UListViewBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Bare-bones base class to make creating custom UListView widgets easier.\n * Child classes should also inherit from ITypedUMGListView<T> to get a basic public ListView API for free.\n *\n * Child classes will own the actual SListView<T> widgets, but this provides some boilerplate functionality for generating entries.\n * To generate a row for the child list, use GenerateTypedRow with the appropriate SObjectTableRow<T> type for your list\n *\n * Additionally, the entry widget class can be filtered for a particular class and interface with the EntryClass and EntryInterface metadata arguments\n * This can be specified either on the class directly (see below) or on any BindWidget FProperty\n *\n * Example:\n * class UMyUserWidget : public UUserWidget\n * {\n *\x09\x09UPROPERTY(BindWidget, meta = (EntryClass = MyListEntryWidget))\n *\x09\x09UListView* ListView_InventoryItems;\n * }\n *\n */" },
		{ "EntryInterface", "UserListEntry" },
		{ "IncludePath", "Components/ListViewBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Bare-bones base class to make creating custom UListView widgets easier.\nChild classes should also inherit from ITypedUMGListView<T> to get a basic public ListView API for free.\n\nChild classes will own the actual SListView<T> widgets, but this provides some boilerplate functionality for generating entries.\nTo generate a row for the child list, use GenerateTypedRow with the appropriate SObjectTableRow<T> type for your list\n\nAdditionally, the entry widget class can be filtered for a particular class and interface with the EntryClass and EntryInterface metadata arguments\nThis can be specified either on the class directly (see below) or on any BindWidget FProperty\n\nExample:\nclass UMyUserWidget : public UUserWidget\n{\n            UPROPERTY(BindWidget, meta = (EntryClass = MyListEntryWidget))\n            UListView* ListView_InventoryItems;\n}" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnEntryGenerated_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when a row widget is generated for a list item */" },
		{ "DisplayName", "On Entry Generated" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Called when a row widget is generated for a list item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListEntries" },
		{ "Comment", "/** The type of widget to create for each entry displayed in the list. */" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "MustImplement", "/Script/UMG.UserListEntry" },
		{ "ToolTip", "The type of widget to create for each entry displayed in the list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelScrollMultiplier_MetaData[] = {
		{ "Category", "Scrolling" },
		{ "Comment", "/** The multiplier to apply when wheel scrolling */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "The multiplier to apply when wheel scrolling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableScrollAnimation_MetaData[] = {
		{ "Category", "Scrolling" },
		{ "Comment", "/** True to enable lerped animation when scrolling through the list */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "True to enable lerped animation when scrolling through the list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInEnableTouchAnimatedScrolling_MetaData[] = {
		{ "Category", "Scrolling" },
		{ "Comment", "/** True to enable lerped animation when scrolling through the list with touch*/" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "True to enable lerped animation when scrolling through the list with touch" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowOverscroll_MetaData[] = {
		{ "Category", "Scrolling" },
		{ "Comment", "/**  Disable to stop scrollbars from activating inertial overscrolling */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Disable to stop scrollbars from activating inertial overscrolling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRightClickScrolling_MetaData[] = {
		{ "Category", "Scrolling" },
		{ "Comment", "/** True to allow right click drag scrolling. */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "True to allow right click drag scrolling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTouchScrolling_MetaData[] = {
		{ "Category", "Scrolling" },
		{ "Comment", "/** True to allow scrolling using touch input. */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "True to allow scrolling using touch input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPointerScrollingEnabled_MetaData[] = {
		{ "Category", "Scrolling" },
		{ "Comment", "/** Enable/Disable scrolling using Touch or Mouse. */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Enable/Disable scrolling using Touch or Mouse." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFixedLineOffset_MetaData[] = {
		{ "Category", "Scrolling" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedLineScrollOffset_MetaData[] = {
		{ "Category", "Scrolling" },
		{ "ClampMax", "0.500000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** \n\x09 * Optional fixed offset (in lines) to always apply to the top/left (depending on orientation) of the list.\n\x09 * If provided, all non-inertial means of scrolling will settle with exactly this offset of the topmost entry.\n\x09 * Ex: A value of 0.25 would cause the topmost full entry to be offset down by a quarter length of the preceeding entry.\n\x09 */" },
		{ "EditCondition", "bEnableFixedLineOffset" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Optional fixed offset (in lines) to always apply to the top/left (depending on orientation) of the list.\nIf provided, all non-inertial means of scrolling will settle with exactly this offset of the topmost entry.\nEx: A value of 0.25 would cause the topmost full entry to be offset down by a quarter length of the preceeding entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDragging_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** True to allow dragging of row widgets in the list */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "True to allow dragging of row widgets in the list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnEntryReleased_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when a row widget is released by the list (i.e. when it no longer represents a list item) */" },
		{ "DisplayName", "On Entry Released" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "Called when a row widget is released by the list (i.e. when it no longer represents a list item)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumDesignerPreviewEntries_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of dummy item entry widgets to preview in the widget designer */" },
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
		{ "ToolTip", "The number of dummy item entry widgets to preview in the widget designer" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ListViewBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnEntryGenerated;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EntryWidgetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelScrollMultiplier;
	static void NewProp_bEnableScrollAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScrollAnimation;
	static void NewProp_bInEnableTouchAnimatedScrolling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableTouchAnimatedScrolling;
	static void NewProp_AllowOverscroll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowOverscroll;
	static void NewProp_bEnableRightClickScrolling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRightClickScrolling;
	static void NewProp_bEnableTouchScrolling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTouchScrolling;
	static void NewProp_bIsPointerScrollingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPointerScrollingEnabled;
	static void NewProp_bEnableFixedLineOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFixedLineOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedLineScrollOffset;
	static void NewProp_bAllowDragging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDragging;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnEntryReleased;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumDesignerPreviewEntries;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryWidgetPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UListViewBase_GetDisplayedEntryWidgets, "GetDisplayedEntryWidgets" }, // 3324285203
		{ &Z_Construct_UFunction_UListViewBase_GetScrollOffset, "GetScrollOffset" }, // 1720978492
		{ &Z_Construct_UFunction_UListViewBase_RegenerateAllEntries, "RegenerateAllEntries" }, // 2823978134
		{ &Z_Construct_UFunction_UListViewBase_RequestRefresh, "RequestRefresh" }, // 845042864
		{ &Z_Construct_UFunction_UListViewBase_ScrollToBottom, "ScrollToBottom" }, // 2874466679
		{ &Z_Construct_UFunction_UListViewBase_ScrollToTop, "ScrollToTop" }, // 2089362518
		{ &Z_Construct_UFunction_UListViewBase_SetIsPointerScrollingEnabled, "SetIsPointerScrollingEnabled" }, // 1368494972
		{ &Z_Construct_UFunction_UListViewBase_SetScrollbarVisibility, "SetScrollbarVisibility" }, // 3990202615
		{ &Z_Construct_UFunction_UListViewBase_SetScrollOffset, "SetScrollOffset" }, // 3650141349
		{ &Z_Construct_UFunction_UListViewBase_SetWheelScrollMultiplier, "SetWheelScrollMultiplier" }, // 811853967
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListViewBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_BP_OnEntryGenerated = { "BP_OnEntryGenerated", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListViewBase, BP_OnEntryGenerated), Z_Construct_UDelegateFunction_UMG_OnListEntryGeneratedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_OnEntryGenerated_MetaData), NewProp_BP_OnEntryGenerated_MetaData) }; // 2045315427
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_EntryWidgetClass = { "EntryWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListViewBase, EntryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidgetClass_MetaData), NewProp_EntryWidgetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_WheelScrollMultiplier = { "WheelScrollMultiplier", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListViewBase, WheelScrollMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelScrollMultiplier_MetaData), NewProp_WheelScrollMultiplier_MetaData) };
void Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableScrollAnimation_SetBit(void* Obj)
{
	((UListViewBase*)Obj)->bEnableScrollAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableScrollAnimation = { "bEnableScrollAnimation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListViewBase), &Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableScrollAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableScrollAnimation_MetaData), NewProp_bEnableScrollAnimation_MetaData) };
void Z_Construct_UClass_UListViewBase_Statics::NewProp_bInEnableTouchAnimatedScrolling_SetBit(void* Obj)
{
	((UListViewBase*)Obj)->bInEnableTouchAnimatedScrolling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_bInEnableTouchAnimatedScrolling = { "bInEnableTouchAnimatedScrolling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListViewBase), &Z_Construct_UClass_UListViewBase_Statics::NewProp_bInEnableTouchAnimatedScrolling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInEnableTouchAnimatedScrolling_MetaData), NewProp_bInEnableTouchAnimatedScrolling_MetaData) };
void Z_Construct_UClass_UListViewBase_Statics::NewProp_AllowOverscroll_SetBit(void* Obj)
{
	((UListViewBase*)Obj)->AllowOverscroll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_AllowOverscroll = { "AllowOverscroll", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListViewBase), &Z_Construct_UClass_UListViewBase_Statics::NewProp_AllowOverscroll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowOverscroll_MetaData), NewProp_AllowOverscroll_MetaData) };
void Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableRightClickScrolling_SetBit(void* Obj)
{
	((UListViewBase*)Obj)->bEnableRightClickScrolling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableRightClickScrolling = { "bEnableRightClickScrolling", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListViewBase), &Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableRightClickScrolling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRightClickScrolling_MetaData), NewProp_bEnableRightClickScrolling_MetaData) };
void Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableTouchScrolling_SetBit(void* Obj)
{
	((UListViewBase*)Obj)->bEnableTouchScrolling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableTouchScrolling = { "bEnableTouchScrolling", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListViewBase), &Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableTouchScrolling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTouchScrolling_MetaData), NewProp_bEnableTouchScrolling_MetaData) };
void Z_Construct_UClass_UListViewBase_Statics::NewProp_bIsPointerScrollingEnabled_SetBit(void* Obj)
{
	((UListViewBase*)Obj)->bIsPointerScrollingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_bIsPointerScrollingEnabled = { "bIsPointerScrollingEnabled", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListViewBase), &Z_Construct_UClass_UListViewBase_Statics::NewProp_bIsPointerScrollingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPointerScrollingEnabled_MetaData), NewProp_bIsPointerScrollingEnabled_MetaData) };
void Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableFixedLineOffset_SetBit(void* Obj)
{
	((UListViewBase*)Obj)->bEnableFixedLineOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableFixedLineOffset = { "bEnableFixedLineOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListViewBase), &Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableFixedLineOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFixedLineOffset_MetaData), NewProp_bEnableFixedLineOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_FixedLineScrollOffset = { "FixedLineScrollOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListViewBase, FixedLineScrollOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedLineScrollOffset_MetaData), NewProp_FixedLineScrollOffset_MetaData) };
void Z_Construct_UClass_UListViewBase_Statics::NewProp_bAllowDragging_SetBit(void* Obj)
{
	((UListViewBase*)Obj)->bAllowDragging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_bAllowDragging = { "bAllowDragging", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListViewBase), &Z_Construct_UClass_UListViewBase_Statics::NewProp_bAllowDragging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDragging_MetaData), NewProp_bAllowDragging_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_BP_OnEntryReleased = { "BP_OnEntryReleased", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListViewBase, BP_OnEntryReleased), Z_Construct_UDelegateFunction_UMG_OnListEntryReleasedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_OnEntryReleased_MetaData), NewProp_BP_OnEntryReleased_MetaData) }; // 2865510224
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_NumDesignerPreviewEntries = { "NumDesignerPreviewEntries", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListViewBase, NumDesignerPreviewEntries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumDesignerPreviewEntries_MetaData), NewProp_NumDesignerPreviewEntries_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UListViewBase_Statics::NewProp_EntryWidgetPool = { "EntryWidgetPool", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListViewBase, EntryWidgetPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidgetPool_MetaData), NewProp_EntryWidgetPool_MetaData) }; // 871085244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UListViewBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_BP_OnEntryGenerated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_EntryWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_WheelScrollMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableScrollAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_bInEnableTouchAnimatedScrolling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_AllowOverscroll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableRightClickScrolling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableTouchScrolling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_bIsPointerScrollingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_bEnableFixedLineOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_FixedLineScrollOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_bAllowDragging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_BP_OnEntryReleased,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_NumDesignerPreviewEntries,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListViewBase_Statics::NewProp_EntryWidgetPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListViewBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UListViewBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListViewBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListViewBase_Statics::ClassParams = {
	&UListViewBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UListViewBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UListViewBase_Statics::PropPointers),
	0,
	0x04A800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListViewBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UListViewBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListViewBase()
{
	if (!Z_Registration_Info_UClass_UListViewBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListViewBase.OuterSingleton, Z_Construct_UClass_UListViewBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListViewBase.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UListViewBase>()
{
	return UListViewBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListViewBase);
UListViewBase::~UListViewBase() {}
// End Class UListViewBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UListViewBase, UListViewBase::StaticClass, TEXT("UListViewBase"), &Z_Registration_Info_UClass_UListViewBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListViewBase), 2969340377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_2437553307(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
