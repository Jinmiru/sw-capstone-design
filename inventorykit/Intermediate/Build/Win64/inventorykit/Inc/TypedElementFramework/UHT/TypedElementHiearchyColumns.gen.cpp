// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementHiearchyColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementHiearchyColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementParentColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementParentColumn
static_assert(std::is_polymorphic<FTypedElementParentColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementParentColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementParentColumn;
class UScriptStruct* FTypedElementParentColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementParentColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementParentColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementParentColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementParentColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementParentColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementParentColumn>()
{
	return FTypedElementParentColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementParentColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A reference to the direct hierarchical parent of this row.\n */" },
		{ "DisplayName", "Parent" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementHiearchyColumns.h" },
		{ "ToolTip", "A reference to the direct hierarchical parent of this row." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementParentColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementParentColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementParentColumn",
	nullptr,
	0,
	sizeof(FTypedElementParentColumn),
	alignof(FTypedElementParentColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementParentColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementParentColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementParentColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementParentColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementParentColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementParentColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementParentColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementParentColumn

// Begin ScriptStruct FTypedElementUnresolvedParentColumn
static_assert(std::is_polymorphic<FTypedElementUnresolvedParentColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementUnresolvedParentColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementUnresolvedParentColumn;
class UScriptStruct* FTypedElementUnresolvedParentColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementUnresolvedParentColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementUnresolvedParentColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementUnresolvedParentColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementUnresolvedParentColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementUnresolvedParentColumn>()
{
	return FTypedElementUnresolvedParentColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A reference to the direct hierarchical parent of this row which has not been resolved yet. The stored value will\n * be used to attempt to find the indexed row. This column can not be used to find rows that are not indexed.\n */" },
		{ "DisplayName", "Parent (Unresolved)" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementHiearchyColumns.h" },
		{ "ToolTip", "A reference to the direct hierarchical parent of this row which has not been resolved yet. The stored value will\nbe used to attempt to find the indexed row. This column can not be used to find rows that are not indexed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIdHash_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementHiearchyColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_ParentIdHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementUnresolvedParentColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::NewProp_ParentIdHash = { "ParentIdHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementUnresolvedParentColumn, ParentIdHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIdHash_MetaData), NewProp_ParentIdHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::NewProp_ParentIdHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementUnresolvedParentColumn",
	Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::PropPointers),
	sizeof(FTypedElementUnresolvedParentColumn),
	alignof(FTypedElementUnresolvedParentColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementUnresolvedParentColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementUnresolvedParentColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementUnresolvedParentColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementUnresolvedParentColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementHiearchyColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementParentColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementParentColumn_Statics::NewStructOps, TEXT("TypedElementParentColumn"), &Z_Registration_Info_UScriptStruct_TypedElementParentColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementParentColumn), 2989864644U) },
		{ FTypedElementUnresolvedParentColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementUnresolvedParentColumn_Statics::NewStructOps, TEXT("TypedElementUnresolvedParentColumn"), &Z_Registration_Info_UScriptStruct_TypedElementUnresolvedParentColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementUnresolvedParentColumn), 3987270327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementHiearchyColumns_h_1417094328(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementHiearchyColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementHiearchyColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
