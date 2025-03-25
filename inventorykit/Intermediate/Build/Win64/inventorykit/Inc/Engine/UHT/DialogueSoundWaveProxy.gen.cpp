// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSoundWaveProxy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy();
ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDialogueSoundWaveProxy
void UDialogueSoundWaveProxy::StaticRegisterNativesUDialogueSoundWaveProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueSoundWaveProxy);
UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister()
{
	return UDialogueSoundWaveProxy::StaticClass();
}
struct Z_Construct_UClass_UDialogueSoundWaveProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/DialogueSoundWaveProxy.h" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueSoundWaveProxy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueSoundWaveProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::ClassParams = {
	&UDialogueSoundWaveProxy::StaticClass,
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
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueSoundWaveProxy()
{
	if (!Z_Registration_Info_UClass_UDialogueSoundWaveProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueSoundWaveProxy.OuterSingleton, Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueSoundWaveProxy.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDialogueSoundWaveProxy>()
{
	return UDialogueSoundWaveProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueSoundWaveProxy);
UDialogueSoundWaveProxy::~UDialogueSoundWaveProxy() {}
// End Class UDialogueSoundWaveProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueSoundWaveProxy, UDialogueSoundWaveProxy::StaticClass, TEXT("UDialogueSoundWaveProxy"), &Z_Registration_Info_UClass_UDialogueSoundWaveProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueSoundWaveProxy), 2037461881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_2212908595(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
