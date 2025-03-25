// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFollowingManager() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingManager();
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UPathFollowingManager
void UPathFollowingManager::StaticRegisterNativesUPathFollowingManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPathFollowingManager);
UClass* Z_Construct_UClass_UPathFollowingManager_NoRegister()
{
	return UPathFollowingManager::StaticClass();
}
struct Z_Construct_UClass_UPathFollowingManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/PathFollowingManager.h" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathFollowingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPathFollowingManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathFollowingManager_Statics::ClassParams = {
	&UPathFollowingManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathFollowingManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPathFollowingManager()
{
	if (!Z_Registration_Info_UClass_UPathFollowingManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathFollowingManager.OuterSingleton, Z_Construct_UClass_UPathFollowingManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPathFollowingManager.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UPathFollowingManager>()
{
	return UPathFollowingManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPathFollowingManager);
UPathFollowingManager::~UPathFollowingManager() {}
// End Class UPathFollowingManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPathFollowingManager, UPathFollowingManager::StaticClass, TEXT("UPathFollowingManager"), &Z_Registration_Info_UClass_UPathFollowingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathFollowingManager), 2656313671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h_1431618481(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
