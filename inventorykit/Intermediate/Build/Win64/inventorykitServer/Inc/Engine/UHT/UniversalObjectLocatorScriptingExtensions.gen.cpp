// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h"
#include "Runtime/UniversalObjectLocator/Public/UniversalObjectLocator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversalObjectLocatorScriptingExtensions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions();
ENGINE_API UClass* Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_NoRegister();
UNIVERSALOBJECTLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUniversalObjectLocator();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UUniversalObjectLocatorScriptingExtensions Function IsEmpty
struct Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics
{
	struct UniversalObjectLocatorScriptingExtensions_eventIsEmpty_Parms
	{
		FUniversalObjectLocator Locator;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Object Locators" },
		{ "Comment", "/**\n\x09 * Check whether the specified locator is empty; not equivalent to Resolve() != None.\n\x09 * An empty locator will never resolve to a valid object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Check whether the specified locator is empty; not equivalent to Resolve() != None.\nAn empty locator will never resolve to a valid object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::NewProp_Locator = { "Locator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventIsEmpty_Parms, Locator), Z_Construct_UScriptStruct_FUniversalObjectLocator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locator_MetaData), NewProp_Locator_MetaData) }; // 3426119561
void Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UniversalObjectLocatorScriptingExtensions_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UniversalObjectLocatorScriptingExtensions_eventIsEmpty_Parms), &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::NewProp_Locator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions, nullptr, "IsEmpty", nullptr, nullptr, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::UniversalObjectLocatorScriptingExtensions_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::UniversalObjectLocatorScriptingExtensions_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniversalObjectLocatorScriptingExtensions::execIsEmpty)
{
	P_GET_STRUCT_REF(FUniversalObjectLocator,Z_Param_Out_Locator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUniversalObjectLocatorScriptingExtensions::IsEmpty(Z_Param_Out_Locator);
	P_NATIVE_END;
}
// End Class UUniversalObjectLocatorScriptingExtensions Function IsEmpty

// Begin Class UUniversalObjectLocatorScriptingExtensions Function MakeUniversalObjectLocator
struct Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics
{
	struct UniversalObjectLocatorScriptingExtensions_eventMakeUniversalObjectLocator_Parms
	{
		UObject* Object;
		UObject* Context;
		FUniversalObjectLocator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Object Locators" },
		{ "Comment", "/**\n\x09 * Construct a new universal object locator\n\x09 */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h" },
		{ "ToolTip", "Construct a new universal object locator" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventMakeUniversalObjectLocator_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventMakeUniversalObjectLocator_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventMakeUniversalObjectLocator_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniversalObjectLocator, METADATA_PARAMS(0, nullptr) }; // 3426119561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions, nullptr, "MakeUniversalObjectLocator", nullptr, nullptr, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::UniversalObjectLocatorScriptingExtensions_eventMakeUniversalObjectLocator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::UniversalObjectLocatorScriptingExtensions_eventMakeUniversalObjectLocator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniversalObjectLocatorScriptingExtensions::execMakeUniversalObjectLocator)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUniversalObjectLocator*)Z_Param__Result=UUniversalObjectLocatorScriptingExtensions::MakeUniversalObjectLocator(Z_Param_Object,Z_Param_Context);
	P_NATIVE_END;
}
// End Class UUniversalObjectLocatorScriptingExtensions Function MakeUniversalObjectLocator

// Begin Class UUniversalObjectLocatorScriptingExtensions Function SyncFind
struct Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics
{
	struct UniversalObjectLocatorScriptingExtensions_eventSyncFind_Parms
	{
		FUniversalObjectLocator Locator;
		UObject* Context;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Object Locators" },
		{ "Comment", "/**\n\x09 * Attempt to resolve the object locator by finding the object. If it is not currently loaded or created, \n\x09 * \n\x09 * @param Context    (Optional) Context object to use for resolving the object. This should usually be the object that owns or created the locator.\n\x09 * @return The resolve object pointer, or null if it was not found.\n\x09 */" },
		{ "CPP_Default_Context", "None" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to resolve the object locator by finding the object. If it is not currently loaded or created,\n\n@param Context    (Optional) Context object to use for resolving the object. This should usually be the object that owns or created the locator.\n@return The resolve object pointer, or null if it was not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::NewProp_Locator = { "Locator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventSyncFind_Parms, Locator), Z_Construct_UScriptStruct_FUniversalObjectLocator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locator_MetaData), NewProp_Locator_MetaData) }; // 3426119561
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventSyncFind_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventSyncFind_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::NewProp_Locator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions, nullptr, "SyncFind", nullptr, nullptr, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::UniversalObjectLocatorScriptingExtensions_eventSyncFind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::UniversalObjectLocatorScriptingExtensions_eventSyncFind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniversalObjectLocatorScriptingExtensions::execSyncFind)
{
	P_GET_STRUCT_REF(FUniversalObjectLocator,Z_Param_Out_Locator);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UUniversalObjectLocatorScriptingExtensions::SyncFind(Z_Param_Out_Locator,Z_Param_Context);
	P_NATIVE_END;
}
// End Class UUniversalObjectLocatorScriptingExtensions Function SyncFind

// Begin Class UUniversalObjectLocatorScriptingExtensions Function SyncLoad
struct Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics
{
	struct UniversalObjectLocatorScriptingExtensions_eventSyncLoad_Parms
	{
		FUniversalObjectLocator Locator;
		UObject* Context;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Object Locators" },
		{ "Comment", "/**\n\x09 * Attempt to resolve the object locator by finding or loading the object.\n\x09 * \n\x09 * @param Context    (Optional) Context object to use for resolving the object. This should usually be the object that owns or created the locator.\n\x09 * @return The resolve object pointer, or null if it was not found.\n\x09 */" },
		{ "CPP_Default_Context", "None" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to resolve the object locator by finding or loading the object.\n\n@param Context    (Optional) Context object to use for resolving the object. This should usually be the object that owns or created the locator.\n@return The resolve object pointer, or null if it was not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::NewProp_Locator = { "Locator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventSyncLoad_Parms, Locator), Z_Construct_UScriptStruct_FUniversalObjectLocator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locator_MetaData), NewProp_Locator_MetaData) }; // 3426119561
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventSyncLoad_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventSyncLoad_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::NewProp_Locator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions, nullptr, "SyncLoad", nullptr, nullptr, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::UniversalObjectLocatorScriptingExtensions_eventSyncLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::UniversalObjectLocatorScriptingExtensions_eventSyncLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniversalObjectLocatorScriptingExtensions::execSyncLoad)
{
	P_GET_STRUCT_REF(FUniversalObjectLocator,Z_Param_Out_Locator);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UUniversalObjectLocatorScriptingExtensions::SyncLoad(Z_Param_Out_Locator,Z_Param_Context);
	P_NATIVE_END;
}
// End Class UUniversalObjectLocatorScriptingExtensions Function SyncLoad

// Begin Class UUniversalObjectLocatorScriptingExtensions Function SyncUnload
struct Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics
{
	struct UniversalObjectLocatorScriptingExtensions_eventSyncUnload_Parms
	{
		FUniversalObjectLocator Locator;
		UObject* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Object Locators" },
		{ "Comment", "/**\n\x09 * Attempt to resolve the object locator by unloading the object if possible.\n\x09 * \n\x09 * @param Context    (Optional) Context object to use for resolving the object. This should usually be the object that owns or created the locator.\n\x09 * @return The resolve object pointer, or null if it was not found.\n\x09 */" },
		{ "CPP_Default_Context", "None" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to resolve the object locator by unloading the object if possible.\n\n@param Context    (Optional) Context object to use for resolving the object. This should usually be the object that owns or created the locator.\n@return The resolve object pointer, or null if it was not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::NewProp_Locator = { "Locator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventSyncUnload_Parms, Locator), Z_Construct_UScriptStruct_FUniversalObjectLocator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locator_MetaData), NewProp_Locator_MetaData) }; // 3426119561
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventSyncUnload_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::NewProp_Locator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions, nullptr, "SyncUnload", nullptr, nullptr, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::UniversalObjectLocatorScriptingExtensions_eventSyncUnload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::UniversalObjectLocatorScriptingExtensions_eventSyncUnload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniversalObjectLocatorScriptingExtensions::execSyncUnload)
{
	P_GET_STRUCT_REF(FUniversalObjectLocator,Z_Param_Out_Locator);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUniversalObjectLocatorScriptingExtensions::SyncUnload(Z_Param_Out_Locator,Z_Param_Context);
	P_NATIVE_END;
}
// End Class UUniversalObjectLocatorScriptingExtensions Function SyncUnload

// Begin Class UUniversalObjectLocatorScriptingExtensions Function ToString
struct Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics
{
	struct UniversalObjectLocatorScriptingExtensions_eventToString_Parms
	{
		FUniversalObjectLocator Locator;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Object Locators" },
		{ "Comment", "/**\n\x09 * Convert the specified locator to its string representation\n\x09 */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Convert the specified locator to its string representation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::NewProp_Locator = { "Locator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventToString_Parms, Locator), Z_Construct_UScriptStruct_FUniversalObjectLocator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locator_MetaData), NewProp_Locator_MetaData) }; // 3426119561
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::NewProp_Locator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::UniversalObjectLocatorScriptingExtensions_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::UniversalObjectLocatorScriptingExtensions_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniversalObjectLocatorScriptingExtensions::execToString)
{
	P_GET_STRUCT_REF(FUniversalObjectLocator,Z_Param_Out_Locator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UUniversalObjectLocatorScriptingExtensions::ToString(Z_Param_Out_Locator);
	P_NATIVE_END;
}
// End Class UUniversalObjectLocatorScriptingExtensions Function ToString

// Begin Class UUniversalObjectLocatorScriptingExtensions Function UniversalObjectLocatorFromString
struct Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics
{
	struct UniversalObjectLocatorScriptingExtensions_eventUniversalObjectLocatorFromString_Parms
	{
		FString InString;
		FUniversalObjectLocator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Object Locators" },
		{ "Comment", "/**\n\x09 * Construct a new universal object locator from a string\n\x09 */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h" },
		{ "ToolTip", "Construct a new universal object locator from a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventUniversalObjectLocatorFromString_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniversalObjectLocatorScriptingExtensions_eventUniversalObjectLocatorFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniversalObjectLocator, METADATA_PARAMS(0, nullptr) }; // 3426119561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions, nullptr, "UniversalObjectLocatorFromString", nullptr, nullptr, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::UniversalObjectLocatorScriptingExtensions_eventUniversalObjectLocatorFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::UniversalObjectLocatorScriptingExtensions_eventUniversalObjectLocatorFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniversalObjectLocatorScriptingExtensions::execUniversalObjectLocatorFromString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUniversalObjectLocator*)Z_Param__Result=UUniversalObjectLocatorScriptingExtensions::UniversalObjectLocatorFromString(Z_Param_InString);
	P_NATIVE_END;
}
// End Class UUniversalObjectLocatorScriptingExtensions Function UniversalObjectLocatorFromString

// Begin Class UUniversalObjectLocatorScriptingExtensions
void UUniversalObjectLocatorScriptingExtensions::StaticRegisterNativesUUniversalObjectLocatorScriptingExtensions()
{
	UClass* Class = UUniversalObjectLocatorScriptingExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsEmpty", &UUniversalObjectLocatorScriptingExtensions::execIsEmpty },
		{ "MakeUniversalObjectLocator", &UUniversalObjectLocatorScriptingExtensions::execMakeUniversalObjectLocator },
		{ "SyncFind", &UUniversalObjectLocatorScriptingExtensions::execSyncFind },
		{ "SyncLoad", &UUniversalObjectLocatorScriptingExtensions::execSyncLoad },
		{ "SyncUnload", &UUniversalObjectLocatorScriptingExtensions::execSyncUnload },
		{ "ToString", &UUniversalObjectLocatorScriptingExtensions::execToString },
		{ "UniversalObjectLocatorFromString", &UUniversalObjectLocatorScriptingExtensions::execUniversalObjectLocatorFromString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniversalObjectLocatorScriptingExtensions);
UClass* Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_NoRegister()
{
	return UUniversalObjectLocatorScriptingExtensions::StaticClass();
}
struct Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto FUniversalObjectLocators for scripting\n */" },
		{ "IncludePath", "UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto FUniversalObjectLocators for scripting" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty, "IsEmpty" }, // 4274042041
		{ &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator, "MakeUniversalObjectLocator" }, // 4112567927
		{ &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind, "SyncFind" }, // 3961346177
		{ &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad, "SyncLoad" }, // 2079161131
		{ &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload, "SyncUnload" }, // 1332742083
		{ &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString, "ToString" }, // 1747696626
		{ &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString, "UniversalObjectLocatorFromString" }, // 2329436888
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniversalObjectLocatorScriptingExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_Statics::ClassParams = {
	&UUniversalObjectLocatorScriptingExtensions::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions()
{
	if (!Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.OuterSingleton, Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UUniversalObjectLocatorScriptingExtensions>()
{
	return UUniversalObjectLocatorScriptingExtensions::StaticClass();
}
UUniversalObjectLocatorScriptingExtensions::UUniversalObjectLocatorScriptingExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUniversalObjectLocatorScriptingExtensions);
UUniversalObjectLocatorScriptingExtensions::~UUniversalObjectLocatorScriptingExtensions() {}
// End Class UUniversalObjectLocatorScriptingExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions, UUniversalObjectLocatorScriptingExtensions::StaticClass, TEXT("UUniversalObjectLocatorScriptingExtensions"), &Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniversalObjectLocatorScriptingExtensions), 2644577858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_2201288284(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
