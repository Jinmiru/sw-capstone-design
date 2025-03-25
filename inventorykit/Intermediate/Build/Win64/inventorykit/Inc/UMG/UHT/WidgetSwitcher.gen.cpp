// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSwitcher() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UPanelWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UWidgetSwitcher Function GetActiveWidget
struct Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics
{
	struct WidgetSwitcher_eventGetActiveWidget_Parms
	{
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Get the reference of the currently active widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Get the reference of the currently active widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetActiveWidget", nullptr, nullptr, Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::WidgetSwitcher_eventGetActiveWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::WidgetSwitcher_eventGetActiveWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetSwitcher::execGetActiveWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidget**)Z_Param__Result=P_THIS->GetActiveWidget();
	P_NATIVE_END;
}
// End Class UWidgetSwitcher Function GetActiveWidget

// Begin Class UWidgetSwitcher Function GetActiveWidgetIndex
struct Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics
{
	struct WidgetSwitcher_eventGetActiveWidgetIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Gets the slot index of the currently active widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Gets the slot index of the currently active widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetActiveWidgetIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetActiveWidgetIndex", nullptr, nullptr, Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::WidgetSwitcher_eventGetActiveWidgetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::WidgetSwitcher_eventGetActiveWidgetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetSwitcher::execGetActiveWidgetIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveWidgetIndex();
	P_NATIVE_END;
}
// End Class UWidgetSwitcher Function GetActiveWidgetIndex

// Begin Class UWidgetSwitcher Function GetNumWidgets
struct Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics
{
	struct WidgetSwitcher_eventGetNumWidgets_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Gets the number of widgets that this switcher manages. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Gets the number of widgets that this switcher manages." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetNumWidgets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetNumWidgets", nullptr, nullptr, Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::WidgetSwitcher_eventGetNumWidgets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::WidgetSwitcher_eventGetNumWidgets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetSwitcher::execGetNumWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumWidgets();
	P_NATIVE_END;
}
// End Class UWidgetSwitcher Function GetNumWidgets

// Begin Class UWidgetSwitcher Function GetWidgetAtIndex
struct Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics
{
	struct WidgetSwitcher_eventGetWidgetAtIndex_Parms
	{
		int32 Index;
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Get a widget at the provided index */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Get a widget at the provided index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetWidgetAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetSwitcher_eventGetWidgetAtIndex_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "GetWidgetAtIndex", nullptr, nullptr, Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::WidgetSwitcher_eventGetWidgetAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::WidgetSwitcher_eventGetWidgetAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetSwitcher::execGetWidgetAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidget**)Z_Param__Result=P_THIS->GetWidgetAtIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UWidgetSwitcher Function GetWidgetAtIndex

// Begin Class UWidgetSwitcher Function SetActiveWidget
struct Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics
{
	struct WidgetSwitcher_eventSetActiveWidget_Parms
	{
		UWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Activates the widget and makes it the active index. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Activates the widget and makes it the active index." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetSwitcher_eventSetActiveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "SetActiveWidget", nullptr, nullptr, Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::WidgetSwitcher_eventSetActiveWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::WidgetSwitcher_eventSetActiveWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetSwitcher::execSetActiveWidget)
{
	P_GET_OBJECT(UWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveWidget(Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UWidgetSwitcher Function SetActiveWidget

// Begin Class UWidgetSwitcher Function SetActiveWidgetIndex
struct Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics
{
	struct WidgetSwitcher_eventSetActiveWidgetIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Switcher" },
		{ "Comment", "/** Activates the widget at the specified index. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "Activates the widget at the specified index." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetSwitcher_eventSetActiveWidgetIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetSwitcher, nullptr, "SetActiveWidgetIndex", nullptr, nullptr, Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::WidgetSwitcher_eventSetActiveWidgetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::WidgetSwitcher_eventSetActiveWidgetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetSwitcher::execSetActiveWidgetIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveWidgetIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UWidgetSwitcher Function SetActiveWidgetIndex

// Begin Class UWidgetSwitcher
void UWidgetSwitcher::GetActiveWidgetIndex_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidgetSwitcher* Obj = (const UWidgetSwitcher*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetActiveWidgetIndex();
}
void UWidgetSwitcher::SetActiveWidgetIndex_WrapperImpl(void* Object, const void* InValue)
{
	UWidgetSwitcher* Obj = (UWidgetSwitcher*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetActiveWidgetIndex(Value);
}
void UWidgetSwitcher::StaticRegisterNativesUWidgetSwitcher()
{
	UClass* Class = UWidgetSwitcher::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActiveWidget", &UWidgetSwitcher::execGetActiveWidget },
		{ "GetActiveWidgetIndex", &UWidgetSwitcher::execGetActiveWidgetIndex },
		{ "GetNumWidgets", &UWidgetSwitcher::execGetNumWidgets },
		{ "GetWidgetAtIndex", &UWidgetSwitcher::execGetWidgetAtIndex },
		{ "SetActiveWidget", &UWidgetSwitcher::execSetActiveWidget },
		{ "SetActiveWidgetIndex", &UWidgetSwitcher::execSetActiveWidgetIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetSwitcher);
UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister()
{
	return UWidgetSwitcher::StaticClass();
}
struct Z_Construct_UClass_UWidgetSwitcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A widget switcher is like a tab control, but without tabs. At most one widget is visible at time.\n */" },
		{ "IncludePath", "Components/WidgetSwitcher.h" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "A widget switcher is like a tab control, but without tabs. At most one widget is visible at time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgetIndex_MetaData[] = {
		{ "BlueprintGetter", "GetActiveWidgetIndex" },
		{ "BlueprintSetter", "SetActiveWidgetIndex" },
		{ "Category", "Switcher" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The slot index to display */" },
		{ "ModuleRelativePath", "Public/Components/WidgetSwitcher.h" },
		{ "ToolTip", "The slot index to display" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveWidgetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget, "GetActiveWidget" }, // 1433704840
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex, "GetActiveWidgetIndex" }, // 3479065375
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets, "GetNumWidgets" }, // 3163742173
		{ &Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex, "GetWidgetAtIndex" }, // 4051789895
		{ &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget, "SetActiveWidget" }, // 4116342389
		{ &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex, "SetActiveWidgetIndex" }, // 1704932737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetSwitcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex = { "ActiveWidgetIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UWidgetSwitcher::SetActiveWidgetIndex_WrapperImpl, &UWidgetSwitcher::GetActiveWidgetIndex_WrapperImpl, 1, STRUCT_OFFSET(UWidgetSwitcher, ActiveWidgetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveWidgetIndex_MetaData), NewProp_ActiveWidgetIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSwitcher_Statics::NewProp_ActiveWidgetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetSwitcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetSwitcher_Statics::ClassParams = {
	&UWidgetSwitcher::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetSwitcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetSwitcher()
{
	if (!Z_Registration_Info_UClass_UWidgetSwitcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetSwitcher.OuterSingleton, Z_Construct_UClass_UWidgetSwitcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetSwitcher.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetSwitcher>()
{
	return UWidgetSwitcher::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetSwitcher);
UWidgetSwitcher::~UWidgetSwitcher() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UWidgetSwitcher, ActiveWidgetIndex)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UWidgetSwitcher)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UWidgetSwitcher, ActiveWidgetIndex)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UWidgetSwitcher);
// End Class UWidgetSwitcher

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetSwitcher, UWidgetSwitcher::StaticClass, TEXT("UWidgetSwitcher"), &Z_Registration_Info_UClass_UWidgetSwitcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetSwitcher), 4064792669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_3707872320(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
