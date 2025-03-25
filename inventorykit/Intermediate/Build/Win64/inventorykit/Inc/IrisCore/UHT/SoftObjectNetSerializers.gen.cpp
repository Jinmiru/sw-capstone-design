// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/SoftObjectNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoftObjectNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FSoftObjectNetSerializerConfig
static_assert(std::is_polymorphic<FSoftObjectNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FSoftObjectNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig;
class UScriptStruct* FSoftObjectNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("SoftObjectNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FSoftObjectNetSerializerConfig>()
{
	return FSoftObjectNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/SoftObjectNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftObjectNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"SoftObjectNetSerializerConfig",
	nullptr,
	0,
	sizeof(FSoftObjectNetSerializerConfig),
	alignof(FSoftObjectNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FSoftObjectNetSerializerConfig

// Begin ScriptStruct FSoftObjectPathNetSerializerConfig
static_assert(std::is_polymorphic<FSoftObjectPathNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FSoftObjectPathNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig;
class UScriptStruct* FSoftObjectPathNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("SoftObjectPathNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FSoftObjectPathNetSerializerConfig>()
{
	return FSoftObjectPathNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/SoftObjectNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftObjectPathNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"SoftObjectPathNetSerializerConfig",
	nullptr,
	0,
	sizeof(FSoftObjectPathNetSerializerConfig),
	alignof(FSoftObjectPathNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FSoftObjectPathNetSerializerConfig

// Begin ScriptStruct FSoftClassPathNetSerializerConfig
static_assert(std::is_polymorphic<FSoftClassPathNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FSoftClassPathNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig;
class UScriptStruct* FSoftClassPathNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("SoftClassPathNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FSoftClassPathNetSerializerConfig>()
{
	return FSoftClassPathNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/SoftObjectNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftClassPathNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"SoftClassPathNetSerializerConfig",
	nullptr,
	0,
	sizeof(FSoftClassPathNetSerializerConfig),
	alignof(FSoftClassPathNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FSoftClassPathNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_SoftObjectNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoftObjectNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::NewStructOps, TEXT("SoftObjectNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftObjectNetSerializerConfig), 1832314667U) },
		{ FSoftObjectPathNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::NewStructOps, TEXT("SoftObjectPathNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftObjectPathNetSerializerConfig), 1764817172U) },
		{ FSoftClassPathNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::NewStructOps, TEXT("SoftClassPathNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftClassPathNetSerializerConfig), 2433518502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_SoftObjectNetSerializers_h_927104061(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_SoftObjectNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_SoftObjectNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
