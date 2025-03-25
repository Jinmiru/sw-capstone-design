// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISightTargetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISightTargetInterface() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface();
AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Interface UAISightTargetInterface
void UAISightTargetInterface::StaticRegisterNativesUAISightTargetInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISightTargetInterface);
UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister()
{
	return UAISightTargetInterface::StaticClass();
}
struct Z_Construct_UClass_UAISightTargetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISightTargetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAISightTargetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAISightTargetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISightTargetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISightTargetInterface_Statics::ClassParams = {
	&UAISightTargetInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISightTargetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISightTargetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISightTargetInterface()
{
	if (!Z_Registration_Info_UClass_UAISightTargetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISightTargetInterface.OuterSingleton, Z_Construct_UClass_UAISightTargetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISightTargetInterface.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISightTargetInterface>()
{
	return UAISightTargetInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISightTargetInterface);
UAISightTargetInterface::~UAISightTargetInterface() {}
// End Interface UAISightTargetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISightTargetInterface, UAISightTargetInterface::StaticClass, TEXT("UAISightTargetInterface"), &Z_Registration_Info_UClass_UAISightTargetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISightTargetInterface), 787423504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_1495181724(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
