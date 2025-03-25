// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementRuntime/Private/Elements/Framework/TypedElementSelectionSetLibrary.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementListProxy.h"
#include "Runtime/TypedElementRuntime/Public/Elements/Framework/TypedElementSelectionSet.h"
#include "Runtime/TypedElementRuntime/Public/Elements/Interfaces/TypedElementSelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSelectionSetLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementListProxy();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSetLibrary();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSetLibrary_NoRegister();
TYPEDELEMENTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions();
TYPEDELEMENTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionOptions();
UPackage* Z_Construct_UPackage__Script_TypedElementRuntime();
// End Cross Module References

// Begin Class UTypedElementSelectionSetLibrary Function DeselectElementsFromList
struct Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics
{
	struct TypedElementSelectionSetLibrary_eventDeselectElementsFromList_Parms
	{
		UTypedElementSelectionSet* SelectionSet;
		FScriptTypedElementListProxy ElementList;
		FTypedElementSelectionOptions SelectionOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Attempt to deselect the given elements.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementSelectionSetLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to deselect the given elements.\n@return True if the selection was changed, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventDeselectElementsFromList_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventDeselectElementsFromList_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementList_MetaData), NewProp_ElementList_MetaData) }; // 3651675797
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::NewProp_SelectionOptions = { "SelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventDeselectElementsFromList_Parms, SelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionOptions_MetaData), NewProp_SelectionOptions_MetaData) }; // 76356554
void Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementSelectionSetLibrary_eventDeselectElementsFromList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementSelectionSetLibrary_eventDeselectElementsFromList_Parms), &Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::NewProp_SelectionSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::NewProp_ElementList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::NewProp_SelectionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSetLibrary, nullptr, "DeselectElementsFromList", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::TypedElementSelectionSetLibrary_eventDeselectElementsFromList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::TypedElementSelectionSetLibrary_eventDeselectElementsFromList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementSelectionSetLibrary::execDeselectElementsFromList)
{
	P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
	P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
	P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_SelectionOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTypedElementSelectionSetLibrary::DeselectElementsFromList(Z_Param_SelectionSet,Z_Param_ElementList,Z_Param_SelectionOptions);
	P_NATIVE_END;
}
// End Class UTypedElementSelectionSetLibrary Function DeselectElementsFromList

// Begin Class UTypedElementSelectionSetLibrary Function GetNormalizedElementList
struct Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics
{
	struct TypedElementSelectionSetLibrary_eventGetNormalizedElementList_Parms
	{
		UTypedElementSelectionSet* SelectionSet;
		FScriptTypedElementListProxy ElementList;
		FTypedElementSelectionNormalizationOptions NormalizationOptions;
		FScriptTypedElementListProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Get a normalized version of the given element list that can be used to perform operations like gizmo manipulation, deletion, copying, etc.\n\x09 * This will do things like expand out groups, and resolve any parent<->child elements so that duplication operations aren't performed on both the parent and the child.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementSelectionSetLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get a normalized version of the given element list that can be used to perform operations like gizmo manipulation, deletion, copying, etc.\nThis will do things like expand out groups, and resolve any parent<->child elements so that duplication operations aren't performed on both the parent and the child." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizationOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventGetNormalizedElementList_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventGetNormalizedElementList_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementList_MetaData), NewProp_ElementList_MetaData) }; // 3651675797
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::NewProp_NormalizationOptions = { "NormalizationOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventGetNormalizedElementList_Parms, NormalizationOptions), Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizationOptions_MetaData), NewProp_NormalizationOptions_MetaData) }; // 107057381
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventGetNormalizedElementList_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(0, nullptr) }; // 3651675797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::NewProp_SelectionSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::NewProp_ElementList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::NewProp_NormalizationOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSetLibrary, nullptr, "GetNormalizedElementList", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::TypedElementSelectionSetLibrary_eventGetNormalizedElementList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::TypedElementSelectionSetLibrary_eventGetNormalizedElementList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementSelectionSetLibrary::execGetNormalizedElementList)
{
	P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
	P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
	P_GET_STRUCT(FTypedElementSelectionNormalizationOptions,Z_Param_NormalizationOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptTypedElementListProxy*)Z_Param__Result=UTypedElementSelectionSetLibrary::GetNormalizedElementList(Z_Param_SelectionSet,Z_Param_ElementList,Z_Param_NormalizationOptions);
	P_NATIVE_END;
}
// End Class UTypedElementSelectionSetLibrary Function GetNormalizedElementList

// Begin Class UTypedElementSelectionSetLibrary Function GetNormalizedSelection
struct Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics
{
	struct TypedElementSelectionSetLibrary_eventGetNormalizedSelection_Parms
	{
		UTypedElementSelectionSet* SelectionSet;
		FTypedElementSelectionNormalizationOptions NormalizationOptions;
		FScriptTypedElementListProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Get a normalized version of this selection set that can be used to perform operations like gizmo manipulation, deletion, copying, etc.\n\x09 * This will do things like expand out groups, and resolve any parent<->child elements so that duplication operations aren't performed on both the parent and the child.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementSelectionSetLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get a normalized version of this selection set that can be used to perform operations like gizmo manipulation, deletion, copying, etc.\nThis will do things like expand out groups, and resolve any parent<->child elements so that duplication operations aren't performed on both the parent and the child." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizationOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventGetNormalizedSelection_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::NewProp_NormalizationOptions = { "NormalizationOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventGetNormalizedSelection_Parms, NormalizationOptions), Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizationOptions_MetaData), NewProp_NormalizationOptions_MetaData) }; // 107057381
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventGetNormalizedSelection_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(0, nullptr) }; // 3651675797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::NewProp_SelectionSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::NewProp_NormalizationOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSetLibrary, nullptr, "GetNormalizedSelection", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::TypedElementSelectionSetLibrary_eventGetNormalizedSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::TypedElementSelectionSetLibrary_eventGetNormalizedSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementSelectionSetLibrary::execGetNormalizedSelection)
{
	P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
	P_GET_STRUCT(FTypedElementSelectionNormalizationOptions,Z_Param_NormalizationOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptTypedElementListProxy*)Z_Param__Result=UTypedElementSelectionSetLibrary::GetNormalizedSelection(Z_Param_SelectionSet,Z_Param_NormalizationOptions);
	P_NATIVE_END;
}
// End Class UTypedElementSelectionSetLibrary Function GetNormalizedSelection

