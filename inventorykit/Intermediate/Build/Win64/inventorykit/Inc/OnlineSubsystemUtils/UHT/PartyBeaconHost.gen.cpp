// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/PartyBeaconHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyBeaconHost() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconHost();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconHost_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UPartyBeaconState_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class APartyBeaconHost
void APartyBeaconHost::StaticRegisterNativesAPartyBeaconHost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APartyBeaconHost);
UClass* Z_Construct_UClass_APartyBeaconHost_NoRegister()
{
	return APartyBeaconHost::StaticClass();
}
struct Z_Construct_UClass_APartyBeaconHost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon host used for taking reservations for an existing game session\n */" },
		{ "IncludePath", "PartyBeaconHost.h" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "A beacon host used for taking reservations for an existing game session" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Comment", "/** State of the beacon */" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "State of the beacon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogoutOnSessionTimeout_MetaData[] = {
		{ "Comment", "/** Do the timeouts below cause a player to be removed from the reservation list */" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "Do the timeouts below cause a player to be removed from the reservation list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidationStrRequired_MetaData[] = {
		{ "Comment", "/** Do party members require validation strings. */" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "Do party members require validation strings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionTimeoutSecs_MetaData[] = {
		{ "Comment", "/** Seconds that can elapse before a reservation is removed due to player not being registered with the session */" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "Seconds that can elapse before a reservation is removed due to player not being registered with the session" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TravelSessionTimeoutSecs_MetaData[] = {
		{ "Comment", "/** Seconds that can elapse before a reservation is removed due to player not being registered with the session during a travel */" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "Seconds that can elapse before a reservation is removed due to player not being registered with the session during a travel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_State;
	static void NewProp_bLogoutOnSessionTimeout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogoutOnSessionTimeout;
	static void NewProp_bIsValidationStrRequired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidationStrRequired;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SessionTimeoutSecs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TravelSessionTimeoutSecs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartyBeaconHost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartyBeaconHost, State), Z_Construct_UClass_UPartyBeaconState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
void Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_SetBit(void* Obj)
{
	((APartyBeaconHost*)Obj)->bLogoutOnSessionTimeout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout = { "bLogoutOnSessionTimeout", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APartyBeaconHost), &Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogoutOnSessionTimeout_MetaData), NewProp_bLogoutOnSessionTimeout_MetaData) };
void Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bIsValidationStrRequired_SetBit(void* Obj)
{
	((APartyBeaconHost*)Obj)->bIsValidationStrRequired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bIsValidationStrRequired = { "bIsValidationStrRequired", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APartyBeaconHost), &Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bIsValidationStrRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValidationStrRequired_MetaData), NewProp_bIsValidationStrRequired_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_SessionTimeoutSecs = { "SessionTimeoutSecs", nullptr, (EPropertyFlags)0x0020080000006000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartyBeaconHost, SessionTimeoutSecs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionTimeoutSecs_MetaData), NewProp_SessionTimeoutSecs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs = { "TravelSessionTimeoutSecs", nullptr, (EPropertyFlags)0x0020080000006000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartyBeaconHost, TravelSessionTimeoutSecs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TravelSessionTimeoutSecs_MetaData), NewProp_TravelSessionTimeoutSecs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartyBeaconHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bIsValidationStrRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_SessionTimeoutSecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconHost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APartyBeaconHost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconHost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APartyBeaconHost_Statics::ClassParams = {
	&APartyBeaconHost::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APartyBeaconHost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconHost_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconHost_Statics::Class_MetaDataParams), Z_Construct_UClass_APartyBeaconHost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APartyBeaconHost()
{
	if (!Z_Registration_Info_UClass_APartyBeaconHost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APartyBeaconHost.OuterSingleton, Z_Construct_UClass_APartyBeaconHost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APartyBeaconHost.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<APartyBeaconHost>()
{
	return APartyBeaconHost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APartyBeaconHost);
APartyBeaconHost::~APartyBeaconHost() {}
// End Class APartyBeaconHost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APartyBeaconHost, APartyBeaconHost::StaticClass, TEXT("APartyBeaconHost"), &Z_Registration_Info_UClass_APartyBeaconHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APartyBeaconHost), 1834913163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h_4079561115(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
