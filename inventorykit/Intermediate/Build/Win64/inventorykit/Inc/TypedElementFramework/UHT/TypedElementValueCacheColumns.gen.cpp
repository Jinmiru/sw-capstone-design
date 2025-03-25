// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementValueCacheColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementValueCacheColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementU32IntValueCacheColumn
static_assert(std::is_polymorphic<FTypedElementU32IntValueCacheColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementU32IntValueCacheColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn;
class UScriptStruct* FTypedElementU32IntValueCacheColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementU32IntValueCacheColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementU32IntValueCacheColumn>()
{
	return FTypedElementU32IntValueCacheColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that can be used to cache an unsigned 32-bit value in.\n */" },
		{ "DisplayName", "Uint32 value cache" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
		{ "ToolTip", "Column that can be used to cache an unsigned 32-bit value in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementU32IntValueCacheColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementU32IntValueCacheColumn, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementU32IntValueCacheColumn",
	Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::PropPointers),
	sizeof(FTypedElementU32IntValueCacheColumn),
	alignof(FTypedElementU32IntValueCacheColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementU32IntValueCacheColumn

// Begin ScriptStruct FTypedElementI32IntValueCacheColumn
static_assert(std::is_polymorphic<FTypedElementI32IntValueCacheColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementI32IntValueCacheColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn;
class UScriptStruct* FTypedElementI32IntValueCacheColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementI32IntValueCacheColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementI32IntValueCacheColumn>()
{
	return FTypedElementI32IntValueCacheColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that can be used to cache a signed 32-bit value in.\n */" },
		{ "DisplayName", "Int32 value cache" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
		{ "ToolTip", "Column that can be used to cache a signed 32-bit value in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementI32IntValueCacheColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementI32IntValueCacheColumn, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementI32IntValueCacheColumn",
	Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::PropPointers),
	sizeof(FTypedElementI32IntValueCacheColumn),
	alignof(FTypedElementI32IntValueCacheColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementI32IntValueCacheColumn

// Begin ScriptStruct FTypedElementU64IntValueCacheColumn
static_assert(std::is_polymorphic<FTypedElementU64IntValueCacheColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementU64IntValueCacheColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementU64IntValueCacheColumn;
class UScriptStruct* FTypedElementU64IntValueCacheColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementU64IntValueCacheColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementU64IntValueCacheColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementU64IntValueCacheColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementU64IntValueCacheColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementU64IntValueCacheColumn>()
{
	return FTypedElementU64IntValueCacheColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that can be used to cache an unsigned 64-bit value in.\n */" },
		{ "DisplayName", "Uint64 value cache" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
		{ "ToolTip", "Column that can be used to cache an unsigned 64-bit value in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementU64IntValueCacheColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementU64IntValueCacheColumn, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementU64IntValueCacheColumn",
	Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::PropPointers),
	sizeof(FTypedElementU64IntValueCacheColumn),
	alignof(FTypedElementU64IntValueCacheColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementU64IntValueCacheColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementU64IntValueCacheColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementU64IntValueCacheColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementU64IntValueCacheColumn

// Begin ScriptStruct FTypedElementI64IntValueCacheColumn
static_assert(std::is_polymorphic<FTypedElementI64IntValueCacheColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementI64IntValueCacheColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementI64IntValueCacheColumn;
class UScriptStruct* FTypedElementI64IntValueCacheColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementI64IntValueCacheColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementI64IntValueCacheColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementI64IntValueCacheColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementI64IntValueCacheColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementI64IntValueCacheColumn>()
{
	return FTypedElementI64IntValueCacheColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that can be used to cache a signed 64-bit value in.\n */" },
		{ "DisplayName", "Int64 value cache" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
		{ "ToolTip", "Column that can be used to cache a signed 64-bit value in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementI64IntValueCacheColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementI64IntValueCacheColumn, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementI64IntValueCacheColumn",
	Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::PropPointers),
	sizeof(FTypedElementI64IntValueCacheColumn),
	alignof(FTypedElementI64IntValueCacheColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementI64IntValueCacheColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementI64IntValueCacheColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementI64IntValueCacheColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementI64IntValueCacheColumn

// Begin ScriptStruct FTypedElementFloatValueCacheColumn
static_assert(std::is_polymorphic<FTypedElementFloatValueCacheColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementFloatValueCacheColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn;
class UScriptStruct* FTypedElementFloatValueCacheColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementFloatValueCacheColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementFloatValueCacheColumn>()
{
	return FTypedElementFloatValueCacheColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that can be used to cache a 32-bit floating point value in.\n */" },
		{ "DisplayName", "float value cache" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
		{ "ToolTip", "Column that can be used to cache a 32-bit floating point value in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementFloatValueCacheColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementFloatValueCacheColumn, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementFloatValueCacheColumn",
	Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::PropPointers),
	sizeof(FTypedElementFloatValueCacheColumn),
	alignof(FTypedElementFloatValueCacheColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementFloatValueCacheColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementU32IntValueCacheColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::NewStructOps, TEXT("TypedElementU32IntValueCacheColumn"), &Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementU32IntValueCacheColumn), 1557330844U) },
		{ FTypedElementI32IntValueCacheColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::NewStructOps, TEXT("TypedElementI32IntValueCacheColumn"), &Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementI32IntValueCacheColumn), 3758543885U) },
		{ FTypedElementU64IntValueCacheColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::NewStructOps, TEXT("TypedElementU64IntValueCacheColumn"), &Z_Registration_Info_UScriptStruct_TypedElementU64IntValueCacheColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementU64IntValueCacheColumn), 1364354420U) },
		{ FTypedElementI64IntValueCacheColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::NewStructOps, TEXT("TypedElementI64IntValueCacheColumn"), &Z_Registration_Info_UScriptStruct_TypedElementI64IntValueCacheColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementI64IntValueCacheColumn), 1504333743U) },
		{ FTypedElementFloatValueCacheColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::NewStructOps, TEXT("TypedElementFloatValueCacheColumn"), &Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementFloatValueCacheColumn), 174117288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h_3430591027(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
