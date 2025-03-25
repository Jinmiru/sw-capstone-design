// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/QuatNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuatNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUnitQuat4dNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUnitQuat4fNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUnitQuatNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FUnitQuatNetSerializerConfig
static_assert(std::is_polymorphic<FUnitQuatNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FUnitQuatNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnitQuatNetSerializerConfig;
class UScriptStruct* FUnitQuatNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnitQuatNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnitQuatNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnitQuatNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("UnitQuatNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_UnitQuatNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FUnitQuatNetSerializerConfig>()
{
	return FUnitQuatNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUnitQuatNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/QuatNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnitQuatNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnitQuatNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"UnitQuatNetSerializerConfig",
	nullptr,
	0,
	sizeof(FUnitQuatNetSerializerConfig),
	alignof(FUnitQuatNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitQuatNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnitQuatNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnitQuatNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_UnitQuatNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnitQuatNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FUnitQuatNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UnitQuatNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FUnitQuatNetSerializerConfig

// Begin ScriptStruct FUnitQuat4fNetSerializerConfig
static_assert(std::is_polymorphic<FUnitQuat4fNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FUnitQuat4fNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnitQuat4fNetSerializerConfig;
class UScriptStruct* FUnitQuat4fNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnitQuat4fNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnitQuat4fNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnitQuat4fNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("UnitQuat4fNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_UnitQuat4fNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FUnitQuat4fNetSerializerConfig>()
{
	return FUnitQuat4fNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUnitQuat4fNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/QuatNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnitQuat4fNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnitQuat4fNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"UnitQuat4fNetSerializerConfig",
	nullptr,
	0,
	sizeof(FUnitQuat4fNetSerializerConfig),
	alignof(FUnitQuat4fNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitQuat4fNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnitQuat4fNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnitQuat4fNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_UnitQuat4fNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnitQuat4fNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FUnitQuat4fNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UnitQuat4fNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FUnitQuat4fNetSerializerConfig

// Begin ScriptStruct FUnitQuat4dNetSerializerConfig
static_assert(std::is_polymorphic<FUnitQuat4dNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FUnitQuat4dNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnitQuat4dNetSerializerConfig;
class UScriptStruct* FUnitQuat4dNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnitQuat4dNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnitQuat4dNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnitQuat4dNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("UnitQuat4dNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_UnitQuat4dNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FUnitQuat4dNetSerializerConfig>()
{
	return FUnitQuat4dNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUnitQuat4dNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/QuatNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnitQuat4dNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnitQuat4dNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"UnitQuat4dNetSerializerConfig",
	nullptr,
	0,
	sizeof(FUnitQuat4dNetSerializerConfig),
	alignof(FUnitQuat4dNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitQuat4dNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnitQuat4dNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnitQuat4dNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_UnitQuat4dNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnitQuat4dNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FUnitQuat4dNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UnitQuat4dNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FUnitQuat4dNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_QuatNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnitQuatNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FUnitQuatNetSerializerConfig_Statics::NewStructOps, TEXT("UnitQuatNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_UnitQuatNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnitQuatNetSerializerConfig), 3778576162U) },
		{ FUnitQuat4fNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FUnitQuat4fNetSerializerConfig_Statics::NewStructOps, TEXT("UnitQuat4fNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_UnitQuat4fNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnitQuat4fNetSerializerConfig), 2929900539U) },
		{ FUnitQuat4dNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FUnitQuat4dNetSerializerConfig_Statics::NewStructOps, TEXT("UnitQuat4dNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_UnitQuat4dNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnitQuat4dNetSerializerConfig), 2412669129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_QuatNetSerializers_h_1869891196(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_QuatNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_QuatNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
