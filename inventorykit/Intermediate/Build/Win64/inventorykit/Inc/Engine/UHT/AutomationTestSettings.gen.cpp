// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Tests/AutomationTestSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationTestSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UAutomationTestSettings();
ENGINE_API UClass* Z_Construct_UClass_UAutomationTestSettings_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionTestSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorImportExportTestDefinition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExternalToolDefinition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FImportFactorySettingValues();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchOnTestSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEditorPromotionSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FExternalToolDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalToolDefinition;
class UScriptStruct* FExternalToolDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalToolDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalToolDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalToolDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExternalToolDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalToolDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExternalToolDefinition>()
{
	return FExternalToolDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExternalToolDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for defining an external tool\n */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Structure for defining an external tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* The name of the tool / test. */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The name of the tool / test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutablePath_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* The executable to run. */" },
		{ "FilePathFilter", "*" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The executable to run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandLineOptions_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* The command line options to pass to the executable. */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The command line options to pass to the executable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkingDirectory_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* The working directory for the new process. */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The working directory for the new process." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptExtension_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* If set, look for scripts with this extension. */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "If set, look for scripts with this extension." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptDirectory_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* If the ScriptExtension is set, look here for the script files. */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "If the ScriptExtension is set, look here for the script files." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutablePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommandLineOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkingDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptExtension;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptDirectory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalToolDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName = { "ToolName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalToolDefinition, ToolName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolName_MetaData), NewProp_ToolName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath = { "ExecutablePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalToolDefinition, ExecutablePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutablePath_MetaData), NewProp_ExecutablePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions = { "CommandLineOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalToolDefinition, CommandLineOptions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandLineOptions_MetaData), NewProp_CommandLineOptions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory = { "WorkingDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalToolDefinition, WorkingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkingDirectory_MetaData), NewProp_WorkingDirectory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension = { "ScriptExtension", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalToolDefinition, ScriptExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptExtension_MetaData), NewProp_ScriptExtension_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory = { "ScriptDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExternalToolDefinition, ScriptDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptDirectory_MetaData), NewProp_ScriptDirectory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ExternalToolDefinition",
	Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::PropPointers),
	sizeof(FExternalToolDefinition),
	alignof(FExternalToolDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExternalToolDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalToolDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalToolDefinition.InnerSingleton, Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExternalToolDefinition.InnerSingleton;
}
// End ScriptStruct FExternalToolDefinition

