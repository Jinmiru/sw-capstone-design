// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementTypeInfoColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementTypeInfoColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementClassTypeInfoColumn
static_assert(std::is_polymorphic<FTypedElementClassTypeInfoColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementClassTypeInfoColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementClassTypeInfoColumn;
class UScriptStruct* FTypedElementClassTypeInfoColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementClassTypeInfoColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementClassTypeInfoColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementClassTypeInfoColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementClassTypeInfoColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementClassTypeInfoColumn>()
{
	return FTypedElementClassTypeInfoColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores type information for classes.\n */" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementTypeInfoColumns.h" },
		{ "ToolTip", "Column that stores type information for classes." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementClassTypeInfoColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementClassTypeInfoColumn",
	nullptr,
	0,
	sizeof(FTypedElementClassTypeInfoColumn),
	alignof(FTypedElementClassTypeInfoColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementClassTypeInfoColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementClassTypeInfoColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementClassTypeInfoColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementClassTypeInfoColumn

// Begin ScriptStruct FTypedElementScriptStructTypeInfoColumn
static_assert(std::is_polymorphic<FTypedElementScriptStructTypeInfoColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementScriptStructTypeInfoColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementScriptStructTypeInfoColumn;
class UScriptStruct* FTypedElementScriptStructTypeInfoColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementScriptStructTypeInfoColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementScriptStructTypeInfoColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementScriptStructTypeInfoColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementScriptStructTypeInfoColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementScriptStructTypeInfoColumn>()
{
	return FTypedElementScriptStructTypeInfoColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores type information for structs.\n */" },
		{ "DisplayName", "ScriptStruct type info" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementTypeInfoColumns.h" },
		{ "ToolTip", "Column that stores type information for structs." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementScriptStructTypeInfoColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementScriptStructTypeInfoColumn",
	nullptr,
	0,
	sizeof(FTypedElementScriptStructTypeInfoColumn),
	alignof(FTypedElementScriptStructTypeInfoColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementScriptStructTypeInfoColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementScriptStructTypeInfoColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementScriptStructTypeInfoColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementScriptStructTypeInfoColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTypeInfoColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementClassTypeInfoColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn_Statics::NewStructOps, TEXT("TypedElementClassTypeInfoColumn"), &Z_Registration_Info_UScriptStruct_TypedElementClassTypeInfoColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementClassTypeInfoColumn), 138662572U) },
		{ FTypedElementScriptStructTypeInfoColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn_Statics::NewStructOps, TEXT("TypedElementScriptStructTypeInfoColumn"), &Z_Registration_Info_UScriptStruct_TypedElementScriptStructTypeInfoColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementScriptStructTypeInfoColumn), 3957127245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTypeInfoColumns_h_1650887568(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTypeInfoColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTypeInfoColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
