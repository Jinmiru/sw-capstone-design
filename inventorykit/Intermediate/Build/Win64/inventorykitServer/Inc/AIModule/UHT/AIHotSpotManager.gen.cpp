// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIHotSpotManager() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager();
AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAIHotSpotManager
void UAIHotSpotManager::StaticRegisterNativesUAIHotSpotManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIHotSpotManager);
UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister()
{
	return UAIHotSpotManager::StaticClass();
}
struct Z_Construct_UClass_UAIHotSpotManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HotSpots/AIHotSpotManager.h" },
		{ "ModuleRelativePath", "Classes/HotSpots/AIHotSpotManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIHotSpotManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAIHotSpotManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIHotSpotManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIHotSpotManager_Statics::ClassParams = {
	&UAIHotSpotManager::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIHotSpotManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIHotSpotManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIHotSpotManager()
{
	if (!Z_Registration_Info_UClass_UAIHotSpotManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIHotSpotManager.OuterSingleton, Z_Construct_UClass_UAIHotSpotManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIHotSpotManager.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAIHotSpotManager>()
{
	return UAIHotSpotManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIHotSpotManager);
UAIHotSpotManager::~UAIHotSpotManager() {}
// End Class UAIHotSpotManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIHotSpotManager, UAIHotSpotManager::StaticClass, TEXT("UAIHotSpotManager"), &Z_Registration_Info_UClass_UAIHotSpotManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIHotSpotManager), 4173986176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_880948870(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
