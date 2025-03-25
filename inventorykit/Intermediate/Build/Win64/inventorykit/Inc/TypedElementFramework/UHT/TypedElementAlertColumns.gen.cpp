// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementAlertColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementAlertColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UEnum* Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementAlertColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementChildAlertColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin Enum FTypedElementAlertColumnType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTypedElementAlertColumnType;
static UEnum* FTypedElementAlertColumnType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FTypedElementAlertColumnType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FTypedElementAlertColumnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("FTypedElementAlertColumnType"));
	}
	return Z_Registration_Info_UEnum_FTypedElementAlertColumnType.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UEnum* StaticEnum<FTypedElementAlertColumnType>()
{
	return FTypedElementAlertColumnType_StaticEnum();
}
struct Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error.Name", "FTypedElementAlertColumnType::Error" },
		{ "MAX.Name", "FTypedElementAlertColumnType::MAX" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementAlertColumns.h" },
		{ "Warning.Name", "FTypedElementAlertColumnType::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FTypedElementAlertColumnType::Error", (int64)FTypedElementAlertColumnType::Error },
		{ "FTypedElementAlertColumnType::Warning", (int64)FTypedElementAlertColumnType::Warning },
		{ "FTypedElementAlertColumnType::MAX", (int64)FTypedElementAlertColumnType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	"FTypedElementAlertColumnType",
	"FTypedElementAlertColumnType",
	Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType()
{
	if (!Z_Registration_Info_UEnum_FTypedElementAlertColumnType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTypedElementAlertColumnType.InnerSingleton, Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FTypedElementAlertColumnType.InnerSingleton;
}
// End Enum FTypedElementAlertColumnType

// Begin ScriptStruct FTypedElementAlertColumn
static_assert(std::is_polymorphic<FTypedElementAlertColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementAlertColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementAlertColumn;
class UScriptStruct* FTypedElementAlertColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementAlertColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementAlertColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementAlertColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementAlertColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementAlertColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementAlertColumn>()
{
	return FTypedElementAlertColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column containing information a user needs to be alerted of.\n */" },
		{ "DisplayName", "Alert" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementAlertColumns.h" },
		{ "ToolTip", "Column containing information a user needs to be alerted of." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementAlertColumns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlertType_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementAlertColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlertType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlertType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementAlertColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementAlertColumn, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::NewProp_AlertType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::NewProp_AlertType = { "AlertType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementAlertColumn, AlertType), Z_Construct_UEnum_TypedElementFramework_FTypedElementAlertColumnType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlertType_MetaData), NewProp_AlertType_MetaData) }; // 2283555490
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::NewProp_AlertType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::NewProp_AlertType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementAlertColumn",
	Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::PropPointers),
	sizeof(FTypedElementAlertColumn),
	alignof(FTypedElementAlertColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementAlertColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementAlertColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementAlertColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementAlertColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementAlertColumn

// Begin ScriptStruct FTypedElementChildAlertColumn
static_assert(std::is_polymorphic<FTypedElementChildAlertColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementChildAlertColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementChildAlertColumn;
class UScriptStruct* FTypedElementChildAlertColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementChildAlertColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementChildAlertColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementChildAlertColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementChildAlertColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementChildAlertColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementChildAlertColumn>()
{
	return FTypedElementChildAlertColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementChildAlertColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column containing a count for the number of alerts any child rows have.\n */" },
		{ "DisplayName", "Child alert" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementAlertColumns.h" },
		{ "ToolTip", "Column containing a count for the number of alerts any child rows have." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementChildAlertColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementChildAlertColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"TypedElementChildAlertColumn",
	nullptr,
	0,
	sizeof(FTypedElementChildAlertColumn),
	alignof(FTypedElementChildAlertColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementChildAlertColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementChildAlertColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementChildAlertColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementChildAlertColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementChildAlertColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementChildAlertColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementChildAlertColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementChildAlertColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementAlertColumns_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ FTypedElementAlertColumnType_StaticEnum, TEXT("FTypedElementAlertColumnType"), &Z_Registration_Info_UEnum_FTypedElementAlertColumnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2283555490U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementAlertColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics::NewStructOps, TEXT("TypedElementAlertColumn"), &Z_Registration_Info_UScriptStruct_TypedElementAlertColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementAlertColumn), 2452086837U) },
		{ FTypedElementChildAlertColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementChildAlertColumn_Statics::NewStructOps, TEXT("TypedElementChildAlertColumn"), &Z_Registration_Info_UScriptStruct_TypedElementChildAlertColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementChildAlertColumn), 3947700948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementAlertColumns_h_1448176470(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementAlertColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementAlertColumns_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementAlertColumns_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementAlertColumns_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
