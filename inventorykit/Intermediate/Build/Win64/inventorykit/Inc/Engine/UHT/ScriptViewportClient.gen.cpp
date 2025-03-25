// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptViewportClient() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UScriptViewportClient();
ENGINE_API UClass* Z_Construct_UClass_UScriptViewportClient_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UScriptViewportClient
void UScriptViewportClient::StaticRegisterNativesUScriptViewportClient()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptViewportClient);
UClass* Z_Construct_UClass_UScriptViewportClient_NoRegister()
{
	return UScriptViewportClient::StaticClass();
}
struct Z_Construct_UClass_UScriptViewportClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ScriptViewportClient.h" },
		{ "ModuleRelativePath", "Classes/Engine/ScriptViewportClient.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptViewportClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UScriptViewportClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScriptViewportClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptViewportClient_Statics::ClassParams = {
	&UScriptViewportClient::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScriptViewportClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UScriptViewportClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScriptViewportClient()
{
	if (!Z_Registration_Info_UClass_UScriptViewportClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptViewportClient.OuterSingleton, Z_Construct_UClass_UScriptViewportClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScriptViewportClient.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UScriptViewportClient>()
{
	return UScriptViewportClient::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptViewportClient);
UScriptViewportClient::~UScriptViewportClient() {}
// End Class UScriptViewportClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScriptViewportClient, UScriptViewportClient::StaticClass, TEXT("UScriptViewportClient"), &Z_Registration_Info_UClass_UScriptViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptViewportClient), 2074559943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_2143325801(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
