// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderDocPlugin/Public/RenderDocPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderDocPluginSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
RENDERDOCPLUGIN_API UClass* Z_Construct_UClass_URenderDocPluginSettings();
RENDERDOCPLUGIN_API UClass* Z_Construct_UClass_URenderDocPluginSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_RenderDocPlugin();
// End Cross Module References

// Begin Class URenderDocPluginSettings
void URenderDocPluginSettings::StaticRegisterNativesURenderDocPluginSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderDocPluginSettings);
UClass* Z_Construct_UClass_URenderDocPluginSettings_NoRegister()
{
	return URenderDocPluginSettings::StaticClass();
}
struct Z_Construct_UClass_URenderDocPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "RenderDoc" },
		{ "IncludePath", "RenderDocPluginSettings.h" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAllActivity_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.CaptureAllActivity" },
		{ "DisplayName", "Capture all activity" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, RenderDoc will capture all activity in all viewports and editor windows for the entire frame instead of only the current viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAllCallstacks_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.CaptureCallstacks" },
		{ "DisplayName", "Capture all call stacks" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, RenderDoc will capture callstacks for all API calls." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceAllResources_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.ReferenceAllResources" },
		{ "DisplayName", "Reference all resources" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, RenderDoc will include all rendering resources in the capture, even those that have not been used during the frame. Please note that doing this will significantly increase capture size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveAllInitials_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.SaveAllInitials" },
		{ "DisplayName", "Save all initial states" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, RenderDoc will always capture the initial state of all rendering resources even if they are not likely to be used during the frame. Please note that doing this will significantly increase capture size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureDelayInSeconds_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.CaptureDelayInSeconds" },
		{ "DisplayName", "Capture delay in seconds" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, the capture delay's unit will be in seconds instead of frames." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureDelay_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ClampMin", "0" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.CaptureDelay" },
		{ "DisplayName", "Capture delay" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If > 0, RenderDoc will trigger the capture only after this amount of frames/seconds has passed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureFrameCount_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ClampMin", "1" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.CaptureFrameCount" },
		{ "DisplayName", "Capture frame count" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If > 1, the RenderDoc capture will encompass more than a single frame. Note: this implies that all activity in all viewports and editor windows will be captured (i.e. same as CaptureAllActivity)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAttach_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ConsoleVariable", "renderdoc.AutoAttach" },
		{ "DisplayName", "Auto attach on startup" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, then RenderDoc will attach on startup. Otherwise the command line argument '-AttachRenderDoc' is required." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowHelpOnStartup_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "renderdoc.ShowHelpOnStartup" },
		{ "DisplayName", "Show help on startup" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, a help window will be shown on startup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRenderDocCrashHandler_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "renderdoc.EnableCrashHandler" },
		{ "DisplayName", "Use the RenderDoc crash handler" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, the RenderDoc crash handler will be used if a crash occurs (Only use this if you know the problem is with RenderDoc and you want to notify the RenderDoc developers!)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderDocBinaryPath_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "renderdoc.BinaryPath" },
		{ "DisplayName", "RenderDoc executable path" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "Path to the main RenderDoc executable to use." },
	};
#endif // WITH_METADATA
	static void NewProp_bCaptureAllActivity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAllActivity;
	static void NewProp_bCaptureAllCallstacks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAllCallstacks;
	static void NewProp_bReferenceAllResources_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceAllResources;
	static void NewProp_bSaveAllInitials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveAllInitials;
	static void NewProp_bCaptureDelayInSeconds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureDelayInSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureFrameCount;
	static void NewProp_bAutoAttach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAttach;
	static void NewProp_bShowHelpOnStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHelpOnStartup;
	static void NewProp_bEnableRenderDocCrashHandler_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRenderDocCrashHandler;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RenderDocBinaryPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderDocPluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity_SetBit(void* Obj)
{
	((URenderDocPluginSettings*)Obj)->bCaptureAllActivity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity = { "bCaptureAllActivity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureAllActivity_MetaData), NewProp_bCaptureAllActivity_MetaData) };
void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks_SetBit(void* Obj)
{
	((URenderDocPluginSettings*)Obj)->bCaptureAllCallstacks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks = { "bCaptureAllCallstacks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureAllCallstacks_MetaData), NewProp_bCaptureAllCallstacks_MetaData) };
void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources_SetBit(void* Obj)
{
	((URenderDocPluginSettings*)Obj)->bReferenceAllResources = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources = { "bReferenceAllResources", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReferenceAllResources_MetaData), NewProp_bReferenceAllResources_MetaData) };
void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials_SetBit(void* Obj)
{
	((URenderDocPluginSettings*)Obj)->bSaveAllInitials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials = { "bSaveAllInitials", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveAllInitials_MetaData), NewProp_bSaveAllInitials_MetaData) };
void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds_SetBit(void* Obj)
{
	((URenderDocPluginSettings*)Obj)->bCaptureDelayInSeconds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds = { "bCaptureDelayInSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureDelayInSeconds_MetaData), NewProp_bCaptureDelayInSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureDelay = { "CaptureDelay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URenderDocPluginSettings, CaptureDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureDelay_MetaData), NewProp_CaptureDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureFrameCount = { "CaptureFrameCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URenderDocPluginSettings, CaptureFrameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureFrameCount_MetaData), NewProp_CaptureFrameCount_MetaData) };
void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach_SetBit(void* Obj)
{
	((URenderDocPluginSettings*)Obj)->bAutoAttach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach = { "bAutoAttach", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoAttach_MetaData), NewProp_bAutoAttach_MetaData) };
void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup_SetBit(void* Obj)
{
	((URenderDocPluginSettings*)Obj)->bShowHelpOnStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup = { "bShowHelpOnStartup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowHelpOnStartup_MetaData), NewProp_bShowHelpOnStartup_MetaData) };
void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler_SetBit(void* Obj)
{
	((URenderDocPluginSettings*)Obj)->bEnableRenderDocCrashHandler = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler = { "bEnableRenderDocCrashHandler", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRenderDocCrashHandler_MetaData), NewProp_bEnableRenderDocCrashHandler_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_RenderDocBinaryPath = { "RenderDocBinaryPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URenderDocPluginSettings, RenderDocBinaryPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderDocBinaryPath_MetaData), NewProp_RenderDocBinaryPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderDocPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureFrameCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_RenderDocBinaryPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URenderDocPluginSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_RenderDocPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderDocPluginSettings_Statics::ClassParams = {
	&URenderDocPluginSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URenderDocPluginSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URenderDocPluginSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URenderDocPluginSettings()
{
	if (!Z_Registration_Info_UClass_URenderDocPluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderDocPluginSettings.OuterSingleton, Z_Construct_UClass_URenderDocPluginSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URenderDocPluginSettings.OuterSingleton;
}
template<> RENDERDOCPLUGIN_API UClass* StaticClass<URenderDocPluginSettings>()
{
	return URenderDocPluginSettings::StaticClass();
}
URenderDocPluginSettings::URenderDocPluginSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URenderDocPluginSettings);
URenderDocPluginSettings::~URenderDocPluginSettings() {}
// End Class URenderDocPluginSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenderDocPluginSettings, URenderDocPluginSettings::StaticClass, TEXT("URenderDocPluginSettings"), &Z_Registration_Info_UClass_URenderDocPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderDocPluginSettings), 3348063058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_2786215770(TEXT("/Script/RenderDocPlugin"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
