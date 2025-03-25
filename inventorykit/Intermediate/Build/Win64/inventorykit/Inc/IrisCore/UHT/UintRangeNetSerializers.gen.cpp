// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/UintRangeNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUintRangeNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FUint8RangeNetSerializerConfig
static_assert(std::is_polymorphic<FUint8RangeNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FUint8RangeNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Uint8RangeNetSerializerConfig;
class UScriptStruct* FUint8RangeNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Uint8RangeNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Uint8RangeNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Uint8RangeNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Uint8RangeNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FUint8RangeNetSerializerConfig>()
{
	return FUint8RangeNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpperBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUint8RangeNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint8RangeNetSerializerConfig, LowerBound), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint8RangeNetSerializerConfig, UpperBound), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint8RangeNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Uint8RangeNetSerializerConfig",
	Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::PropPointers),
	sizeof(FUint8RangeNetSerializerConfig),
	alignof(FUint8RangeNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Uint8RangeNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Uint8RangeNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Uint8RangeNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FUint8RangeNetSerializerConfig

// Begin ScriptStruct FUint16RangeNetSerializerConfig
static_assert(std::is_polymorphic<FUint16RangeNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FUint16RangeNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Uint16RangeNetSerializerConfig;
class UScriptStruct* FUint16RangeNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Uint16RangeNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Uint16RangeNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Uint16RangeNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Uint16RangeNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FUint16RangeNetSerializerConfig>()
{
	return FUint16RangeNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_UpperBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUint16RangeNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint16RangeNetSerializerConfig, LowerBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint16RangeNetSerializerConfig, UpperBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint16RangeNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Uint16RangeNetSerializerConfig",
	Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::PropPointers),
	sizeof(FUint16RangeNetSerializerConfig),
	alignof(FUint16RangeNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Uint16RangeNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Uint16RangeNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Uint16RangeNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FUint16RangeNetSerializerConfig

// Begin ScriptStruct FUint32RangeNetSerializerConfig
static_assert(std::is_polymorphic<FUint32RangeNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FUint32RangeNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Uint32RangeNetSerializerConfig;
class UScriptStruct* FUint32RangeNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Uint32RangeNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Uint32RangeNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Uint32RangeNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Uint32RangeNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FUint32RangeNetSerializerConfig>()
{
	return FUint32RangeNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_UpperBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUint32RangeNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint32RangeNetSerializerConfig, LowerBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint32RangeNetSerializerConfig, UpperBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint32RangeNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Uint32RangeNetSerializerConfig",
	Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::PropPointers),
	sizeof(FUint32RangeNetSerializerConfig),
	alignof(FUint32RangeNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Uint32RangeNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Uint32RangeNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Uint32RangeNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FUint32RangeNetSerializerConfig

// Begin ScriptStruct FUint64RangeNetSerializerConfig
static_assert(std::is_polymorphic<FUint64RangeNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FUint64RangeNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Uint64RangeNetSerializerConfig;
class UScriptStruct* FUint64RangeNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Uint64RangeNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Uint64RangeNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Uint64RangeNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Uint64RangeNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FUint64RangeNetSerializerConfig>()
{
	return FUint64RangeNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/UintRangeNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_UpperBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUint64RangeNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint64RangeNetSerializerConfig, LowerBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint64RangeNetSerializerConfig, UpperBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUint64RangeNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::NewProp_BitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Uint64RangeNetSerializerConfig",
	Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::PropPointers),
	sizeof(FUint64RangeNetSerializerConfig),
	alignof(FUint64RangeNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Uint64RangeNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Uint64RangeNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Uint64RangeNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FUint64RangeNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_UintRangeNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUint8RangeNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FUint8RangeNetSerializerConfig_Statics::NewStructOps, TEXT("Uint8RangeNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Uint8RangeNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUint8RangeNetSerializerConfig), 3846808218U) },
		{ FUint16RangeNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FUint16RangeNetSerializerConfig_Statics::NewStructOps, TEXT("Uint16RangeNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Uint16RangeNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUint16RangeNetSerializerConfig), 1084681927U) },
		{ FUint32RangeNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FUint32RangeNetSerializerConfig_Statics::NewStructOps, TEXT("Uint32RangeNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Uint32RangeNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUint32RangeNetSerializerConfig), 3910135971U) },
		{ FUint64RangeNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FUint64RangeNetSerializerConfig_Statics::NewStructOps, TEXT("Uint64RangeNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Uint64RangeNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUint64RangeNetSerializerConfig), 25658443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_UintRangeNetSerializers_h_1669168910(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_UintRangeNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_UintRangeNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
