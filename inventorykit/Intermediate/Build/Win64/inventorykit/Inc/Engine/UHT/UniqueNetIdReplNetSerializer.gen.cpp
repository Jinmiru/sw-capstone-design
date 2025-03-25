// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/GameFramework/UniqueNetIdReplNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniqueNetIdReplNetSerializer() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FUniqueNetIdReplNetSerializerConfig
static_assert(std::is_polymorphic<FUniqueNetIdReplNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FUniqueNetIdReplNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerConfig;
class UScriptStruct* FUniqueNetIdReplNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("UniqueNetIdReplNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUniqueNetIdReplNetSerializerConfig>()
{
	return FUniqueNetIdReplNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/UniqueNetIdReplNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniqueNetIdReplNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"UniqueNetIdReplNetSerializerConfig",
	nullptr,
	0,
	sizeof(FUniqueNetIdReplNetSerializerConfig),
	alignof(FUniqueNetIdReplNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FUniqueNetIdReplNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_UniqueNetIdReplNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUniqueNetIdReplNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerConfig_Statics::NewStructOps, TEXT("UniqueNetIdReplNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_UniqueNetIdReplNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniqueNetIdReplNetSerializerConfig), 259041931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_UniqueNetIdReplNetSerializer_h_3486589691(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_UniqueNetIdReplNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_UniqueNetIdReplNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
