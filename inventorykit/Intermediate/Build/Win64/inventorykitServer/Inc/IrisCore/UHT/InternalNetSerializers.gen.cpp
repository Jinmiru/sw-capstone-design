// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Private/Iris/Serialization/InternalNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternalNetSerializers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FBitfieldNetSerializerConfig
static_assert(std::is_polymorphic<FBitfieldNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FBitfieldNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig;
class UScriptStruct* FBitfieldNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("BitfieldNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FBitfieldNetSerializerConfig>()
{
	return FBitfieldNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Bitfield property\n" },
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
		{ "ToolTip", "Bitfield property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitMask_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBitfieldNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::NewProp_BitMask = { "BitMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBitfieldNetSerializerConfig, BitMask), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitMask_MetaData), NewProp_BitMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::NewProp_BitMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"BitfieldNetSerializerConfig",
	Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::PropPointers),
	sizeof(FBitfieldNetSerializerConfig),
	alignof(FBitfieldNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FBitfieldNetSerializerConfig

// Begin ScriptStruct FArrayPropertyNetSerializerConfig
static_assert(std::is_polymorphic<FArrayPropertyNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FArrayPropertyNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig;
class UScriptStruct* FArrayPropertyNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ArrayPropertyNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FArrayPropertyNetSerializerConfig>()
{
	return FArrayPropertyNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Array property\n" },
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
		{ "ToolTip", "Array property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxElementCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementCountBitCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_MaxElementCount;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_ElementCountBitCount;
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayPropertyNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_MaxElementCount = { "MaxElementCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArrayPropertyNetSerializerConfig, MaxElementCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxElementCount_MetaData), NewProp_MaxElementCount_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_ElementCountBitCount = { "ElementCountBitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArrayPropertyNetSerializerConfig, ElementCountBitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementCountBitCount_MetaData), NewProp_ElementCountBitCount_MetaData) };
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArrayPropertyNetSerializerConfig, Property), &FArrayProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_MaxElementCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_ElementCountBitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_Property,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"ArrayPropertyNetSerializerConfig",
	Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::PropPointers),
	sizeof(FArrayPropertyNetSerializerConfig),
	alignof(FArrayPropertyNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FArrayPropertyNetSerializerConfig

// Begin ScriptStruct FLastResortPropertyNetSerializerConfig
static_assert(std::is_polymorphic<FLastResortPropertyNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FLastResortPropertyNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig;
class UScriptStruct* FLastResortPropertyNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("LastResortPropertyNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FLastResortPropertyNetSerializerConfig>()
{
	return FLastResortPropertyNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Any property that doesn't have any other option will end up using this.\n * As the name suggests it's a last resort.\n * - Cannot support delta compression in a meaningful way.\n * - Must allocate memory to store quantized state.\n */" },
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
		{ "ToolTip", "Any property that doesn't have any other option will end up using this.\nAs the name suggests it's a last resort.\n- Cannot support delta compression in a meaningful way.\n- Must allocate memory to store quantized state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedObjectReferences_MetaData[] = {
		{ "Comment", "// Value used to sanity check incoming data so that we do not over-allocate dynamic memory\n" },
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
		{ "ToolTip", "Value used to sanity check incoming data so that we do not over-allocate dynamic memory" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxAllowedObjectReferences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLastResortPropertyNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLastResortPropertyNetSerializerConfig, Property), &FProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewProp_MaxAllowedObjectReferences = { "MaxAllowedObjectReferences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLastResortPropertyNetSerializerConfig, MaxAllowedObjectReferences), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedObjectReferences_MetaData), NewProp_MaxAllowedObjectReferences_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewProp_MaxAllowedObjectReferences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"LastResortPropertyNetSerializerConfig",
	Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::PropPointers),
	sizeof(FLastResortPropertyNetSerializerConfig),
	alignof(FLastResortPropertyNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FLastResortPropertyNetSerializerConfig

// Begin ScriptStruct FNetRoleNetSerializerConfig
static_assert(std::is_polymorphic<FNetRoleNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FNetRoleNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig;
class UScriptStruct* FNetRoleNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NetRoleNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNetRoleNetSerializerConfig>()
{
	return FNetRoleNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// ENetRole. With role swapping at deserialization\n" },
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
		{ "ToolTip", "ENetRole. With role swapping at deserialization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeInternalOffsetToOtherRole_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeExternalOffsetToOtherRole_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutonomousProxyValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedProxyValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RelativeInternalOffsetToOtherRole;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RelativeExternalOffsetToOtherRole;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpperBound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutonomousProxyValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimulatedProxyValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetRoleNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeInternalOffsetToOtherRole = { "RelativeInternalOffsetToOtherRole", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetRoleNetSerializerConfig, RelativeInternalOffsetToOtherRole), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeInternalOffsetToOtherRole_MetaData), NewProp_RelativeInternalOffsetToOtherRole_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeExternalOffsetToOtherRole = { "RelativeExternalOffsetToOtherRole", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetRoleNetSerializerConfig, RelativeExternalOffsetToOtherRole), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeExternalOffsetToOtherRole_MetaData), NewProp_RelativeExternalOffsetToOtherRole_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetRoleNetSerializerConfig, LowerBound), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetRoleNetSerializerConfig, UpperBound), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetRoleNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_AutonomousProxyValue = { "AutonomousProxyValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetRoleNetSerializerConfig, AutonomousProxyValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutonomousProxyValue_MetaData), NewProp_AutonomousProxyValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_SimulatedProxyValue = { "SimulatedProxyValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetRoleNetSerializerConfig, SimulatedProxyValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulatedProxyValue_MetaData), NewProp_SimulatedProxyValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeInternalOffsetToOtherRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeExternalOffsetToOtherRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_BitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_AutonomousProxyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_SimulatedProxyValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"NetRoleNetSerializerConfig",
	Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::PropPointers),
	sizeof(FNetRoleNetSerializerConfig),
	alignof(FNetRoleNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FNetRoleNetSerializerConfig

// Begin ScriptStruct FFieldPathNetSerializerConfig
static_assert(std::is_polymorphic<FFieldPathNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FFieldPathNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig;
class UScriptStruct* FFieldPathNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("FieldPathNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FFieldPathNetSerializerConfig>()
{
	return FFieldPathNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldPathNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFieldPathNetSerializerConfig, Property), &FProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::NewProp_Property,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"FieldPathNetSerializerConfig",
	Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::PropPointers),
	sizeof(FFieldPathNetSerializerConfig),
	alignof(FFieldPathNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FFieldPathNetSerializerConfig

// Begin ScriptStruct FFieldPathNetSerializerSerializationHelper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper;
class UScriptStruct* FFieldPathNetSerializerSerializationHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("FieldPathNetSerializerSerializationHelper"));
	}
	return Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FFieldPathNetSerializerSerializationHelper>()
{
	return FFieldPathNetSerializerSerializationHelper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldPathNetSerializerSerializationHelper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFieldPathNetSerializerSerializationHelper, Owner), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath_Inner = { "PropertyPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFieldPathNetSerializerSerializationHelper, PropertyPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyPath_MetaData), NewProp_PropertyPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"FieldPathNetSerializerSerializationHelper",
	Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::PropPointers),
	sizeof(FFieldPathNetSerializerSerializationHelper),
	alignof(FFieldPathNetSerializerSerializationHelper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper()
{
	if (!Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.InnerSingleton, Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.InnerSingleton;
}
// End ScriptStruct FFieldPathNetSerializerSerializationHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_Serialization_InternalNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBitfieldNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::NewStructOps, TEXT("BitfieldNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBitfieldNetSerializerConfig), 1557992227U) },
		{ FArrayPropertyNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewStructOps, TEXT("ArrayPropertyNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArrayPropertyNetSerializerConfig), 4241048096U) },
		{ FLastResortPropertyNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewStructOps, TEXT("LastResortPropertyNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLastResortPropertyNetSerializerConfig), 756258270U) },
		{ FNetRoleNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewStructOps, TEXT("NetRoleNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetRoleNetSerializerConfig), 2493987803U) },
		{ FFieldPathNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::NewStructOps, TEXT("FieldPathNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFieldPathNetSerializerConfig), 1513430876U) },
		{ FFieldPathNetSerializerSerializationHelper::StaticStruct, Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewStructOps, TEXT("FieldPathNetSerializerSerializationHelper"), &Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFieldPathNetSerializerSerializationHelper), 1325000140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_Serialization_InternalNetSerializers_h_2199030747(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_Serialization_InternalNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_Serialization_InternalNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
