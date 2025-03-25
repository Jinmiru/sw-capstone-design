// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/EngineSettings/Classes/GameNetworkManagerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameNetworkManagerSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References

// Begin Class UGameNetworkManagerSettings
void UGameNetworkManagerSettings::StaticRegisterNativesUGameNetworkManagerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameNetworkManagerSettings);
UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister()
{
	return UGameNetworkManagerSettings::StaticClass();
}
struct Z_Construct_UClass_UGameNetworkManagerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds the settings for the AGameNetworkManager class.\n */" },
		{ "IncludePath", "GameNetworkManagerSettings.h" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Holds the settings for the AGameNetworkManager class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDynamicBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "Comment", "/** Minimum bandwidth dynamically set per connection. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Minimum bandwidth dynamically set per connection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDynamicBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "Comment", "/** Maximum bandwidth dynamically set per connection. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Maximum bandwidth dynamically set per connection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalNetBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "Comment", "/** Total available bandwidth for listen server, split dynamically across net connections. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Total available bandwidth for listen server, split dynamically across net connections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BadPingThreshold_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The point we determine the server is either delaying packets or has bad upstream. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The point we determine the server is either delaying packets or has bad upstream." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStandbyCheckingEnabled_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** Used to determine if checking for standby cheats should occur. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Used to determine if checking for standby cheats should occur." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandbyRxCheatTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/**  The amount of time without packets before triggering the cheat code. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandbyTxCheatTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The amount of time without packets before triggering the cheat code. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForRxStandby_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The percentage of clients missing RX data before triggering the standby code. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients missing RX data before triggering the standby code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForTxStandby_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The percentage of clients missing TX data before triggering the standby code. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients missing TX data before triggering the standby code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentForBadPing_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The percentage of clients with bad ping before triggering the standby code. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients with bad ping before triggering the standby code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressStandbyWaitTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The amount of time to wait before checking a connection for standby issues. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time to wait before checking a connection for standby issues." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDynamicBandwidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDynamicBandwidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNetBandwidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BadPingThreshold;
	static void NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStandbyCheckingEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandbyRxCheatTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandbyTxCheatTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForRxStandby;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForTxStandby;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentForBadPing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JoinInProgressStandbyWaitTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameNetworkManagerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth = { "MinDynamicBandwidth", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, MinDynamicBandwidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDynamicBandwidth_MetaData), NewProp_MinDynamicBandwidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth = { "MaxDynamicBandwidth", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, MaxDynamicBandwidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDynamicBandwidth_MetaData), NewProp_MaxDynamicBandwidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth = { "TotalNetBandwidth", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, TotalNetBandwidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalNetBandwidth_MetaData), NewProp_TotalNetBandwidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold = { "BadPingThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, BadPingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BadPingThreshold_MetaData), NewProp_BadPingThreshold_MetaData) };
void Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj)
{
	((UGameNetworkManagerSettings*)Obj)->bIsStandbyCheckingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled = { "bIsStandbyCheckingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGameNetworkManagerSettings), &Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStandbyCheckingEnabled_MetaData), NewProp_bIsStandbyCheckingEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime = { "StandbyRxCheatTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, StandbyRxCheatTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandbyRxCheatTime_MetaData), NewProp_StandbyRxCheatTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime = { "StandbyTxCheatTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, StandbyTxCheatTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandbyTxCheatTime_MetaData), NewProp_StandbyTxCheatTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby = { "PercentMissingForRxStandby", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentMissingForRxStandby), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentMissingForRxStandby_MetaData), NewProp_PercentMissingForRxStandby_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby = { "PercentMissingForTxStandby", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentMissingForTxStandby), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentMissingForTxStandby_MetaData), NewProp_PercentMissingForTxStandby_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing = { "PercentForBadPing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentForBadPing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentForBadPing_MetaData), NewProp_PercentForBadPing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime = { "JoinInProgressStandbyWaitTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameNetworkManagerSettings, JoinInProgressStandbyWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinInProgressStandbyWaitTime_MetaData), NewProp_JoinInProgressStandbyWaitTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameNetworkManagerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::ClassParams = {
	&UGameNetworkManagerSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameNetworkManagerSettings()
{
	if (!Z_Registration_Info_UClass_UGameNetworkManagerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameNetworkManagerSettings.OuterSingleton, Z_Construct_UClass_UGameNetworkManagerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameNetworkManagerSettings.OuterSingleton;
}
template<> ENGINESETTINGS_API UClass* StaticClass<UGameNetworkManagerSettings>()
{
	return UGameNetworkManagerSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameNetworkManagerSettings);
UGameNetworkManagerSettings::~UGameNetworkManagerSettings() {}
// End Class UGameNetworkManagerSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameNetworkManagerSettings, UGameNetworkManagerSettings::StaticClass, TEXT("UGameNetworkManagerSettings"), &Z_Registration_Info_UClass_UGameNetworkManagerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameNetworkManagerSettings), 1936941325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_3430166734(TEXT("/Script/EngineSettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
