// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayTags/Public/GameplayTagNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagNetSerializer() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References

// Begin ScriptStruct FGameplayTagNetSerializerConfig
static_assert(std::is_polymorphic<FGameplayTagNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FGameplayTagNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig;
class UScriptStruct* FGameplayTagNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagNetSerializerConfig>()
{
	return FGameplayTagNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"GameplayTagNetSerializerConfig",
	nullptr,
	0,
	sizeof(FGameplayTagNetSerializerConfig),
	alignof(FGameplayTagNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FGameplayTagNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayTagNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::NewStructOps, TEXT("GameplayTagNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagNetSerializerConfig), 4060795818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h_1101746679(TEXT("/Script/GameplayTags"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
