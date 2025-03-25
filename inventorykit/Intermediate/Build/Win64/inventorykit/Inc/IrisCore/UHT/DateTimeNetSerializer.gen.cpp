// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/DateTimeNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateTimeNetSerializer() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FDateTimeNetSerializerConfig
static_assert(std::is_polymorphic<FDateTimeNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FDateTimeNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DateTimeNetSerializerConfig;
class UScriptStruct* FDateTimeNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DateTimeNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DateTimeNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("DateTimeNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_DateTimeNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FDateTimeNetSerializerConfig>()
{
	return FDateTimeNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/DateTimeNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDateTimeNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"DateTimeNetSerializerConfig",
	nullptr,
	0,
	sizeof(FDateTimeNetSerializerConfig),
	alignof(FDateTimeNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_DateTimeNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DateTimeNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DateTimeNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FDateTimeNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_DateTimeNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDateTimeNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FDateTimeNetSerializerConfig_Statics::NewStructOps, TEXT("DateTimeNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_DateTimeNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDateTimeNetSerializerConfig), 292482972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_DateTimeNetSerializer_h_1422762223(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_DateTimeNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_DateTimeNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
