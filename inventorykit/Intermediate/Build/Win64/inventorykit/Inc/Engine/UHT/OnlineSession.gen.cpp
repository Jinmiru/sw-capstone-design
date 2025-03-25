// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSession() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UOnlineSession();
ENGINE_API UClass* Z_Construct_UClass_UOnlineSession_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UOnlineSession
void UOnlineSession::StaticRegisterNativesUOnlineSession()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSession);
UClass* Z_Construct_UClass_UOnlineSession_NoRegister()
{
	return UOnlineSession::StaticClass();
}
struct Z_Construct_UClass_UOnlineSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/OnlineSession.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/OnlineSession.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnlineSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSession_Statics::ClassParams = {
	&UOnlineSession::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlineSession()
{
	if (!Z_Registration_Info_UClass_UOnlineSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSession.OuterSingleton, Z_Construct_UClass_UOnlineSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlineSession.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UOnlineSession>()
{
	return UOnlineSession::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSession);
UOnlineSession::~UOnlineSession() {}
// End Class UOnlineSession

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSession, UOnlineSession::StaticClass, TEXT("UOnlineSession"), &Z_Registration_Info_UClass_UOnlineSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSession), 1476132161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_2843528888(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
