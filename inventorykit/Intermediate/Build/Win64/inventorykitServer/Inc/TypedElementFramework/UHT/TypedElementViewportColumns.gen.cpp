// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementViewportColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementViewportColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementViewportColorColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementViewportColorColumn
static_assert(std::is_polymorphic<FTypedElementViewportColorColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementViewportColorColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementViewportColorColumn;
class UScriptStruct* FTypedElementViewportColorColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementViewportColorColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementViewportColorColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementViewportColorColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementViewportColorColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementViewportColorColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementViewportColorColumn>()
{
	return FTypedElementViewportColorColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column to hold the color that the object is outlined with when selected in the viewport\n */" },
		{ "DisplayName", "Viewport Color" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementViewportColumns.h" },
		{ "ToolTip", "Column to hold the color that the object is outlined with when selected in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionOutlineColorIndex_MetaData[] = {
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementViewportColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionOutlineColorIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementViewportColorColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::NewProp_SelectionOutlineColorIndex = { "SelectionOutlineColorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementViewportColorColumn, SelectionOutlineColorIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionOutlineColorIndex_MetaData), NewProp_SelectionOutlineColorIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::NewProp_SelectionOutlineColorIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementViewportColorColumn",
	Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::PropPointers),
	sizeof(FTypedElementViewportColorColumn),
	alignof(FTypedElementViewportColorColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementViewportColorColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementViewportColorColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementViewportColorColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementViewportColorColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementViewportColorColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementViewportColorColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementViewportColorColumn_Statics::NewStructOps, TEXT("TypedElementViewportColorColumn"), &Z_Registration_Info_UScriptStruct_TypedElementViewportColorColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementViewportColorColumn), 1630898950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h_2573465870(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
