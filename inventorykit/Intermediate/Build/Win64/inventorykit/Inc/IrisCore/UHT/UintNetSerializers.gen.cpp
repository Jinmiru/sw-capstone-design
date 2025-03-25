// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/UintNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUintNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUintNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FUintNetSerializerConfig
static_assert(std::is_polymorphic<FUintNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FUintNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UintNetSerializerConfig;
class UScriptStruct* FUintNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UintNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UintNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUintNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("UintNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_UintNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FUintNetSerializerConfig>()
{
	return FUintNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Unsigned integer serializers\n" },
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintNetSerializers.h" },
		{ "ToolTip", "Unsigned integer serializers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUintNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUintNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"UintNetSerializerConfig",
	Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::PropPointers),
	sizeof(FUintNetSerializerConfig),
	alignof(FUintNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUintNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_UintNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UintNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UintNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FUintNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_UintNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUintNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FUintNetSerializerConfig_Statics::NewStructOps, TEXT("UintNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_UintNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUintNetSerializerConfig), 4259434138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_UintNetSerializers_h_3889594778(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_UintNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_UintNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
