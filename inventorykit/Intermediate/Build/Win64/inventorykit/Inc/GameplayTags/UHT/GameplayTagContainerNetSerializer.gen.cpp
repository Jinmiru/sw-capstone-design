// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayTags/Public/GameplayTagContainerNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagContainerNetSerializer() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References

// Begin ScriptStruct FGameplayTagContainerNetSerializerConfig
static_assert(std::is_polymorphic<FGameplayTagContainerNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FGameplayTagContainerNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig;
class UScriptStruct* FGameplayTagContainerNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagContainerNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagContainerNetSerializerConfig>()
{
	return FGameplayTagContainerNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagContainerNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagContainerNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"GameplayTagContainerNetSerializerConfig",
	nullptr,
	0,
	sizeof(FGameplayTagContainerNetSerializerConfig),
	alignof(FGameplayTagContainerNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FGameplayTagContainerNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayTagContainerNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::NewStructOps, TEXT("GameplayTagContainerNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagContainerNetSerializerConfig), 629050873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h_123960570(TEXT("/Script/GameplayTags"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
