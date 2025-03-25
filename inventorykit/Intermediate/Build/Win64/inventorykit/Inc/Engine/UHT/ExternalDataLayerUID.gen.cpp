// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ExternalDataLayerUID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalDataLayerUID() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExternalDataLayerUID();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FExternalDataLayerUID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalDataLayerUID;
class UScriptStruct* FExternalDataLayerUID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalDataLayerUID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalDataLayerUID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalDataLayerUID, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExternalDataLayerUID"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalDataLayerUID.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExternalDataLayerUID>()
{
	return FExternalDataLayerUID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "External Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerUID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalDataLayerUID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalDataLayerUID, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ExternalDataLayerUID",
	Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::PropPointers),
	sizeof(FExternalDataLayerUID),
	alignof(FExternalDataLayerUID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExternalDataLayerUID()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalDataLayerUID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalDataLayerUID.InnerSingleton, Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExternalDataLayerUID.InnerSingleton;
}
// End ScriptStruct FExternalDataLayerUID

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerUID_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExternalDataLayerUID::StaticStruct, Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::NewStructOps, TEXT("ExternalDataLayerUID"), &Z_Registration_Info_UScriptStruct_ExternalDataLayerUID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalDataLayerUID), 2233653624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerUID_h_35073559(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerUID_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerUID_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
