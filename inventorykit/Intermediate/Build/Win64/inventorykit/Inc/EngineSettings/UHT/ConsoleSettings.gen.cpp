// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/EngineSettings/Classes/ConsoleSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UConsoleSettings();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UConsoleSettings_NoRegister();
ENGINESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand();
UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References

// Begin ScriptStruct FAutoCompleteCommand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoCompleteCommand;
class UScriptStruct* FAutoCompleteCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoCompleteCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoCompleteCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoCompleteCommand, (UObject*)Z_Construct_UPackage__Script_EngineSettings(), TEXT("AutoCompleteCommand"));
	}
	return Z_Registration_Info_UScriptStruct_AutoCompleteCommand.OuterSingleton;
}
template<> ENGINESETTINGS_API UScriptStruct* StaticStruct<FAutoCompleteCommand>()
{
	return FAutoCompleteCommand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for auto-complete commands and their descriptions.\n */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Structure for auto-complete commands and their descriptions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "Category", "Command" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[] = {
		{ "Category", "Command" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoCompleteCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoCompleteCommand, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoCompleteCommand, Desc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Desc_MetaData), NewProp_Desc_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	nullptr,
	&NewStructOps,
	"AutoCompleteCommand",
	Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::PropPointers),
	sizeof(FAutoCompleteCommand),
	alignof(FAutoCompleteCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand()
{
	if (!Z_Registration_Info_UScriptStruct_AutoCompleteCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoCompleteCommand.InnerSingleton, Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutoCompleteCommand.InnerSingleton;
}
// End ScriptStruct FAutoCompleteCommand

// Begin Class UConsoleSettings
void UConsoleSettings::StaticRegisterNativesUConsoleSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsoleSettings);
UClass* Z_Construct_UClass_UConsoleSettings_NoRegister()
{
	return UConsoleSettings::StaticClass();
}
struct Z_Construct_UClass_UConsoleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the UConsole class.\n */" },
		{ "IncludePath", "ConsoleSettings.h" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Implements the settings for the UConsole class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxScrollbackSize_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The maximum number of lines the console keeps in its output history. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The maximum number of lines the console keeps in its output history." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManualAutoCompleteList_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "Comment", "/** Manual list of auto-complete commands and info specified in BaseInput.ini */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Manual list of auto-complete commands and info specified in BaseInput.ini" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteMapPaths_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "Comment", "/** List of relative paths (e.g. Content/Maps) to search for map names for auto-complete usage. Specified in BaseInput.ini. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "List of relative paths (e.g. Content/Maps) to search for map names for auto-complete usage. Specified in BaseInput.ini." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundOpacityPercentage_MetaData[] = {
		{ "Category", "Colors" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amount of transparency of the console background. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Amount of transparency of the console background." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrderTopToBottom_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "Comment", "/** Whether we legacy bottom-to-top ordering or regular top-to-bottom ordering */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Whether we legacy bottom-to-top ordering or regular top-to-bottom ordering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayHelpInAutoComplete_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "Comment", "/** Display the first line of any available help text in the auto-complete window, if a description isn't available */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Display the first line of any available help text in the auto-complete window, if a description isn't available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** The color used for text input. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The color used for text input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HistoryColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** The color used for the previously typed commands history. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The color used for the previously typed commands history." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteCommandColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** The autocomplete color used for executable commands. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The autocomplete color used for executable commands." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteCVarColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** The autocomplete color used for mutable CVars. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The autocomplete color used for mutable CVars." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteFadedColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** The autocomplete color used for command descriptions and read-only CVars. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The autocomplete color used for command descriptions and read-only CVars." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxScrollbackSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManualAutoCompleteList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManualAutoCompleteList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AutoCompleteMapPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoCompleteMapPaths;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundOpacityPercentage;
	static void NewProp_bOrderTopToBottom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrderTopToBottom;
	static void NewProp_bDisplayHelpInAutoComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayHelpInAutoComplete;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HistoryColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoCompleteCommandColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoCompleteCVarColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoCompleteFadedColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize = { "MaxScrollbackSize", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsoleSettings, MaxScrollbackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxScrollbackSize_MetaData), NewProp_MaxScrollbackSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_Inner = { "ManualAutoCompleteList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutoCompleteCommand, METADATA_PARAMS(0, nullptr) }; // 2341222546
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList = { "ManualAutoCompleteList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsoleSettings, ManualAutoCompleteList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManualAutoCompleteList_MetaData), NewProp_ManualAutoCompleteList_MetaData) }; // 2341222546
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_Inner = { "AutoCompleteMapPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths = { "AutoCompleteMapPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsoleSettings, AutoCompleteMapPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCompleteMapPaths_MetaData), NewProp_AutoCompleteMapPaths_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage = { "BackgroundOpacityPercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsoleSettings, BackgroundOpacityPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundOpacityPercentage_MetaData), NewProp_BackgroundOpacityPercentage_MetaData) };
void Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_SetBit(void* Obj)
{
	((UConsoleSettings*)Obj)->bOrderTopToBottom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom = { "bOrderTopToBottom", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConsoleSettings), &Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrderTopToBottom_MetaData), NewProp_bOrderTopToBottom_MetaData) };
void Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete_SetBit(void* Obj)
{
	((UConsoleSettings*)Obj)->bDisplayHelpInAutoComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete = { "bDisplayHelpInAutoComplete", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConsoleSettings), &Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayHelpInAutoComplete_MetaData), NewProp_bDisplayHelpInAutoComplete_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor = { "InputColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsoleSettings, InputColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputColor_MetaData), NewProp_InputColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor = { "HistoryColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsoleSettings, HistoryColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HistoryColor_MetaData), NewProp_HistoryColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor = { "AutoCompleteCommandColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsoleSettings, AutoCompleteCommandColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCompleteCommandColor_MetaData), NewProp_AutoCompleteCommandColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor = { "AutoCompleteCVarColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsoleSettings, AutoCompleteCVarColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCompleteCVarColor_MetaData), NewProp_AutoCompleteCVarColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor = { "AutoCompleteFadedColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsoleSettings, AutoCompleteFadedColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCompleteFadedColor_MetaData), NewProp_AutoCompleteFadedColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConsoleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsoleSettings_Statics::ClassParams = {
	&UConsoleSettings::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConsoleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UConsoleSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConsoleSettings()
{
	if (!Z_Registration_Info_UClass_UConsoleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsoleSettings.OuterSingleton, Z_Construct_UClass_UConsoleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConsoleSettings.OuterSingleton;
}
template<> ENGINESETTINGS_API UClass* StaticClass<UConsoleSettings>()
{
	return UConsoleSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleSettings);
UConsoleSettings::~UConsoleSettings() {}
// End Class UConsoleSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutoCompleteCommand::StaticStruct, Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewStructOps, TEXT("AutoCompleteCommand"), &Z_Registration_Info_UScriptStruct_AutoCompleteCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoCompleteCommand), 2341222546U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConsoleSettings, UConsoleSettings::StaticClass, TEXT("UConsoleSettings"), &Z_Registration_Info_UClass_UConsoleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsoleSettings), 2148163065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_3536417282(TEXT("/Script/EngineSettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
