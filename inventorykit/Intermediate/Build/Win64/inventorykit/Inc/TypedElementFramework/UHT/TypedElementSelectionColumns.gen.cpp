// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementSelectionColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSelectionColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementSelectionColumn
static_assert(std::is_polymorphic<FTypedElementSelectionColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementSelectionColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSelectionColumn;
class UScriptStruct* FTypedElementSelectionColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSelectionColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSelectionColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSelectionColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSelectionColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSelectionColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSelectionColumn>()
{
	return FTypedElementSelectionColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column to represent that a row is selected\n */" },
		{ "DisplayName", "Selected" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSelectionColumns.h" },
		{ "ToolTip", "Column to represent that a row is selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionSet_MetaData[] = {
		{ "Comment", "// The selection set this row belongs to, empty = default selection set\n" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSelectionColumns.h" },
		{ "ToolTip", "The selection set this row belongs to, empty = default selection set" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectionSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSelectionColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementSelectionColumn, SelectionSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionSet_MetaData), NewProp_SelectionSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::NewProp_SelectionSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementSelectionColumn",
	Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::PropPointers),
	sizeof(FTypedElementSelectionColumn),
	alignof(FTypedElementSelectionColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSelectionColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSelectionColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSelectionColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementSelectionColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSelectionColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementSelectionColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::NewStructOps, TEXT("TypedElementSelectionColumn"), &Z_Registration_Info_UScriptStruct_TypedElementSelectionColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSelectionColumn), 725956040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSelectionColumns_h_45893729(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSelectionColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSelectionColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
