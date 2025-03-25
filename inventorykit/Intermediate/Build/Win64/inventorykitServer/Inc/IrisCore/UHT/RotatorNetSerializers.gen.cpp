// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/RotatorNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatorNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3dNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3fNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRotatorNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FRotatorNetSerializerConfig
static_assert(std::is_polymorphic<FRotatorNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FRotatorNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig;
class UScriptStruct* FRotatorNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotatorNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("RotatorNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FRotatorNetSerializerConfig>()
{
	return FRotatorNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/RotatorNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotatorNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"RotatorNetSerializerConfig",
	nullptr,
	0,
	sizeof(FRotatorNetSerializerConfig),
	alignof(FRotatorNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotatorNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FRotatorNetSerializerConfig

// Begin ScriptStruct FRotatorAsByteNetSerializerConfig
static_assert(std::is_polymorphic<FRotatorAsByteNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FRotatorAsByteNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig;
class UScriptStruct* FRotatorAsByteNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("RotatorAsByteNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FRotatorAsByteNetSerializerConfig>()
{
	return FRotatorAsByteNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/RotatorNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotatorAsByteNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"RotatorAsByteNetSerializerConfig",
	nullptr,
	0,
	sizeof(FRotatorAsByteNetSerializerConfig),
	alignof(FRotatorAsByteNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FRotatorAsByteNetSerializerConfig

// Begin ScriptStruct FRotatorAsShortNetSerializerConfig
static_assert(std::is_polymorphic<FRotatorAsShortNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FRotatorAsShortNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig;
class UScriptStruct* FRotatorAsShortNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("RotatorAsShortNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FRotatorAsShortNetSerializerConfig>()
{
	return FRotatorAsShortNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/RotatorNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotatorAsShortNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"RotatorAsShortNetSerializerConfig",
	nullptr,
	0,
	sizeof(FRotatorAsShortNetSerializerConfig),
	alignof(FRotatorAsShortNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FRotatorAsShortNetSerializerConfig

// Begin ScriptStruct FRotator3fNetSerializerConfig
static_assert(std::is_polymorphic<FRotator3fNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FRotator3fNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rotator3fNetSerializerConfig;
class UScriptStruct* FRotator3fNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3fNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rotator3fNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotator3fNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Rotator3fNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Rotator3fNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FRotator3fNetSerializerConfig>()
{
	return FRotator3fNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotator3fNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/RotatorNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotator3fNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotator3fNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Rotator3fNetSerializerConfig",
	nullptr,
	0,
	sizeof(FRotator3fNetSerializerConfig),
	alignof(FRotator3fNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3fNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotator3fNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotator3fNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3fNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rotator3fNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FRotator3fNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Rotator3fNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FRotator3fNetSerializerConfig

// Begin ScriptStruct FRotator3dNetSerializerConfig
static_assert(std::is_polymorphic<FRotator3dNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FRotator3dNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rotator3dNetSerializerConfig;
class UScriptStruct* FRotator3dNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3dNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rotator3dNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotator3dNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Rotator3dNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Rotator3dNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FRotator3dNetSerializerConfig>()
{
	return FRotator3dNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotator3dNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/RotatorNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotator3dNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotator3dNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Rotator3dNetSerializerConfig",
	nullptr,
	0,
	sizeof(FRotator3dNetSerializerConfig),
	alignof(FRotator3dNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3dNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotator3dNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotator3dNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3dNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rotator3dNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FRotator3dNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Rotator3dNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FRotator3dNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_RotatorNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRotatorNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::NewStructOps, TEXT("RotatorNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotatorNetSerializerConfig), 644447884U) },
		{ FRotatorAsByteNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::NewStructOps, TEXT("RotatorAsByteNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotatorAsByteNetSerializerConfig), 947421008U) },
		{ FRotatorAsShortNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::NewStructOps, TEXT("RotatorAsShortNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotatorAsShortNetSerializerConfig), 698567882U) },
		{ FRotator3fNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FRotator3fNetSerializerConfig_Statics::NewStructOps, TEXT("Rotator3fNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Rotator3fNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotator3fNetSerializerConfig), 2235371870U) },
		{ FRotator3dNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FRotator3dNetSerializerConfig_Statics::NewStructOps, TEXT("Rotator3dNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Rotator3dNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotator3dNetSerializerConfig), 3413538556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_RotatorNetSerializers_h_1116805703(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_RotatorNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_RotatorNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
