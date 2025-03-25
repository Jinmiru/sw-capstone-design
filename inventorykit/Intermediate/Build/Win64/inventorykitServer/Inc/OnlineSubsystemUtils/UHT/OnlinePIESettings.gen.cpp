// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/OnlinePIESettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePIESettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlinePIESettings();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlinePIESettings_NoRegister();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPIELoginSettingsInternal();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin ScriptStruct FPIELoginSettingsInternal
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal;
class UScriptStruct* FPIELoginSettingsInternal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIELoginSettingsInternal, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("PIELoginSettingsInternal"));
	}
	return Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FPIELoginSettingsInternal>()
{
	return FPIELoginSettingsInternal::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores PIE login credentials\n */" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "ToolTip", "Stores PIE login credentials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "User Id" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Id of the user logging in (email, display name, facebook id, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Password" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "PasswordField", "TRUE" },
		{ "Tooltip", "Credentials of the user logging in (password or auth token)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenBytes_MetaData[] = {
		{ "Comment", "/** Token stored as an array of bytes, encrypted */" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "ToolTip", "Token stored as an array of bytes, encrypted" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TokenBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TokenBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIELoginSettingsInternal>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPIELoginSettingsInternal, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPIELoginSettingsInternal, Token), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Token_MetaData), NewProp_Token_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPIELoginSettingsInternal, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_Inner = { "TokenBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes = { "TokenBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPIELoginSettingsInternal, TokenBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenBytes_MetaData), NewProp_TokenBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	&NewStructOps,
	"PIELoginSettingsInternal",
	Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::PropPointers),
	sizeof(FPIELoginSettingsInternal),
	alignof(FPIELoginSettingsInternal),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPIELoginSettingsInternal()
{
	if (!Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.InnerSingleton, Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.InnerSingleton;
}
// End ScriptStruct FPIELoginSettingsInternal

// Begin Class UOnlinePIESettings
void UOnlinePIESettings::StaticRegisterNativesUOnlinePIESettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePIESettings);
UClass* Z_Construct_UClass_UOnlinePIESettings_NoRegister()
{
	return UOnlinePIESettings::StaticClass();
}
struct Z_Construct_UClass_UOnlinePIESettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Setup login credentials for the Play In Editor (PIE) feature\n */" },
		{ "DisplayName", "Play Credentials" },
		{ "IncludePath", "OnlinePIESettings.h" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Setup login credentials for the Play In Editor (PIE) feature" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlinePIEEnabled_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Enable Logins" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Attempt to login with user credentials on a backend service before launching the PIE instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Logins_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Credentials" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Login credentials, at least one for each instance of PIE that is intended to be run" },
	};
#endif // WITH_METADATA
	static void NewProp_bOnlinePIEEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlinePIEEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Logins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Logins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePIESettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_SetBit(void* Obj)
{
	((UOnlinePIESettings*)Obj)->bOnlinePIEEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled = { "bOnlinePIEEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOnlinePIESettings), &Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlinePIEEnabled_MetaData), NewProp_bOnlinePIEEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_Inner = { "Logins", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPIELoginSettingsInternal, METADATA_PARAMS(0, nullptr) }; // 190760656
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins = { "Logins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlinePIESettings, Logins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Logins_MetaData), NewProp_Logins_MetaData) }; // 190760656
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnlinePIESettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePIESettings_Statics::ClassParams = {
	&UOnlinePIESettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlinePIESettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlinePIESettings()
{
	if (!Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton, Z_Construct_UClass_UOnlinePIESettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlinePIESettings>()
{
	return UOnlinePIESettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePIESettings);
UOnlinePIESettings::~UOnlinePIESettings() {}
// End Class UOnlinePIESettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPIELoginSettingsInternal::StaticStruct, Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewStructOps, TEXT("PIELoginSettingsInternal"), &Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIELoginSettingsInternal), 190760656U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlinePIESettings, UOnlinePIESettings::StaticClass, TEXT("UOnlinePIESettings"), &Z_Registration_Info_UClass_UOnlinePIESettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePIESettings), 2464126553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_2171297968(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
