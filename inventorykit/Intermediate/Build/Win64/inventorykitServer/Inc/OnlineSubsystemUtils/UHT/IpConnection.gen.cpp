// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/IpConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIpConnection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UIpConnection
void UIpConnection::StaticRegisterNativesUIpConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIpConnection);
UClass* Z_Construct_UClass_UIpConnection_NoRegister()
{
	return UIpConnection::StaticClass();
}
struct Z_Construct_UClass_UIpConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IpConnection.h" },
		{ "ModuleRelativePath", "Classes/IpConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketErrorDisconnectDelay_MetaData[] = {
		{ "Comment", "/** Instead of disconnecting immediately on a socket error, wait for some time to see if we can recover. Specified in Seconds. */" },
		{ "ModuleRelativePath", "Classes/IpConnection.h" },
		{ "ToolTip", "Instead of disconnecting immediately on a socket error, wait for some time to see if we can recover. Specified in Seconds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SocketErrorDisconnectDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIpConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay = { "SocketErrorDisconnectDelay", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIpConnection, SocketErrorDisconnectDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketErrorDisconnectDelay_MetaData), NewProp_SocketErrorDisconnectDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIpConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIpConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIpConnection_Statics::ClassParams = {
	&UIpConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIpConnection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnection_Statics::PropPointers),
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UIpConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIpConnection()
{
	if (!Z_Registration_Info_UClass_UIpConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIpConnection.OuterSingleton, Z_Construct_UClass_UIpConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIpConnection.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UIpConnection>()
{
	return UIpConnection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIpConnection);
UIpConnection::~UIpConnection() {}
// End Class UIpConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIpConnection, UIpConnection::StaticClass, TEXT("UIpConnection"), &Z_Registration_Info_UClass_UIpConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIpConnection), 163579807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h_3587628192(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
