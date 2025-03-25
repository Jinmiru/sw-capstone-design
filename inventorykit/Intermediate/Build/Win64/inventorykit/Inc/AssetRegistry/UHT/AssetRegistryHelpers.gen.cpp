// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AssetRegistry/Public/AssetRegistry/AssetRegistryHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetRegistryHelpers() {}

// Begin Cross Module References
ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryHelpers();
ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryHelpers_NoRegister();
ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTagAndValue();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FARFilter();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
UPackage* Z_Construct_UPackage__Script_AssetRegistry();
// End Cross Module References

// Begin ScriptStruct FTagAndValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TagAndValue;
class UScriptStruct* FTagAndValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TagAndValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TagAndValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagAndValue, (UObject*)Z_Construct_UPackage__Script_AssetRegistry(), TEXT("TagAndValue"));
	}
	return Z_Registration_Info_UScriptStruct_TagAndValue.OuterSingleton;
}
template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<FTagAndValue>()
{
	return FTagAndValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTagAndValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "AssetData" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "AssetData" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagAndValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagAndValue, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTagAndValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTagAndValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagAndValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagAndValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagAndValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
	nullptr,
	&NewStructOps,
	"TagAndValue",
	Z_Construct_UScriptStruct_FTagAndValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagAndValue_Statics::PropPointers),
	sizeof(FTagAndValue),
	alignof(FTagAndValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagAndValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTagAndValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTagAndValue()
{
	if (!Z_Registration_Info_UScriptStruct_TagAndValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TagAndValue.InnerSingleton, Z_Construct_UScriptStruct_FTagAndValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TagAndValue.InnerSingleton;
}
// End ScriptStruct FTagAndValue

// Begin Class UAssetRegistryHelpers Function CreateAssetData
struct Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventCreateAssetData_Parms
	{
		const UObject* InAsset;
		bool bAllowBlueprintClass;
		FAssetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** \n\x09 * Creates asset data from a UObject. \n\x09 *\n\x09 * @param InAsset\x09The asset to create asset data for\n\x09 * @param bAllowBlueprintClass\x09""By default trying to create asset data for a blueprint class will create one for the UBlueprint instead\n\x09 */" },
		{ "CPP_Default_bAllowBlueprintClass", "false" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ToolTip", "Creates asset data from a UObject.\n\n@param InAsset       The asset to create asset data for\n@param bAllowBlueprintClass  By default trying to create asset data for a blueprint class will create one for the UBlueprint instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
	static void NewProp_bAllowBlueprintClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBlueprintClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventCreateAssetData_Parms, InAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAsset_MetaData), NewProp_InAsset_MetaData) };
void Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_bAllowBlueprintClass_SetBit(void* Obj)
{
	((AssetRegistryHelpers_eventCreateAssetData_Parms*)Obj)->bAllowBlueprintClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_bAllowBlueprintClass = { "bAllowBlueprintClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventCreateAssetData_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_bAllowBlueprintClass_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventCreateAssetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_InAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_bAllowBlueprintClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "CreateAssetData", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::AssetRegistryHelpers_eventCreateAssetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::AssetRegistryHelpers_eventCreateAssetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execCreateAssetData)
{
	P_GET_OBJECT(UObject,Z_Param_InAsset);
	P_GET_UBOOL(Z_Param_bAllowBlueprintClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetData*)Z_Param__Result=UAssetRegistryHelpers::CreateAssetData(Z_Param_InAsset,Z_Param_bAllowBlueprintClass);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function CreateAssetData

// Begin Class UAssetRegistryHelpers Function FindAssetNativeClass
struct Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventFindAssetNativeClass_Parms
	{
		FAssetData AssetData;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Registry" },
		{ "Comment", "/**\n\x09 * Returns the first native class of the asset type that can be found.  Normally this is just the FAssetData::GetClass(),\n\x09 * however if the class is a blueprint generated class it may not be loaded.  In which case GetAncestorClassNames will\n\x09 * be used to find the first native super class.  This can be slow if temporary caching mode is not on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the first native class of the asset type that can be found.  Normally this is just the FAssetData::GetClass(),\nhowever if the class is a blueprint generated class it may not be loaded.  In which case GetAncestorClassNames will\nbe used to find the first native super class.  This can be slow if temporary caching mode is not on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventFindAssetNativeClass_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetData_MetaData), NewProp_AssetData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventFindAssetNativeClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::NewProp_AssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "FindAssetNativeClass", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::AssetRegistryHelpers_eventFindAssetNativeClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::AssetRegistryHelpers_eventFindAssetNativeClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execFindAssetNativeClass)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=UAssetRegistryHelpers::FindAssetNativeClass(Z_Param_Out_AssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function FindAssetNativeClass

// Begin Class UAssetRegistryHelpers Function GetAsset
struct Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventGetAsset_Parms
	{
		FAssetData InAssetData;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns the asset UObject if it is loaded or loads the asset if it is unloaded then returns the result */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the asset UObject if it is loaded or loads the asset if it is unloaded then returns the result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetAsset_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetAsset", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::AssetRegistryHelpers_eventGetAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::AssetRegistryHelpers_eventGetAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execGetAsset)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UAssetRegistryHelpers::GetAsset(Z_Param_Out_InAssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function GetAsset

// Begin Class UAssetRegistryHelpers Function GetAssetRegistry
struct Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics
{
	struct AssetRegistryHelpers_eventGetAssetRegistry_Parms
	{
		TScriptInterface<IAssetRegistry> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Registry" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetAssetRegistry_Parms, ReturnValue), Z_Construct_UClass_UAssetRegistry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetAssetRegistry", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::AssetRegistryHelpers_eventGetAssetRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::AssetRegistryHelpers_eventGetAssetRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execGetAssetRegistry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IAssetRegistry>*)Z_Param__Result=UAssetRegistryHelpers::GetAssetRegistry();
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function GetAssetRegistry

// Begin Class UAssetRegistryHelpers Function GetBlueprintAssets
struct Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventGetBlueprintAssets_Parms
	{
		FARFilter InFilter;
		TArray<FAssetData> OutAssetData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Registry" },
		{ "Comment", "/** Gets asset data for all blueprint assets that match the filter. ClassPaths in the filter specify the blueprint's parent class. */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets asset data for all blueprint assets that match the filter. ClassPaths in the filter specify the blueprint's parent class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::NewProp_InFilter = { "InFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetBlueprintAssets_Parms, InFilter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFilter_MetaData), NewProp_InFilter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetBlueprintAssets_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::NewProp_InFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::NewProp_OutAssetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::NewProp_OutAssetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetBlueprintAssets", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::AssetRegistryHelpers_eventGetBlueprintAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::AssetRegistryHelpers_eventGetBlueprintAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execGetBlueprintAssets)
{
	P_GET_STRUCT_REF(FARFilter,Z_Param_Out_InFilter);
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAssetRegistryHelpers::GetBlueprintAssets(Z_Param_Out_InFilter,Z_Param_Out_OutAssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function GetBlueprintAssets

// Begin Class UAssetRegistryHelpers Function GetClass
struct Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventGetClass_Parms
	{
		FAssetData InAssetData;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetClass_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetClass", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::AssetRegistryHelpers_eventGetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::AssetRegistryHelpers_eventGetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execGetClass)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=UAssetRegistryHelpers::GetClass(Z_Param_Out_InAssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function GetClass

// Begin Class UAssetRegistryHelpers Function GetExportTextName
struct Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventGetExportTextName_Parms
	{
		FAssetData InAssetData;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns the name for the asset in the form: Class'ObjectPath' */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the name for the asset in the form: Class'ObjectPath'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetExportTextName_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetExportTextName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetExportTextName", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::AssetRegistryHelpers_eventGetExportTextName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::AssetRegistryHelpers_eventGetExportTextName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execGetExportTextName)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAssetRegistryHelpers::GetExportTextName(Z_Param_Out_InAssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function GetExportTextName

// Begin Class UAssetRegistryHelpers Function GetFullName
struct Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventGetFullName_Parms
	{
		FAssetData InAssetData;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns the full name for the asset in the form: Class ObjectPath */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the full name for the asset in the form: Class ObjectPath" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetFullName_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetFullName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetFullName", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::AssetRegistryHelpers_eventGetFullName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::AssetRegistryHelpers_eventGetFullName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execGetFullName)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAssetRegistryHelpers::GetFullName(Z_Param_Out_InAssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function GetFullName

// Begin Class UAssetRegistryHelpers Function GetTagValue
struct Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventGetTagValue_Parms
	{
		FAssetData InAssetData;
		FName InTagName;
		FString OutTagValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Gets the value associated with the given tag as a string */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets the value associated with the given tag as a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTagName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutTagValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetTagValue_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InTagName = { "InTagName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetTagValue_Parms, InTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTagName_MetaData), NewProp_InTagName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_OutTagValue = { "OutTagValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventGetTagValue_Parms, OutTagValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistryHelpers_eventGetTagValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventGetTagValue_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_InTagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_OutTagValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "GetTagValue", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::AssetRegistryHelpers_eventGetTagValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::AssetRegistryHelpers_eventGetTagValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execGetTagValue)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InTagName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutTagValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetRegistryHelpers::GetTagValue(Z_Param_Out_InAssetData,Z_Param_Out_InTagName,Z_Param_Out_OutTagValue);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function GetTagValue

// Begin Class UAssetRegistryHelpers Function IsAssetLoaded
struct Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventIsAssetLoaded_Parms
	{
		FAssetData InAssetData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns true if the asset is loaded */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns true if the asset is loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventIsAssetLoaded_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
void Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistryHelpers_eventIsAssetLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventIsAssetLoaded_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "IsAssetLoaded", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::AssetRegistryHelpers_eventIsAssetLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::AssetRegistryHelpers_eventIsAssetLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execIsAssetLoaded)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsAssetLoaded(Z_Param_Out_InAssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function IsAssetLoaded

// Begin Class UAssetRegistryHelpers Function IsRedirector
struct Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventIsRedirector_Parms
	{
		FAssetData InAssetData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns true if the this asset is a redirector. */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns true if the this asset is a redirector." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventIsRedirector_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
void Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistryHelpers_eventIsRedirector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventIsRedirector_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "IsRedirector", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::AssetRegistryHelpers_eventIsRedirector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::AssetRegistryHelpers_eventIsRedirector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execIsRedirector)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsRedirector(Z_Param_Out_InAssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function IsRedirector

// Begin Class UAssetRegistryHelpers Function IsUAsset
struct Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventIsUAsset_Parms
	{
		FAssetData InAssetData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Returns true if this is the primary asset in a package, true for maps and assets but false for secondary objects like class redirectors */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns true if this is the primary asset in a package, true for maps and assets but false for secondary objects like class redirectors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventIsUAsset_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
void Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistryHelpers_eventIsUAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventIsUAsset_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "IsUAsset", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::AssetRegistryHelpers_eventIsUAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::AssetRegistryHelpers_eventIsUAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execIsUAsset)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsUAsset(Z_Param_Out_InAssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function IsUAsset

// Begin Class UAssetRegistryHelpers Function IsValid
struct Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventIsValid_Parms
	{
		FAssetData InAssetData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Checks to see if this AssetData refers to an asset or is NULL */" },
		{ "DisplayName", "Is Valid Asset Data" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Checks to see if this AssetData refers to an asset or is NULL" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventIsValid_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
void Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistryHelpers_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistryHelpers_eventIsValid_Parms), &Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::AssetRegistryHelpers_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::AssetRegistryHelpers_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execIsValid)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetRegistryHelpers::IsValid(Z_Param_Out_InAssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function IsValid

// Begin Class UAssetRegistryHelpers Function SetFilterTagsAndValues
struct Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms
	{
		FARFilter InFilter;
		TArray<FTagAndValue> InTagsAndValues;
		FARFilter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Registry" },
		{ "Comment", "/**\n\x09 * Populates the FARFilters tags and values map with the passed in tags and values\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ToolTip", "Populates the FARFilters tags and values map with the passed in tags and values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTagsAndValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTagsAndValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InTagsAndValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InFilter = { "InFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms, InFilter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFilter_MetaData), NewProp_InFilter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues_Inner = { "InTagsAndValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTagAndValue, METADATA_PARAMS(0, nullptr) }; // 1692749397
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues = { "InTagsAndValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms, InTagsAndValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTagsAndValues_MetaData), NewProp_InTagsAndValues_MetaData) }; // 1692749397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms, ReturnValue), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_InTagsAndValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "SetFilterTagsAndValues", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execSetFilterTagsAndValues)
{
	P_GET_STRUCT_REF(FARFilter,Z_Param_Out_InFilter);
	P_GET_TARRAY_REF(FTagAndValue,Z_Param_Out_InTagsAndValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FARFilter*)Z_Param__Result=UAssetRegistryHelpers::SetFilterTagsAndValues(Z_Param_Out_InFilter,Z_Param_Out_InTagsAndValues);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function SetFilterTagsAndValues

// Begin Class UAssetRegistryHelpers Function ToSoftObjectPath
struct Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistryHelpers_eventToSoftObjectPath_Parms
	{
		FAssetData InAssetData;
		FSoftObjectPath ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Data" },
		{ "Comment", "/** Convert to a SoftObjectPath for loading */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Convert to a SoftObjectPath for loading" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventToSoftObjectPath_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistryHelpers_eventToSoftObjectPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, nullptr, "ToSoftObjectPath", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::AssetRegistryHelpers_eventToSoftObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::AssetRegistryHelpers_eventToSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetRegistryHelpers::execToSoftObjectPath)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSoftObjectPath*)Z_Param__Result=UAssetRegistryHelpers::ToSoftObjectPath(Z_Param_Out_InAssetData);
	P_NATIVE_END;
}
// End Class UAssetRegistryHelpers Function ToSoftObjectPath

// Begin Class UAssetRegistryHelpers
void UAssetRegistryHelpers::StaticRegisterNativesUAssetRegistryHelpers()
{
	UClass* Class = UAssetRegistryHelpers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAssetData", &UAssetRegistryHelpers::execCreateAssetData },
		{ "FindAssetNativeClass", &UAssetRegistryHelpers::execFindAssetNativeClass },
		{ "GetAsset", &UAssetRegistryHelpers::execGetAsset },
		{ "GetAssetRegistry", &UAssetRegistryHelpers::execGetAssetRegistry },
		{ "GetBlueprintAssets", &UAssetRegistryHelpers::execGetBlueprintAssets },
		{ "GetClass", &UAssetRegistryHelpers::execGetClass },
		{ "GetExportTextName", &UAssetRegistryHelpers::execGetExportTextName },
		{ "GetFullName", &UAssetRegistryHelpers::execGetFullName },
		{ "GetTagValue", &UAssetRegistryHelpers::execGetTagValue },
		{ "IsAssetLoaded", &UAssetRegistryHelpers::execIsAssetLoaded },
		{ "IsRedirector", &UAssetRegistryHelpers::execIsRedirector },
		{ "IsUAsset", &UAssetRegistryHelpers::execIsUAsset },
		{ "IsValid", &UAssetRegistryHelpers::execIsValid },
		{ "SetFilterTagsAndValues", &UAssetRegistryHelpers::execSetFilterTagsAndValues },
		{ "ToSoftObjectPath", &UAssetRegistryHelpers::execToSoftObjectPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetRegistryHelpers);
UClass* Z_Construct_UClass_UAssetRegistryHelpers_NoRegister()
{
	return UAssetRegistryHelpers::StaticClass();
}
struct Z_Construct_UClass_UAssetRegistryHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AssetRegistry/AssetRegistryHelpers.h" },
		{ "ModuleRelativePath", "Public/AssetRegistry/AssetRegistryHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData, "CreateAssetData" }, // 1237889665
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_FindAssetNativeClass, "FindAssetNativeClass" }, // 3288152397
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset, "GetAsset" }, // 4067557880
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry, "GetAssetRegistry" }, // 1804187329
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetBlueprintAssets, "GetBlueprintAssets" }, // 4151999991
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetClass, "GetClass" }, // 1173616435
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName, "GetExportTextName" }, // 2625223703
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName, "GetFullName" }, // 2006870384
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue, "GetTagValue" }, // 405260393
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded, "IsAssetLoaded" }, // 2114521936
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector, "IsRedirector" }, // 3522682661
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset, "IsUAsset" }, // 2065799565
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsValid, "IsValid" }, // 1259452720
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues, "SetFilterTagsAndValues" }, // 200484866
		{ &Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath, "ToSoftObjectPath" }, // 3388879416
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetRegistryHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetRegistryHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistryHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetRegistryHelpers_Statics::ClassParams = {
	&UAssetRegistryHelpers::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistryHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetRegistryHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetRegistryHelpers()
{
	if (!Z_Registration_Info_UClass_UAssetRegistryHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetRegistryHelpers.OuterSingleton, Z_Construct_UClass_UAssetRegistryHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetRegistryHelpers.OuterSingleton;
}
template<> ASSETREGISTRY_API UClass* StaticClass<UAssetRegistryHelpers>()
{
	return UAssetRegistryHelpers::StaticClass();
}
UAssetRegistryHelpers::UAssetRegistryHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetRegistryHelpers);
UAssetRegistryHelpers::~UAssetRegistryHelpers() {}
// End Class UAssetRegistryHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTagAndValue::StaticStruct, Z_Construct_UScriptStruct_FTagAndValue_Statics::NewStructOps, TEXT("TagAndValue"), &Z_Registration_Info_UScriptStruct_TagAndValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTagAndValue), 1692749397U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetRegistryHelpers, UAssetRegistryHelpers::StaticClass, TEXT("UAssetRegistryHelpers"), &Z_Registration_Info_UClass_UAssetRegistryHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetRegistryHelpers), 1096445766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_2644337904(TEXT("/Script/AssetRegistry"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
