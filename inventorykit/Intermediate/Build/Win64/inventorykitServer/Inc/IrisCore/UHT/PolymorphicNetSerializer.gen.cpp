// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/PolymorphicNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolymorphicNetSerializer() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FPolymorphicStructNetSerializerConfig
static_assert(std::is_polymorphic<FPolymorphicStructNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FPolymorphicStructNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig;
class UScriptStruct* FPolymorphicStructNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("PolymorphicStructNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FPolymorphicStructNetSerializerConfig>()
{
	return FPolymorphicStructNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PolymorphicNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolymorphicStructNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"PolymorphicStructNetSerializerConfig",
	nullptr,
	0,
	sizeof(FPolymorphicStructNetSerializerConfig),
	alignof(FPolymorphicStructNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FPolymorphicStructNetSerializerConfig

// Begin ScriptStruct FPolymorphicArrayStructNetSerializerConfig
static_assert(std::is_polymorphic<FPolymorphicArrayStructNetSerializerConfig>() == std::is_polymorphic<FPolymorphicStructNetSerializerConfig>(), "USTRUCT FPolymorphicArrayStructNetSerializerConfig cannot be polymorphic unless super FPolymorphicStructNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig;
class UScriptStruct* FPolymorphicArrayStructNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("PolymorphicArrayStructNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FPolymorphicArrayStructNetSerializerConfig>()
{
	return FPolymorphicArrayStructNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PolymorphicNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolymorphicArrayStructNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig,
	&NewStructOps,
	"PolymorphicArrayStructNetSerializerConfig",
	nullptr,
	0,
	sizeof(FPolymorphicArrayStructNetSerializerConfig),
	alignof(FPolymorphicArrayStructNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FPolymorphicArrayStructNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PolymorphicNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPolymorphicStructNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::NewStructOps, TEXT("PolymorphicStructNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolymorphicStructNetSerializerConfig), 945144688U) },
		{ FPolymorphicArrayStructNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::NewStructOps, TEXT("PolymorphicArrayStructNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolymorphicArrayStructNetSerializerConfig), 1861828890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PolymorphicNetSerializer_h_890597079(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PolymorphicNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PolymorphicNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
