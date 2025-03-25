// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/PackedIntNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackedIntNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPackedInt64NetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPackedUint64NetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FPackedInt64NetSerializerConfig
static_assert(std::is_polymorphic<FPackedInt64NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FPackedInt64NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PackedInt64NetSerializerConfig;
class UScriptStruct* FPackedInt64NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PackedInt64NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PackedInt64NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPackedInt64NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("PackedInt64NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PackedInt64NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FPackedInt64NetSerializerConfig>()
{
	return FPackedInt64NetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPackedInt64NetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PackedIntNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPackedInt64NetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPackedInt64NetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"PackedInt64NetSerializerConfig",
	nullptr,
	0,
	sizeof(FPackedInt64NetSerializerConfig),
	alignof(FPackedInt64NetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedInt64NetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPackedInt64NetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPackedInt64NetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_PackedInt64NetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PackedInt64NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPackedInt64NetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PackedInt64NetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FPackedInt64NetSerializerConfig

// Begin ScriptStruct FPackedUint64NetSerializerConfig
static_assert(std::is_polymorphic<FPackedUint64NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FPackedUint64NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PackedUint64NetSerializerConfig;
class UScriptStruct* FPackedUint64NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PackedUint64NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PackedUint64NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPackedUint64NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("PackedUint64NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PackedUint64NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FPackedUint64NetSerializerConfig>()
{
	return FPackedUint64NetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPackedUint64NetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PackedIntNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPackedUint64NetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPackedUint64NetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"PackedUint64NetSerializerConfig",
	nullptr,
	0,
	sizeof(FPackedUint64NetSerializerConfig),
	alignof(FPackedUint64NetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedUint64NetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPackedUint64NetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPackedUint64NetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_PackedUint64NetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PackedUint64NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPackedUint64NetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PackedUint64NetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FPackedUint64NetSerializerConfig

// Begin ScriptStruct FPackedInt32NetSerializerConfig
static_assert(std::is_polymorphic<FPackedInt32NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FPackedInt32NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig;
class UScriptStruct* FPackedInt32NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("PackedInt32NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FPackedInt32NetSerializerConfig>()
{
	return FPackedInt32NetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PackedIntNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPackedInt32NetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"PackedInt32NetSerializerConfig",
	nullptr,
	0,
	sizeof(FPackedInt32NetSerializerConfig),
	alignof(FPackedInt32NetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FPackedInt32NetSerializerConfig

// Begin ScriptStruct FPackedUint32NetSerializerConfig
static_assert(std::is_polymorphic<FPackedUint32NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FPackedUint32NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig;
class UScriptStruct* FPackedUint32NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("PackedUint32NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FPackedUint32NetSerializerConfig>()
{
	return FPackedUint32NetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PackedIntNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPackedUint32NetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"PackedUint32NetSerializerConfig",
	nullptr,
	0,
	sizeof(FPackedUint32NetSerializerConfig),
	alignof(FPackedUint32NetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FPackedUint32NetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedIntNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPackedInt64NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPackedInt64NetSerializerConfig_Statics::NewStructOps, TEXT("PackedInt64NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PackedInt64NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPackedInt64NetSerializerConfig), 4018454965U) },
		{ FPackedUint64NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPackedUint64NetSerializerConfig_Statics::NewStructOps, TEXT("PackedUint64NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PackedUint64NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPackedUint64NetSerializerConfig), 2258252948U) },
		{ FPackedInt32NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::NewStructOps, TEXT("PackedInt32NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPackedInt32NetSerializerConfig), 2945105871U) },
		{ FPackedUint32NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::NewStructOps, TEXT("PackedUint32NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPackedUint32NetSerializerConfig), 974753149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedIntNetSerializers_h_3807980503(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedIntNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedIntNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
