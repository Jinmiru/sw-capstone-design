// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementTransformColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementTransformColumns() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementLocalTransformColumn
static_assert(std::is_polymorphic<FTypedElementLocalTransformColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementLocalTransformColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn;
class UScriptStruct* FTypedElementLocalTransformColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementLocalTransformColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementLocalTransformColumn>()
{
	return FTypedElementLocalTransformColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores a local transform. \n */" },
		{ "DisplayName", "Local Transform" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementTransformColumns.h" },
		{ "ToolTip", "Column that stores a local transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "// Transform is not being intialized to avoid spending time on initialization when the\n// Transfrom will be updated the first and following ticks after it's creation. If this\n// isn't initialized at the correct time, then the sync from source or the true initialization\n// need to be moved to an earlier phase or group.\n" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementTransformColumns.h" },
		{ "ToolTip", "Transform is not being intialized to avoid spending time on initialization when the\nTransfrom will be updated the first and following ticks after it's creation. If this\nisn't initialized at the correct time, then the sync from source or the true initialization\nneed to be moved to an earlier phase or group." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementLocalTransformColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementLocalTransformColumn, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementLocalTransformColumn",
	Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::PropPointers),
	sizeof(FTypedElementLocalTransformColumn),
	alignof(FTypedElementLocalTransformColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementLocalTransformColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementLocalTransformColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::NewStructOps, TEXT("TypedElementLocalTransformColumn"), &Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementLocalTransformColumn), 4091121240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h_1889480075(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
