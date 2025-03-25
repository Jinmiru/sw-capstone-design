// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/IntRangeNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntRangeNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FInt8RangeNetSerializerConfig
static_assert(std::is_polymorphic<FInt8RangeNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FInt8RangeNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Int8RangeNetSerializerConfig;
class UScriptStruct* FInt8RangeNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Int8RangeNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Int8RangeNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Int8RangeNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Int8RangeNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FInt8RangeNetSerializerConfig>()
{
	return FInt8RangeNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Integer range serializers\n" },
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
		{ "ToolTip", "Integer range serializers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_UpperBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInt8RangeNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt8RangeNetSerializerConfig, LowerBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt8RangeNetSerializerConfig, UpperBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt8RangeNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Int8RangeNetSerializerConfig",
	Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::PropPointers),
	sizeof(FInt8RangeNetSerializerConfig),
	alignof(FInt8RangeNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Int8RangeNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Int8RangeNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Int8RangeNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FInt8RangeNetSerializerConfig

// Begin ScriptStruct FInt16RangeNetSerializerConfig
static_assert(std::is_polymorphic<FInt16RangeNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FInt16RangeNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Int16RangeNetSerializerConfig;
class UScriptStruct* FInt16RangeNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Int16RangeNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Int16RangeNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Int16RangeNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Int16RangeNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FInt16RangeNetSerializerConfig>()
{
	return FInt16RangeNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt16PropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_UpperBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInt16RangeNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt16RangeNetSerializerConfig, LowerBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt16RangeNetSerializerConfig, UpperBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt16RangeNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Int16RangeNetSerializerConfig",
	Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::PropPointers),
	sizeof(FInt16RangeNetSerializerConfig),
	alignof(FInt16RangeNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Int16RangeNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Int16RangeNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Int16RangeNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FInt16RangeNetSerializerConfig

// Begin ScriptStruct FInt32RangeNetSerializerConfig
static_assert(std::is_polymorphic<FInt32RangeNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FInt32RangeNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Int32RangeNetSerializerConfig;
class UScriptStruct* FInt32RangeNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Int32RangeNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Int32RangeNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Int32RangeNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Int32RangeNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FInt32RangeNetSerializerConfig>()
{
	return FInt32RangeNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpperBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInt32RangeNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt32RangeNetSerializerConfig, LowerBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt32RangeNetSerializerConfig, UpperBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt32RangeNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Int32RangeNetSerializerConfig",
	Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::PropPointers),
	sizeof(FInt32RangeNetSerializerConfig),
	alignof(FInt32RangeNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Int32RangeNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Int32RangeNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Int32RangeNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FInt32RangeNetSerializerConfig

// Begin ScriptStruct FInt64RangeNetSerializerConfig
static_assert(std::is_polymorphic<FInt64RangeNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FInt64RangeNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Int64RangeNetSerializerConfig;
class UScriptStruct* FInt64RangeNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Int64RangeNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Int64RangeNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Int64RangeNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Int64RangeNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FInt64RangeNetSerializerConfig>()
{
	return FInt64RangeNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntRangeNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_UpperBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInt64RangeNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt64RangeNetSerializerConfig, LowerBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt64RangeNetSerializerConfig, UpperBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt64RangeNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Int64RangeNetSerializerConfig",
	Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::PropPointers),
	sizeof(FInt64RangeNetSerializerConfig),
	alignof(FInt64RangeNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Int64RangeNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Int64RangeNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Int64RangeNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FInt64RangeNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntRangeNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInt8RangeNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FInt8RangeNetSerializerConfig_Statics::NewStructOps, TEXT("Int8RangeNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Int8RangeNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInt8RangeNetSerializerConfig), 661112960U) },
		{ FInt16RangeNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FInt16RangeNetSerializerConfig_Statics::NewStructOps, TEXT("Int16RangeNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Int16RangeNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInt16RangeNetSerializerConfig), 217194630U) },
		{ FInt32RangeNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FInt32RangeNetSerializerConfig_Statics::NewStructOps, TEXT("Int32RangeNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Int32RangeNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInt32RangeNetSerializerConfig), 2128410455U) },
		{ FInt64RangeNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FInt64RangeNetSerializerConfig_Statics::NewStructOps, TEXT("Int64RangeNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Int64RangeNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInt64RangeNetSerializerConfig), 3754932048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntRangeNetSerializers_h_3479098(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntRangeNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntRangeNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
