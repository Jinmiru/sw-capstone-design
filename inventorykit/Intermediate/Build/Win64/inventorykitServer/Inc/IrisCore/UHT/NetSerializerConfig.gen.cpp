// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/NetSerializerConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetSerializerConfig() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FNetSerializerConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetSerializerConfig;
class UScriptStruct* FNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNetSerializerConfig>()
{
	return FNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/NetSerializerConfig.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"NetSerializerConfig",
	nullptr,
	0,
	sizeof(FNetSerializerConfig),
	alignof(FNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_NetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_NetSerializerConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::NewStructOps, TEXT("NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetSerializerConfig), 2980034572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_NetSerializerConfig_h_1377250292(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_NetSerializerConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_NetSerializerConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
