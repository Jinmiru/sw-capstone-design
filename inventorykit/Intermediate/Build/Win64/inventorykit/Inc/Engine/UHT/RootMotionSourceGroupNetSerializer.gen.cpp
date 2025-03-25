// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/GameFramework/RootMotionSourceGroupNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionSourceGroupNetSerializer() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroupNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FRootMotionSourceGroupNetSerializerConfig
static_assert(std::is_polymorphic<FRootMotionSourceGroupNetSerializerConfig>() == std::is_polymorphic<FPolymorphicArrayStructNetSerializerConfig>(), "USTRUCT FRootMotionSourceGroupNetSerializerConfig cannot be polymorphic unless super FPolymorphicArrayStructNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSourceGroupNetSerializerConfig;
class UScriptStruct* FRootMotionSourceGroupNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSourceGroupNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSourceGroupNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceGroupNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSourceGroupNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSourceGroupNetSerializerConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSourceGroupNetSerializerConfig>()
{
	return FRootMotionSourceGroupNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionSourceGroupNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RootMotionSourceGroupNetSerializer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceGroupNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSourceGroupNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig,
	&NewStructOps,
	"RootMotionSourceGroupNetSerializerConfig",
	nullptr,
	0,
	sizeof(FRootMotionSourceGroupNetSerializerConfig),
	alignof(FRootMotionSourceGroupNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroupNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionSourceGroupNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroupNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSourceGroupNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSourceGroupNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSourceGroupNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSourceGroupNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FRootMotionSourceGroupNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_RootMotionSourceGroupNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRootMotionSourceGroupNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSourceGroupNetSerializerConfig_Statics::NewStructOps, TEXT("RootMotionSourceGroupNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_RootMotionSourceGroupNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSourceGroupNetSerializerConfig), 4106319207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_RootMotionSourceGroupNetSerializer_h_1177243656(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_RootMotionSourceGroupNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_RootMotionSourceGroupNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
