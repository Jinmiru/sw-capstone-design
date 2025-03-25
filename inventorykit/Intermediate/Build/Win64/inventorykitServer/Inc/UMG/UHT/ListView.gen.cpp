// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/ListView.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListView() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableViewStyle();
UMG_API UClass* Z_Construct_UClass_UListView();
UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UListViewBase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FSimpleListItemEventDynamic
struct Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics
{
	struct _Script_UMG_eventSimpleListItemEventDynamic_Parms
	{
		UObject* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventSimpleListItemEventDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "SimpleListItemEventDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::_Script_UMG_eventSimpleListItemEventDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::_Script_UMG_eventSimpleListItemEventDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSimpleListItemEventDynamic_DelegateWrapper(const FMulticastScriptDelegate& SimpleListItemEventDynamic, UObject* Item)
{
	struct _Script_UMG_eventSimpleListItemEventDynamic_Parms
	{
		UObject* Item;
	};
	_Script_UMG_eventSimpleListItemEventDynamic_Parms Parms;
	Parms.Item=Item;
	SimpleListItemEventDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSimpleListItemEventDynamic

// Begin Delegate FOnListEntryInitializedDynamic
struct Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics
{
	struct _Script_UMG_eventOnListEntryInitializedDynamic_Parms
	{
		UObject* Item;
		UUserWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnListEntryInitializedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnListEntryInitializedDynamic_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnListEntryInitializedDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListEntryInitializedDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListEntryInitializedDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnListEntryInitializedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryInitializedDynamic, UObject* Item, UUserWidget* Widget)
{
	struct _Script_UMG_eventOnListEntryInitializedDynamic_Parms
	{
		UObject* Item;
		UUserWidget* Widget;
	};
	_Script_UMG_eventOnListEntryInitializedDynamic_Parms Parms;
	Parms.Item=Item;
	Parms.Widget=Widget;
	OnListEntryInitializedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnListEntryInitializedDynamic

// Begin Delegate FOnListItemSelectionChangedDynamic
struct Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics
{
	struct _Script_UMG_eventOnListItemSelectionChangedDynamic_Parms
	{
		UObject* Item;
		bool bIsSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms), &Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnListItemSelectionChangedDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnListItemSelectionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemSelectionChangedDynamic, UObject* Item, bool bIsSelected)
{
	struct _Script_UMG_eventOnListItemSelectionChangedDynamic_Parms
	{
		UObject* Item;
		bool bIsSelected;
	};
	_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms Parms;
	Parms.Item=Item;
	Parms.bIsSelected=bIsSelected ? true : false;
	OnListItemSelectionChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnListItemSelectionChangedDynamic

// Begin Delegate FOnItemIsHoveredChangedDynamic
struct Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics
{
	struct _Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms
	{
		UObject* Item;
		bool bIsHovered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_bIsHovered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered_SetBit(void* Obj)
{
	((_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms*)Obj)->bIsHovered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered = { "bIsHovered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms), &Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnItemIsHoveredChangedDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemIsHoveredChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemIsHoveredChangedDynamic, UObject* Item, bool bIsHovered)
{
	struct _Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms
	{
		UObject* Item;
		bool bIsHovered;
	};
	_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms Parms;
	Parms.Item=Item;
	Parms.bIsHovered=bIsHovered ? true : false;
	OnItemIsHoveredChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemIsHoveredChangedDynamic

// Begin Delegate FOnListItemScrolledIntoViewDynamic
struct Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics
{
	struct _Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms
	{
		UObject* Item;
		UUserWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnListItemScrolledIntoViewDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnListItemScrolledIntoViewDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemScrolledIntoViewDynamic, UObject* Item, UUserWidget* Widget)
{
	struct _Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms
	{
		UObject* Item;
		UUserWidget* Widget;
	};
	_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms Parms;
	Parms.Item=Item;
	Parms.Widget=Widget;
	OnListItemScrolledIntoViewDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnListItemScrolledIntoViewDynamic

// Begin Delegate FOnListViewScrolledDynamic
struct Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics
{
	struct _Script_UMG_eventOnListViewScrolledDynamic_Parms
	{
		float ItemOffset;
		float DistanceRemaining;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::NewProp_ItemOffset = { "ItemOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnListViewScrolledDynamic_Parms, ItemOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::NewProp_DistanceRemaining = { "DistanceRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnListViewScrolledDynamic_Parms, DistanceRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::NewProp_ItemOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::NewProp_DistanceRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnListViewScrolledDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListViewScrolledDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::_Script_UMG_eventOnListViewScrolledDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnListViewScrolledDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListViewScrolledDynamic, float ItemOffset, float DistanceRemaining)
{
	struct _Script_UMG_eventOnListViewScrolledDynamic_Parms
	{
		float ItemOffset;
		float DistanceRemaining;
	};
	_Script_UMG_eventOnListViewScrolledDynamic_Parms Parms;
	Parms.ItemOffset=ItemOffset;
	Parms.DistanceRemaining=DistanceRemaining;
	OnListViewScrolledDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnListViewScrolledDynamic

// Begin Class UListView Function AddItem
struct Z_Construct_UFunction_UListView_AddItem_Statics
{
	struct ListView_eventAddItem_Parms
	{
		UObject* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Adds an the item to the list */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Adds an the item to the list" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventAddItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_AddItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UListView_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_AddItem_Statics::ListView_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_AddItem_Statics::ListView_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execAddItem)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UListView Function AddItem

// Begin Class UListView Function BP_CancelScrollIntoView
struct Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Cancels a previous request to scroll and item into view. */" },
		{ "DisplayName", "Cancel Scroll Into View" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Cancels a previous request to scroll and item into view." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_CancelScrollIntoView", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UListView_BP_CancelScrollIntoView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_CancelScrollIntoView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_CancelScrollIntoView();
	P_NATIVE_END;
}
// End Class UListView Function BP_CancelScrollIntoView

// Begin Class UListView Function BP_ClearSelection
struct Z_Construct_UFunction_UListView_BP_ClearSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Clear selection */" },
		{ "DisplayName", "Clear Selection" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Clear selection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_ClearSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UListView_BP_ClearSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_ClearSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_ClearSelection();
	P_NATIVE_END;
}
// End Class UListView Function BP_ClearSelection

// Begin Class UListView Function BP_GetNumItemsSelected
struct Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics
{
	struct ListView_eventBP_GetNumItemsSelected_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Gets the number of items currently selected in the list */" },
		{ "DisplayName", "Get Num Items Selected" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets the number of items currently selected in the list" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventBP_GetNumItemsSelected_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_GetNumItemsSelected", nullptr, nullptr, Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::ListView_eventBP_GetNumItemsSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::ListView_eventBP_GetNumItemsSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_BP_GetNumItemsSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_GetNumItemsSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->BP_GetNumItemsSelected();
	P_NATIVE_END;
}
// End Class UListView Function BP_GetNumItemsSelected

// Begin Class UListView Function BP_GetSelectedItem
struct Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics
{
	struct ListView_eventBP_GetSelectedItem_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Gets the first selected item, if any; recommended that you only use this for single selection lists. */" },
		{ "DisplayName", "Get Selected Item" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets the first selected item, if any; recommended that you only use this for single selection lists." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventBP_GetSelectedItem_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_GetSelectedItem", nullptr, nullptr, Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::ListView_eventBP_GetSelectedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::ListView_eventBP_GetSelectedItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_BP_GetSelectedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_GetSelectedItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->BP_GetSelectedItem();
	P_NATIVE_END;
}
// End Class UListView Function BP_GetSelectedItem

// Begin Class UListView Function BP_GetSelectedItems
struct Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics
{
	struct ListView_eventBP_GetSelectedItems_Parms
	{
		TArray<UObject*> Items;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Gets a list of all the currently selected items */" },
		{ "DisplayName", "GetSelectedItems" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets a list of all the currently selected items" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventBP_GetSelectedItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ListView_eventBP_GetSelectedItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ListView_eventBP_GetSelectedItems_Parms), &Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_GetSelectedItems", nullptr, nullptr, Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::ListView_eventBP_GetSelectedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44440403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::ListView_eventBP_GetSelectedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_BP_GetSelectedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_GetSelectedItems)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_Items);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_GetSelectedItems(Z_Param_Out_Items);
	P_NATIVE_END;
}
// End Class UListView Function BP_GetSelectedItems

// Begin Class UListView Function BP_IsItemVisible
struct Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics
{
	struct ListView_eventBP_IsItemVisible_Parms
	{
		UObject* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Gets whether the entry for the given object is currently visible in the list */" },
		{ "DisplayName", "Is Item Visible" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets whether the entry for the given object is currently visible in the list" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventBP_IsItemVisible_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ListView_eventBP_IsItemVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ListView_eventBP_IsItemVisible_Parms), &Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_IsItemVisible", nullptr, nullptr, Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::ListView_eventBP_IsItemVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::ListView_eventBP_IsItemVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_BP_IsItemVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_IsItemVisible)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_IsItemVisible(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UListView Function BP_IsItemVisible

// Begin Class UListView Function BP_NavigateToItem
struct Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics
{
	struct ListView_eventBP_NavigateToItem_Parms
	{
		UObject* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Requests that the given item is navigated to, scrolling it into view if needed. */" },
		{ "DisplayName", "Navigate To Item" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the given item is navigated to, scrolling it into view if needed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventBP_NavigateToItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_NavigateToItem", nullptr, nullptr, Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::ListView_eventBP_NavigateToItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::ListView_eventBP_NavigateToItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_BP_NavigateToItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_NavigateToItem)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_NavigateToItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UListView Function BP_NavigateToItem

// Begin Class UListView Function BP_ScrollItemIntoView
struct Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics
{
	struct ListView_eventBP_ScrollItemIntoView_Parms
	{
		UObject* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Requests that the given item is scrolled into view */" },
		{ "DisplayName", "Scroll Item Into View" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the given item is scrolled into view" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventBP_ScrollItemIntoView_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_ScrollItemIntoView", nullptr, nullptr, Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::ListView_eventBP_ScrollItemIntoView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::ListView_eventBP_ScrollItemIntoView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_BP_ScrollItemIntoView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_ScrollItemIntoView)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_ScrollItemIntoView(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UListView Function BP_ScrollItemIntoView

// Begin Class UListView Function BP_SetItemSelection
struct Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics
{
	struct ListView_eventBP_SetItemSelection_Parms
	{
		UObject* Item;
		bool bSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Sets whether the given item is selected. */" },
		{ "DisplayName", "Set Item Selection" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets whether the given item is selected." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventBP_SetItemSelection_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((ListView_eventBP_SetItemSelection_Parms*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ListView_eventBP_SetItemSelection_Parms), &Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_SetItemSelection", nullptr, nullptr, Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::ListView_eventBP_SetItemSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::ListView_eventBP_SetItemSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_BP_SetItemSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_SetItemSelection)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_GET_UBOOL(Z_Param_bSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_SetItemSelection(Z_Param_Item,Z_Param_bSelected);
	P_NATIVE_END;
}
// End Class UListView Function BP_SetItemSelection

// Begin Class UListView Function BP_SetListItems
struct Z_Construct_UFunction_UListView_BP_SetListItems_Statics
{
	struct ListView_eventBP_SetListItems_Parms
	{
		TArray<UObject*> InListItems;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Sets the array of objects to display rows for in the list */" },
		{ "DisplayName", "Set List Items" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the array of objects to display rows for in the list" },
		{ "ViewmodelBlueprintWidgetExtension", "EntryViewModel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InListItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InListItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InListItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_Inner = { "InListItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems = { "InListItems", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventBP_SetListItems_Parms, InListItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InListItems_MetaData), NewProp_InListItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_SetListItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_SetListItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_SetListItems", nullptr, nullptr, Z_Construct_UFunction_UListView_BP_SetListItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::ListView_eventBP_SetListItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_SetListItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::ListView_eventBP_SetListItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_BP_SetListItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_SetListItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_SetListItems)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_InListItems);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_SetListItems(Z_Param_Out_InListItems);
	P_NATIVE_END;
}
// End Class UListView Function BP_SetListItems

// Begin Class UListView Function BP_SetSelectedItem
struct Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics
{
	struct ListView_eventBP_SetSelectedItem_Parms
	{
		UObject* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "Comment", "/** Sets the given item as the sole selected item. */" },
		{ "DisplayName", "Set Selected Item" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the given item as the sole selected item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventBP_SetSelectedItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "BP_SetSelectedItem", nullptr, nullptr, Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::ListView_eventBP_SetSelectedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::ListView_eventBP_SetSelectedItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_BP_SetSelectedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execBP_SetSelectedItem)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_SetSelectedItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UListView Function BP_SetSelectedItem

// Begin Class UListView Function ClearListItems
struct Z_Construct_UFunction_UListView_ClearListItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Removes all items from the list */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Removes all items from the list" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_ClearListItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "ClearListItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_ClearListItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_ClearListItems_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UListView_ClearListItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_ClearListItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execClearListItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearListItems();
	P_NATIVE_END;
}
// End Class UListView Function ClearListItems

// Begin Class UListView Function GetHorizontalEntrySpacing
struct Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics
{
	struct ListView_eventGetHorizontalEntrySpacing_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Get the horizontal spacing between entries. */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Get the horizontal spacing between entries." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventGetHorizontalEntrySpacing_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "GetHorizontalEntrySpacing", nullptr, nullptr, Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::ListView_eventGetHorizontalEntrySpacing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::ListView_eventGetHorizontalEntrySpacing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execGetHorizontalEntrySpacing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHorizontalEntrySpacing();
	P_NATIVE_END;
}
// End Class UListView Function GetHorizontalEntrySpacing

// Begin Class UListView Function GetIndexForItem
struct Z_Construct_UFunction_UListView_GetIndexForItem_Statics
{
	struct ListView_eventGetIndexForItem_Parms
	{
		const UObject* Item;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Returns the index that the specified item is at. Will return the first found, or -1 for not found */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns the index that the specified item is at. Will return the first found, or -1 for not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventGetIndexForItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventGetIndexForItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetIndexForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetIndexForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "GetIndexForItem", nullptr, nullptr, Z_Construct_UFunction_UListView_GetIndexForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::ListView_eventGetIndexForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_GetIndexForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::ListView_eventGetIndexForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_GetIndexForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_GetIndexForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execGetIndexForItem)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexForItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UListView Function GetIndexForItem

// Begin Class UListView Function GetItemAt
struct Z_Construct_UFunction_UListView_GetItemAt_Statics
{
	struct ListView_eventGetItemAt_Parms
	{
		int32 Index;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Returns the item at the given index */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns the item at the given index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventGetItemAt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventGetItemAt_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetItemAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetItemAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetItemAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "GetItemAt", nullptr, nullptr, Z_Construct_UFunction_UListView_GetItemAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetItemAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_GetItemAt_Statics::ListView_eventGetItemAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetItemAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_GetItemAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_GetItemAt_Statics::ListView_eventGetItemAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_GetItemAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_GetItemAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execGetItemAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetItemAt(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UListView Function GetItemAt

// Begin Class UListView Function GetListItems
struct Z_Construct_UFunction_UListView_GetListItems_Statics
{
	struct ListView_eventGetListItems_Parms
	{
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/**\n\x09 * Gets the list of all items in the list.\n\x09 * Note that each of these items only has a corresponding entry widget when visible. Use GetDisplayedEntryWidgets to get the currently displayed widgets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets the list of all items in the list.\nNote that each of these items only has a corresponding entry widget when visible. Use GetDisplayedEntryWidgets to get the currently displayed widgets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventGetListItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetListItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetListItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetListItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "GetListItems", nullptr, nullptr, Z_Construct_UFunction_UListView_GetListItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetListItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_GetListItems_Statics::ListView_eventGetListItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetListItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_GetListItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_GetListItems_Statics::ListView_eventGetListItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_GetListItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_GetListItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execGetListItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetListItems();
	P_NATIVE_END;
}
// End Class UListView Function GetListItems

// Begin Class UListView Function GetNumItems
struct Z_Construct_UFunction_UListView_GetNumItems_Statics
{
	struct ListView_eventGetNumItems_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Returns the total number of items */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns the total number of items" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_GetNumItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventGetNumItems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetNumItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetNumItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetNumItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetNumItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "GetNumItems", nullptr, nullptr, Z_Construct_UFunction_UListView_GetNumItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetNumItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_GetNumItems_Statics::ListView_eventGetNumItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetNumItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_GetNumItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_GetNumItems_Statics::ListView_eventGetNumItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_GetNumItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_GetNumItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execGetNumItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumItems();
	P_NATIVE_END;
}
// End Class UListView Function GetNumItems

// Begin Class UListView Function GetVerticalEntrySpacing
struct Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics
{
	struct ListView_eventGetVerticalEntrySpacing_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Get the vertical spacing between entries. */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Get the vertical spacing between entries." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventGetVerticalEntrySpacing_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "GetVerticalEntrySpacing", nullptr, nullptr, Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::ListView_eventGetVerticalEntrySpacing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::ListView_eventGetVerticalEntrySpacing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_GetVerticalEntrySpacing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_GetVerticalEntrySpacing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execGetVerticalEntrySpacing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVerticalEntrySpacing();
	P_NATIVE_END;
}
// End Class UListView Function GetVerticalEntrySpacing

// Begin Class UListView Function IsRefreshPending
struct Z_Construct_UFunction_UListView_IsRefreshPending_Statics
{
	struct ListView_eventIsRefreshPending_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Returns true if a refresh is pending and the list will be rebuilt on the next tick */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns true if a refresh is pending and the list will be rebuilt on the next tick" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ListView_eventIsRefreshPending_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ListView_eventIsRefreshPending_Parms), &Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_IsRefreshPending_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_IsRefreshPending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "IsRefreshPending", nullptr, nullptr, Z_Construct_UFunction_UListView_IsRefreshPending_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::ListView_eventIsRefreshPending_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_IsRefreshPending_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::ListView_eventIsRefreshPending_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_IsRefreshPending()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_IsRefreshPending_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execIsRefreshPending)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRefreshPending();
	P_NATIVE_END;
}
// End Class UListView Function IsRefreshPending

// Begin Class UListView Function NavigateToIndex
struct Z_Construct_UFunction_UListView_NavigateToIndex_Statics
{
	struct ListView_eventNavigateToIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Requests that the item at the given index navigated to, scrolling it into view if needed. */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the item at the given index navigated to, scrolling it into view if needed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_NavigateToIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventNavigateToIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_NavigateToIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_NavigateToIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_NavigateToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "NavigateToIndex", nullptr, nullptr, Z_Construct_UFunction_UListView_NavigateToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::ListView_eventNavigateToIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_NavigateToIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::ListView_eventNavigateToIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_NavigateToIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_NavigateToIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execNavigateToIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NavigateToIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UListView Function NavigateToIndex

// Begin Class UListView Function OnListItemEndPlayed
struct Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics
{
	struct ListView_eventOnListItemEndPlayed_Parms
	{
		AActor* Item;
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventOnListItemEndPlayed_Parms, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventOnListItemEndPlayed_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::NewProp_EndPlayReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "OnListItemEndPlayed", nullptr, nullptr, Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::ListView_eventOnListItemEndPlayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::ListView_eventOnListItemEndPlayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_OnListItemEndPlayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_OnListItemEndPlayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execOnListItemEndPlayed)
{
	P_GET_OBJECT(AActor,Z_Param_Item);
	P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnListItemEndPlayed(Z_Param_Item,EEndPlayReason::Type(Z_Param_EndPlayReason));
	P_NATIVE_END;
}
// End Class UListView Function OnListItemEndPlayed

// Begin Class UListView Function OnListItemOuterEndPlayed
struct Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics
{
	struct ListView_eventOnListItemOuterEndPlayed_Parms
	{
		AActor* ItemOuter;
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemOuter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::NewProp_ItemOuter = { "ItemOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventOnListItemOuterEndPlayed_Parms, ItemOuter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventOnListItemOuterEndPlayed_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::NewProp_ItemOuter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::NewProp_EndPlayReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "OnListItemOuterEndPlayed", nullptr, nullptr, Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::ListView_eventOnListItemOuterEndPlayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::ListView_eventOnListItemOuterEndPlayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execOnListItemOuterEndPlayed)
{
	P_GET_OBJECT(AActor,Z_Param_ItemOuter);
	P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnListItemOuterEndPlayed(Z_Param_ItemOuter,EEndPlayReason::Type(Z_Param_EndPlayReason));
	P_NATIVE_END;
}
// End Class UListView Function OnListItemOuterEndPlayed

// Begin Class UListView Function RemoveItem
struct Z_Construct_UFunction_UListView_RemoveItem_Statics
{
	struct ListView_eventRemoveItem_Parms
	{
		UObject* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Removes an the item from the list */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Removes an the item from the list" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventRemoveItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_RemoveItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UListView_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_RemoveItem_Statics::ListView_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_RemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_RemoveItem_Statics::ListView_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execRemoveItem)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UListView Function RemoveItem

// Begin Class UListView Function ScrollIndexIntoView
struct Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics
{
	struct ListView_eventScrollIndexIntoView_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Requests that the item at the given index is scrolled into view */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the item at the given index is scrolled into view" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventScrollIndexIntoView_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "ScrollIndexIntoView", nullptr, nullptr, Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::ListView_eventScrollIndexIntoView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::ListView_eventScrollIndexIntoView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_ScrollIndexIntoView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execScrollIndexIntoView)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScrollIndexIntoView(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UListView Function ScrollIndexIntoView

// Begin Class UListView Function SetSelectedIndex
struct Z_Construct_UFunction_UListView_SetSelectedIndex_Statics
{
	struct ListView_eventSetSelectedIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Sets the item at the given index as the sole selected item. */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the item at the given index as the sole selected item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventSetSelectedIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "SetSelectedIndex", nullptr, nullptr, Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::ListView_eventSetSelectedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::ListView_eventSetSelectedIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_SetSelectedIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execSetSelectedIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UListView Function SetSelectedIndex

// Begin Class UListView Function SetSelectionMode
struct Z_Construct_UFunction_UListView_SetSelectionMode_Statics
{
	struct ListView_eventSetSelectionMode_Parms
	{
		TEnumAsByte<ESelectionMode::Type> SelectionMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Sets the new selection mode, preserving the current selection where possible. */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the new selection mode, preserving the current selection where possible." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UListView_SetSelectionMode_Statics::NewProp_SelectionMode = { "SelectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ListView_eventSetSelectionMode_Parms, SelectionMode), Z_Construct_UEnum_Slate_ESelectionMode, METADATA_PARAMS(0, nullptr) }; // 1627753987
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_SetSelectionMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_SetSelectionMode_Statics::NewProp_SelectionMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_SetSelectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, nullptr, "SetSelectionMode", nullptr, nullptr, Z_Construct_UFunction_UListView_SetSelectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::ListView_eventSetSelectionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UListView_SetSelectionMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::ListView_eventSetSelectionMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UListView_SetSelectionMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UListView_SetSelectionMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UListView::execSetSelectionMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectionMode(ESelectionMode::Type(Z_Param_SelectionMode));
	P_NATIVE_END;
}
// End Class UListView Function SetSelectionMode

// Begin Class UListView
void UListView::GetHorizontalEntrySpacing_WrapperImpl(const void* Object, void* OutValue)
{
	const UListView* Obj = (const UListView*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetHorizontalEntrySpacing();
}
void UListView::GetVerticalEntrySpacing_WrapperImpl(const void* Object, void* OutValue)
{
	const UListView* Obj = (const UListView*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetVerticalEntrySpacing();
}
void UListView::StaticRegisterNativesUListView()
{
	UClass* Class = UListView::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UListView::execAddItem },
		{ "BP_CancelScrollIntoView", &UListView::execBP_CancelScrollIntoView },
		{ "BP_ClearSelection", &UListView::execBP_ClearSelection },
		{ "BP_GetNumItemsSelected", &UListView::execBP_GetNumItemsSelected },
		{ "BP_GetSelectedItem", &UListView::execBP_GetSelectedItem },
		{ "BP_GetSelectedItems", &UListView::execBP_GetSelectedItems },
		{ "BP_IsItemVisible", &UListView::execBP_IsItemVisible },
		{ "BP_NavigateToItem", &UListView::execBP_NavigateToItem },
		{ "BP_ScrollItemIntoView", &UListView::execBP_ScrollItemIntoView },
		{ "BP_SetItemSelection", &UListView::execBP_SetItemSelection },
		{ "BP_SetListItems", &UListView::execBP_SetListItems },
		{ "BP_SetSelectedItem", &UListView::execBP_SetSelectedItem },
		{ "ClearListItems", &UListView::execClearListItems },
		{ "GetHorizontalEntrySpacing", &UListView::execGetHorizontalEntrySpacing },
		{ "GetIndexForItem", &UListView::execGetIndexForItem },
		{ "GetItemAt", &UListView::execGetItemAt },
		{ "GetListItems", &UListView::execGetListItems },
		{ "GetNumItems", &UListView::execGetNumItems },
		{ "GetVerticalEntrySpacing", &UListView::execGetVerticalEntrySpacing },
		{ "IsRefreshPending", &UListView::execIsRefreshPending },
		{ "NavigateToIndex", &UListView::execNavigateToIndex },
		{ "OnListItemEndPlayed", &UListView::execOnListItemEndPlayed },
		{ "OnListItemOuterEndPlayed", &UListView::execOnListItemOuterEndPlayed },
		{ "RemoveItem", &UListView::execRemoveItem },
		{ "ScrollIndexIntoView", &UListView::execScrollIndexIntoView },
		{ "SetSelectedIndex", &UListView::execSetSelectedIndex },
		{ "SetSelectionMode", &UListView::execSetSelectionMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UListView);
UClass* Z_Construct_UClass_UListView_NoRegister()
{
	return UListView::StaticClass();
}
struct Z_Construct_UClass_UListView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A virtualized list that allows up to thousands of items to be displayed.\n * \n * An important distinction to keep in mind here is \"Item\" vs. \"Entry\"\n * The list itself is based on a list of n items, but only creates as many entry widgets as can fit on screen.\n * For example, a scrolling ListView of 200 items with 5 currently visible will only have created 5 entry widgets.\n *\n * To make a widget usable as an entry in a ListView, it must inherit from the IUserObjectListEntry interface.\n */" },
		{ "EntryInterface", "/Script/UMG.UserObjectListEntry" },
		{ "IncludePath", "Components/ListView.h" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A virtualized list that allows up to thousands of items to be displayed.\n\nAn important distinction to keep in mind here is \"Item\" vs. \"Entry\"\nThe list itself is based on a list of n items, but only creates as many entry widgets as can fit on screen.\nFor example, a scrolling ListView of 200 items with 5 currently visible will only have created 5 entry widgets.\n\nTo make a widget usable as an entry in a ListView, it must inherit from the IUserObjectListEntry interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "ListView" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** \n\x09 * The scroll & layout orientation of the list. ListView and TileView only. \n\x09 * Vertical will scroll vertically and arrange tiles into rows.\n\x09 * Horizontal will scroll horizontally and arrange tiles into columns.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "The scroll & layout orientation of the list. ListView and TileView only.\nVertical will scroll vertically and arrange tiles into rows.\nHorizontal will scroll horizontally and arrange tiles into columns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMode_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeMouseWheel_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearSelectionOnClick_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReturnFocusToSelection_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntrySpacing_MetaData[] = {
		{ "BlueprintGetter", "GetHorizontalEntrySpacing" },
		{ "Category", "ListView" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * This deprecated property was originally BlueprintReadOnly. To satisfy the compiler requirment to have a BlueprintGetter for this property, \n\x09 * it relies on the newly added UFunction GetHorizontalEntrySpacing() to act as its BlueprintGetter.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "EntrySpacing has been deprecated. Please use HorizontalEntrySpacing and VerticalEntrySpacing." },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "This deprecated property was originally BlueprintReadOnly. To satisfy the compiler requirment to have a BlueprintGetter for this property,\nit relies on the newly added UFunction GetHorizontalEntrySpacing() to act as its BlueprintGetter." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalEntrySpacing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ListView" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalEntrySpacing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ListView" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnEntryInitialized_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when a row widget is generated for a list item */" },
		{ "DisplayName", "On Entry Initialized" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Called when a row widget is generated for a list item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemClicked_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Clicked" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemDoubleClicked_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Double Clicked" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemIsHoveredChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Is Hovered Changed" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemSelectionChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Selection Changed" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemScrolledIntoView_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Scrolled Into View" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnListViewScrolled_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On List View Scrolled" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConsumeMouseWheel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConsumeMouseWheel;
	static void NewProp_bClearSelectionOnClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearSelectionOnClick;
	static void NewProp_bIsFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
	static void NewProp_bReturnFocusToSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnFocusToSelection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ListItems;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EntrySpacing;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalEntrySpacing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalEntrySpacing;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnEntryInitialized;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemDoubleClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemIsHoveredChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemSelectionChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemScrolledIntoView;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnListViewScrolled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UListView_AddItem, "AddItem" }, // 1889092560
		{ &Z_Construct_UFunction_UListView_BP_CancelScrollIntoView, "BP_CancelScrollIntoView" }, // 2334975819
		{ &Z_Construct_UFunction_UListView_BP_ClearSelection, "BP_ClearSelection" }, // 2972577647
		{ &Z_Construct_UFunction_UListView_BP_GetNumItemsSelected, "BP_GetNumItemsSelected" }, // 3068601782
		{ &Z_Construct_UFunction_UListView_BP_GetSelectedItem, "BP_GetSelectedItem" }, // 2902771078
		{ &Z_Construct_UFunction_UListView_BP_GetSelectedItems, "BP_GetSelectedItems" }, // 953706943
		{ &Z_Construct_UFunction_UListView_BP_IsItemVisible, "BP_IsItemVisible" }, // 2961355200
		{ &Z_Construct_UFunction_UListView_BP_NavigateToItem, "BP_NavigateToItem" }, // 3935030384
		{ &Z_Construct_UFunction_UListView_BP_ScrollItemIntoView, "BP_ScrollItemIntoView" }, // 1357154603
		{ &Z_Construct_UFunction_UListView_BP_SetItemSelection, "BP_SetItemSelection" }, // 1954767630
		{ &Z_Construct_UFunction_UListView_BP_SetListItems, "BP_SetListItems" }, // 1249086169
		{ &Z_Construct_UFunction_UListView_BP_SetSelectedItem, "BP_SetSelectedItem" }, // 1172417248
		{ &Z_Construct_UFunction_UListView_ClearListItems, "ClearListItems" }, // 38820976
		{ &Z_Construct_UFunction_UListView_GetHorizontalEntrySpacing, "GetHorizontalEntrySpacing" }, // 3857477729
		{ &Z_Construct_UFunction_UListView_GetIndexForItem, "GetIndexForItem" }, // 1823279330
		{ &Z_Construct_UFunction_UListView_GetItemAt, "GetItemAt" }, // 2316974376
		{ &Z_Construct_UFunction_UListView_GetListItems, "GetListItems" }, // 37544582
		{ &Z_Construct_UFunction_UListView_GetNumItems, "GetNumItems" }, // 2067558423
		{ &Z_Construct_UFunction_UListView_GetVerticalEntrySpacing, "GetVerticalEntrySpacing" }, // 594931358
		{ &Z_Construct_UFunction_UListView_IsRefreshPending, "IsRefreshPending" }, // 1248070477
		{ &Z_Construct_UFunction_UListView_NavigateToIndex, "NavigateToIndex" }, // 2272408665
		{ &Z_Construct_UFunction_UListView_OnListItemEndPlayed, "OnListItemEndPlayed" }, // 1631478115
		{ &Z_Construct_UFunction_UListView_OnListItemOuterEndPlayed, "OnListItemOuterEndPlayed" }, // 1269712905
		{ &Z_Construct_UFunction_UListView_RemoveItem, "RemoveItem" }, // 4169844823
		{ &Z_Construct_UFunction_UListView_ScrollIndexIntoView, "ScrollIndexIntoView" }, // 3478811935
		{ &Z_Construct_UFunction_UListView_SetSelectedIndex, "SetSelectedIndex" }, // 1575546432
		{ &Z_Construct_UFunction_UListView_SetSelectionMode, "SetSelectionMode" }, // 4005527245
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, WidgetStyle), Z_Construct_UScriptStruct_FTableViewStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 608486405
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBarStyle_MetaData), NewProp_ScrollBarStyle_MetaData) }; // 1456599938
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 349032367
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode = { "SelectionMode", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, SelectionMode), Z_Construct_UEnum_Slate_ESelectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMode_MetaData), NewProp_SelectionMode_MetaData) }; // 1627753987
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel = { "ConsumeMouseWheel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, ConsumeMouseWheel), Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumeMouseWheel_MetaData), NewProp_ConsumeMouseWheel_MetaData) }; // 3236251701
void Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_SetBit(void* Obj)
{
	((UListView*)Obj)->bClearSelectionOnClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick = { "bClearSelectionOnClick", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListView), &Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearSelectionOnClick_MetaData), NewProp_bClearSelectionOnClick_MetaData) };
void Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
{
	((UListView*)Obj)->bIsFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable = { "bIsFocusable", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListView), &Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFocusable_MetaData), NewProp_bIsFocusable_MetaData) };
void Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection_SetBit(void* Obj)
{
	((UListView*)Obj)->bReturnFocusToSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection = { "bReturnFocusToSelection", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UListView), &Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReturnFocusToSelection_MetaData), NewProp_bReturnFocusToSelection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ListItems_Inner = { "ListItems", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ListItems = { "ListItems", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, ListItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListItems_MetaData), NewProp_ListItems_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing = { "EntrySpacing", nullptr, (EPropertyFlags)0x0020080800000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, EntrySpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntrySpacing_MetaData), NewProp_EntrySpacing_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_HorizontalEntrySpacing = { "HorizontalEntrySpacing", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UListView::GetHorizontalEntrySpacing_WrapperImpl, 1, STRUCT_OFFSET(UListView, HorizontalEntrySpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalEntrySpacing_MetaData), NewProp_HorizontalEntrySpacing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_VerticalEntrySpacing = { "VerticalEntrySpacing", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UListView::GetVerticalEntrySpacing_WrapperImpl, 1, STRUCT_OFFSET(UListView, VerticalEntrySpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalEntrySpacing_MetaData), NewProp_VerticalEntrySpacing_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnEntryInitialized = { "BP_OnEntryInitialized", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, BP_OnEntryInitialized), Z_Construct_UDelegateFunction_UMG_OnListEntryInitializedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_OnEntryInitialized_MetaData), NewProp_BP_OnEntryInitialized_MetaData) }; // 310976198
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked = { "BP_OnItemClicked", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, BP_OnItemClicked), Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_OnItemClicked_MetaData), NewProp_BP_OnItemClicked_MetaData) }; // 2335890925
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked = { "BP_OnItemDoubleClicked", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, BP_OnItemDoubleClicked), Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_OnItemDoubleClicked_MetaData), NewProp_BP_OnItemDoubleClicked_MetaData) }; // 2335890925
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged = { "BP_OnItemIsHoveredChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, BP_OnItemIsHoveredChanged), Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_OnItemIsHoveredChanged_MetaData), NewProp_BP_OnItemIsHoveredChanged_MetaData) }; // 2556505555
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged = { "BP_OnItemSelectionChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, BP_OnItemSelectionChanged), Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_OnItemSelectionChanged_MetaData), NewProp_BP_OnItemSelectionChanged_MetaData) }; // 2624573577
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView = { "BP_OnItemScrolledIntoView", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, BP_OnItemScrolledIntoView), Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_OnItemScrolledIntoView_MetaData), NewProp_BP_OnItemScrolledIntoView_MetaData) }; // 4110127069
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnListViewScrolled = { "BP_OnListViewScrolled", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListView, BP_OnListViewScrolled), Z_Construct_UDelegateFunction_UMG_OnListViewScrolledDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_OnListViewScrolled_MetaData), NewProp_BP_OnListViewScrolled_MetaData) }; // 1559127990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UListView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ScrollBarStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_bIsFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_bReturnFocusToSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ListItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ListItems,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_HorizontalEntrySpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_VerticalEntrySpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnEntryInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnListViewScrolled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UListView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListViewBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListView_Statics::ClassParams = {
	&UListView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UListView_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::Class_MetaDataParams), Z_Construct_UClass_UListView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListView()
{
	if (!Z_Registration_Info_UClass_UListView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListView.OuterSingleton, Z_Construct_UClass_UListView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListView.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UListView>()
{
	return UListView::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListView);
UListView::~UListView() {}
// End Class UListView

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UListView, UListView::StaticClass, TEXT("UListView"), &Z_Registration_Info_UClass_UListView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListView), 2759126399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_287278185(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
