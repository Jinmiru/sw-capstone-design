// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Public/ToolMenuMisc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuMisc() {}

// Begin Cross Module References
TOOLMENUS_API UEnum* Z_Construct_UEnum_ToolMenus_EToolMenuInsertType();
TOOLMENUS_API UEnum* Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuInsert();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuStringCommand();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin Enum EToolMenuStringCommandType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolMenuStringCommandType;
static UEnum* EToolMenuStringCommandType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EToolMenuStringCommandType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EToolMenuStringCommandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("EToolMenuStringCommandType"));
	}
	return Z_Registration_Info_UEnum_EToolMenuStringCommandType.OuterSingleton;
}
template<> TOOLMENUS_API UEnum* StaticEnum<EToolMenuStringCommandType>()
{
	return EToolMenuStringCommandType_StaticEnum();
}
struct Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Command.Name", "EToolMenuStringCommandType::Command" },
		{ "Custom.Name", "EToolMenuStringCommandType::Custom" },
		{ "ModuleRelativePath", "Public/ToolMenuMisc.h" },
		{ "Python.Name", "EToolMenuStringCommandType::Python" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EToolMenuStringCommandType::Command", (int64)EToolMenuStringCommandType::Command },
		{ "EToolMenuStringCommandType::Python", (int64)EToolMenuStringCommandType::Python },
		{ "EToolMenuStringCommandType::Custom", (int64)EToolMenuStringCommandType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	"EToolMenuStringCommandType",
	"EToolMenuStringCommandType",
	Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType()
{
	if (!Z_Registration_Info_UEnum_EToolMenuStringCommandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolMenuStringCommandType.InnerSingleton, Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EToolMenuStringCommandType.InnerSingleton;
}
// End Enum EToolMenuStringCommandType

// Begin ScriptStruct FToolMenuStringCommand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuStringCommand;
class UScriptStruct* FToolMenuStringCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuStringCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuStringCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuStringCommand, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuStringCommand"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuStringCommand.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuStringCommand>()
{
	return FToolMenuStringCommand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/ToolMenus.ToolMenuEntryExtensions.BreakStringCommand" },
		{ "HasNativeMake", "/Script/ToolMenus.ToolMenuEntryExtensions.MakeStringCommand" },
		{ "ModuleRelativePath", "Public/ToolMenuMisc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "// Which command handler to use\n" },
		{ "ModuleRelativePath", "Public/ToolMenuMisc.h" },
		{ "ToolTip", "Which command handler to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomType_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "// Which command handler to use when type is custom\n" },
		{ "ModuleRelativePath", "Public/ToolMenuMisc.h" },
		{ "ToolTip", "Which command handler to use when type is custom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "// String to pass to command handler\n" },
		{ "ModuleRelativePath", "Public/ToolMenuMisc.h" },
		{ "ToolTip", "String to pass to command handler" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuStringCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuStringCommand, Type), Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2778814419
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::NewProp_CustomType = { "CustomType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuStringCommand, CustomType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomType_MetaData), NewProp_CustomType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuStringCommand, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::NewProp_CustomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ToolMenuStringCommand",
	Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::PropPointers),
	sizeof(FToolMenuStringCommand),
	alignof(FToolMenuStringCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolMenuStringCommand()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuStringCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuStringCommand.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuStringCommand.InnerSingleton;
}
// End ScriptStruct FToolMenuStringCommand

// Begin Enum EToolMenuInsertType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolMenuInsertType;
static UEnum* EToolMenuInsertType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EToolMenuInsertType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EToolMenuInsertType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ToolMenus_EToolMenuInsertType, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("EToolMenuInsertType"));
	}
	return Z_Registration_Info_UEnum_EToolMenuInsertType.OuterSingleton;
}
template<> TOOLMENUS_API UEnum* StaticEnum<EToolMenuInsertType>()
{
	return EToolMenuInsertType_StaticEnum();
}
struct Z_Construct_UEnum_ToolMenus_EToolMenuInsertType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "After.Name", "EToolMenuInsertType::After" },
		{ "Before.Name", "EToolMenuInsertType::Before" },
		{ "BlueprintType", "true" },
		{ "Default.Name", "EToolMenuInsertType::Default" },
		{ "First.Name", "EToolMenuInsertType::First" },
		{ "ModuleRelativePath", "Public/ToolMenuMisc.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EToolMenuInsertType::Default", (int64)EToolMenuInsertType::Default },
		{ "EToolMenuInsertType::Before", (int64)EToolMenuInsertType::Before },
		{ "EToolMenuInsertType::After", (int64)EToolMenuInsertType::After },
		{ "EToolMenuInsertType::First", (int64)EToolMenuInsertType::First },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ToolMenus_EToolMenuInsertType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	"EToolMenuInsertType",
	"EToolMenuInsertType",
	Z_Construct_UEnum_ToolMenus_EToolMenuInsertType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ToolMenus_EToolMenuInsertType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ToolMenus_EToolMenuInsertType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ToolMenus_EToolMenuInsertType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ToolMenus_EToolMenuInsertType()
{
	if (!Z_Registration_Info_UEnum_EToolMenuInsertType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolMenuInsertType.InnerSingleton, Z_Construct_UEnum_ToolMenus_EToolMenuInsertType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EToolMenuInsertType.InnerSingleton;
}
// End Enum EToolMenuInsertType

// Begin ScriptStruct FToolMenuInsert
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuInsert;
class UScriptStruct* FToolMenuInsert::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuInsert.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuInsert.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuInsert, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuInsert"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuInsert.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuInsert>()
{
	return FToolMenuInsert::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolMenuInsert_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuMisc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "// Where to insert\n" },
		{ "ModuleRelativePath", "Public/ToolMenuMisc.h" },
		{ "ToolTip", "Where to insert" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "// How to insert\n" },
		{ "ModuleRelativePath", "Public/ToolMenuMisc.h" },
		{ "ToolTip", "How to insert" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Position_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuInsert>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuInsert_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuInsert, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolMenuInsert_Statics::NewProp_Position_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToolMenuInsert_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuInsert, Position), Z_Construct_UEnum_ToolMenus_EToolMenuInsertType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) }; // 3222736787
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuInsert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuInsert_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuInsert_Statics::NewProp_Position_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuInsert_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuInsert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuInsert_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ToolMenuInsert",
	Z_Construct_UScriptStruct_FToolMenuInsert_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuInsert_Statics::PropPointers),
	sizeof(FToolMenuInsert),
	alignof(FToolMenuInsert),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuInsert_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolMenuInsert_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolMenuInsert()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuInsert.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuInsert.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuInsert_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuInsert.InnerSingleton;
}
// End ScriptStruct FToolMenuInsert

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EToolMenuStringCommandType_StaticEnum, TEXT("EToolMenuStringCommandType"), &Z_Registration_Info_UEnum_EToolMenuStringCommandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2778814419U) },
		{ EToolMenuInsertType_StaticEnum, TEXT("EToolMenuInsertType"), &Z_Registration_Info_UEnum_EToolMenuInsertType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3222736787U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FToolMenuStringCommand::StaticStruct, Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics::NewStructOps, TEXT("ToolMenuStringCommand"), &Z_Registration_Info_UScriptStruct_ToolMenuStringCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuStringCommand), 3433498609U) },
		{ FToolMenuInsert::StaticStruct, Z_Construct_UScriptStruct_FToolMenuInsert_Statics::NewStructOps, TEXT("ToolMenuInsert"), &Z_Registration_Info_UScriptStruct_ToolMenuInsert, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuInsert), 2754096453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h_1078114117(TEXT("/Script/ToolMenus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
