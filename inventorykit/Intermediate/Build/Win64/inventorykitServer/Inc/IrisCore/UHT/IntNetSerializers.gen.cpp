// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/IntNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIntNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FIntNetSerializerConfig
static_assert(std::is_polymorphic<FIntNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FIntNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntNetSerializerConfig;
class UScriptStruct* FIntNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("IntNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FIntNetSerializerConfig>()
{
	return FIntNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Integer serializers\n" },
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntNetSerializers.h" },
		{ "ToolTip", "Integer serializers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"IntNetSerializerConfig",
	Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::PropPointers),
	sizeof(FIntNetSerializerConfig),
	alignof(FIntNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FIntNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIntNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::NewStructOps, TEXT("IntNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_IntNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntNetSerializerConfig), 1000124738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntNetSerializers_h_40286794(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
