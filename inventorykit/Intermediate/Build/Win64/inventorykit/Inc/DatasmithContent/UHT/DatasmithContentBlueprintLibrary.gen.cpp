// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithContentBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithContentBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetUserData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithContentBlueprintLibrary();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithContentBlueprintLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class UDatasmithContentBlueprintLibrary Function GetAllDatasmithUserData
#if WITH_EDITOR
struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics
{
	struct DatasmithContentBlueprintLibrary_eventGetAllDatasmithUserData_Parms
	{
		TSubclassOf<UObject> ObjectClass;
		TArray<UDatasmithAssetUserData*> OutUserData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Datasmith User Data" },
		{ "Comment", "/**\n\x09 *\x09""Find all Datasmith User Data of loaded objects of the given type.\n\x09 *\x09This is a slow operation, so editor only.\n\x09 *\x09@param\x09ObjectClass\x09\x09""Class of the object on which to filter, if specificed; otherwise there's no filtering\n\x09 *\x09@param\x09OutUserData\x09\x09Output array of Datasmith User Data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Find all Datasmith User Data of loaded objects of the given type.\nThis is a slow operation, so editor only.\n@param  ObjectClass             Class of the object on which to filter, if specificed; otherwise there's no filtering\n@param  OutUserData             Output array of Datasmith User Data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutUserData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllDatasmithUserData_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData_Inner = { "OutUserData", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDatasmithAssetUserData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData = { "OutUserData", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllDatasmithUserData_Parms, OutUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutUserData_MetaData), NewProp_OutUserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_ObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::NewProp_OutUserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetAllDatasmithUserData", nullptr, nullptr, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::DatasmithContentBlueprintLibrary_eventGetAllDatasmithUserData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::DatasmithContentBlueprintLibrary_eventGetAllDatasmithUserData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetAllDatasmithUserData)
{
	P_GET_OBJECT(UClass,Z_Param_ObjectClass);
	P_GET_TARRAY_REF(UDatasmithAssetUserData*,Z_Param_Out_OutUserData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDatasmithContentBlueprintLibrary::GetAllDatasmithUserData(Z_Param_ObjectClass,Z_Param_Out_OutUserData);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UDatasmithContentBlueprintLibrary Function GetAllDatasmithUserData

// Begin Class UDatasmithContentBlueprintLibrary Function GetAllObjectsAndValuesForKey
#if WITH_EDITOR
struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics
{
	struct DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms
	{
		FName Key;
		TSubclassOf<UObject> ObjectClass;
		TArray<UObject*> OutObjects;
		TArray<FString> OutValues;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Datasmith User Data" },
		{ "Comment", "/**\n\x09 *\x09""Find all loaded objects of the given type that have a Datasmith User Data that contains the given key and their associated values.\n\x09 *\x09This is a slow operation, so editor only.\n\x09 *\x09@param\x09Key\x09\x09\x09The key to find in the Datasmith User Data.\n\x09 *\x09@param\x09ObjectClass\x09""Class of the object on which to filter, if specificed; otherwise there's no filtering\n\x09 *\x09@param\x09OutObjects\x09Output array of objects for which the Datasmith User Data match the given key.\n\x09 *\x09@param\x09OutValues\x09Output array of values associated with each object in OutObjects.\n\x09 */" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "DynamicOutputParam", "OutObjects" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Find all loaded objects of the given type that have a Datasmith User Data that contains the given key and their associated values.\nThis is a slow operation, so editor only.\n@param  Key                     The key to find in the Datasmith User Data.\n@param  ObjectClass     Class of the object on which to filter, if specificed; otherwise there's no filtering\n@param  OutObjects      Output array of objects for which the Datasmith User Data match the given key.\n@param  OutValues       Output array of values associated with each object in OutObjects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutObjects;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects_Inner = { "OutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects = { "OutObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms, OutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_ObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetAllObjectsAndValuesForKey", nullptr, nullptr, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::DatasmithContentBlueprintLibrary_eventGetAllObjectsAndValuesForKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetAllObjectsAndValuesForKey)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_OBJECT(UClass,Z_Param_ObjectClass);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutObjects);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDatasmithContentBlueprintLibrary::GetAllObjectsAndValuesForKey(Z_Param_Key,Z_Param_ObjectClass,Z_Param_Out_OutObjects,Z_Param_Out_OutValues);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UDatasmithContentBlueprintLibrary Function GetAllObjectsAndValuesForKey

// Begin Class UDatasmithContentBlueprintLibrary Function GetDatasmithUserData
struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics
{
	struct DatasmithContentBlueprintLibrary_eventGetDatasmithUserData_Parms
	{
		UObject* Object;
		UDatasmithAssetUserData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datasmith User Data" },
		{ "Comment", "/**\n\x09 * Get the Datasmith User Data of a given object\n\x09 * @param\x09Object\x09The Object from which to retrieve the Datasmith User Data.\n\x09 * @return\x09\x09\x09The Datasmith User Data if it exists; nullptr, otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Get the Datasmith User Data of a given object\n@param       Object  The Object from which to retrieve the Datasmith User Data.\n@return                      The Datasmith User Data if it exists; nullptr, otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserData_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserData_Parms, ReturnValue), Z_Construct_UClass_UDatasmithAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetDatasmithUserData", nullptr, nullptr, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::DatasmithContentBlueprintLibrary_eventGetDatasmithUserData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::DatasmithContentBlueprintLibrary_eventGetDatasmithUserData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetDatasmithUserData)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDatasmithAssetUserData**)Z_Param__Result=UDatasmithContentBlueprintLibrary::GetDatasmithUserData(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UDatasmithContentBlueprintLibrary Function GetDatasmithUserData

// Begin Class UDatasmithContentBlueprintLibrary Function GetDatasmithUserDataKeysAndValuesForValue
struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics
{
	struct DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms
	{
		UObject* Object;
		FString StringToMatch;
		TArray<FName> OutKeys;
		TArray<FString> OutValues;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datasmith User Data" },
		{ "Comment", "/**\n\x09 * Get the keys and values for which the associated value contains the string to match for the Datasmith User Data of the given object.\n\x09 * @param\x09Object\x09\x09\x09The Object from which to retrieve the Datasmith User Data.\n\x09 * @param\x09StringToMatch\x09The string to match in the values.\n\x09 * @param\x09OutKeys\x09\x09\x09Output array of keys for which the associated values contain the string to match.\n\x09 * @param\x09OutValues\x09\x09Output array of values associated to the keys.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Get the keys and values for which the associated value contains the string to match for the Datasmith User Data of the given object.\n@param       Object                  The Object from which to retrieve the Datasmith User Data.\n@param       StringToMatch   The string to match in the values.\n@param       OutKeys                 Output array of keys for which the associated values contain the string to match.\n@param       OutValues               Output array of values associated to the keys." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringToMatch;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_StringToMatch = { "StringToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms, StringToMatch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringToMatch_MetaData), NewProp_StringToMatch_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_StringToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::NewProp_OutValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetDatasmithUserDataKeysAndValuesForValue", nullptr, nullptr, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataKeysAndValuesForValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataKeysAndValuesForValue)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_StringToMatch);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutKeys);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(Z_Param_Object,Z_Param_StringToMatch,Z_Param_Out_OutKeys,Z_Param_Out_OutValues);
	P_NATIVE_END;
}
// End Class UDatasmithContentBlueprintLibrary Function GetDatasmithUserDataKeysAndValuesForValue

// Begin Class UDatasmithContentBlueprintLibrary Function GetDatasmithUserDataValueForKey
struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics
{
	struct DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms
	{
		UObject* Object;
		FName Key;
		bool bPartialMatchKey;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datasmith User Data" },
		{ "Comment", "/**\n\x09 * Get the value of the given key for the Datasmith User Data of the given object.\n\x09 * @param\x09Object\x09\x09\x09\x09The Object from which to retrieve the Datasmith User Data.\n\x09 * @param\x09Key\x09\x09\x09\x09\x09The key to find in the Datasmith User Data.\n\x09 * @return\x09\x09\x09\x09\x09\x09The string value associated with the given key\n\x09 */" },
		{ "CPP_Default_bPartialMatchKey", "false" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Get the value of the given key for the Datasmith User Data of the given object.\n@param       Object                          The Object from which to retrieve the Datasmith User Data.\n@param       Key                                     The key to find in the Datasmith User Data.\n@return                                              The string value associated with the given key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_bPartialMatchKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPartialMatchKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_bPartialMatchKey_SetBit(void* Obj)
{
	((DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms*)Obj)->bPartialMatchKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_bPartialMatchKey = { "bPartialMatchKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms), &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_bPartialMatchKey_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_bPartialMatchKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetDatasmithUserDataValueForKey", nullptr, nullptr, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValueForKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataValueForKey)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_bPartialMatchKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(Z_Param_Object,Z_Param_Key,Z_Param_bPartialMatchKey);
	P_NATIVE_END;
}
// End Class UDatasmithContentBlueprintLibrary Function GetDatasmithUserDataValueForKey

// Begin Class UDatasmithContentBlueprintLibrary Function GetDatasmithUserDataValuesForKey
struct Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics
{
	struct DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValuesForKey_Parms
	{
		UObject* Object;
		FName Key;
		bool bPartialMatchKey;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datasmith User Data" },
		{ "Comment", "/**\n\x09 * Get the values of the given key for the Datasmith User Data of the given object.\n\x09 * @param\x09Object\x09\x09\x09\x09The Object from which to retrieve the Datasmith User Data.\n\x09 * @param\x09Key\x09\x09\x09\x09\x09The key to find in the Datasmith User Data.\n\x09 * @param\x09""bPartialMatchKey\x09If true, check for contains, rather than exact match.\n\x09 * @return\x09\x09\x09\x09\x09\x09The string value associated with the given key\n\x09 */" },
		{ "CPP_Default_bPartialMatchKey", "false" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ToolTip", "Get the values of the given key for the Datasmith User Data of the given object.\n@param       Object                          The Object from which to retrieve the Datasmith User Data.\n@param       Key                                     The key to find in the Datasmith User Data.\n@param       bPartialMatchKey        If true, check for contains, rather than exact match.\n@return                                              The string value associated with the given key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_bPartialMatchKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPartialMatchKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValuesForKey_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValuesForKey_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_bPartialMatchKey_SetBit(void* Obj)
{
	((DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValuesForKey_Parms*)Obj)->bPartialMatchKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_bPartialMatchKey = { "bPartialMatchKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValuesForKey_Parms), &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_bPartialMatchKey_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValuesForKey_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_bPartialMatchKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithContentBlueprintLibrary, nullptr, "GetDatasmithUserDataValuesForKey", nullptr, nullptr, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValuesForKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::DatasmithContentBlueprintLibrary_eventGetDatasmithUserDataValuesForKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataValuesForKey)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_bPartialMatchKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValuesForKey(Z_Param_Object,Z_Param_Key,Z_Param_bPartialMatchKey);
	P_NATIVE_END;
}
// End Class UDatasmithContentBlueprintLibrary Function GetDatasmithUserDataValuesForKey

// Begin Class UDatasmithContentBlueprintLibrary
void UDatasmithContentBlueprintLibrary::StaticRegisterNativesUDatasmithContentBlueprintLibrary()
{
	UClass* Class = UDatasmithContentBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
		{ "GetAllDatasmithUserData", &UDatasmithContentBlueprintLibrary::execGetAllDatasmithUserData },
		{ "GetAllObjectsAndValuesForKey", &UDatasmithContentBlueprintLibrary::execGetAllObjectsAndValuesForKey },
#endif // WITH_EDITOR
		{ "GetDatasmithUserData", &UDatasmithContentBlueprintLibrary::execGetDatasmithUserData },
		{ "GetDatasmithUserDataKeysAndValuesForValue", &UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataKeysAndValuesForValue },
		{ "GetDatasmithUserDataValueForKey", &UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataValueForKey },
		{ "GetDatasmithUserDataValuesForKey", &UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataValuesForKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithContentBlueprintLibrary);
UClass* Z_Construct_UClass_UDatasmithContentBlueprintLibrary_NoRegister()
{
	return UDatasmithContentBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithContentBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DatasmithContentBlueprintLibrary.h" },
		{ "ScriptName", "DatasmithContentLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllDatasmithUserData, "GetAllDatasmithUserData" }, // 4053920012
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetAllObjectsAndValuesForKey, "GetAllObjectsAndValuesForKey" }, // 613338434
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData, "GetDatasmithUserData" }, // 3053284304
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue, "GetDatasmithUserDataKeysAndValuesForValue" }, // 335391308
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey, "GetDatasmithUserDataValueForKey" }, // 3977328339
		{ &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey, "GetDatasmithUserDataValuesForKey" }, // 1358077054
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithContentBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::ClassParams = {
	&UDatasmithContentBlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithContentBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithContentBlueprintLibrary>()
{
	return UDatasmithContentBlueprintLibrary::StaticClass();
}
UDatasmithContentBlueprintLibrary::UDatasmithContentBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithContentBlueprintLibrary);
UDatasmithContentBlueprintLibrary::~UDatasmithContentBlueprintLibrary() {}
// End Class UDatasmithContentBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithContentBlueprintLibrary, UDatasmithContentBlueprintLibrary::StaticClass, TEXT("UDatasmithContentBlueprintLibrary"), &Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithContentBlueprintLibrary), 1155346538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_1189277065(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
