// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyHandle() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleLookupTable();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FKeyHandleMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyHandleMap;
class UScriptStruct* FKeyHandleMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyHandleMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyHandleMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyHandleMap, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KeyHandleMap"));
	}
	return Z_Registration_Info_UScriptStruct_KeyHandleMap.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKeyHandleMap>()
{
	return FKeyHandleMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyHandleMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a mapping of key handles to key index that may be serialized \n */" },
		{ "ModuleRelativePath", "Classes/Curves/KeyHandle.h" },
		{ "ToolTip", "Represents a mapping of key handles to key index that may be serialized" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyHandleMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyHandleMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"KeyHandleMap",
	nullptr,
	0,
	sizeof(FKeyHandleMap),
	alignof(FKeyHandleMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyHandleMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyHandleMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap()
{
	if (!Z_Registration_Info_UScriptStruct_KeyHandleMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyHandleMap.InnerSingleton, Z_Construct_UScriptStruct_FKeyHandleMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyHandleMap.InnerSingleton;
}
// End ScriptStruct FKeyHandleMap

// Begin ScriptStruct FKeyHandleLookupTable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyHandleLookupTable;
class UScriptStruct* FKeyHandleLookupTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyHandleLookupTable, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KeyHandleLookupTable"));
	}
	return Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKeyHandleLookupTable>()
{
	return FKeyHandleLookupTable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Lookup table that maps key handles to indices in an external data structure\n * Maintains a map of key handle to last known index,\n * and an array of optional key handles that's used to validate map entries.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/KeyHandle.h" },
		{ "ToolTip", "Lookup table that maps key handles to indices in an external data structure\nMaintains a map of key handle to last known index,\nand an array of optional key handles that's used to validate map entries." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyHandleLookupTable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"KeyHandleLookupTable",
	nullptr,
	0,
	sizeof(FKeyHandleLookupTable),
	alignof(FKeyHandleLookupTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleLookupTable()
{
	if (!Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.InnerSingleton, Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.InnerSingleton;
}
// End ScriptStruct FKeyHandleLookupTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKeyHandleMap::StaticStruct, Z_Construct_UScriptStruct_FKeyHandleMap_Statics::NewStructOps, TEXT("KeyHandleMap"), &Z_Registration_Info_UScriptStruct_KeyHandleMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyHandleMap), 1805637467U) },
		{ FKeyHandleLookupTable::StaticStruct, Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::NewStructOps, TEXT("KeyHandleLookupTable"), &Z_Registration_Info_UScriptStruct_KeyHandleLookupTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyHandleLookupTable), 593189301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h_2460876336(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
