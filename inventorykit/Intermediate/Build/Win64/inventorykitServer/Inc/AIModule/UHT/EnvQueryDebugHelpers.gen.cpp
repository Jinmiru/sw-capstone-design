// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryDebugHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryDebugHelpers() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryDebugHelpers();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryDebugHelpers_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryDebugHelpers
void UEnvQueryDebugHelpers::StaticRegisterNativesUEnvQueryDebugHelpers()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryDebugHelpers);
UClass* Z_Construct_UClass_UEnvQueryDebugHelpers_NoRegister()
{
	return UEnvQueryDebugHelpers::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryDebugHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryDebugHelpers.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryDebugHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryDebugHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::ClassParams = {
	&UEnvQueryDebugHelpers::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryDebugHelpers()
{
	if (!Z_Registration_Info_UClass_UEnvQueryDebugHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryDebugHelpers.OuterSingleton, Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryDebugHelpers.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryDebugHelpers>()
{
	return UEnvQueryDebugHelpers::StaticClass();
}
UEnvQueryDebugHelpers::UEnvQueryDebugHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryDebugHelpers);
UEnvQueryDebugHelpers::~UEnvQueryDebugHelpers() {}
// End Class UEnvQueryDebugHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryDebugHelpers, UEnvQueryDebugHelpers::StaticClass, TEXT("UEnvQueryDebugHelpers"), &Z_Registration_Info_UClass_UEnvQueryDebugHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryDebugHelpers), 173294778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h_32887538(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
