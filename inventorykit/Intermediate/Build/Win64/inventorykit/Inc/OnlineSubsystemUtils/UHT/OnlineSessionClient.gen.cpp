// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/OnlineSessionClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSessionClient() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UOnlineSession();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineSessionClient();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineSessionClient_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UOnlineSessionClient
void UOnlineSessionClient::StaticRegisterNativesUOnlineSessionClient()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSessionClient);
UClass* Z_Construct_UClass_UOnlineSessionClient_NoRegister()
{
	return UOnlineSessionClient::StaticClass();
}
struct Z_Construct_UClass_UOnlineSessionClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineSessionClient.h" },
		{ "ModuleRelativePath", "Classes/OnlineSessionClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromInvite_MetaData[] = {
		{ "Comment", "/** Is this join from an invite */" },
		{ "ModuleRelativePath", "Classes/OnlineSessionClient.h" },
		{ "ToolTip", "Is this join from an invite" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandlingDisconnect_MetaData[] = {
		{ "Comment", "/** Have we started returning to main menu already */" },
		{ "ModuleRelativePath", "Classes/OnlineSessionClient.h" },
		{ "ToolTip", "Have we started returning to main menu already" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsFromInvite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromInvite;
	static void NewProp_bHandlingDisconnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandlingDisconnect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSessionClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_SetBit(void* Obj)
{
	((UOnlineSessionClient*)Obj)->bIsFromInvite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite = { "bIsFromInvite", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOnlineSessionClient), &Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFromInvite_MetaData), NewProp_bIsFromInvite_MetaData) };
void Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_SetBit(void* Obj)
{
	((UOnlineSessionClient*)Obj)->bHandlingDisconnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect = { "bHandlingDisconnect", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOnlineSessionClient), &Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandlingDisconnect_MetaData), NewProp_bHandlingDisconnect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineSessionClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnlineSessionClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineSession,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSessionClient_Statics::ClassParams = {
	&UOnlineSessionClient::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOnlineSessionClient_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineSessionClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlineSessionClient()
{
	if (!Z_Registration_Info_UClass_UOnlineSessionClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSessionClient.OuterSingleton, Z_Construct_UClass_UOnlineSessionClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlineSessionClient.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineSessionClient>()
{
	return UOnlineSessionClient::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSessionClient);
UOnlineSessionClient::~UOnlineSessionClient() {}
// End Class UOnlineSessionClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSessionClient, UOnlineSessionClient::StaticClass, TEXT("UOnlineSessionClient"), &Z_Registration_Info_UClass_UOnlineSessionClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSessionClient), 1170544631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_2923373687(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
