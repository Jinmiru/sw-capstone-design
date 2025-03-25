// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Engine/Public/InterchangeProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeProjectSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeFilePickerBase_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePipelineConfigurationBase_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeProjectSettings();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeProjectSettings_NoRegister();
INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeContentImportSettings();
INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeDialogOverride();
INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeImportSettings();
INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride();
INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelineStack();
INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines();
UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References

// Begin ScriptStruct FInterchangeTranslatorPipelines
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeTranslatorPipelines;
class UScriptStruct* FInterchangeTranslatorPipelines::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeTranslatorPipelines.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeTranslatorPipelines.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangeTranslatorPipelines"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeTranslatorPipelines.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangeTranslatorPipelines>()
{
	return FInterchangeTranslatorPipelines::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translator_MetaData[] = {
		{ "AllowedClasses", "/Script/InterchangeCore.InterchangeTranslatorBase" },
		{ "Category", "TranslatorPipelines" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pipelines_MetaData[] = {
		{ "AllowedClasses", "/Script/InterchangeCore.InterchangePipelineBase, /Script/InterchangeEngine.InterchangeBlueprintPipelineBase, /Script/InterchangeEngine.InterchangePythonPipelineAsset" },
		{ "Category", "TranslatorPipelines" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Translator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pipelines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pipelines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeTranslatorPipelines>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::NewProp_Translator = { "Translator", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeTranslatorPipelines, Translator), Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translator_MetaData), NewProp_Translator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::NewProp_Pipelines_Inner = { "Pipelines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::NewProp_Pipelines = { "Pipelines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeTranslatorPipelines, Pipelines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pipelines_MetaData), NewProp_Pipelines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::NewProp_Translator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::NewProp_Pipelines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::NewProp_Pipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	nullptr,
	&NewStructOps,
	"InterchangeTranslatorPipelines",
	Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::PropPointers),
	sizeof(FInterchangeTranslatorPipelines),
	alignof(FInterchangeTranslatorPipelines),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeTranslatorPipelines.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeTranslatorPipelines.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeTranslatorPipelines.InnerSingleton;
}
// End ScriptStruct FInterchangeTranslatorPipelines

// Begin ScriptStruct FInterchangePipelineStack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangePipelineStack;
class UScriptStruct* FInterchangePipelineStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelineStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangePipelineStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelineStack, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangePipelineStack"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelineStack.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangePipelineStack>()
{
	return FInterchangePipelineStack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pipelines_MetaData[] = {
		{ "AllowedClasses", "/Script/InterchangeCore.InterchangePipelineBase, /Script/InterchangeEngine.InterchangeBlueprintPipelineBase, /Script/InterchangeEngine.InterchangePythonPipelineAsset" },
		{ "Category", "Pipelines" },
		{ "Comment", "/** The list of pipelines in this stack. The pipelines are executed in fixed order, from top to bottom. */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "The list of pipelines in this stack. The pipelines are executed in fixed order, from top to bottom." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerTranslatorPipelines_MetaData[] = {
		{ "Category", "TranslatorPipelines" },
		{ "Comment", "/** Specifies a different list of pipelines for this stack to use when importing data from specific translators. */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "Specifies a different list of pipelines for this stack to use when importing data from specific translators." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pipelines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pipelines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerTranslatorPipelines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerTranslatorPipelines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangePipelineStack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines_Inner = { "Pipelines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines = { "Pipelines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangePipelineStack, Pipelines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pipelines_MetaData), NewProp_Pipelines_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_PerTranslatorPipelines_Inner = { "PerTranslatorPipelines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines, METADATA_PARAMS(0, nullptr) }; // 3676560085
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_PerTranslatorPipelines = { "PerTranslatorPipelines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangePipelineStack, PerTranslatorPipelines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerTranslatorPipelines_MetaData), NewProp_PerTranslatorPipelines_MetaData) }; // 3676560085
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_PerTranslatorPipelines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_PerTranslatorPipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	nullptr,
	&NewStructOps,
	"InterchangePipelineStack",
	Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::PropPointers),
	sizeof(FInterchangePipelineStack),
	alignof(FInterchangePipelineStack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelineStack()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelineStack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangePipelineStack.InnerSingleton, Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelineStack.InnerSingleton;
}
// End ScriptStruct FInterchangePipelineStack

// Begin ScriptStruct FInterchangeImportSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeImportSettings;
class UScriptStruct* FInterchangeImportSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeImportSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeImportSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeImportSettings, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangeImportSettings"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeImportSettings.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangeImportSettings>()
{
	return FInterchangeImportSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PipelineStacks_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** Configures the pipeline stacks that are available when importing assets with Interchange. */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "Configures the pipeline stacks that are available when importing assets with Interchange." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPipelineStack_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** Specifies which pipeline stack Interchange should use by default. */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "Specifies which pipeline stack Interchange should use by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportDialogClass_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** Specifies the class that should be used to define the configuration dialog that Interchange shows on import. */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "Specifies the class that should be used to define the configuration dialog that Interchange shows on import." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowImportDialog_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** If enabled, the import option dialog will show when interchange import or re-import.*/" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "If enabled, the import option dialog will show when interchange import or re-import." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PipelineStacks_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PipelineStacks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PipelineStacks;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultPipelineStack;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ImportDialogClass;
	static void NewProp_bShowImportDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowImportDialog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeImportSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_ValueProp = { "PipelineStacks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInterchangePipelineStack, METADATA_PARAMS(0, nullptr) }; // 2857345222
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_Key_KeyProp = { "PipelineStacks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks = { "PipelineStacks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeImportSettings, PipelineStacks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PipelineStacks_MetaData), NewProp_PipelineStacks_MetaData) }; // 2857345222
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_DefaultPipelineStack = { "DefaultPipelineStack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeImportSettings, DefaultPipelineStack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPipelineStack_MetaData), NewProp_DefaultPipelineStack_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_ImportDialogClass = { "ImportDialogClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeImportSettings, ImportDialogClass), Z_Construct_UClass_UInterchangePipelineConfigurationBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportDialogClass_MetaData), NewProp_ImportDialogClass_MetaData) };
void Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowImportDialog_SetBit(void* Obj)
{
	((FInterchangeImportSettings*)Obj)->bShowImportDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowImportDialog = { "bShowImportDialog", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangeImportSettings), &Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowImportDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowImportDialog_MetaData), NewProp_bShowImportDialog_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_DefaultPipelineStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_ImportDialogClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowImportDialog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	nullptr,
	&NewStructOps,
	"InterchangeImportSettings",
	Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::PropPointers),
	sizeof(FInterchangeImportSettings),
	alignof(FInterchangeImportSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeImportSettings()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeImportSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeImportSettings.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeImportSettings.InnerSingleton;
}
// End ScriptStruct FInterchangeImportSettings

// Begin ScriptStruct FInterchangePerTranslatorDialogOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangePerTranslatorDialogOverride;
class UScriptStruct* FInterchangePerTranslatorDialogOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePerTranslatorDialogOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangePerTranslatorDialogOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangePerTranslatorDialogOverride"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangePerTranslatorDialogOverride.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangePerTranslatorDialogOverride>()
{
	return FInterchangePerTranslatorDialogOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translator_MetaData[] = {
		{ "AllowedClasses", "/Script/InterchangeCore.InterchangeTranslatorBase" },
		{ "Category", "DialogOverride" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowImportDialog_MetaData[] = {
		{ "Category", "DialogOverride" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Translator;
	static void NewProp_bShowImportDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowImportDialog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangePerTranslatorDialogOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::NewProp_Translator = { "Translator", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangePerTranslatorDialogOverride, Translator), Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translator_MetaData), NewProp_Translator_MetaData) };
void Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::NewProp_bShowImportDialog_SetBit(void* Obj)
{
	((FInterchangePerTranslatorDialogOverride*)Obj)->bShowImportDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::NewProp_bShowImportDialog = { "bShowImportDialog", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePerTranslatorDialogOverride), &Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::NewProp_bShowImportDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowImportDialog_MetaData), NewProp_bShowImportDialog_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::NewProp_Translator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::NewProp_bShowImportDialog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	nullptr,
	&NewStructOps,
	"InterchangePerTranslatorDialogOverride",
	Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::PropPointers),
	sizeof(FInterchangePerTranslatorDialogOverride),
	alignof(FInterchangePerTranslatorDialogOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePerTranslatorDialogOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangePerTranslatorDialogOverride.InnerSingleton, Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangePerTranslatorDialogOverride.InnerSingleton;
}
// End ScriptStruct FInterchangePerTranslatorDialogOverride

// Begin ScriptStruct FInterchangeDialogOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeDialogOverride;
class UScriptStruct* FInterchangeDialogOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeDialogOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeDialogOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeDialogOverride, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangeDialogOverride"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeDialogOverride.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangeDialogOverride>()
{
	return FInterchangeDialogOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowImportDialog_MetaData[] = {
		{ "Category", "DialogOverride" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerTranslatorImportDialogOverride_MetaData[] = {
		{ "AllowedClasses", "/Script/InterchangeCore.InterchangePipelineBase, /Script/InterchangeEngine.InterchangeBlueprintPipelineBase, /Script/InterchangeEngine.InterchangePythonPipelineAsset" },
		{ "Category", "DialogOverride" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowImportDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowImportDialog;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerTranslatorImportDialogOverride_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerTranslatorImportDialogOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeDialogOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewProp_bShowImportDialog_SetBit(void* Obj)
{
	((FInterchangeDialogOverride*)Obj)->bShowImportDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewProp_bShowImportDialog = { "bShowImportDialog", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangeDialogOverride), &Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewProp_bShowImportDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowImportDialog_MetaData), NewProp_bShowImportDialog_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewProp_PerTranslatorImportDialogOverride_Inner = { "PerTranslatorImportDialogOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride, METADATA_PARAMS(0, nullptr) }; // 2724277063
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewProp_PerTranslatorImportDialogOverride = { "PerTranslatorImportDialogOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeDialogOverride, PerTranslatorImportDialogOverride), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerTranslatorImportDialogOverride_MetaData), NewProp_PerTranslatorImportDialogOverride_MetaData) }; // 2724277063
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewProp_bShowImportDialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewProp_PerTranslatorImportDialogOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewProp_PerTranslatorImportDialogOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	nullptr,
	&NewStructOps,
	"InterchangeDialogOverride",
	Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::PropPointers),
	sizeof(FInterchangeDialogOverride),
	alignof(FInterchangeDialogOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeDialogOverride()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeDialogOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeDialogOverride.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeDialogOverride.InnerSingleton;
}
// End ScriptStruct FInterchangeDialogOverride

// Begin ScriptStruct FInterchangeContentImportSettings
static_assert(std::is_polymorphic<FInterchangeContentImportSettings>() == std::is_polymorphic<FInterchangeImportSettings>(), "USTRUCT FInterchangeContentImportSettings cannot be polymorphic unless super FInterchangeImportSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings;
class UScriptStruct* FInterchangeContentImportSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeContentImportSettings, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangeContentImportSettings"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangeContentImportSettings>()
{
	return FInterchangeContentImportSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPipelineStackOverride_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** Specifies a different pipeline stack for Interchange to use by default when importing specific types of assets. */" },
		{ "DisplayAfter", "DefaultPipelineStack" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "Specifies a different pipeline stack for Interchange to use by default when importing specific types of assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowImportDialogOverride_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** This tell interchange if the import dialog should show or not when importing a particular type of asset.*/" },
		{ "DisplayAfter", "bShowImportDialog" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "This tell interchange if the import dialog should show or not when importing a particular type of asset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultPipelineStackOverride_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultPipelineStackOverride_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultPipelineStackOverride_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultPipelineStackOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShowImportDialogOverride_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShowImportDialogOverride_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowImportDialogOverride_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ShowImportDialogOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeContentImportSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_ValueProp = { "DefaultPipelineStackOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_Key_KeyProp = { "DefaultPipelineStackOverride_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType, METADATA_PARAMS(0, nullptr) }; // 3610793168
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride = { "DefaultPipelineStackOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeContentImportSettings, DefaultPipelineStackOverride), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPipelineStackOverride_MetaData), NewProp_DefaultPipelineStackOverride_MetaData) }; // 3610793168
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowImportDialogOverride_ValueProp = { "ShowImportDialogOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInterchangeDialogOverride, METADATA_PARAMS(0, nullptr) }; // 320733223
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowImportDialogOverride_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowImportDialogOverride_Key_KeyProp = { "ShowImportDialogOverride_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType, METADATA_PARAMS(0, nullptr) }; // 3610793168
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowImportDialogOverride = { "ShowImportDialogOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeContentImportSettings, ShowImportDialogOverride), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowImportDialogOverride_MetaData), NewProp_ShowImportDialogOverride_MetaData) }; // 3610793168 320733223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowImportDialogOverride_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowImportDialogOverride_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowImportDialogOverride_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowImportDialogOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	Z_Construct_UScriptStruct_FInterchangeImportSettings,
	&NewStructOps,
	"InterchangeContentImportSettings",
	Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::PropPointers),
	sizeof(FInterchangeContentImportSettings),
	alignof(FInterchangeContentImportSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeContentImportSettings()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.InnerSingleton;
}
// End ScriptStruct FInterchangeContentImportSettings

// Begin Class UInterchangeProjectSettings
void UInterchangeProjectSettings::StaticRegisterNativesUInterchangeProjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeProjectSettings);
UClass* Z_Construct_UClass_UInterchangeProjectSettings_NoRegister()
{
	return UInterchangeProjectSettings::StaticClass();
}
struct Z_Construct_UClass_UInterchangeProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Interchange" },
		{ "IncludePath", "InterchangeProjectSettings.h" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentImportSettings_MetaData[] = {
		{ "Category", "ImportContent" },
		{ "Comment", "/**\n\x09 * Settings used when importing into the Content Browser.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "Settings used when importing into the Content Browser." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneImportSettings_MetaData[] = {
		{ "Category", "ImportIntoLevel" },
		{ "Comment", "/**\n\x09 * Settings used when importing into a level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "Settings used when importing into a level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePickerClass_MetaData[] = {
		{ "Category", "EditorInterface" },
		{ "Comment", "/** This tells Interchange which file picker class to construct when we need to choose a file for a source. */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "This tells Interchange which file picker class to construct when we need to choose a file for a source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_MetaData[] = {
		{ "Category", "Generic|ImportSettings" },
		{ "Comment", "/**\n\x09 * If enabled, both Interchange translators and the legacy import process smooth the edges of static meshes that don't contain smoothing information.\n\x09 * If you have an older project that relies on leaving hard edges by default, you can disable this setting to preserve consistency with older assets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "If enabled, both Interchange translators and the legacy import process smooth the edges of static meshes that don't contain smoothing information.\nIf you have an older project that relies on leaving hard edges by default, you can disable this setting to preserve consistency with older assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenericPipelineClass_MetaData[] = {
		{ "Category", "Editor Generic Pipeline Class" },
		{ "Comment", "/**\n\x09 * Specifies which pipeline class Interchange should use when editor tools import or reimport an asset with base settings.\n\x09 * Unreal Editor depends on this class to be set. You can only edit this property in the .ini file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "Specifies which pipeline class Interchange should use when editor tools import or reimport an asset with base settings.\nUnreal Editor depends on this class to be set. You can only edit this property in the .ini file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentImportSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneImportSettings;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_FilePickerClass;
	static void NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_GenericPipelineClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_ContentImportSettings = { "ContentImportSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeProjectSettings, ContentImportSettings), Z_Construct_UScriptStruct_FInterchangeContentImportSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentImportSettings_MetaData), NewProp_ContentImportSettings_MetaData) }; // 1688720312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_SceneImportSettings = { "SceneImportSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeProjectSettings, SceneImportSettings), Z_Construct_UScriptStruct_FInterchangeImportSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneImportSettings_MetaData), NewProp_SceneImportSettings_MetaData) }; // 821326589
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_FilePickerClass = { "FilePickerClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeProjectSettings, FilePickerClass), Z_Construct_UClass_UInterchangeFilePickerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePickerClass_MetaData), NewProp_FilePickerClass_MetaData) };
void Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_SetBit(void* Obj)
{
	((UInterchangeProjectSettings*)Obj)->bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing = { "bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeProjectSettings), &Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_MetaData), NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_GenericPipelineClass = { "GenericPipelineClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeProjectSettings, GenericPipelineClass), Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenericPipelineClass_MetaData), NewProp_GenericPipelineClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_ContentImportSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_SceneImportSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_FilePickerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_GenericPipelineClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::ClassParams = {
	&UInterchangeProjectSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeProjectSettings()
{
	if (!Z_Registration_Info_UClass_UInterchangeProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeProjectSettings.OuterSingleton, Z_Construct_UClass_UInterchangeProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeProjectSettings.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeProjectSettings>()
{
	return UInterchangeProjectSettings::StaticClass();
}
UInterchangeProjectSettings::UInterchangeProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeProjectSettings);
UInterchangeProjectSettings::~UInterchangeProjectSettings() {}
// End Class UInterchangeProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInterchangeTranslatorPipelines::StaticStruct, Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::NewStructOps, TEXT("InterchangeTranslatorPipelines"), &Z_Registration_Info_UScriptStruct_InterchangeTranslatorPipelines, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeTranslatorPipelines), 3676560085U) },
		{ FInterchangePipelineStack::StaticStruct, Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewStructOps, TEXT("InterchangePipelineStack"), &Z_Registration_Info_UScriptStruct_InterchangePipelineStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangePipelineStack), 2857345222U) },
		{ FInterchangeImportSettings::StaticStruct, Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewStructOps, TEXT("InterchangeImportSettings"), &Z_Registration_Info_UScriptStruct_InterchangeImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeImportSettings), 821326589U) },
		{ FInterchangePerTranslatorDialogOverride::StaticStruct, Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::NewStructOps, TEXT("InterchangePerTranslatorDialogOverride"), &Z_Registration_Info_UScriptStruct_InterchangePerTranslatorDialogOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangePerTranslatorDialogOverride), 2724277063U) },
		{ FInterchangeDialogOverride::StaticStruct, Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewStructOps, TEXT("InterchangeDialogOverride"), &Z_Registration_Info_UScriptStruct_InterchangeDialogOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeDialogOverride), 320733223U) },
		{ FInterchangeContentImportSettings::StaticStruct, Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewStructOps, TEXT("InterchangeContentImportSettings"), &Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeContentImportSettings), 1688720312U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeProjectSettings, UInterchangeProjectSettings::StaticClass, TEXT("UInterchangeProjectSettings"), &Z_Registration_Info_UClass_UInterchangeProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeProjectSettings), 3350719309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_1381860526(TEXT("/Script/InterchangeEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
