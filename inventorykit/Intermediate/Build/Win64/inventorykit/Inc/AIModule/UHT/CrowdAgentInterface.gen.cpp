// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Navigation/CrowdAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdAgentInterface() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UCrowdAgentInterface();
AIMODULE_API UClass* Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Interface UCrowdAgentInterface
void UCrowdAgentInterface::StaticRegisterNativesUCrowdAgentInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrowdAgentInterface);
UClass* Z_Construct_UClass_UCrowdAgentInterface_NoRegister()
{
	return UCrowdAgentInterface::StaticClass();
}
struct Z_Construct_UClass_UCrowdAgentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdAgentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICrowdAgentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCrowdAgentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdAgentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrowdAgentInterface_Statics::ClassParams = {
	&UCrowdAgentInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdAgentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrowdAgentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrowdAgentInterface()
{
	if (!Z_Registration_Info_UClass_UCrowdAgentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrowdAgentInterface.OuterSingleton, Z_Construct_UClass_UCrowdAgentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrowdAgentInterface.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UCrowdAgentInterface>()
{
	return UCrowdAgentInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdAgentInterface);
UCrowdAgentInterface::~UCrowdAgentInterface() {}
// End Interface UCrowdAgentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrowdAgentInterface, UCrowdAgentInterface::StaticClass, TEXT("UCrowdAgentInterface"), &Z_Registration_Info_UClass_UCrowdAgentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrowdAgentInterface), 3399966029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_1109598705(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
