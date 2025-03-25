// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintMapLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintMapLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintMapLibrary();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintMapLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UBlueprintMapLibrary Function Map_Add
struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics
{
	struct BlueprintMapLibrary_eventMap_Add_Parms
	{
		TMap<int32,int32> TargetMap;
		int32 Key;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key, Value" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Adds a key and value to the map. If something already uses the provided key it will be overwritten with the new value.\n\x09 * After calling Key is guaranteed to be associated with Value until a subsequent mutation of the Map.\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to add the key and value to\n\x09 * @param\x09Key\x09\x09\x09\x09The key that will be used to look the value up\n\x09 * @param\x09Value\x09\x09\x09The value to be retrieved later\n\x09 */" },
		{ "CompactNodeTitle", "ADD" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Add" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "MapValueParam", "Value" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Adds a key and value to the map. If something already uses the provided key it will be overwritten with the new value.\nAfter calling Key is guaranteed to be associated with Value until a subsequent mutation of the Map.\n\n@param       TargetMap               The map to add the key and value to\n@param       Key                             The key that will be used to look the value up\n@param       Value                   The value to be retrieved later" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMap_MetaData), NewProp_TargetMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Add", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::BlueprintMapLibrary_eventMap_Add_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::BlueprintMapLibrary_eventMap_Add_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function Map_Add

// Begin Class UBlueprintMapLibrary Function Map_Clear
struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics
{
	struct BlueprintMapLibrary_eventMap_Clear_Parms
	{
		TMap<int32,int32> TargetMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Clears a map of all entries, resetting it to empty\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to clear\n\x09 */" },
		{ "CompactNodeTitle", "CLEAR" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Clear" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Clears a map of all entries, resetting it to empty\n\n@param       TargetMap               The map to clear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Clear_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMap_MetaData), NewProp_TargetMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Clear", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::BlueprintMapLibrary_eventMap_Clear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::BlueprintMapLibrary_eventMap_Clear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function Map_Clear

// Begin Class UBlueprintMapLibrary Function Map_Contains
struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics
{
	struct BlueprintMapLibrary_eventMap_Contains_Parms
	{
		TMap<int32,int32> TargetMap;
		int32 Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Checks whether key is in a provided Map\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to perform the lookup on\n\x09 * @param\x09Key\x09\x09\x09\x09The key that will be used to lookup\n\x09 * @return\x09True if an item was found (False indicates nothing in the map uses the provided key)\n\x09 */" },
		{ "CompactNodeTitle", "CONTAINS" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Contains" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Checks whether key is in a provided Map\n\n@param       TargetMap               The map to perform the lookup on\n@param       Key                             The key that will be used to lookup\n@return      True if an item was found (False indicates nothing in the map uses the provided key)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Contains_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMap_MetaData), NewProp_TargetMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Contains_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintMapLibrary_eventMap_Contains_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintMapLibrary_eventMap_Contains_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Contains", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::BlueprintMapLibrary_eventMap_Contains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::BlueprintMapLibrary_eventMap_Contains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function Map_Contains

// Begin Class UBlueprintMapLibrary Function Map_Find
struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics
{
	struct BlueprintMapLibrary_eventMap_Find_Parms
	{
		TMap<int32,int32> TargetMap;
		int32 Key;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key, Value" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Finds the value associated with the provided Key\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to perform the lookup on\n\x09 * @param\x09Key\x09\x09\x09\x09The key that will be used to look the value up\n\x09 * @param\x09Value\x09\x09\x09The value associated with the key, default constructed if key was not found\n\x09 * @return\x09True if an item was found (False indicates nothing in the map uses the provided key)\n\x09 */" },
		{ "CompactNodeTitle", "FIND" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Find" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "MapValueParam", "Value" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Finds the value associated with the provided Key\n\n@param       TargetMap               The map to perform the lookup on\n@param       Key                             The key that will be used to look the value up\n@param       Value                   The value associated with the key, default constructed if key was not found\n@return      True if an item was found (False indicates nothing in the map uses the provided key)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMap_MetaData), NewProp_TargetMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintMapLibrary_eventMap_Find_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintMapLibrary_eventMap_Find_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Find", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::BlueprintMapLibrary_eventMap_Find_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::BlueprintMapLibrary_eventMap_Find_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function Map_Find

// Begin Class UBlueprintMapLibrary Function Map_IsEmpty
struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics
{
	struct BlueprintMapLibrary_eventMap_IsEmpty_Parms
	{
		TMap<int32,int32> TargetMap;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Map" },
		{ "Comment", "/**\n\x09 * Check if the map does not have any entires\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to check\n\x09 * @return\x09""A boolean indicating if the map has any entires\n\x09 */" },
		{ "CompactNodeTitle", "IS EMPTY" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Is Empty" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Check if the map does not have any entires\n\n@param       TargetMap               The map to check\n@return      A boolean indicating if the map has any entires" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_IsEmpty_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMap_MetaData), NewProp_TargetMap_MetaData) };
void Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintMapLibrary_eventMap_IsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintMapLibrary_eventMap_IsEmpty_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_IsEmpty", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::BlueprintMapLibrary_eventMap_IsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::BlueprintMapLibrary_eventMap_IsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function Map_IsEmpty

// Begin Class UBlueprintMapLibrary Function Map_IsNotEmpty
struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics
{
	struct BlueprintMapLibrary_eventMap_IsNotEmpty_Parms
	{
		TMap<int32,int32> TargetMap;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Map" },
		{ "Comment", "/**\n\x09 * Check if the map has any entries\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to check\n\x09 * @return\x09""A boolean indicating if the map has any entires\n\x09 */" },
		{ "CompactNodeTitle", "IS NOT EMPTY" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Is Not Empty" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Check if the map has any entries\n\n@param       TargetMap               The map to check\n@return      A boolean indicating if the map has any entires" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_IsNotEmpty_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMap_MetaData), NewProp_TargetMap_MetaData) };
void Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintMapLibrary_eventMap_IsNotEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintMapLibrary_eventMap_IsNotEmpty_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_IsNotEmpty", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::BlueprintMapLibrary_eventMap_IsNotEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::BlueprintMapLibrary_eventMap_IsNotEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function Map_IsNotEmpty

// Begin Class UBlueprintMapLibrary Function Map_Keys
struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics
{
	struct BlueprintMapLibrary_eventMap_Keys_Parms
	{
		TMap<int32,int32> TargetMap;
		TArray<int32> Keys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Keys" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Outputs an array of all keys present in the map\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to get the list of keys from\n\x09 * @param\x09Keys\x09\x09\x09""All keys present in the map\n\x09 */" },
		{ "CompactNodeTitle", "KEYS" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Keys" },
		{ "MapKeyParam", "Keys" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Outputs an array of all keys present in the map\n\n@param       TargetMap               The map to get the list of keys from\n@param       Keys                    All keys present in the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Keys_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMap_MetaData), NewProp_TargetMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Keys_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Keys", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::BlueprintMapLibrary_eventMap_Keys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::BlueprintMapLibrary_eventMap_Keys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function Map_Keys

// Begin Class UBlueprintMapLibrary Function Map_Length
struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics
{
	struct BlueprintMapLibrary_eventMap_Length_Parms
	{
		TMap<int32,int32> TargetMap;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Determines the number of entries in a provided Map\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map in question\n\x09 * @return\x09The number of entries in the map\n\x09 */" },
		{ "CompactNodeTitle", "LENGTH" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Length" },
		{ "Keywords", "num size count" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Determines the number of entries in a provided Map\n\n@param       TargetMap               The map in question\n@return      The number of entries in the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Length_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMap_MetaData), NewProp_TargetMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Length_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Length", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::BlueprintMapLibrary_eventMap_Length_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::BlueprintMapLibrary_eventMap_Length_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function Map_Length

// Begin Class UBlueprintMapLibrary Function Map_Remove
struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics
{
	struct BlueprintMapLibrary_eventMap_Remove_Parms
	{
		TMap<int32,int32> TargetMap;
		int32 Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Removes a key and its associated value from the map.\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to remove the key and its associated value from\n\x09 * @param\x09Key\x09\x09\x09\x09The key that will be used to look the value up\n\x09 * @return\x09True if an item was removed (False indicates nothing in the map uses the provided key)\n\x09 */" },
		{ "CompactNodeTitle", "REMOVE" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Remove" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Removes a key and its associated value from the map.\n\n@param       TargetMap               The map to remove the key and its associated value from\n@param       Key                             The key that will be used to look the value up\n@return      True if an item was removed (False indicates nothing in the map uses the provided key)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Remove_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMap_MetaData), NewProp_TargetMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Remove_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintMapLibrary_eventMap_Remove_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintMapLibrary_eventMap_Remove_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Remove", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::BlueprintMapLibrary_eventMap_Remove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::BlueprintMapLibrary_eventMap_Remove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function Map_Remove

// Begin Class UBlueprintMapLibrary Function Map_Values
struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics
{
	struct BlueprintMapLibrary_eventMap_Values_Parms
	{
		TMap<int32,int32> TargetMap;
		TArray<int32> Values;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Values" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Outputs an array of all values present in the map\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to get the list of values from\n\x09 * @param\x09Values\x09\x09\x09""All values present in the map\n\x09 */" },
		{ "CompactNodeTitle", "VALUES" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Values" },
		{ "MapParam", "TargetMap" },
		{ "MapValueParam", "Values" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Outputs an array of all values present in the map\n\n@param       TargetMap               The map to get the list of values from\n@param       Values                  All values present in the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Values_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMap_MetaData), NewProp_TargetMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Values_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Values", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::BlueprintMapLibrary_eventMap_Values_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::BlueprintMapLibrary_eventMap_Values_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function Map_Values

// Begin Class UBlueprintMapLibrary Function SetMapPropertyByName
struct Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics
{
	struct BlueprintMapLibrary_eventSetMapPropertyByName_Parms
	{
		UObject* Object;
		FName PropertyName;
		TMap<int32,int32> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** \n\x09* Not exposed to users. Supports setting a map property on an object by name.\n\x09*/" },
		{ "CustomThunk", "true" },
		{ "MapParam", "Value" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Not exposed to users. Supports setting a map property on an object by name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_ValueProp = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_Key_KeyProp = { "Value_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, Value), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "SetMapPropertyByName", nullptr, nullptr, Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::BlueprintMapLibrary_eventSetMapPropertyByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::BlueprintMapLibrary_eventSetMapPropertyByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintMapLibrary Function SetMapPropertyByName

// Begin Class UBlueprintMapLibrary
void UBlueprintMapLibrary::StaticRegisterNativesUBlueprintMapLibrary()
{
	UClass* Class = UBlueprintMapLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Map_Add", &UBlueprintMapLibrary::execMap_Add },
		{ "Map_Clear", &UBlueprintMapLibrary::execMap_Clear },
		{ "Map_Contains", &UBlueprintMapLibrary::execMap_Contains },
		{ "Map_Find", &UBlueprintMapLibrary::execMap_Find },
		{ "Map_IsEmpty", &UBlueprintMapLibrary::execMap_IsEmpty },
		{ "Map_IsNotEmpty", &UBlueprintMapLibrary::execMap_IsNotEmpty },
		{ "Map_Keys", &UBlueprintMapLibrary::execMap_Keys },
		{ "Map_Length", &UBlueprintMapLibrary::execMap_Length },
		{ "Map_Remove", &UBlueprintMapLibrary::execMap_Remove },
		{ "Map_Values", &UBlueprintMapLibrary::execMap_Values },
		{ "SetMapPropertyByName", &UBlueprintMapLibrary::execSetMapPropertyByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintMapLibrary);
UClass* Z_Construct_UClass_UBlueprintMapLibrary_NoRegister()
{
	return UBlueprintMapLibrary::StaticClass();
}
struct Z_Construct_UClass_UBlueprintMapLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/BlueprintMapLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add, "Map_Add" }, // 3023850009
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear, "Map_Clear" }, // 734804722
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains, "Map_Contains" }, // 4057144332
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find, "Map_Find" }, // 1971488476
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty, "Map_IsEmpty" }, // 3738345580
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty, "Map_IsNotEmpty" }, // 3818130348
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys, "Map_Keys" }, // 1377632967
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length, "Map_Length" }, // 1023408045
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove, "Map_Remove" }, // 2593007459
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values, "Map_Values" }, // 848747531
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName, "SetMapPropertyByName" }, // 2992981554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintMapLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintMapLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintMapLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintMapLibrary_Statics::ClassParams = {
	&UBlueprintMapLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintMapLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintMapLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintMapLibrary()
{
	if (!Z_Registration_Info_UClass_UBlueprintMapLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintMapLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintMapLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintMapLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBlueprintMapLibrary>()
{
	return UBlueprintMapLibrary::StaticClass();
}
UBlueprintMapLibrary::UBlueprintMapLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintMapLibrary);
UBlueprintMapLibrary::~UBlueprintMapLibrary() {}
// End Class UBlueprintMapLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintMapLibrary, UBlueprintMapLibrary::StaticClass, TEXT("UBlueprintMapLibrary"), &Z_Registration_Info_UClass_UBlueprintMapLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintMapLibrary), 3896861780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_3658597463(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
