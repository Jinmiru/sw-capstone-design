// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/NetworkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UNetworkSettings();
ENGINE_API UClass* Z_Construct_UClass_UNetworkSettings_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNetworkEmulationProfileDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription;
class UScriptStruct* FNetworkEmulationProfileDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkEmulationProfileDescription"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkEmulationProfileDescription>()
{
	return FNetworkEmulationProfileDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProfileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkEmulationProfileDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkEmulationProfileDescription, ProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileName_MetaData), NewProp_ProfileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkEmulationProfileDescription, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ToolTip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkEmulationProfileDescription",
	Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::PropPointers),
	sizeof(FNetworkEmulationProfileDescription),
	alignof(FNetworkEmulationProfileDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.InnerSingleton, Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.InnerSingleton;
}
// End ScriptStruct FNetworkEmulationProfileDescription

// Begin Class UNetworkSettings
void UNetworkSettings::StaticRegisterNativesUNetworkSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkSettings);
UClass* Z_Construct_UClass_UNetworkSettings_NoRegister()
{
	return UNetworkSettings::StaticClass();
}
struct Z_Construct_UClass_UNetworkSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Network settings.\n */" },
		{ "DisplayName", "Network" },
		{ "IncludePath", "Engine/NetworkSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "Network settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerifyPeer_MetaData[] = {
		{ "Category", "libcurl" },
		{ "ConsoleVariable", "n.VerifyPeer" },
		{ "DisplayName", "Verify Peer" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "If true, libcurl authenticates the peer's certificate. Disable to allow self-signed certificates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData[] = {
		{ "Category", "World" },
		{ "ConsoleVariable", "p.EnableMultiplayerWorldOriginRebasing" },
		{ "DisplayName", "Enable Multiplayer World Origin Rebasing" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "If true, origin rebasing is enabled in multiplayer games, meaning that servers and clients can have different local world origins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkEmulationProfiles_MetaData[] = {
		{ "Comment", "/** This lists the common network emulation profiles that will be selectable in PIE settings */" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "This lists the common network emulation profiles that will be selectable in PIE settings" },
	};
#endif // WITH_METADATA
	static void NewProp_bVerifyPeer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerifyPeer;
	static void NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiplayerWorldOriginRebasing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkEmulationProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NetworkEmulationProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_SetBit(void* Obj)
{
	((UNetworkSettings*)Obj)->bVerifyPeer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer = { "bVerifyPeer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNetworkSettings), &Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerifyPeer_MetaData), NewProp_bVerifyPeer_MetaData) };
void Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit(void* Obj)
{
	((UNetworkSettings*)Obj)->bEnableMultiplayerWorldOriginRebasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing = { "bEnableMultiplayerWorldOriginRebasing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNetworkSettings), &Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData), NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles_Inner = { "NetworkEmulationProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription, METADATA_PARAMS(0, nullptr) }; // 3067043973
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles = { "NetworkEmulationProfiles", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkSettings, NetworkEmulationProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkEmulationProfiles_MetaData), NewProp_NetworkEmulationProfiles_MetaData) }; // 3067043973
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetworkSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkSettings_Statics::ClassParams = {
	&UNetworkSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetworkSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkSettings()
{
	if (!Z_Registration_Info_UClass_UNetworkSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkSettings.OuterSingleton, Z_Construct_UClass_UNetworkSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkSettings>()
{
	return UNetworkSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkSettings);
UNetworkSettings::~UNetworkSettings() {}
// End Class UNetworkSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetworkEmulationProfileDescription::StaticStruct, Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewStructOps, TEXT("NetworkEmulationProfileDescription"), &Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkEmulationProfileDescription), 3067043973U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkSettings, UNetworkSettings::StaticClass, TEXT("UNetworkSettings"), &Z_Registration_Info_UClass_UNetworkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkSettings), 3389639158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_2147223820(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
