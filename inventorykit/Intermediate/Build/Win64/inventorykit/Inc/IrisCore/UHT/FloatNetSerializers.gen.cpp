// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/FloatNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FFloatNetSerializerConfig
static_assert(std::is_polymorphic<FFloatNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FFloatNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig;
class UScriptStruct* FFloatNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("FloatNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FFloatNetSerializerConfig>()
{
	return FFloatNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/FloatNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"FloatNetSerializerConfig",
	nullptr,
	0,
	sizeof(FFloatNetSerializerConfig),
	alignof(FFloatNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FFloatNetSerializerConfig

// Begin ScriptStruct FDoubleNetSerializerConfig
static_assert(std::is_polymorphic<FDoubleNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FDoubleNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig;
class UScriptStruct* FDoubleNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("DoubleNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FDoubleNetSerializerConfig>()
{
	return FDoubleNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/FloatNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"DoubleNetSerializerConfig",
	nullptr,
	0,
	sizeof(FDoubleNetSerializerConfig),
	alignof(FDoubleNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoubleNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FDoubleNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_FloatNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFloatNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::NewStructOps, TEXT("FloatNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatNetSerializerConfig), 2660180643U) },
		{ FDoubleNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::NewStructOps, TEXT("DoubleNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleNetSerializerConfig), 3759472958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_FloatNetSerializers_h_3471377443(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_FloatNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_FloatNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
