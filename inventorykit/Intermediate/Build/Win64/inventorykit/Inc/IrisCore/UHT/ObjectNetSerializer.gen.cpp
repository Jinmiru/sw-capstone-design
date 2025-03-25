// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/ObjectNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectNetSerializer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FObjectNetSerializerConfig
static_assert(std::is_polymorphic<FObjectNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FObjectNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig;
class UScriptStruct* FObjectNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectNetSerializerConfig>()
{
	return FObjectNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/ObjectNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"ObjectNetSerializerConfig",
	nullptr,
	0,
	sizeof(FObjectNetSerializerConfig),
	alignof(FObjectNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FObjectNetSerializerConfig

// Begin ScriptStruct FWeakObjectNetSerializerConfig
static_assert(std::is_polymorphic<FWeakObjectNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FWeakObjectNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig;
class UScriptStruct* FWeakObjectNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("WeakObjectNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FWeakObjectNetSerializerConfig>()
{
	return FWeakObjectNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/ObjectNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeakObjectNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"WeakObjectNetSerializerConfig",
	nullptr,
	0,
	sizeof(FWeakObjectNetSerializerConfig),
	alignof(FWeakObjectNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FWeakObjectNetSerializerConfig

// Begin ScriptStruct FScriptInterfaceNetSerializerConfig
static_assert(std::is_polymorphic<FScriptInterfaceNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FScriptInterfaceNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig;
class UScriptStruct* FScriptInterfaceNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ScriptInterfaceNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FScriptInterfaceNetSerializerConfig>()
{
	return FScriptInterfaceNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/ObjectNetSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/ObjectNetSerializer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InterfaceClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptInterfaceNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::NewProp_InterfaceClass = { "InterfaceClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScriptInterfaceNetSerializerConfig, InterfaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceClass_MetaData), NewProp_InterfaceClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::NewProp_InterfaceClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"ScriptInterfaceNetSerializerConfig",
	Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::PropPointers),
	sizeof(FScriptInterfaceNetSerializerConfig),
	alignof(FScriptInterfaceNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FScriptInterfaceNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_ObjectNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FObjectNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::NewStructOps, TEXT("ObjectNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectNetSerializerConfig), 3751480811U) },
		{ FWeakObjectNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::NewStructOps, TEXT("WeakObjectNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeakObjectNetSerializerConfig), 494935970U) },
		{ FScriptInterfaceNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::NewStructOps, TEXT("ScriptInterfaceNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptInterfaceNetSerializerConfig), 4090124273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_ObjectNetSerializer_h_2696729400(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_ObjectNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_ObjectNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
