// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigModuleDefines.h"
#include "ControlRig/Public/Rigs/RigHierarchyElements.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigModuleDefines() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FModularRigSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigConnectorSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigModuleConnector();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigModuleDescription();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigModuleIdentifier();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigModuleSettings();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FModularRigSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularRigSettings;
class UScriptStruct* FModularRigSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularRigSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularRigSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularRigSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ModularRigSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ModularRigSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FModularRigSettings>()
{
	return FModularRigSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularRigSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoResolve_MetaData[] = {
		{ "Category", "ModularRig" },
		{ "Comment", "// Whether or not to autoresolve secondary connectors once the primary connector is resolved\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
		{ "ToolTip", "Whether or not to autoresolve secondary connectors once the primary connector is resolved" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoResolve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoResolve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularRigSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FModularRigSettings_Statics::NewProp_bAutoResolve_SetBit(void* Obj)
{
	((FModularRigSettings*)Obj)->bAutoResolve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularRigSettings_Statics::NewProp_bAutoResolve = { "bAutoResolve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModularRigSettings), &Z_Construct_UScriptStruct_FModularRigSettings_Statics::NewProp_bAutoResolve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoResolve_MetaData), NewProp_bAutoResolve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularRigSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigSettings_Statics::NewProp_bAutoResolve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularRigSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ModularRigSettings",
	Z_Construct_UScriptStruct_FModularRigSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigSettings_Statics::PropPointers),
	sizeof(FModularRigSettings),
	alignof(FModularRigSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularRigSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularRigSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ModularRigSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularRigSettings.InnerSingleton, Z_Construct_UScriptStruct_FModularRigSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularRigSettings.InnerSingleton;
}
// End ScriptStruct FModularRigSettings

// Begin ScriptStruct FRigModuleIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigModuleIdentifier;
class UScriptStruct* FRigModuleIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigModuleIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleIdentifier, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigModuleIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_RigModuleIdentifier.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigModuleIdentifier>()
{
	return FRigModuleIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Connector" },
		{ "Comment", "// The name of the module used to find it in the module library\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
		{ "ToolTip", "The name of the module used to find it in the module library" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Connector" },
		{ "Comment", "// The kind of module this is (for example \"Arm\")\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
		{ "ToolTip", "The kind of module this is (for example \"Arm\")" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigModuleIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleIdentifier, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleIdentifier, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigModuleIdentifier",
	Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::PropPointers),
	sizeof(FRigModuleIdentifier),
	alignof(FRigModuleIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigModuleIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigModuleIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigModuleIdentifier.InnerSingleton;
}
// End ScriptStruct FRigModuleIdentifier

// Begin ScriptStruct FRigModuleConnector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigModuleConnector;
class UScriptStruct* FRigModuleConnector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleConnector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigModuleConnector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleConnector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigModuleConnector"));
	}
	return Z_Registration_Info_UScriptStruct_RigModuleConnector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigModuleConnector>()
{
	return FRigModuleConnector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigModuleConnector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigModuleConnector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleConnector_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleConnector, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigModuleConnector_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleConnector, Settings), Z_Construct_UScriptStruct_FRigConnectorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3308319107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigModuleConnector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleConnector_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleConnector_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleConnector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigModuleConnector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigModuleConnector",
	Z_Construct_UScriptStruct_FRigModuleConnector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleConnector_Statics::PropPointers),
	sizeof(FRigModuleConnector),
	alignof(FRigModuleConnector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleConnector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigModuleConnector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigModuleConnector()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleConnector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigModuleConnector.InnerSingleton, Z_Construct_UScriptStruct_FRigModuleConnector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigModuleConnector.InnerSingleton;
}
// End ScriptStruct FRigModuleConnector

// Begin ScriptStruct FRigModuleSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigModuleSettings;
class UScriptStruct* FRigModuleSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigModuleSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigModuleSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigModuleSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigModuleSettings>()
{
	return FRigModuleSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigModuleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "Category", "Module" },
		{ "Comment", "// The identifier used to retrieve the module in the module library\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
		{ "ToolTip", "The identifier used to retrieve the module in the module library" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Module" },
		{ "Comment", "// The icon used for the module in the module library\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
		{ "ToolTip", "The icon used for the module in the module library" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Module" },
		{ "Comment", "// The category of the module\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
		{ "ToolTip", "The category of the module" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[] = {
		{ "Category", "Module" },
		{ "Comment", "// The keywords of the module\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
		{ "ToolTip", "The keywords of the module" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Module" },
		{ "Comment", "// The description of the module\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The description of the module" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExposedConnectors_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedConnectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedConnectors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigModuleSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleSettings, Identifier), Z_Construct_UScriptStruct_FRigModuleIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) }; // 713747669
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleSettings, Icon), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleSettings, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleSettings, Keywords), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keywords_MetaData), NewProp_Keywords_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleSettings, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_ExposedConnectors_Inner = { "ExposedConnectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigModuleConnector, METADATA_PARAMS(0, nullptr) }; // 309110563
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_ExposedConnectors = { "ExposedConnectors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleSettings, ExposedConnectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExposedConnectors_MetaData), NewProp_ExposedConnectors_MetaData) }; // 309110563
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigModuleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_Keywords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_ExposedConnectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewProp_ExposedConnectors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigModuleSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigModuleSettings",
	Z_Construct_UScriptStruct_FRigModuleSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleSettings_Statics::PropPointers),
	sizeof(FRigModuleSettings),
	alignof(FRigModuleSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigModuleSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigModuleSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigModuleSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigModuleSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigModuleSettings.InnerSingleton;
}
// End ScriptStruct FRigModuleSettings

// Begin ScriptStruct FRigModuleDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigModuleDescription;
class UScriptStruct* FRigModuleDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigModuleDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleDescription, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigModuleDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RigModuleDescription.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigModuleDescription>()
{
	return FRigModuleDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigModuleDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Rigs/RigModuleDefines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigModuleDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigModuleDescription_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleDescription, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigModuleDescription_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigModuleDescription, Settings), Z_Construct_UScriptStruct_FRigModuleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2584514901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigModuleDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleDescription_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigModuleDescription_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigModuleDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigModuleDescription",
	Z_Construct_UScriptStruct_FRigModuleDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleDescription_Statics::PropPointers),
	sizeof(FRigModuleDescription),
	alignof(FRigModuleDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigModuleDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigModuleDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigModuleDescription()
{
	if (!Z_Registration_Info_UScriptStruct_RigModuleDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigModuleDescription.InnerSingleton, Z_Construct_UScriptStruct_FRigModuleDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigModuleDescription.InnerSingleton;
}
// End ScriptStruct FRigModuleDescription

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModularRigSettings::StaticStruct, Z_Construct_UScriptStruct_FModularRigSettings_Statics::NewStructOps, TEXT("ModularRigSettings"), &Z_Registration_Info_UScriptStruct_ModularRigSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularRigSettings), 1685218981U) },
		{ FRigModuleIdentifier::StaticStruct, Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics::NewStructOps, TEXT("RigModuleIdentifier"), &Z_Registration_Info_UScriptStruct_RigModuleIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigModuleIdentifier), 713747669U) },
		{ FRigModuleConnector::StaticStruct, Z_Construct_UScriptStruct_FRigModuleConnector_Statics::NewStructOps, TEXT("RigModuleConnector"), &Z_Registration_Info_UScriptStruct_RigModuleConnector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigModuleConnector), 309110563U) },
		{ FRigModuleSettings::StaticStruct, Z_Construct_UScriptStruct_FRigModuleSettings_Statics::NewStructOps, TEXT("RigModuleSettings"), &Z_Registration_Info_UScriptStruct_RigModuleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigModuleSettings), 2584514901U) },
		{ FRigModuleDescription::StaticStruct, Z_Construct_UScriptStruct_FRigModuleDescription_Statics::NewStructOps, TEXT("RigModuleDescription"), &Z_Registration_Info_UScriptStruct_RigModuleDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigModuleDescription), 946073018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h_1332663431(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
