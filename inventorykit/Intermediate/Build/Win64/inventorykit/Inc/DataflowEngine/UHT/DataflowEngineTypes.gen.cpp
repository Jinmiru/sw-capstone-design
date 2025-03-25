// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Engine/Public/Dataflow/DataflowEngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowEngineTypes() {}

// Begin Cross Module References
DATAFLOWENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringValuePair();
UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References

// Begin ScriptStruct FStringValuePair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringValuePair;
class UScriptStruct* FStringValuePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringValuePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringValuePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringValuePair, (UObject*)Z_Construct_UPackage__Script_DataflowEngine(), TEXT("StringValuePair"));
	}
	return Z_Registration_Info_UScriptStruct_StringValuePair.OuterSingleton;
}
template<> DATAFLOWENGINE_API UScriptStruct* StaticStruct<FStringValuePair>()
{
	return FStringValuePair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStringValuePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowEngineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowEngineTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowEngineTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringValuePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringValuePair_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStringValuePair, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringValuePair_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStringValuePair, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringValuePair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringValuePair_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringValuePair_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringValuePair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringValuePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
	nullptr,
	&NewStructOps,
	"StringValuePair",
	Z_Construct_UScriptStruct_FStringValuePair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringValuePair_Statics::PropPointers),
	sizeof(FStringValuePair),
	alignof(FStringValuePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringValuePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStringValuePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStringValuePair()
{
	if (!Z_Registration_Info_UScriptStruct_StringValuePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringValuePair.InnerSingleton, Z_Construct_UScriptStruct_FStringValuePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StringValuePair.InnerSingleton;
}
// End ScriptStruct FStringValuePair

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEngineTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStringValuePair::StaticStruct, Z_Construct_UScriptStruct_FStringValuePair_Statics::NewStructOps, TEXT("StringValuePair"), &Z_Registration_Info_UScriptStruct_StringValuePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringValuePair), 3315596577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEngineTypes_h_74560974(TEXT("/Script/DataflowEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEngineTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEngineTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
