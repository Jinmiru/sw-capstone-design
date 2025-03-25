// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Public/ToolMenuDelegates.h"
#include "Developer/ToolMenus/Public/ToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuDelegates() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature();
TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature();
TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature();
TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature();
TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolDynamicUIAction();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin Delegate FToolMenuDynamicExecuteAction
struct Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics
{
	struct _Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms
	{
		FToolMenuContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolMenus, nullptr, "ToolMenuDynamicExecuteAction__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FToolMenuDynamicExecuteAction_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicExecuteAction, FToolMenuContext const& Context)
{
	struct _Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms
	{
		FToolMenuContext Context;
	};
	_Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms Parms;
	Parms.Context=Context;
	ToolMenuDynamicExecuteAction.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FToolMenuDynamicExecuteAction

// Begin Delegate FToolMenuDynamicCanExecuteAction
struct Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics
{
	struct _Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
void Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms), &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolMenus, nullptr, "ToolMenuDynamicCanExecuteAction__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
bool FToolMenuDynamicCanExecuteAction_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicCanExecuteAction, FToolMenuContext const& Context)
{
	struct _Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms Parms;
	Parms.Context=Context;
	ToolMenuDynamicCanExecuteAction.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
// End Delegate FToolMenuDynamicCanExecuteAction

// Begin Delegate FToolMenuDynamicIsActionChecked
struct Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics
{
	struct _Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
void Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms), &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolMenus, nullptr, "ToolMenuDynamicIsActionChecked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
bool FToolMenuDynamicIsActionChecked_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicIsActionChecked, FToolMenuContext const& Context)
{
	struct _Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms Parms;
	Parms.Context=Context;
	ToolMenuDynamicIsActionChecked.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
// End Delegate FToolMenuDynamicIsActionChecked

// Begin Delegate FToolMenuDynamicGetActionCheckState
struct Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics
{
	struct _Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms
	{
		FToolMenuContext Context;
		ECheckBoxState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(0, nullptr) }; // 274390384
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolMenus, nullptr, "ToolMenuDynamicGetActionCheckState__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
ECheckBoxState FToolMenuDynamicGetActionCheckState_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicGetActionCheckState, FToolMenuContext const& Context)
{
	struct _Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms
	{
		FToolMenuContext Context;
		ECheckBoxState ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms()
			: ReturnValue((ECheckBoxState)0)
		{
		}
	};
	_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms Parms;
	Parms.Context=Context;
	ToolMenuDynamicGetActionCheckState.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FToolMenuDynamicGetActionCheckState

// Begin Delegate FToolMenuDynamicIsActionButtonVisible
struct Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics
{
	struct _Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
void Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms), &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolMenus, nullptr, "ToolMenuDynamicIsActionButtonVisible__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
bool FToolMenuDynamicIsActionButtonVisible_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicIsActionButtonVisible, FToolMenuContext const& Context)
{
	struct _Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms Parms;
	Parms.Context=Context;
	ToolMenuDynamicIsActionButtonVisible.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
// End Delegate FToolMenuDynamicIsActionButtonVisible

// Begin ScriptStruct FToolDynamicUIAction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolDynamicUIAction;
class UScriptStruct* FToolDynamicUIAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolDynamicUIAction, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolDynamicUIAction"));
	}
	return Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolDynamicUIAction>()
{
	return FToolDynamicUIAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteAction_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanExecuteAction_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetActionCheckState_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActionVisibleDelegate_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ExecuteAction;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_CanExecuteAction;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_GetActionCheckState;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_IsActionVisibleDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolDynamicUIAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_ExecuteAction = { "ExecuteAction", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolDynamicUIAction, ExecuteAction), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteAction_MetaData), NewProp_ExecuteAction_MetaData) }; // 1415939791
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_CanExecuteAction = { "CanExecuteAction", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolDynamicUIAction, CanExecuteAction), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanExecuteAction_MetaData), NewProp_CanExecuteAction_MetaData) }; // 2585861544
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_GetActionCheckState = { "GetActionCheckState", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolDynamicUIAction, GetActionCheckState), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetActionCheckState_MetaData), NewProp_GetActionCheckState_MetaData) }; // 4183576513
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_IsActionVisibleDelegate = { "IsActionVisibleDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolDynamicUIAction, IsActionVisibleDelegate), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActionVisibleDelegate_MetaData), NewProp_IsActionVisibleDelegate_MetaData) }; // 2801498630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_ExecuteAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_CanExecuteAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_GetActionCheckState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_IsActionVisibleDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ToolDynamicUIAction",
	Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::PropPointers),
	sizeof(FToolDynamicUIAction),
	alignof(FToolDynamicUIAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolDynamicUIAction()
{
	if (!Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.InnerSingleton, Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.InnerSingleton;
}
// End ScriptStruct FToolDynamicUIAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FToolDynamicUIAction::StaticStruct, Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewStructOps, TEXT("ToolDynamicUIAction"), &Z_Registration_Info_UScriptStruct_ToolDynamicUIAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolDynamicUIAction), 4113611286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_1359459537(TEXT("/Script/ToolMenus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
