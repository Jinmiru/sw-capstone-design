// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/RepMovementNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepMovementNetSerializer() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovementNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FRepMovementNetSerializerConfig
static_assert(std::is_polymorphic<FRepMovementNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FRepMovementNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepMovementNetSerializerConfig;
class UScriptStruct* FRepMovementNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepMovementNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepMovementNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepMovementNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RepMovementNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RepMovementNetSerializerConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRepMovementNetSerializerConfig>()
{
	return FRepMovementNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRepMovementNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RepMovementNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepMovementNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepMovementNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"RepMovementNetSerializerConfig",
	nullptr,
	0,
	sizeof(FRepMovementNetSerializerConfig),
	alignof(FRepMovementNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovementNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRepMovementNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRepMovementNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_RepMovementNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepMovementNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FRepMovementNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RepMovementNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FRepMovementNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_RepMovementNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRepMovementNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FRepMovementNetSerializerConfig_Statics::NewStructOps, TEXT("RepMovementNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_RepMovementNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepMovementNetSerializerConfig), 3765618577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_RepMovementNetSerializer_h_4114004868(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_RepMovementNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_RepMovementNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