// Begin Class UTypedElementSelectionSetLibrary Function SelectElementsFromList
struct Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics
{
	struct TypedElementSelectionSetLibrary_eventSelectElementsFromList_Parms
	{
		UTypedElementSelectionSet* SelectionSet;
		FScriptTypedElementListProxy ElementList;
		FTypedElementSelectionOptions SelectionOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Attempt to select the given elements.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementSelectionSetLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to select the given elements.\n@return True if the selection was changed, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventSelectElementsFromList_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventSelectElementsFromList_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementList_MetaData), NewProp_ElementList_MetaData) }; // 3651675797
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::NewProp_SelectionOptions = { "SelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventSelectElementsFromList_Parms, SelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionOptions_MetaData), NewProp_SelectionOptions_MetaData) }; // 76356554
void Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementSelectionSetLibrary_eventSelectElementsFromList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementSelectionSetLibrary_eventSelectElementsFromList_Parms), &Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::NewProp_SelectionSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::NewProp_ElementList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::NewProp_SelectionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSetLibrary, nullptr, "SelectElementsFromList", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::TypedElementSelectionSetLibrary_eventSelectElementsFromList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::TypedElementSelectionSetLibrary_eventSelectElementsFromList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementSelectionSetLibrary::execSelectElementsFromList)
{
	P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
	P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
	P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_SelectionOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTypedElementSelectionSetLibrary::SelectElementsFromList(Z_Param_SelectionSet,Z_Param_ElementList,Z_Param_SelectionOptions);
	P_NATIVE_END;
}
// End Class UTypedElementSelectionSetLibrary Function SelectElementsFromList

// Begin Class UTypedElementSelectionSetLibrary Function SetSelectionFromList
struct Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics
{
	struct TypedElementSelectionSetLibrary_eventSetSelectionFromList_Parms
	{
		UTypedElementSelectionSet* SelectionSet;
		FScriptTypedElementListProxy ElementList;
		FTypedElementSelectionOptions SelectionOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Attempt to make the selection the given elements.\n\x09 * @note Equivalent to calling ClearSelection then SelectElements, but happens in a single batch.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementSelectionSetLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to make the selection the given elements.\n@note Equivalent to calling ClearSelection then SelectElements, but happens in a single batch.\n@return True if the selection was changed, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventSetSelectionFromList_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventSetSelectionFromList_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementList_MetaData), NewProp_ElementList_MetaData) }; // 3651675797
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::NewProp_SelectionOptions = { "SelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionSetLibrary_eventSetSelectionFromList_Parms, SelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionOptions_MetaData), NewProp_SelectionOptions_MetaData) }; // 76356554
void Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementSelectionSetLibrary_eventSetSelectionFromList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementSelectionSetLibrary_eventSetSelectionFromList_Parms), &Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::NewProp_SelectionSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::NewProp_ElementList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::NewProp_SelectionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSetLibrary, nullptr, "SetSelectionFromList", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::TypedElementSelectionSetLibrary_eventSetSelectionFromList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::TypedElementSelectionSetLibrary_eventSetSelectionFromList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementSelectionSetLibrary::execSetSelectionFromList)
{
	P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
	P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
	P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_SelectionOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTypedElementSelectionSetLibrary::SetSelectionFromList(Z_Param_SelectionSet,Z_Param_ElementList,Z_Param_SelectionOptions);
	P_NATIVE_END;
}
// End Class UTypedElementSelectionSetLibrary Function SetSelectionFromList

