// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/CrowdManagerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdManagerBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UCrowdManagerBase();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UCrowdManagerBase
void UCrowdManagerBase::StaticRegisterNativesUCrowdManagerBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrowdManagerBase);
UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister()
{
	return UCrowdManagerBase::StaticClass();
}
struct Z_Construct_UClass_UCrowdManagerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for Crowd Managers. If you want to create a custom crowd manager\n *\x09implement a class extending this one and set UNavigationSystemV1::CrowdManagerClass\n *\x09to point at your class */" },
		{ "IncludePath", "CrowdManagerBase.h" },
		{ "ModuleRelativePath", "Public/CrowdManagerBase.h" },
		{ "ToolTip", "Base class for Crowd Managers. If you want to create a custom crowd manager\n   implement a class extending this one and set UNavigationSystemV1::CrowdManagerClass\n   to point at your class" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdManagerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCrowdManagerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdManagerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrowdManagerBase_Statics::ClassParams = {
	&UCrowdManagerBase::StaticClass,
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
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdManagerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrowdManagerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrowdManagerBase()
{
	if (!Z_Registration_Info_UClass_UCrowdManagerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrowdManagerBase.OuterSingleton, Z_Construct_UClass_UCrowdManagerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrowdManagerBase.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UCrowdManagerBase>()
{
	return UCrowdManagerBase::StaticClass();
}
UCrowdManagerBase::UCrowdManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdManagerBase);
UCrowdManagerBase::~UCrowdManagerBase() {}
// End Class UCrowdManagerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrowdManagerBase, UCrowdManagerBase::StaticClass, TEXT("UCrowdManagerBase"), &Z_Registration_Info_UClass_UCrowdManagerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrowdManagerBase), 2158323042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_551665238(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
