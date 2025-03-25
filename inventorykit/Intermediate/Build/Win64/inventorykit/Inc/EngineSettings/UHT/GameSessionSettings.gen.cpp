// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/EngineSettings/Classes/GameSessionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSessionSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameSessionSettings();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameSessionSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References

// Begin Class UGameSessionSettings
void UGameSessionSettings::StaticRegisterNativesUGameSessionSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSessionSettings);
UClass* Z_Construct_UClass_UGameSessionSettings_NoRegister()
{
	return UGameSessionSettings::StaticClass();
}
struct Z_Construct_UClass_UGameSessionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameSessionSettings.h" },
		{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpectators_MetaData[] = {
		{ "Category", "GameSessionSettings" },
		{ "Comment", "/** Maximum number of spectators allowed by this server. */" },
		{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
		{ "ToolTip", "Maximum number of spectators allowed by this server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "GameSessionSettings" },
		{ "Comment", "/** Maximum number of players allowed by this server. */" },
		{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
		{ "ToolTip", "Maximum number of players allowed by this server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPushToTalk_MetaData[] = {
		{ "Category", "GameSessionSettings" },
		{ "Comment", "/** Is voice enabled always or via a push to talk key binding. */" },
		{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
		{ "ToolTip", "Is voice enabled always or via a push to talk key binding." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpectators;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static void NewProp_bRequiresPushToTalk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPushToTalk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSessionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxSpectators = { "MaxSpectators", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSessionSettings, MaxSpectators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpectators_MetaData), NewProp_MaxSpectators_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSessionSettings, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayers_MetaData), NewProp_MaxPlayers_MetaData) };
void Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk_SetBit(void* Obj)
{
	((UGameSessionSettings*)Obj)->bRequiresPushToTalk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk = { "bRequiresPushToTalk", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGameSessionSettings), &Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresPushToTalk_MetaData), NewProp_bRequiresPushToTalk_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSessionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxSpectators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameSessionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSessionSettings_Statics::ClassParams = {
	&UGameSessionSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameSessionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSessionSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameSessionSettings()
{
	if (!Z_Registration_Info_UClass_UGameSessionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSessionSettings.OuterSingleton, Z_Construct_UClass_UGameSessionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSessionSettings.OuterSingleton;
}
template<> ENGINESETTINGS_API UClass* StaticClass<UGameSessionSettings>()
{
	return UGameSessionSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSessionSettings);
UGameSessionSettings::~UGameSessionSettings() {}
// End Class UGameSessionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSessionSettings, UGameSessionSettings::StaticClass, TEXT("UGameSessionSettings"), &Z_Registration_Info_UClass_UGameSessionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSessionSettings), 2376819236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_1993313869(TEXT("/Script/EngineSettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
