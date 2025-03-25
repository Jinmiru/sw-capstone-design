// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ModularRigModel.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularRigModel() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EModularRigNotification();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FModularRigConnections();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FModularRigModel();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FModularRigSingleConnection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigModuleReference();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum EModularRigNotification
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModularRigNotification;
static UEnum* EModularRigNotification_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModularRigNotification.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModularRigNotification.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EModularRigNotification, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EModularRigNotification"));
	}
	return Z_Registration_Info_UEnum_EModularRigNotification.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EModularRigNotification>()
{
	return EModularRigNotification_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EModularRigNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ConnectionChanged.Name", "EModularRigNotification::ConnectionChanged" },
		{ "InteractionBracketCanceled.Comment", "// A bracket has been opened\n" },
		{ "InteractionBracketCanceled.Name", "EModularRigNotification::InteractionBracketCanceled" },
		{ "InteractionBracketCanceled.ToolTip", "A bracket has been opened" },
		{ "InteractionBracketClosed.Comment", "// A bracket has been opened\n" },
		{ "InteractionBracketClosed.Name", "EModularRigNotification::InteractionBracketClosed" },
		{ "InteractionBracketClosed.ToolTip", "A bracket has been opened" },
		{ "InteractionBracketOpened.Name", "EModularRigNotification::InteractionBracketOpened" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EModularRigNotification::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleAdded.Name", "EModularRigNotification::ModuleAdded" },
		{ "ModuleConfigValueChanged.Name", "EModularRigNotification::ModuleConfigValueChanged" },
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
		{ "ModuleRemoved.Name", "EModularRigNotification::ModuleRemoved" },
		{ "ModuleRenamed.Name", "EModularRigNotification::ModuleRenamed" },
		{ "ModuleReparented.Name", "EModularRigNotification::ModuleReparented" },
		{ "ModuleShortNameChanged.Name", "EModularRigNotification::ModuleShortNameChanged" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModularRigNotification::ModuleAdded", (int64)EModularRigNotification::ModuleAdded },
		{ "EModularRigNotification::ModuleRenamed", (int64)EModularRigNotification::ModuleRenamed },
		{ "EModularRigNotification::ModuleRemoved", (int64)EModularRigNotification::ModuleRemoved },
		{ "EModularRigNotification::ModuleReparented", (int64)EModularRigNotification::ModuleReparented },
		{ "EModularRigNotification::ConnectionChanged", (int64)EModularRigNotification::ConnectionChanged },
		{ "EModularRigNotification::ModuleConfigValueChanged", (int64)EModularRigNotification::ModuleConfigValueChanged },
		{ "EModularRigNotification::ModuleShortNameChanged", (int64)EModularRigNotification::ModuleShortNameChanged },
		{ "EModularRigNotification::InteractionBracketOpened", (int64)EModularRigNotification::InteractionBracketOpened },
		{ "EModularRigNotification::InteractionBracketClosed", (int64)EModularRigNotification::InteractionBracketClosed },
		{ "EModularRigNotification::InteractionBracketCanceled", (int64)EModularRigNotification::InteractionBracketCanceled },
		{ "EModularRigNotification::Max", (int64)EModularRigNotification::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EModularRigNotification_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EModularRigNotification",
	"EModularRigNotification",
	Z_Construct_UEnum_ControlRig_EModularRigNotification_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EModularRigNotification_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EModularRigNotification_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EModularRigNotification_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EModularRigNotification()
{
	if (!Z_Registration_Info_UEnum_EModularRigNotification.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModularRigNotification.InnerSingleton, Z_Construct_UEnum_ControlRig_EModularRigNotification_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModularRigNotification.InnerSingleton;
}
// End Enum EModularRigNotification

// Begin ScriptStruct FRigModuleReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigModuleReference;
class UScriptStruct* FRigModuleReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigModuleReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleReference, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigModuleReference"));
	}
	return Z_Registration_Info_UScriptStruct_RigModuleReference.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigModuleReference>()
{
	return FRigModuleReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigModuleReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShortNameBasedOnPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigValues_MetaData[] = {
		{ "Comment", "// Connectors to Connection element\n" },
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
		{ "ToolTip", "Connectors to Connection element" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousName_MetaData[] = {
		{ "Comment", "// ExternalVariableName (current module) -> SourceExternalVariableNamespacedPath (root rig or other module)\n" },
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
		{ "ToolTip", "ExternalVariableName (current module) -> SourceExternalVariableNamespacedPath (root rig or other module)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousParentPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShortName;
	static void NewProp_bShortNameBasedOnPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShortNameBasedOnPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentPath;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigValues_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ConfigValues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Bindings_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bindings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Bindings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviousParentPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigModuleReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleReference, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleReference, ShortName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortName_MetaData), NewProp_ShortName_MetaData) };
void Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_bShortNameBasedOnPath_SetBit(void* Obj)
{
	((FRigModuleReference*)Obj)->bShortNameBasedOnPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_bShortNameBasedOnPath = { "bShortNameBasedOnPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigModuleReference), &Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_bShortNameBasedOnPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShortNameBasedOnPath_MetaData), NewProp_bShortNameBasedOnPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_ParentPath = { "ParentPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleReference, ParentPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentPath_MetaData), NewProp_ParentPath_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleReference, Class), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Connections_ValueProp = { "Connections", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Connections_Key_KeyProp = { "Connections_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleReference, Connections_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) }; // 1447557315 1447557315
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_ConfigValues_ValueProp = { "ConfigValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_ConfigValues_Key_KeyProp = { "ConfigValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_ConfigValues = { "ConfigValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleReference, ConfigValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigValues_MetaData), NewProp_ConfigValues_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Bindings_ValueProp = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Bindings_Key_KeyProp = { "Bindings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleReference, Bindings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bindings_MetaData), NewProp_Bindings_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_PreviousName = { "PreviousName", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleReference, PreviousName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousName_MetaData), NewProp_PreviousName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_PreviousParentPath = { "PreviousParentPath", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleReference, PreviousParentPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousParentPath_MetaData), NewProp_PreviousParentPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigModuleReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_ShortName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_bShortNameBasedOnPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_ParentPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Connections_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Connections_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Connections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_ConfigValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_ConfigValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_ConfigValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Bindings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Bindings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_Bindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_PreviousName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewProp_PreviousParentPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigModuleReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigModuleReference",
	Z_Construct_UScriptStruct_FRigModuleReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleReference_Statics::PropPointers),
	sizeof(FRigModuleReference),
	alignof(FRigModuleReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigModuleReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigModuleReference()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigModuleReference.InnerSingleton, Z_Construct_UScriptStruct_FRigModuleReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigModuleReference.InnerSingleton;
}
// End ScriptStruct FRigModuleReference

// Begin ScriptStruct FModularRigSingleConnection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularRigSingleConnection;
class UScriptStruct* FModularRigSingleConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularRigSingleConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularRigSingleConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularRigSingleConnection, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ModularRigSingleConnection"));
	}
	return Z_Registration_Info_UScriptStruct_ModularRigSingleConnection.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FModularRigSingleConnection>()
{
	return FModularRigSingleConnection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connector_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularRigSingleConnection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::NewProp_Connector = { "Connector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigSingleConnection, Connector), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connector_MetaData), NewProp_Connector_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigSingleConnection, Target), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::NewProp_Connector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ModularRigSingleConnection",
	Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::PropPointers),
	sizeof(FModularRigSingleConnection),
	alignof(FModularRigSingleConnection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularRigSingleConnection()
{
	if (!Z_Registration_Info_UScriptStruct_ModularRigSingleConnection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularRigSingleConnection.InnerSingleton, Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularRigSingleConnection.InnerSingleton;
}
// End ScriptStruct FModularRigSingleConnection

// Begin ScriptStruct FModularRigConnections
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularRigConnections;
class UScriptStruct* FModularRigConnections::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularRigConnections.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularRigConnections.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularRigConnections, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ModularRigConnections"));
	}
	return Z_Registration_Info_UScriptStruct_ModularRigConnections.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FModularRigConnections>()
{
	return FModularRigConnections::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularRigConnections_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionList_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectionList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularRigConnections>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularRigConnections_Statics::NewProp_ConnectionList_Inner = { "ConnectionList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModularRigSingleConnection, METADATA_PARAMS(0, nullptr) }; // 580903036
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModularRigConnections_Statics::NewProp_ConnectionList = { "ConnectionList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigConnections, ConnectionList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionList_MetaData), NewProp_ConnectionList_MetaData) }; // 580903036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularRigConnections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigConnections_Statics::NewProp_ConnectionList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigConnections_Statics::NewProp_ConnectionList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigConnections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularRigConnections_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ModularRigConnections",
	Z_Construct_UScriptStruct_FModularRigConnections_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigConnections_Statics::PropPointers),
	sizeof(FModularRigConnections),
	alignof(FModularRigConnections),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigConnections_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularRigConnections_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularRigConnections()
{
	if (!Z_Registration_Info_UScriptStruct_ModularRigConnections.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularRigConnections.InnerSingleton, Z_Construct_UScriptStruct_FModularRigConnections_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularRigConnections.InnerSingleton;
}
// End ScriptStruct FModularRigConnections

// Begin ScriptStruct FModularRigModel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularRigModel;
class UScriptStruct* FModularRigModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularRigModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularRigModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularRigModel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ModularRigModel"));
	}
	return Z_Registration_Info_UScriptStruct_ModularRigModel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FModularRigModel>()
{
	return FModularRigModel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularRigModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A management struct containing all modules in the rig\n" },
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
		{ "ToolTip", "A management struct containing all modules in the rig" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularRigModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularRigModel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularRigModel_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigModuleReference, METADATA_PARAMS(0, nullptr) }; // 3840526951
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModularRigModel_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigModel, Modules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modules_MetaData), NewProp_Modules_MetaData) }; // 3840526951
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularRigModel_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigModel, Connections), Z_Construct_UScriptStruct_FModularRigConnections, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) }; // 3066294678
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularRigModel_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigModel, Controller), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularRigModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigModel_Statics::NewProp_Modules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigModel_Statics::NewProp_Modules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigModel_Statics::NewProp_Connections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigModel_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularRigModel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ModularRigModel",
	Z_Construct_UScriptStruct_FModularRigModel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigModel_Statics::PropPointers),
	sizeof(FModularRigModel),
	alignof(FModularRigModel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigModel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularRigModel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularRigModel()
{
	if (!Z_Registration_Info_UScriptStruct_ModularRigModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularRigModel.InnerSingleton, Z_Construct_UScriptStruct_FModularRigModel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularRigModel.InnerSingleton;
}
// End ScriptStruct FModularRigModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModularRigNotification_StaticEnum, TEXT("EModularRigNotification"), &Z_Registration_Info_UEnum_EModularRigNotification, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2758709936U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigModuleReference::StaticStruct, Z_Construct_UScriptStruct_FRigModuleReference_Statics::NewStructOps, TEXT("RigModuleReference"), &Z_Registration_Info_UScriptStruct_RigModuleReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigModuleReference), 3840526951U) },
		{ FModularRigSingleConnection::StaticStruct, Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics::NewStructOps, TEXT("ModularRigSingleConnection"), &Z_Registration_Info_UScriptStruct_ModularRigSingleConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularRigSingleConnection), 580903036U) },
		{ FModularRigConnections::StaticStruct, Z_Construct_UScriptStruct_FModularRigConnections_Statics::NewStructOps, TEXT("ModularRigConnections"), &Z_Registration_Info_UScriptStruct_ModularRigConnections, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularRigConnections), 3066294678U) },
		{ FModularRigModel::StaticStruct, Z_Construct_UScriptStruct_FModularRigModel_Statics::NewStructOps, TEXT("ModularRigModel"), &Z_Registration_Info_UScriptStruct_ModularRigModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularRigModel), 2341661585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_1491498849(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
