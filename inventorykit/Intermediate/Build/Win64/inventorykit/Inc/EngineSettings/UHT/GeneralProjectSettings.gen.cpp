// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/EngineSettings/Classes/GeneralProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneralProjectSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralProjectSettings();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References

// Begin Class UGeneralProjectSettings
void UGeneralProjectSettings::StaticRegisterNativesUGeneralProjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeneralProjectSettings);
UClass* Z_Construct_UClass_UGeneralProjectSettings_NoRegister()
{
	return UGeneralProjectSettings::StaticClass();
}
struct Z_Construct_UClass_UGeneralProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GeneralProjectSettings.h" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompanyName_MetaData[] = {
		{ "Category", "Publisher" },
		{ "Comment", "/** The name of the company (author, provider) that created the project. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The name of the company (author, provider) that created the project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompanyDistinguishedName_MetaData[] = {
		{ "Category", "Publisher" },
		{ "Comment", "/** The Distinguished Name of the company (author, provider) that created the project, which is used by publishing tools on some platforms. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The Distinguished Name of the company (author, provider) that created the project, which is used by publishing tools on some platforms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyrightNotice_MetaData[] = {
		{ "Category", "Legal" },
		{ "Comment", "/** The project's copyright and/or trademark notices. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The project's copyright and/or trademark notices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "About" },
		{ "Comment", "/** The project's description text. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The project's description text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Homepage_MetaData[] = {
		{ "Category", "Publisher" },
		{ "Comment", "/** The project's homepage URL. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The project's homepage URL." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicensingTerms_MetaData[] = {
		{ "Category", "Legal" },
		{ "Comment", "/** The project's licensing terms. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The project's licensing terms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivacyPolicy_MetaData[] = {
		{ "Category", "Legal" },
		{ "Comment", "/** The project's privacy policy. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The project's privacy policy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectID_MetaData[] = {
		{ "Category", "About" },
		{ "Comment", "/** The project's unique identifier. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The project's unique identifier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[] = {
		{ "Category", "About" },
		{ "Comment", "/** The project's non-localized name. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The project's non-localized name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectVersion_MetaData[] = {
		{ "Category", "About" },
		{ "Comment", "/** The project's version number. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The project's version number." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportContact_MetaData[] = {
		{ "Category", "Publisher" },
		{ "Comment", "/** The project's support contact information. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The project's support contact information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectDisplayedTitle_MetaData[] = {
		{ "Category", "Displayed" },
		{ "Comment", "/** The project's title as displayed on the window title bar (can include the tokens {GameName}, {PlatformArchitecture}, {BuildConfiguration} or {RHIName}, which will be replaced with the specified text) */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "The project's title as displayed on the window title bar (can include the tokens {GameName}, {PlatformArchitecture}, {BuildConfiguration} or {RHIName}, which will be replaced with the specified text)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectDebugTitleInfo_MetaData[] = {
		{ "Category", "Displayed" },
		{ "Comment", "/** Additional data to be displayed on the window title bar in non-shipping configurations (can include the tokens {GameName}, {PlatformArchitecture}, {BuildConfiguration} or {RHIName}, which will be replaced with the specified text) */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "Additional data to be displayed on the window title bar in non-shipping configurations (can include the tokens {GameName}, {PlatformArchitecture}, {BuildConfiguration} or {RHIName}, which will be replaced with the specified text)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldWindowPreserveAspectRatio_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should the game's window preserve its aspect ratio when resized by user. */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "Should the game's window preserve its aspect ratio when resized by user." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBorderlessWindow_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should the game use a borderless Slate window instead of a window with system title bar and border */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "Should the game use a borderless Slate window instead of a window with system title bar and border" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartInVR_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should the game attempt to start in VR, regardless of whether -vr was set on the commandline */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "Should the game attempt to start in VR, regardless of whether -vr was set on the commandline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowWindowResize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should the user be allowed to resize the window used by the game, when not using full screen */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "Should the user be allowed to resize the window used by the game, when not using full screen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowClose_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should a close button be shown for the game's window, when not using full screen */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "Should a close button be shown for the game's window, when not using full screen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMaximize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should a maximize button be shown for the game's window, when not using full screen */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "Should a maximize button be shown for the game's window, when not using full screen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMinimize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should a minimize button be shown for the game's window, when not using full screen */" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "Should a minimize button be shown for the game's window, when not using full screen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeOffsetForFakeStereoRenderingDevice_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*Determines the Eye offset of the virtual stereo device created when \" -emulatestereo\" command line arg is detected*/" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "Determines the Eye offset of the virtual stereo device created when \" -emulatestereo\" command line arg is detected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVForFakeStereoRenderingDevice_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*Determines the Field Of View of the virtual stereo device created when \" -emulatestereo\" command line arg is detected*/" },
		{ "ModuleRelativePath", "Classes/GeneralProjectSettings.h" },
		{ "ToolTip", "Determines the Field Of View of the virtual stereo device created when \" -emulatestereo\" command line arg is detected" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CompanyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CompanyDistinguishedName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CopyrightNotice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Homepage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LicensingTerms;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrivacyPolicy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SupportContact;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ProjectDisplayedTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ProjectDebugTitleInfo;
	static void NewProp_bShouldWindowPreserveAspectRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldWindowPreserveAspectRatio;
	static void NewProp_bUseBorderlessWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBorderlessWindow;
	static void NewProp_bStartInVR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartInVR;
	static void NewProp_bAllowWindowResize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWindowResize;
	static void NewProp_bAllowClose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowClose;
	static void NewProp_bAllowMaximize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMaximize;
	static void NewProp_bAllowMinimize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMinimize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EyeOffsetForFakeStereoRenderingDevice;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVForFakeStereoRenderingDevice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneralProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_CompanyName = { "CompanyName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, CompanyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompanyName_MetaData), NewProp_CompanyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_CompanyDistinguishedName = { "CompanyDistinguishedName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, CompanyDistinguishedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompanyDistinguishedName_MetaData), NewProp_CompanyDistinguishedName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_CopyrightNotice = { "CopyrightNotice", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, CopyrightNotice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyrightNotice_MetaData), NewProp_CopyrightNotice_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_Homepage = { "Homepage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, Homepage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Homepage_MetaData), NewProp_Homepage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_LicensingTerms = { "LicensingTerms", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, LicensingTerms), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicensingTerms_MetaData), NewProp_LicensingTerms_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_PrivacyPolicy = { "PrivacyPolicy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, PrivacyPolicy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivacyPolicy_MetaData), NewProp_PrivacyPolicy_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_ProjectID = { "ProjectID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, ProjectID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectID_MetaData), NewProp_ProjectID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, ProjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectName_MetaData), NewProp_ProjectName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_ProjectVersion = { "ProjectVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, ProjectVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectVersion_MetaData), NewProp_ProjectVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_SupportContact = { "SupportContact", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, SupportContact), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportContact_MetaData), NewProp_SupportContact_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_ProjectDisplayedTitle = { "ProjectDisplayedTitle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, ProjectDisplayedTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectDisplayedTitle_MetaData), NewProp_ProjectDisplayedTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_ProjectDebugTitleInfo = { "ProjectDebugTitleInfo", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, ProjectDebugTitleInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectDebugTitleInfo_MetaData), NewProp_ProjectDebugTitleInfo_MetaData) };
void Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio_SetBit(void* Obj)
{
	((UGeneralProjectSettings*)Obj)->bShouldWindowPreserveAspectRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio = { "bShouldWindowPreserveAspectRatio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeneralProjectSettings), &Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldWindowPreserveAspectRatio_MetaData), NewProp_bShouldWindowPreserveAspectRatio_MetaData) };
void Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bUseBorderlessWindow_SetBit(void* Obj)
{
	((UGeneralProjectSettings*)Obj)->bUseBorderlessWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bUseBorderlessWindow = { "bUseBorderlessWindow", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeneralProjectSettings), &Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bUseBorderlessWindow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBorderlessWindow_MetaData), NewProp_bUseBorderlessWindow_MetaData) };
void Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bStartInVR_SetBit(void* Obj)
{
	((UGeneralProjectSettings*)Obj)->bStartInVR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bStartInVR = { "bStartInVR", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeneralProjectSettings), &Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bStartInVR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartInVR_MetaData), NewProp_bStartInVR_MetaData) };
void Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowWindowResize_SetBit(void* Obj)
{
	((UGeneralProjectSettings*)Obj)->bAllowWindowResize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowWindowResize = { "bAllowWindowResize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeneralProjectSettings), &Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowWindowResize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowWindowResize_MetaData), NewProp_bAllowWindowResize_MetaData) };
void Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowClose_SetBit(void* Obj)
{
	((UGeneralProjectSettings*)Obj)->bAllowClose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowClose = { "bAllowClose", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeneralProjectSettings), &Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowClose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowClose_MetaData), NewProp_bAllowClose_MetaData) };
void Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowMaximize_SetBit(void* Obj)
{
	((UGeneralProjectSettings*)Obj)->bAllowMaximize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowMaximize = { "bAllowMaximize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeneralProjectSettings), &Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowMaximize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMaximize_MetaData), NewProp_bAllowMaximize_MetaData) };
void Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowMinimize_SetBit(void* Obj)
{
	((UGeneralProjectSettings*)Obj)->bAllowMinimize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowMinimize = { "bAllowMinimize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeneralProjectSettings), &Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowMinimize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMinimize_MetaData), NewProp_bAllowMinimize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_EyeOffsetForFakeStereoRenderingDevice = { "EyeOffsetForFakeStereoRenderingDevice", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, EyeOffsetForFakeStereoRenderingDevice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeOffsetForFakeStereoRenderingDevice_MetaData), NewProp_EyeOffsetForFakeStereoRenderingDevice_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_FOVForFakeStereoRenderingDevice = { "FOVForFakeStereoRenderingDevice", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneralProjectSettings, FOVForFakeStereoRenderingDevice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVForFakeStereoRenderingDevice_MetaData), NewProp_FOVForFakeStereoRenderingDevice_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneralProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_CompanyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_CompanyDistinguishedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_CopyrightNotice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_Homepage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_LicensingTerms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_PrivacyPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_ProjectID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_ProjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_ProjectVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_SupportContact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_ProjectDisplayedTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_ProjectDebugTitleInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bUseBorderlessWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bStartInVR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowWindowResize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowMaximize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_bAllowMinimize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_EyeOffsetForFakeStereoRenderingDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralProjectSettings_Statics::NewProp_FOVForFakeStereoRenderingDevice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeneralProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneralProjectSettings_Statics::ClassParams = {
	&UGeneralProjectSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeneralProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralProjectSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeneralProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeneralProjectSettings()
{
	if (!Z_Registration_Info_UClass_UGeneralProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneralProjectSettings.OuterSingleton, Z_Construct_UClass_UGeneralProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeneralProjectSettings.OuterSingleton;
}
template<> ENGINESETTINGS_API UClass* StaticClass<UGeneralProjectSettings>()
{
	return UGeneralProjectSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneralProjectSettings);
UGeneralProjectSettings::~UGeneralProjectSettings() {}
// End Class UGeneralProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeneralProjectSettings, UGeneralProjectSettings::StaticClass, TEXT("UGeneralProjectSettings"), &Z_Registration_Info_UClass_UGeneralProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneralProjectSettings), 839934315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_422564012(TEXT("/Script/EngineSettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
