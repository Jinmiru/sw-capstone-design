// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementOverrideColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementOverrideColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FObjectOverrideColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FObjectOverrideColumn
static_assert(std::is_polymorphic<FObjectOverrideColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FObjectOverrideColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectOverrideColumn;
class UScriptStruct* FObjectOverrideColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectOverrideColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectOverrideColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectOverrideColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("ObjectOverrideColumn"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectOverrideColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FObjectOverrideColumn>()
{
	return FObjectOverrideColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectOverrideColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Whether the object has an override on the base\n" },
		{ "DisplayName", "Override" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementOverrideColumns.h" },
		{ "ToolTip", "Whether the object has an override on the base" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectOverrideColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectOverrideColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"ObjectOverrideColumn",
	nullptr,
	0,
	sizeof(FObjectOverrideColumn),
	alignof(FObjectOverrideColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectOverrideColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectOverrideColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectOverrideColumn()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectOverrideColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectOverrideColumn.InnerSingleton, Z_Construct_UScriptStruct_FObjectOverrideColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectOverrideColumn.InnerSingleton;
}
// End ScriptStruct FObjectOverrideColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementOverrideColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FObjectOverrideColumn::StaticStruct, Z_Construct_UScriptStruct_FObjectOverrideColumn_Statics::NewStructOps, TEXT("ObjectOverrideColumn"), &Z_Registration_Info_UScriptStruct_ObjectOverrideColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectOverrideColumn), 4075276240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementOverrideColumns_h_4137169629(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementOverrideColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementOverrideColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
