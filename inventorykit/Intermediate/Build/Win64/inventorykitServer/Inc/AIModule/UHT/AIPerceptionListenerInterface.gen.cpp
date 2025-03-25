// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionListenerInterface() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionListenerInterface();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Interface UAIPerceptionListenerInterface
void UAIPerceptionListenerInterface::StaticRegisterNativesUAIPerceptionListenerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIPerceptionListenerInterface);
UClass* Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister()
{
	return UAIPerceptionListenerInterface::StaticClass();
}
struct Z_Construct_UClass_UAIPerceptionListenerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionListenerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAIPerceptionListenerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::ClassParams = {
	&UAIPerceptionListenerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIPerceptionListenerInterface()
{
	if (!Z_Registration_Info_UClass_UAIPerceptionListenerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIPerceptionListenerInterface.OuterSingleton, Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIPerceptionListenerInterface.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAIPerceptionListenerInterface>()
{
	return UAIPerceptionListenerInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionListenerInterface);
UAIPerceptionListenerInterface::~UAIPerceptionListenerInterface() {}
// End Interface UAIPerceptionListenerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIPerceptionListenerInterface, UAIPerceptionListenerInterface::StaticClass, TEXT("UAIPerceptionListenerInterface"), &Z_Registration_Info_UClass_UAIPerceptionListenerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIPerceptionListenerInterface), 1147580016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_3480293599(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
