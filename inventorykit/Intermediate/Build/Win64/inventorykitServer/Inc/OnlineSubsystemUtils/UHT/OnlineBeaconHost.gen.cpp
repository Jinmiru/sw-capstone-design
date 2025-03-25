// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/OnlineBeaconHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconHost() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeacon();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHost();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHost_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class AOnlineBeaconHost
void AOnlineBeaconHost::StaticRegisterNativesAOnlineBeaconHost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeaconHost);
UClass* Z_Construct_UClass_AOnlineBeaconHost_NoRegister()
{
	return AOnlineBeaconHost::StaticClass();
}
struct Z_Construct_UClass_AOnlineBeaconHost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Main actor that listens for side channel communication from another Unreal Engine application\n *\n * The AOnlineBeaconHost listens for connections to route to a registered AOnlineBeaconHostObject \n * The AOnlineBeaconHostObject is responsible for spawning the server version of the AOnlineBeaconClient\n * The AOnlineBeaconHost pairs the two client actors, verifies the validity of the exchange, and accepts/continues the connection\n */" },
		{ "IncludePath", "OnlineBeaconHost.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHost.h" },
		{ "ToolTip", "Main actor that listens for side channel communication from another Unreal Engine application\n\nThe AOnlineBeaconHost listens for connections to route to a registered AOnlineBeaconHostObject\nThe AOnlineBeaconHostObject is responsible for spawning the server version of the AOnlineBeaconClient\nThe AOnlineBeaconHost pairs the two client actors, verifies the validity of the exchange, and accepts/continues the connection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenPort_MetaData[] = {
		{ "Comment", "/** Configured listen port for this beacon host */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHost.h" },
		{ "ToolTip", "Configured listen port for this beacon host" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReuseAddressAndPort_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether to configure the listening socket to allow reuse of the address and port. If this is true, be sure no other\n\x09 * servers can run on the same port, otherwise this can lead to undefined behavior since packets will go to two servers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHost.h" },
		{ "ToolTip", "Whether to configure the listening socket to allow reuse of the address and port. If this is true, be sure no other\nservers can run on the same port, otherwise this can lead to undefined behavior since packets will go to two servers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAuthRequired_MetaData[] = {
		{ "Comment", "/** Set this to true if you require clients to negotiate auth prior to joining the beacon */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHost.h" },
		{ "ToolTip", "Set this to true if you require clients to negotiate auth prior to joining the beacon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAuthTokenSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnlineBeaconHost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientActors_MetaData[] = {
		{ "Comment", "/** List of all client beacon actors with active connections */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHost.h" },
		{ "ToolTip", "List of all client beacon actors with active connections" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ListenPort;
	static void NewProp_bReuseAddressAndPort_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseAddressAndPort;
	static void NewProp_bAuthRequired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAuthRequired;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxAuthTokenSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconHost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ListenPort = { "ListenPort", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOnlineBeaconHost, ListenPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenPort_MetaData), NewProp_ListenPort_MetaData) };
void Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_bReuseAddressAndPort_SetBit(void* Obj)
{
	((AOnlineBeaconHost*)Obj)->bReuseAddressAndPort = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_bReuseAddressAndPort = { "bReuseAddressAndPort", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOnlineBeaconHost), &Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_bReuseAddressAndPort_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReuseAddressAndPort_MetaData), NewProp_bReuseAddressAndPort_MetaData) };
void Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_bAuthRequired_SetBit(void* Obj)
{
	((AOnlineBeaconHost*)Obj)->bAuthRequired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_bAuthRequired = { "bAuthRequired", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOnlineBeaconHost), &Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_bAuthRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAuthRequired_MetaData), NewProp_bAuthRequired_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_MaxAuthTokenSize = { "MaxAuthTokenSize", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOnlineBeaconHost, MaxAuthTokenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAuthTokenSize_MetaData), NewProp_MaxAuthTokenSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors_Inner = { "ClientActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors = { "ClientActors", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOnlineBeaconHost, ClientActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientActors_MetaData), NewProp_ClientActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBeaconHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ListenPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_bReuseAddressAndPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_bAuthRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_MaxAuthTokenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOnlineBeaconHost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeacon,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconHost_Statics::ClassParams = {
	&AOnlineBeaconHost::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOnlineBeaconHost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHost_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHost_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineBeaconHost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOnlineBeaconHost()
{
	if (!Z_Registration_Info_UClass_AOnlineBeaconHost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeaconHost.OuterSingleton, Z_Construct_UClass_AOnlineBeaconHost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOnlineBeaconHost.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeaconHost>()
{
	return AOnlineBeaconHost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconHost);
AOnlineBeaconHost::~AOnlineBeaconHost() {}
// End Class AOnlineBeaconHost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeaconHost, AOnlineBeaconHost::StaticClass, TEXT("AOnlineBeaconHost"), &Z_Registration_Info_UClass_AOnlineBeaconHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeaconHost), 1743429152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h_1191912929(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
