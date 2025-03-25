// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Commandlets/Commandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommandlet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCommandlet
void UCommandlet::StaticRegisterNativesUCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommandlet);
UClass* Z_Construct_UClass_UCommandlet_NoRegister()
{
	return UCommandlet::StaticClass();
}
struct Z_Construct_UClass_UCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/Commandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelpDescription_MetaData[] = {
		{ "Comment", "/** Description of the commandlet's purpose */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Description of the commandlet's purpose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelpUsage_MetaData[] = {
		{ "Comment", "/** Usage template to show for \"ucc help\" */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Usage template to show for \"ucc help\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelpWebLink_MetaData[] = {
		{ "Comment", "/** Hyperlink for more info */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Hyperlink for more info" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelpParamNames_MetaData[] = {
		{ "Comment", "/** The name of the parameter the commandlet takes */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "The name of the parameter the commandlet takes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelpParamDescriptions_MetaData[] = {
		{ "Comment", "/** The description of the parameter */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "The description of the parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsServer_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether to load objects required in server, client, and editor context.  If IsEditor is set to false, then a\n\x09 * UGameEngine (or whatever the value of /Script/Engine.Engine.GameEngine is) will be created for the commandlet instead\n\x09 * of a UEditorEngine (or /Script/Engine.Engine.EditorEngine), unless the commandlet overrides the CreateCustomEngine method.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Whether to load objects required in server, client, and editor context.  If IsEditor is set to false, then a\nUGameEngine (or whatever the value of /Script/Engine.Engine.GameEngine is) will be created for the commandlet instead\nof a UEditorEngine (or /Script/Engine.Engine.EditorEngine), unless the commandlet overrides the CreateCustomEngine method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsClient_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEditor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogToConsole_MetaData[] = {
		{ "Comment", "/** Whether to redirect standard log to the console */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Whether to redirect standard log to the console" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowErrorCount_MetaData[] = {
		{ "Comment", "/** Whether to show standard error and warning count on exit */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Whether to show standard error and warning count on exit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowProgress_MetaData[] = {
		{ "Comment", "/** Whether to show cooking progress on tick */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Whether to show cooking progress on tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastExit_MetaData[] = {
		{ "Comment", "/** Whether to exit the process as soon as the commandlet completes, skipping the engine shutdown */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Whether to exit the process as soon as the commandlet completes, skipping the engine shutdown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCommandletResultAsExitCode_MetaData[] = {
		{ "Comment", "/** Whether to use the commandlet result as the exit code, even if errors were logged during the whole engine execution */" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Whether to use the commandlet result as the exit code, even if errors were logged during the whole engine execution" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HelpDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HelpUsage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HelpWebLink;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HelpParamNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HelpParamNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HelpParamDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HelpParamDescriptions;
	static void NewProp_IsServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsServer;
	static void NewProp_IsClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsClient;
	static void NewProp_IsEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEditor;
	static void NewProp_LogToConsole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LogToConsole;
	static void NewProp_ShowErrorCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowErrorCount;
	static void NewProp_ShowProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowProgress;
	static void NewProp_FastExit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FastExit;
	static void NewProp_UseCommandletResultAsExitCode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCommandletResultAsExitCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpDescription = { "HelpDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommandlet, HelpDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelpDescription_MetaData), NewProp_HelpDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpUsage = { "HelpUsage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommandlet, HelpUsage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelpUsage_MetaData), NewProp_HelpUsage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpWebLink = { "HelpWebLink", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommandlet, HelpWebLink), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelpWebLink_MetaData), NewProp_HelpWebLink_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames_Inner = { "HelpParamNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames = { "HelpParamNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommandlet, HelpParamNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelpParamNames_MetaData), NewProp_HelpParamNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions_Inner = { "HelpParamDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions = { "HelpParamDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommandlet, HelpParamDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelpParamDescriptions_MetaData), NewProp_HelpParamDescriptions_MetaData) };
void Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer_SetBit(void* Obj)
{
	((UCommandlet*)Obj)->IsServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer = { "IsServer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsServer_MetaData), NewProp_IsServer_MetaData) };
void Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient_SetBit(void* Obj)
{
	((UCommandlet*)Obj)->IsClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient = { "IsClient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsClient_MetaData), NewProp_IsClient_MetaData) };
void Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor_SetBit(void* Obj)
{
	((UCommandlet*)Obj)->IsEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor = { "IsEditor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEditor_MetaData), NewProp_IsEditor_MetaData) };
void Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole_SetBit(void* Obj)
{
	((UCommandlet*)Obj)->LogToConsole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole = { "LogToConsole", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogToConsole_MetaData), NewProp_LogToConsole_MetaData) };
void Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount_SetBit(void* Obj)
{
	((UCommandlet*)Obj)->ShowErrorCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount = { "ShowErrorCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowErrorCount_MetaData), NewProp_ShowErrorCount_MetaData) };
void Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress_SetBit(void* Obj)
{
	((UCommandlet*)Obj)->ShowProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress = { "ShowProgress", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowProgress_MetaData), NewProp_ShowProgress_MetaData) };
void Z_Construct_UClass_UCommandlet_Statics::NewProp_FastExit_SetBit(void* Obj)
{
	((UCommandlet*)Obj)->FastExit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_FastExit = { "FastExit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_FastExit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastExit_MetaData), NewProp_FastExit_MetaData) };
void Z_Construct_UClass_UCommandlet_Statics::NewProp_UseCommandletResultAsExitCode_SetBit(void* Obj)
{
	((UCommandlet*)Obj)->UseCommandletResultAsExitCode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_UseCommandletResultAsExitCode = { "UseCommandletResultAsExitCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_UseCommandletResultAsExitCode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCommandletResultAsExitCode_MetaData), NewProp_UseCommandletResultAsExitCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommandlet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpWebLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_FastExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_UseCommandletResultAsExitCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommandlet_Statics::ClassParams = {
	&UCommandlet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCommandlet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::PropPointers),
	0,
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommandlet()
{
	if (!Z_Registration_Info_UClass_UCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommandlet.OuterSingleton, Z_Construct_UClass_UCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommandlet.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCommandlet>()
{
	return UCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommandlet);
UCommandlet::~UCommandlet() {}
// End Class UCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommandlet, UCommandlet::StaticClass, TEXT("UCommandlet"), &Z_Registration_Info_UClass_UCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommandlet), 725496075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_324229952(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