// Begin Class UTypedElementSelectionSetLibrary
void UTypedElementSelectionSetLibrary::StaticRegisterNativesUTypedElementSelectionSetLibrary()
{
	UClass* Class = UTypedElementSelectionSetLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeselectElementsFromList", &UTypedElementSelectionSetLibrary::execDeselectElementsFromList },
		{ "GetNormalizedElementList", &UTypedElementSelectionSetLibrary::execGetNormalizedElementList },
		{ "GetNormalizedSelection", &UTypedElementSelectionSetLibrary::execGetNormalizedSelection },
		{ "SelectElementsFromList", &UTypedElementSelectionSetLibrary::execSelectElementsFromList },
		{ "SetSelectionFromList", &UTypedElementSelectionSetLibrary::execSetSelectionFromList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementSelectionSetLibrary);
UClass* Z_Construct_UClass_UTypedElementSelectionSetLibrary_NoRegister()
{
	return UTypedElementSelectionSetLibrary::StaticClass();
}
struct Z_Construct_UClass_UTypedElementSelectionSetLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Library of functions for the scripting of Typed Elements that use both a selection set and a element list\n * \n * Note: These functions should only be used for scripting purposes only as they come at higher performance cost then their non script implementation\n */" },
		{ "IncludePath", "Elements/Framework/TypedElementSelectionSetLibrary.h" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementSelectionSetLibrary.h" },
		{ "ToolTip", "Library of functions for the scripting of Typed Elements that use both a selection set and a element list\n\nNote: These functions should only be used for scripting purposes only as they come at higher performance cost then their non script implementation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementSelectionSetLibrary_DeselectElementsFromList, "DeselectElementsFromList" }, // 3442236100
		{ &Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedElementList, "GetNormalizedElementList" }, // 3401010297
		{ &Z_Construct_UFunction_UTypedElementSelectionSetLibrary_GetNormalizedSelection, "GetNormalizedSelection" }, // 3633547044
		{ &Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SelectElementsFromList, "SelectElementsFromList" }, // 4106772199
		{ &Z_Construct_UFunction_UTypedElementSelectionSetLibrary_SetSelectionFromList, "SetSelectionFromList" }, // 943209491
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementSelectionSetLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementSelectionSetLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSelectionSetLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementSelectionSetLibrary_Statics::ClassParams = {
	&UTypedElementSelectionSetLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSelectionSetLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementSelectionSetLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementSelectionSetLibrary()
{
	if (!Z_Registration_Info_UClass_UTypedElementSelectionSetLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementSelectionSetLibrary.OuterSingleton, Z_Construct_UClass_UTypedElementSelectionSetLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementSelectionSetLibrary.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<UTypedElementSelectionSetLibrary>()
{
	return UTypedElementSelectionSetLibrary::StaticClass();
}
UTypedElementSelectionSetLibrary::UTypedElementSelectionSetLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementSelectionSetLibrary);
UTypedElementSelectionSetLibrary::~UTypedElementSelectionSetLibrary() {}
// End Class UTypedElementSelectionSetLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Private_Elements_Framework_TypedElementSelectionSetLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementSelectionSetLibrary, UTypedElementSelectionSetLibrary::StaticClass, TEXT("UTypedElementSelectionSetLibrary"), &Z_Registration_Info_UClass_UTypedElementSelectionSetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementSelectionSetLibrary), 2571024638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Private_Elements_Framework_TypedElementSelectionSetLibrary_h_849801366(TEXT("/Script/TypedElementRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Private_Elements_Framework_TypedElementSelectionSetLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Private_Elements_Framework_TypedElementSelectionSetLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