// Begin ScriptStruct FImportFactorySettingValues
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportFactorySettingValues;
class UScriptStruct* FImportFactorySettingValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportFactorySettingValues, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ImportFactorySettingValues"));
	}
	return Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FImportFactorySettingValues>()
{
	return FImportFactorySettingValues::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds FProperty names and values to customize factory settings\n */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds FProperty names and values to customize factory settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Name of the property to change.  Nested settings can be modified using \"Outer.Property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Value to import for the specified property." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SettingName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportFactorySettingValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportFactorySettingValues, SettingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingName_MetaData), NewProp_SettingName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportFactorySettingValues, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ImportFactorySettingValues",
	Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::PropPointers),
	sizeof(FImportFactorySettingValues),
	alignof(FImportFactorySettingValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImportFactorySettingValues()
{
	if (!Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.InnerSingleton, Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.InnerSingleton;
}
// End ScriptStruct FImportFactorySettingValues

// Begin ScriptStruct FEditorImportExportTestDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition;
class UScriptStruct* FEditorImportExportTestDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EditorImportExportTestDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorImportExportTestDefinition>()
{
	return FEditorImportExportTestDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds settings for the asset import / export automation test\n */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the asset import / export automation test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportFilePath_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The file to import */" },
		{ "FilePathFilter", "*" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The file to import" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportFileExtension_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The file extension to use when exporting this asset.  Used to find a supporting exporter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipExport_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* If true, the export step will be skipped */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "If true, the export step will be skipped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactorySettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Settings for the import factory */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Settings for the import factory" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExportFileExtension;
	static void NewProp_bSkipExport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipExport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactorySettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FactorySettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorImportExportTestDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath = { "ImportFilePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditorImportExportTestDefinition, ImportFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportFilePath_MetaData), NewProp_ImportFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension = { "ExportFileExtension", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditorImportExportTestDefinition, ExportFileExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportFileExtension_MetaData), NewProp_ExportFileExtension_MetaData) };
void Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_SetBit(void* Obj)
{
	((FEditorImportExportTestDefinition*)Obj)->bSkipExport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport = { "bSkipExport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEditorImportExportTestDefinition), &Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipExport_MetaData), NewProp_bSkipExport_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_Inner = { "FactorySettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FImportFactorySettingValues, METADATA_PARAMS(0, nullptr) }; // 4077298790
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings = { "FactorySettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditorImportExportTestDefinition, FactorySettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactorySettings_MetaData), NewProp_FactorySettings_MetaData) }; // 4077298790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EditorImportExportTestDefinition",
	Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::PropPointers),
	sizeof(FEditorImportExportTestDefinition),
	alignof(FEditorImportExportTestDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEditorImportExportTestDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.InnerSingleton, Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.InnerSingleton;
}
// End ScriptStruct FEditorImportExportTestDefinition

// Begin ScriptStruct FEditorImportWorkflowDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition;
class UScriptStruct* FEditorImportWorkflowDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EditorImportWorkflowDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorImportWorkflowDefinition>()
{
	return FEditorImportWorkflowDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the asset import workflow test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the asset import workflow test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportFilePath_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The file to import */" },
		{ "FilePathFilter", "*" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The file to import" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactorySettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Settings for the import factory */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Settings for the import factory" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportFilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactorySettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FactorySettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorImportWorkflowDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath = { "ImportFilePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditorImportWorkflowDefinition, ImportFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportFilePath_MetaData), NewProp_ImportFilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_Inner = { "FactorySettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FImportFactorySettingValues, METADATA_PARAMS(0, nullptr) }; // 4077298790
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings = { "FactorySettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditorImportWorkflowDefinition, FactorySettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactorySettings_MetaData), NewProp_FactorySettings_MetaData) }; // 4077298790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EditorImportWorkflowDefinition",
	Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::PropPointers),
	sizeof(FEditorImportWorkflowDefinition),
	alignof(FEditorImportWorkflowDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.InnerSingleton, Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.InnerSingleton;
}
// End ScriptStruct FEditorImportWorkflowDefinition

// Begin ScriptStruct FBuildPromotionImportWorkflowSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings;
class UScriptStruct* FBuildPromotionImportWorkflowSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionImportWorkflowSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionImportWorkflowSettings>()
{
	return FBuildPromotionImportWorkflowSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the import workflow stage of the build promotion test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the import workflow stage of the build promotion test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diffuse_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the Diffuse texture */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the Diffuse texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the Normalmap texture */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the Normalmap texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the static mesh */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the static mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportStaticMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the static mesh to re-import */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the static mesh to re-import" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapeMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the blend shape */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the blend shape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the morph mesh */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the morph mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the animation asset.  (Will automatically use the skeleton of the skeletal mesh above) */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the animation asset.  (Will automatically use the skeleton of the skeletal mesh above)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the sound */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the sound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurroundSound_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the surround sound (Select any of the channels.  It will auto import the rest)*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the surround sound (Select any of the channels.  It will auto import the rest)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherAssetsToImport_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for any other assets you may want to import */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for any other assets you may want to import" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Diffuse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReimportStaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendShapeMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MorphMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurroundSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherAssetsToImport_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherAssetsToImport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionImportWorkflowSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse = { "Diffuse", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Diffuse), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diffuse_MetaData), NewProp_Diffuse_MetaData) }; // 706610861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Normal), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) }; // 706610861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, StaticMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) }; // 706610861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh = { "ReimportStaticMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, ReimportStaticMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportStaticMesh_MetaData), NewProp_ReimportStaticMesh_MetaData) }; // 706610861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh = { "BlendShapeMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, BlendShapeMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendShapeMesh_MetaData), NewProp_BlendShapeMesh_MetaData) }; // 706610861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh = { "MorphMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, MorphMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphMesh_MetaData), NewProp_MorphMesh_MetaData) }; // 706610861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, SkeletalMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) }; // 706610861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Animation), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) }; // 706610861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Sound), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) }; // 706610861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound = { "SurroundSound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, SurroundSound), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurroundSound_MetaData), NewProp_SurroundSound_MetaData) }; // 706610861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_Inner = { "OtherAssetsToImport", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(0, nullptr) }; // 706610861
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport = { "OtherAssetsToImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, OtherAssetsToImport), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherAssetsToImport_MetaData), NewProp_OtherAssetsToImport_MetaData) }; // 706610861
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BuildPromotionImportWorkflowSettings",
	Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::PropPointers),
	sizeof(FBuildPromotionImportWorkflowSettings),
	alignof(FBuildPromotionImportWorkflowSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.InnerSingleton, Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.InnerSingleton;
}
// End ScriptStruct FBuildPromotionImportWorkflowSettings

// Begin ScriptStruct FBuildPromotionOpenAssetSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings;
class UScriptStruct* FBuildPromotionOpenAssetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionOpenAssetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionOpenAssetSettings>()
{
	return FBuildPromotionOpenAssetSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the open assets stage of the build promotion test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the open assets stage of the build promotion test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The blueprint asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The blueprint asset to open" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The material asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The material asset to open" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The particle system asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The particle system asset to open" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The skeletal mesh asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The skeletal mesh asset to open" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The static mesh asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The static mesh asset to open" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The texture asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The texture asset to open" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleSystemAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionOpenAssetSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset = { "BlueprintAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, BlueprintAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintAsset_MetaData), NewProp_BlueprintAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset = { "MaterialAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, MaterialAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAsset_MetaData), NewProp_MaterialAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset = { "ParticleSystemAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, ParticleSystemAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystemAsset_MetaData), NewProp_ParticleSystemAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, SkeletalMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshAsset_MetaData), NewProp_SkeletalMeshAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, StaticMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshAsset_MetaData), NewProp_StaticMeshAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset = { "TextureAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, TextureAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureAsset_MetaData), NewProp_TextureAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BuildPromotionOpenAssetSettings",
	Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::PropPointers),
	sizeof(FBuildPromotionOpenAssetSettings),
	alignof(FBuildPromotionOpenAssetSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.InnerSingleton, Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.InnerSingleton;
}
// End ScriptStruct FBuildPromotionOpenAssetSettings

// Begin ScriptStruct FBuildPromotionNewProjectSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings;
class UScriptStruct* FBuildPromotionNewProjectSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionNewProjectSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionNewProjectSettings>()
{
	return FBuildPromotionNewProjectSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the new project stage of the build promotion test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the new project stage of the build promotion test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewProjectFolderOverride_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** The path for the new project */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The path for the new project" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewProjectNameOverride_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** The name of the project **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The name of the project *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewProjectFolderOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewProjectNameOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionNewProjectSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride = { "NewProjectFolderOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionNewProjectSettings, NewProjectFolderOverride), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewProjectFolderOverride_MetaData), NewProp_NewProjectFolderOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride = { "NewProjectNameOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionNewProjectSettings, NewProjectNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewProjectNameOverride_MetaData), NewProp_NewProjectNameOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BuildPromotionNewProjectSettings",
	Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::PropPointers),
	sizeof(FBuildPromotionNewProjectSettings),
	alignof(FBuildPromotionNewProjectSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.InnerSingleton, Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.InnerSingleton;
}
// End ScriptStruct FBuildPromotionNewProjectSettings

// Begin ScriptStruct FMaterialEditorPromotionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings;
class UScriptStruct* FMaterialEditorPromotionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialEditorPromotionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialEditorPromotionSettings>()
{
	return FMaterialEditorPromotionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the material editor build promotion tests\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the material editor build promotion tests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default material asset to apply to static meshes **/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default material asset to apply to static meshes *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDiffuseTexture_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default material asset to apply to static meshes **/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default material asset to apply to static meshes *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNormalTexture_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default material asset to apply to static meshes **/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default material asset to apply to static meshes *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMaterialAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDiffuseTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultNormalTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialEditorPromotionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset = { "DefaultMaterialAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultMaterialAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterialAsset_MetaData), NewProp_DefaultMaterialAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture = { "DefaultDiffuseTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultDiffuseTexture), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDiffuseTexture_MetaData), NewProp_DefaultDiffuseTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture = { "DefaultNormalTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultNormalTexture), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNormalTexture_MetaData), NewProp_DefaultNormalTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialEditorPromotionSettings",
	Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::PropPointers),
	sizeof(FMaterialEditorPromotionSettings),
	alignof(FMaterialEditorPromotionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.InnerSingleton, Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.InnerSingleton;
}
// End ScriptStruct FMaterialEditorPromotionSettings

// Begin ScriptStruct FParticleEditorPromotionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings;
class UScriptStruct* FParticleEditorPromotionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEditorPromotionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleEditorPromotionSettings>()
{
	return FParticleEditorPromotionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the particle editor build promotion tests\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the particle editor build promotion tests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParticleAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default particle asset to use for tests*/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default particle asset to use for tests" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultParticleAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEditorPromotionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset = { "DefaultParticleAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleEditorPromotionSettings, DefaultParticleAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultParticleAsset_MetaData), NewProp_DefaultParticleAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ParticleEditorPromotionSettings",
	Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::PropPointers),
	sizeof(FParticleEditorPromotionSettings),
	alignof(FParticleEditorPromotionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticleEditorPromotionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.InnerSingleton, Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.InnerSingleton;
}
// End ScriptStruct FParticleEditorPromotionSettings

// Begin ScriptStruct FBlueprintEditorPromotionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings;
class UScriptStruct* FBlueprintEditorPromotionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintEditorPromotionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintEditorPromotionSettings>()
{
	return FBlueprintEditorPromotionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the blueprint editor build promotion tests\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the blueprint editor build promotion tests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstMeshPath_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** The starting mesh for the blueprint **/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The starting mesh for the blueprint *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondMeshPath_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** The mesh to set on the blueprint after the delay **/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The mesh to set on the blueprint after the delay *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParticleAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default particle asset to use for tests*/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default particle asset to use for tests" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstMeshPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondMeshPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultParticleAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintEditorPromotionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath = { "FirstMeshPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, FirstMeshPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstMeshPath_MetaData), NewProp_FirstMeshPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath = { "SecondMeshPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, SecondMeshPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondMeshPath_MetaData), NewProp_SecondMeshPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset = { "DefaultParticleAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, DefaultParticleAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultParticleAsset_MetaData), NewProp_DefaultParticleAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BlueprintEditorPromotionSettings",
	Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::PropPointers),
	sizeof(FBlueprintEditorPromotionSettings),
	alignof(FBlueprintEditorPromotionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.InnerSingleton;
}
// End ScriptStruct FBlueprintEditorPromotionSettings

// Begin ScriptStruct FBuildPromotionTestSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings;
class UScriptStruct* FBuildPromotionTestSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionTestSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionTestSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionTestSettings>()
{
	return FBuildPromotionTestSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the editor build promotion test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the editor build promotion test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStaticMeshAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default static mesh asset to apply materials to **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default static mesh asset to apply materials to *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportWorkflow_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Import workflow settings **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import workflow settings *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenAssets_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Open assets settings **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Open assets settings *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewProjectSettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** New project settings **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "New project settings *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceControlMaterial_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Material to modify for the content browser step **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Material to modify for the content browser step *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultStaticMeshAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportWorkflow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpenAssets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewProjectSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceControlMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionTestSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset = { "DefaultStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionTestSettings, DefaultStaticMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStaticMeshAsset_MetaData), NewProp_DefaultStaticMeshAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow = { "ImportWorkflow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionTestSettings, ImportWorkflow), Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportWorkflow_MetaData), NewProp_ImportWorkflow_MetaData) }; // 3957320255
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets = { "OpenAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionTestSettings, OpenAssets), Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenAssets_MetaData), NewProp_OpenAssets_MetaData) }; // 2994842362
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings = { "NewProjectSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionTestSettings, NewProjectSettings), Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewProjectSettings_MetaData), NewProp_NewProjectSettings_MetaData) }; // 3053030847
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial = { "SourceControlMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildPromotionTestSettings, SourceControlMaterial), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceControlMaterial_MetaData), NewProp_SourceControlMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BuildPromotionTestSettings",
	Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::PropPointers),
	sizeof(FBuildPromotionTestSettings),
	alignof(FBuildPromotionTestSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionTestSettings()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.InnerSingleton, Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.InnerSingleton;
}
// End ScriptStruct FBuildPromotionTestSettings

// Begin ScriptStruct FEditorMapPerformanceTestDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition;
class UScriptStruct* FEditorMapPerformanceTestDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EditorMapPerformanceTestDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorMapPerformanceTestDefinition>()
{
	return FEditorMapPerformanceTestDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the asset import / export automation test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the asset import / export automation test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceTestmap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "Automation" },
		{ "Comment", "/** Map to be used for the Performance Capture **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Map to be used for the Performance Capture *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestTimer_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "This is the length of time in seconds that this test will run for before stopping." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerformanceTestmap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestTimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorMapPerformanceTestDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap = { "PerformanceTestmap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditorMapPerformanceTestDefinition, PerformanceTestmap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformanceTestmap_MetaData), NewProp_PerformanceTestmap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer = { "TestTimer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditorMapPerformanceTestDefinition, TestTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestTimer_MetaData), NewProp_TestTimer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EditorMapPerformanceTestDefinition",
	Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::PropPointers),
	sizeof(FEditorMapPerformanceTestDefinition),
	alignof(FEditorMapPerformanceTestDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.InnerSingleton, Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.InnerSingleton;
}
// End ScriptStruct FEditorMapPerformanceTestDefinition

// Begin ScriptStruct FLaunchOnTestSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchOnTestSettings;
class UScriptStruct* FLaunchOnTestSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchOnTestSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LaunchOnTestSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLaunchOnTestSettings>()
{
	return FLaunchOnTestSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the editor Launch On With Map Iterations test.\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the editor Launch On With Map Iterations test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchOnTestmap_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Map to be used for the Launch On test **/" },
		{ "FilePathFilter", "umap" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Map to be used for the Launch On test *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "This is the device to be used for launch on. Example: WindowsClient, Android, IOS, Linux" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchOnTestmap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchOnTestSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap = { "LaunchOnTestmap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchOnTestSettings, LaunchOnTestmap), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchOnTestmap_MetaData), NewProp_LaunchOnTestmap_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchOnTestSettings, DeviceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceID_MetaData), NewProp_DeviceID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LaunchOnTestSettings",
	Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::PropPointers),
	sizeof(FLaunchOnTestSettings),
	alignof(FLaunchOnTestSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchOnTestSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.InnerSingleton, Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.InnerSingleton;
}
// End ScriptStruct FLaunchOnTestSettings

// Begin Class UAutomationTestSettings
void UAutomationTestSettings::StaticRegisterNativesUAutomationTestSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationTestSettings);
UClass* Z_Construct_UClass_UAutomationTestSettings_NoRegister()
{
	return UAutomationTestSettings::StaticClass();
}
struct Z_Construct_UClass_UAutomationTestSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor's user settings.\n */" },
		{ "IncludePath", "Tests/AutomationTestSettings.h" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineTestModules_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/**\n\x09 * Modules to load that have engine tests\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Modules to load that have engine tests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorTestModules_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/**\n\x09 * Modules to load that have editor tests\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Modules to load that have editor tests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutomationTestmap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * The automation test map to be used for several of the automation tests.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The automation test map to be used for several of the automation tests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorPerformanceTestMaps_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* The map to be used for the editor performance capture tool.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The map to be used for the editor performance capture tool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToOpen_MetaData[] = {
		{ "Category", "Open Asset Tests" },
		{ "Comment", "/**\n\x09 * Asset to test for open in automation process\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Asset to test for open in automation process" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapsToPIETest_MetaData[] = {
		{ "Category", "PIE Test Maps" },
		{ "Comment", "/**\n\x09 * Maps to PIE during the PIE test\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Maps to PIE during the PIE test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAllProjectMapsToPlayInPIE_MetaData[] = {
		{ "Category", "Play all project Maps In PIE" },
		{ "Comment", "/**\n\x09 * Use all Maps from project for PlayMapInPIE test\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Use all Maps from project for PlayMapInPIE test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* Editor build promotion test settings\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Editor build promotion test settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialEditorPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* Material editor promotion test settings\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Material editor promotion test settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleEditorPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* Particle editor promotion test settings\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Particle editor promotion test settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintEditorPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* Blueprint editor promotion test settings\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Blueprint editor promotion test settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestLevelFolders_MetaData[] = {
		{ "Category", "MiscAutomationSetups" },
		{ "Comment", "/**\n\x09* Folders containing levels to exclude from automated tests\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Folders containing levels to exclude from automated tests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalTools_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/**\n\x09 * External executables and scripts to run as part of automation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "External executables and scripts to run as part of automation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportExportTestDefinitions_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Asset import / Export test settings\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Asset import / Export test settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchOnSettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* The map and device type to be used for the editor Launch On With Map Iterations test.\n\x09*/" },
		{ "FilePathFilter", "umap" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The map and device type to be used for the editor Launch On With Map Iterations test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScreenshotResolution_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "Comment", "/**\n\x09 * The default resolution to take all automation screenshots at.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The default resolution to take all automation screenshots at." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PIETestDuration_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * PIE test duration in seconds. Only applied if you do PIETest\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "PIE test duration in seconds. Only applied if you do PIETest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteractiveFramerate_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Default value used for FWaitForInteractiveFrameRate. This is a framerate determine to be suitably \"interactive\", but may be\n\x09 * less than the target framerate of the game as this is used for evaluating time to PIE, load the editor etc\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default value used for FWaitForInteractiveFrameRate. This is a framerate determine to be suitably \"interactive\", but may be\nless than the target framerate of the game as this is used for evaluating time to PIE, load the editor etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteractiveFramerateWaitTime_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Default wait time in seconds for FWaitForInteractiveFrameRate. After this time a test will fail.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default wait time in seconds for FWaitForInteractiveFrameRate. After this time a test will fail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteractiveFramerateDuration_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 *  Default time in seconds that DefaultInteractiveFramerate must remain true in FWaitForInteractiveFrameRate\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default time in seconds that DefaultInteractiveFramerate must remain true in FWaitForInteractiveFrameRate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EngineTestModules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EngineTestModules;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EditorTestModules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorTestModules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutomationTestmap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorPerformanceTestMaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorPerformanceTestMaps;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetsToOpen_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToOpen;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapsToPIETest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MapsToPIETest;
	static void NewProp_bUseAllProjectMapsToPlayInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAllProjectMapsToPlayInPIE;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildPromotionTest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialEditorPromotionTest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleEditorPromotionTest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintEditorPromotionTest;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestLevelFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TestLevelFolders;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalTools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalTools;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportExportTestDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportExportTestDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchOnSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LaunchOnSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultScreenshotResolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PIETestDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultInteractiveFramerate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultInteractiveFramerateWaitTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultInteractiveFramerateDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationTestSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_Inner = { "EngineTestModules", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules = { "EngineTestModules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, EngineTestModules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineTestModules_MetaData), NewProp_EngineTestModules_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_Inner = { "EditorTestModules", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules = { "EditorTestModules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, EditorTestModules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorTestModules_MetaData), NewProp_EditorTestModules_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap = { "AutomationTestmap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, AutomationTestmap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutomationTestmap_MetaData), NewProp_AutomationTestmap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_Inner = { "EditorPerformanceTestMaps", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition, METADATA_PARAMS(0, nullptr) }; // 2536082159
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps = { "EditorPerformanceTestMaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, EditorPerformanceTestMaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorPerformanceTestMaps_MetaData), NewProp_EditorPerformanceTestMaps_MetaData) }; // 2536082159
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_Inner = { "AssetsToOpen", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen = { "AssetsToOpen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, AssetsToOpen), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetsToOpen_MetaData), NewProp_AssetsToOpen_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest_Inner = { "MapsToPIETest", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest = { "MapsToPIETest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, MapsToPIETest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapsToPIETest_MetaData), NewProp_MapsToPIETest_MetaData) };
void Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE_SetBit(void* Obj)
{
	((UAutomationTestSettings*)Obj)->bUseAllProjectMapsToPlayInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE = { "bUseAllProjectMapsToPlayInPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationTestSettings), &Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAllProjectMapsToPlayInPIE_MetaData), NewProp_bUseAllProjectMapsToPlayInPIE_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest = { "BuildPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, BuildPromotionTest), Z_Construct_UScriptStruct_FBuildPromotionTestSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildPromotionTest_MetaData), NewProp_BuildPromotionTest_MetaData) }; // 3131656384
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest = { "MaterialEditorPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, MaterialEditorPromotionTest), Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialEditorPromotionTest_MetaData), NewProp_MaterialEditorPromotionTest_MetaData) }; // 1547181015
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest = { "ParticleEditorPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, ParticleEditorPromotionTest), Z_Construct_UScriptStruct_FParticleEditorPromotionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleEditorPromotionTest_MetaData), NewProp_ParticleEditorPromotionTest_MetaData) }; // 2372076859
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest = { "BlueprintEditorPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, BlueprintEditorPromotionTest), Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintEditorPromotionTest_MetaData), NewProp_BlueprintEditorPromotionTest_MetaData) }; // 218646795
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_Inner = { "TestLevelFolders", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders = { "TestLevelFolders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, TestLevelFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestLevelFolders_MetaData), NewProp_TestLevelFolders_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_Inner = { "ExternalTools", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FExternalToolDefinition, METADATA_PARAMS(0, nullptr) }; // 1859719607
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools = { "ExternalTools", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, ExternalTools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalTools_MetaData), NewProp_ExternalTools_MetaData) }; // 1859719607
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_Inner = { "ImportExportTestDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEditorImportExportTestDefinition, METADATA_PARAMS(0, nullptr) }; // 2723438212
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions = { "ImportExportTestDefinitions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, ImportExportTestDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportExportTestDefinitions_MetaData), NewProp_ImportExportTestDefinitions_MetaData) }; // 2723438212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_Inner = { "LaunchOnSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLaunchOnTestSettings, METADATA_PARAMS(0, nullptr) }; // 3274413235
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings = { "LaunchOnSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, LaunchOnSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchOnSettings_MetaData), NewProp_LaunchOnSettings_MetaData) }; // 3274413235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution = { "DefaultScreenshotResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, DefaultScreenshotResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultScreenshotResolution_MetaData), NewProp_DefaultScreenshotResolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_PIETestDuration = { "PIETestDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, PIETestDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PIETestDuration_MetaData), NewProp_PIETestDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerate = { "DefaultInteractiveFramerate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, DefaultInteractiveFramerate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInteractiveFramerate_MetaData), NewProp_DefaultInteractiveFramerate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateWaitTime = { "DefaultInteractiveFramerateWaitTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, DefaultInteractiveFramerateWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInteractiveFramerateWaitTime_MetaData), NewProp_DefaultInteractiveFramerateWaitTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateDuration = { "DefaultInteractiveFramerateDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestSettings, DefaultInteractiveFramerateDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInteractiveFramerateDuration_MetaData), NewProp_DefaultInteractiveFramerateDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationTestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_PIETestDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateWaitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutomationTestSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationTestSettings_Statics::ClassParams = {
	&UAutomationTestSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutomationTestSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomationTestSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutomationTestSettings()
{
	if (!Z_Registration_Info_UClass_UAutomationTestSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationTestSettings.OuterSingleton, Z_Construct_UClass_UAutomationTestSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomationTestSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAutomationTestSettings>()
{
	return UAutomationTestSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationTestSettings);
UAutomationTestSettings::~UAutomationTestSettings() {}
// End Class UAutomationTestSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExternalToolDefinition::StaticStruct, Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewStructOps, TEXT("ExternalToolDefinition"), &Z_Registration_Info_UScriptStruct_ExternalToolDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalToolDefinition), 1859719607U) },
		{ FImportFactorySettingValues::StaticStruct, Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewStructOps, TEXT("ImportFactorySettingValues"), &Z_Registration_Info_UScriptStruct_ImportFactorySettingValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportFactorySettingValues), 4077298790U) },
		{ FEditorImportExportTestDefinition::StaticStruct, Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewStructOps, TEXT("EditorImportExportTestDefinition"), &Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorImportExportTestDefinition), 2723438212U) },
		{ FEditorImportWorkflowDefinition::StaticStruct, Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewStructOps, TEXT("EditorImportWorkflowDefinition"), &Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorImportWorkflowDefinition), 706610861U) },
		{ FBuildPromotionImportWorkflowSettings::StaticStruct, Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewStructOps, TEXT("BuildPromotionImportWorkflowSettings"), &Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildPromotionImportWorkflowSettings), 3957320255U) },
		{ FBuildPromotionOpenAssetSettings::StaticStruct, Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewStructOps, TEXT("BuildPromotionOpenAssetSettings"), &Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildPromotionOpenAssetSettings), 2994842362U) },
		{ FBuildPromotionNewProjectSettings::StaticStruct, Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewStructOps, TEXT("BuildPromotionNewProjectSettings"), &Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildPromotionNewProjectSettings), 3053030847U) },
		{ FMaterialEditorPromotionSettings::StaticStruct, Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewStructOps, TEXT("MaterialEditorPromotionSettings"), &Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialEditorPromotionSettings), 1547181015U) },
		{ FParticleEditorPromotionSettings::StaticStruct, Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewStructOps, TEXT("ParticleEditorPromotionSettings"), &Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleEditorPromotionSettings), 2372076859U) },
		{ FBlueprintEditorPromotionSettings::StaticStruct, Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewStructOps, TEXT("BlueprintEditorPromotionSettings"), &Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintEditorPromotionSettings), 218646795U) },
		{ FBuildPromotionTestSettings::StaticStruct, Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewStructOps, TEXT("BuildPromotionTestSettings"), &Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildPromotionTestSettings), 3131656384U) },
		{ FEditorMapPerformanceTestDefinition::StaticStruct, Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewStructOps, TEXT("EditorMapPerformanceTestDefinition"), &Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorMapPerformanceTestDefinition), 2536082159U) },
		{ FLaunchOnTestSettings::StaticStruct, Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewStructOps, TEXT("LaunchOnTestSettings"), &Z_Registration_Info_UScriptStruct_LaunchOnTestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchOnTestSettings), 3274413235U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationTestSettings, UAutomationTestSettings::StaticClass, TEXT("UAutomationTestSettings"), &Z_Registration_Info_UClass_UAutomationTestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationTestSettings), 3197796368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_1354563292(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
