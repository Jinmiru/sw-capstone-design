// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerInstanceNames.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerInstanceNames() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataLayerInstanceNames();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FDataLayerInstanceNames
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataLayerInstanceNames;
class UScriptStruct* FDataLayerInstanceNames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataLayerInstanceNames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataLayerInstanceNames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataLayerInstanceNames, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DataLayerInstanceNames"));
	}
	return Z_Registration_Info_UScriptStruct_DataLayerInstanceNames.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataLayerInstanceNames>()
{
	return FDataLayerInstanceNames::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstanceNames.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFirstDataLayerExternal_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstanceNames.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstanceNames.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsFirstDataLayerExternal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFirstDataLayerExternal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataLayerInstanceNames>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::NewProp_bIsFirstDataLayerExternal_SetBit(void* Obj)
{
	((FDataLayerInstanceNames*)Obj)->bIsFirstDataLayerExternal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::NewProp_bIsFirstDataLayerExternal = { "bIsFirstDataLayerExternal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDataLayerInstanceNames), &Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::NewProp_bIsFirstDataLayerExternal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFirstDataLayerExternal_MetaData), NewProp_bIsFirstDataLayerExternal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataLayerInstanceNames, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayers_MetaData), NewProp_DataLayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::NewProp_bIsFirstDataLayerExternal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::NewProp_DataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::NewProp_DataLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DataLayerInstanceNames",
	Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::PropPointers),
	sizeof(FDataLayerInstanceNames),
	alignof(FDataLayerInstanceNames),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataLayerInstanceNames()
{
	if (!Z_Registration_Info_UScriptStruct_DataLayerInstanceNames.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataLayerInstanceNames.InnerSingleton, Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataLayerInstanceNames.InnerSingleton;
}
// End ScriptStruct FDataLayerInstanceNames

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceNames_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataLayerInstanceNames::StaticStruct, Z_Construct_UScriptStruct_FDataLayerInstanceNames_Statics::NewStructOps, TEXT("DataLayerInstanceNames"), &Z_Registration_Info_UScriptStruct_DataLayerInstanceNames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataLayerInstanceNames), 3382993314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceNames_h_423108027(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceNames_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceNames_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
