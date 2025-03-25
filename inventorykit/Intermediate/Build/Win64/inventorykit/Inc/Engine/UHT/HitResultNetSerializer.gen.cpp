// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Engine/HitResultNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitResultNetSerializer() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResultNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FHitResultNetSerializerConfig
static_assert(std::is_polymorphic<FHitResultNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FHitResultNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig;
class UScriptStruct* FHitResultNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitResultNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HitResultNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHitResultNetSerializerConfig>()
{
	return FHitResultNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engine/HitResultNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitResultNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"HitResultNetSerializerConfig",
	nullptr,
	0,
	sizeof(FHitResultNetSerializerConfig),
	alignof(FHitResultNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHitResultNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FHitResultNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Engine_HitResultNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHitResultNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::NewStructOps, TEXT("HitResultNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitResultNetSerializerConfig), 2461011142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Engine_HitResultNetSerializer_h_3474636840(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Engine_HitResultNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Engine_HitResultNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
