// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementPackageColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementPackageColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackagePathColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackageReference();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackageUnresolvedReference();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementPackageUnresolvedReference
static_assert(std::is_polymorphic<FTypedElementPackageUnresolvedReference>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementPackageUnresolvedReference cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementPackageUnresolvedReference;
class UScriptStruct* FTypedElementPackageUnresolvedReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackageUnresolvedReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementPackageUnresolvedReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementPackageUnresolvedReference, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementPackageUnresolvedReference"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackageUnresolvedReference.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementPackageUnresolvedReference>()
{
	return FTypedElementPackageUnresolvedReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementPackageUnresolvedReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A package reference column that has not yet been resolved to reference a package.\n */" },
		{ "DisplayName", "Unresolved package path reference" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementPackageColumns.h" },
		{ "ToolTip", "A package reference column that has not yet been resolved to reference a package." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementPackageUnresolvedReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementPackageUnresolvedReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementPackageUnresolvedReference",
	nullptr,
	0,
	sizeof(FTypedElementPackageUnresolvedReference),
	alignof(FTypedElementPackageUnresolvedReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPackageUnresolvedReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementPackageUnresolvedReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackageUnresolvedReference()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackageUnresolvedReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementPackageUnresolvedReference.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementPackageUnresolvedReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackageUnresolvedReference.InnerSingleton;
}
// End ScriptStruct FTypedElementPackageUnresolvedReference

// Begin ScriptStruct FTypedElementPackageReference
static_assert(std::is_polymorphic<FTypedElementPackageReference>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementPackageReference cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementPackageReference;
class UScriptStruct* FTypedElementPackageReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackageReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementPackageReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementPackageReference, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementPackageReference"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackageReference.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementPackageReference>()
{
	return FTypedElementPackageReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementPackageReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that references a row in the table that provides package and source control information.\n */" },
		{ "DisplayName", "Package path reference" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementPackageColumns.h" },
		{ "ToolTip", "Column that references a row in the table that provides package and source control information." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementPackageReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementPackageReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementPackageReference",
	nullptr,
	0,
	sizeof(FTypedElementPackageReference),
	alignof(FTypedElementPackageReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPackageReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementPackageReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackageReference()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackageReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementPackageReference.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementPackageReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackageReference.InnerSingleton;
}
// End ScriptStruct FTypedElementPackageReference

// Begin ScriptStruct FTypedElementPackagePathColumn
static_assert(std::is_polymorphic<FTypedElementPackagePathColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementPackagePathColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn;
class UScriptStruct* FTypedElementPackagePathColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementPackagePathColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementPackagePathColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementPackagePathColumn>()
{
	return FTypedElementPackagePathColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores the path of a package.\n */" },
		{ "DisplayName", "Package path" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementPackageColumns.h" },
		{ "ToolTip", "Column that stores the path of a package." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementPackageColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementPackagePathColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementPackagePathColumn, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementPackagePathColumn",
	Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::PropPointers),
	sizeof(FTypedElementPackagePathColumn),
	alignof(FTypedElementPackagePathColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackagePathColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementPackagePathColumn

// Begin ScriptStruct FTypedElementPackageLoadedPathColumn
static_assert(std::is_polymorphic<FTypedElementPackageLoadedPathColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementPackageLoadedPathColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn;
class UScriptStruct* FTypedElementPackageLoadedPathColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementPackageLoadedPathColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementPackageLoadedPathColumn>()
{
	return FTypedElementPackageLoadedPathColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores the full loading path to a package.\n */" },
		{ "DisplayName", "Package loaded path" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementPackageColumns.h" },
		{ "ToolTip", "Column that stores the full loading path to a package." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementPackageLoadedPathColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementPackageLoadedPathColumn",
	nullptr,
	0,
	sizeof(FTypedElementPackageLoadedPathColumn),
	alignof(FTypedElementPackageLoadedPathColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementPackageLoadedPathColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementPackageColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementPackageUnresolvedReference::StaticStruct, Z_Construct_UScriptStruct_FTypedElementPackageUnresolvedReference_Statics::NewStructOps, TEXT("TypedElementPackageUnresolvedReference"), &Z_Registration_Info_UScriptStruct_TypedElementPackageUnresolvedReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementPackageUnresolvedReference), 2696896400U) },
		{ FTypedElementPackageReference::StaticStruct, Z_Construct_UScriptStruct_FTypedElementPackageReference_Statics::NewStructOps, TEXT("TypedElementPackageReference"), &Z_Registration_Info_UScriptStruct_TypedElementPackageReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementPackageReference), 285177558U) },
		{ FTypedElementPackagePathColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::NewStructOps, TEXT("TypedElementPackagePathColumn"), &Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementPackagePathColumn), 2163982802U) },
		{ FTypedElementPackageLoadedPathColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::NewStructOps, TEXT("TypedElementPackageLoadedPathColumn"), &Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementPackageLoadedPathColumn), 854922000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementPackageColumns_h_204865881(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementPackageColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementPackageColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
