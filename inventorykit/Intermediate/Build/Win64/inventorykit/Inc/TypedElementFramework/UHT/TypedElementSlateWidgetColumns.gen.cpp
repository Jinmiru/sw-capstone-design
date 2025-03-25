// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementSlateWidgetColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSlateWidgetColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementSlateWidgetReferenceColumn
static_assert(std::is_polymorphic<FTypedElementSlateWidgetReferenceColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementSlateWidgetReferenceColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn;
class UScriptStruct* FTypedElementSlateWidgetReferenceColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSlateWidgetReferenceColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSlateWidgetReferenceColumn>()
{
	return FTypedElementSlateWidgetReferenceColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores a widget reference in the data storage. At the start of processing any\n * columns that are not pointing to a valid widget will be removed. If the\n * FTypedElementSlateWidgetDeletesRowTag is found then the entire row will\n * be deleted.\n */" },
		{ "DisplayName", "Slate widget reference" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "ToolTip", "Stores a widget reference in the data storage. At the start of processing any\ncolumns that are not pointing to a valid widget will be removed. If the\nFTypedElementSlateWidgetDeletesRowTag is found then the entire row will\nbe deleted." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSlateWidgetReferenceColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementSlateWidgetReferenceColumn",
	nullptr,
	0,
	sizeof(FTypedElementSlateWidgetReferenceColumn),
	alignof(FTypedElementSlateWidgetReferenceColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementSlateWidgetReferenceColumn

// Begin ScriptStruct FTypedElementSlateWidgetReferenceDeletesRowTag
static_assert(std::is_polymorphic<FTypedElementSlateWidgetReferenceDeletesRowTag>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FTypedElementSlateWidgetReferenceDeletesRowTag cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag;
class UScriptStruct* FTypedElementSlateWidgetReferenceDeletesRowTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSlateWidgetReferenceDeletesRowTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSlateWidgetReferenceDeletesRowTag>()
{
	return FTypedElementSlateWidgetReferenceDeletesRowTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to indicate that the entire row needs to be deleted when the widget in\n * FTypedElementSlateWidgetReferenceColumn is no longer valid, otherwise only\n * the column will be removed.\n */" },
		{ "DisplayName", "Slate widget reference deletes row" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "ToolTip", "Tag to indicate that the entire row needs to be deleted when the widget in\nFTypedElementSlateWidgetReferenceColumn is no longer valid, otherwise only\nthe column will be removed." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSlateWidgetReferenceDeletesRowTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
	&NewStructOps,
	"TypedElementSlateWidgetReferenceDeletesRowTag",
	nullptr,
	0,
	sizeof(FTypedElementSlateWidgetReferenceDeletesRowTag),
	alignof(FTypedElementSlateWidgetReferenceDeletesRowTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.InnerSingleton;
}
// End ScriptStruct FTypedElementSlateWidgetReferenceDeletesRowTag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementSlateWidgetReferenceColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::NewStructOps, TEXT("TypedElementSlateWidgetReferenceColumn"), &Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSlateWidgetReferenceColumn), 3153780760U) },
		{ FTypedElementSlateWidgetReferenceDeletesRowTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::NewStructOps, TEXT("TypedElementSlateWidgetReferenceDeletesRowTag"), &Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSlateWidgetReferenceDeletesRowTag), 3221759086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_580996895(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
