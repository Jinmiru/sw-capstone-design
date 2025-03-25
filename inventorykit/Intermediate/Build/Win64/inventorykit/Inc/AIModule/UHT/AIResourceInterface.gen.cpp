// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIResourceInterface() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface();
AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Interface UAIResourceInterface
void UAIResourceInterface::StaticRegisterNativesUAIResourceInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIResourceInterface);
UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister()
{
	return UAIResourceInterface::StaticClass();
}
struct Z_Construct_UClass_UAIResourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AIResourceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAIResourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAIResourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIResourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIResourceInterface_Statics::ClassParams = {
	&UAIResourceInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIResourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIResourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIResourceInterface()
{
	if (!Z_Registration_Info_UClass_UAIResourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIResourceInterface.OuterSingleton, Z_Construct_UClass_UAIResourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIResourceInterface.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAIResourceInterface>()
{
	return UAIResourceInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIResourceInterface);
UAIResourceInterface::~UAIResourceInterface() {}
// End Interface UAIResourceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIResourceInterface, UAIResourceInterface::StaticClass, TEXT("UAIResourceInterface"), &Z_Registration_Info_UClass_UAIResourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIResourceInterface), 1205303296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_316100935(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
