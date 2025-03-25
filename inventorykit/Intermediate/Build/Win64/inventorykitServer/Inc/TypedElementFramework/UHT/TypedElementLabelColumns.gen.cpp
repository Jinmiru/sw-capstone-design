// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementLabelColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementLabelColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLabelColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLabelHashColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementLabelColumn
static_assert(std::is_polymorphic<FTypedElementLabelColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementLabelColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementLabelColumn;
class UScriptStruct* FTypedElementLabelColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementLabelColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementLabelColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementLabelColumn>()
{
	return FTypedElementLabelColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores a label.\n */" },
		{ "DisplayName", "Label" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementLabelColumns.h" },
		{ "ToolTip", "Column that stores a label." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementLabelColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementLabelColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementLabelColumn, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementLabelColumn",
	Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::PropPointers),
	sizeof(FTypedElementLabelColumn),
	alignof(FTypedElementLabelColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLabelColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementLabelColumn

// Begin ScriptStruct FTypedElementLabelHashColumn
static_assert(std::is_polymorphic<FTypedElementLabelHashColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementLabelHashColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn;
class UScriptStruct* FTypedElementLabelHashColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementLabelHashColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementLabelHashColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementLabelHashColumn>()
{
	return FTypedElementLabelHashColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores the hash of a label. This is typically paired with FTypedElementLabelColumn, but \n * kept separate in order to iterate quickly over all hash values.\n */" },
		{ "DisplayName", "Label hash" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementLabelColumns.h" },
		{ "ToolTip", "Column that stores the hash of a label. This is typically paired with FTypedElementLabelColumn, but\nkept separate in order to iterate quickly over all hash values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelHash_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementLabelColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_LabelHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementLabelHashColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::NewProp_LabelHash = { "LabelHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementLabelHashColumn, LabelHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelHash_MetaData), NewProp_LabelHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::NewProp_LabelHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementLabelHashColumn",
	Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::PropPointers),
	sizeof(FTypedElementLabelHashColumn),
	alignof(FTypedElementLabelHashColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLabelHashColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementLabelHashColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementLabelColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementLabelColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::NewStructOps, TEXT("TypedElementLabelColumn"), &Z_Registration_Info_UScriptStruct_TypedElementLabelColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementLabelColumn), 2959092076U) },
		{ FTypedElementLabelHashColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::NewStructOps, TEXT("TypedElementLabelHashColumn"), &Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementLabelHashColumn), 340859815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementLabelColumns_h_2833894837(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementLabelColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementLabelColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
