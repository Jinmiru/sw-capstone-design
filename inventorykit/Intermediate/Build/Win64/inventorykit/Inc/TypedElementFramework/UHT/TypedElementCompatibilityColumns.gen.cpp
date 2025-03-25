// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementCompatibilityColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementCompatibilityColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementUObjectColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementUObjectColumn
static_assert(std::is_polymorphic<FTypedElementUObjectColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementUObjectColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn;
class UScriptStruct* FTypedElementUObjectColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementUObjectColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementUObjectColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementUObjectColumn>()
{
	return FTypedElementUObjectColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column containing a non-owning reference to a UObject.\n */" },
		{ "DisplayName", "UObject reference" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "Column containing a non-owning reference to a UObject." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementUObjectColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementUObjectColumn",
	nullptr,
	0,
	sizeof(FTypedElementUObjectColumn),
	alignof(FTypedElementUObjectColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementUObjectColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementUObjectColumn

// Begin ScriptStruct FTypedElementExternalObjectColumn
static_assert(std::is_polymorphic<FTypedElementExternalObjectColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementExternalObjectColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn;
class UScriptStruct* FTypedElementExternalObjectColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementExternalObjectColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementExternalObjectColumn>()
{
	return FTypedElementExternalObjectColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column containing a non-owning reference to an arbitrary object. It's strongly recommended\n * to also add a FTypedElementScriptStructTypeInfoColumn to make sure the type can be safely\n * recovered.\n */" },
		{ "DisplayName", "External object reference" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "Column containing a non-owning reference to an arbitrary object. It's strongly recommended\nto also add a FTypedElementScriptStructTypeInfoColumn to make sure the type can be safely\nrecovered." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementExternalObjectColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementExternalObjectColumn",
	nullptr,
	0,
	sizeof(FTypedElementExternalObjectColumn),
	alignof(FTypedElementExternalObjectColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementExternalObjectColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementCompatibilityColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementUObjectColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics::NewStructOps, TEXT("TypedElementUObjectColumn"), &Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementUObjectColumn), 3036875322U) },
		{ FTypedElementExternalObjectColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics::NewStructOps, TEXT("TypedElementExternalObjectColumn"), &Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementExternalObjectColumn), 4145902492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementCompatibilityColumns_h_2357488357(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementCompatibilityColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementCompatibilityColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
