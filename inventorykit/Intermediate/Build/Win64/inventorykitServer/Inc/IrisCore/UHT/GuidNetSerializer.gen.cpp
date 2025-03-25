// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/GuidNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuidNetSerializer() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGuidNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FGuidNetSerializerConfig
static_assert(std::is_polymorphic<FGuidNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FGuidNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GuidNetSerializerConfig;
class UScriptStruct* FGuidNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GuidNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GuidNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuidNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("GuidNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GuidNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FGuidNetSerializerConfig>()
{
	return FGuidNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGuidNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/GuidNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuidNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuidNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"GuidNetSerializerConfig",
	nullptr,
	0,
	sizeof(FGuidNetSerializerConfig),
	alignof(FGuidNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuidNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGuidNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGuidNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_GuidNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GuidNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FGuidNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GuidNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FGuidNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_GuidNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGuidNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FGuidNetSerializerConfig_Statics::NewStructOps, TEXT("GuidNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_GuidNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGuidNetSerializerConfig), 1492707983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_GuidNetSerializer_h_2165757854(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_GuidNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_GuidNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
