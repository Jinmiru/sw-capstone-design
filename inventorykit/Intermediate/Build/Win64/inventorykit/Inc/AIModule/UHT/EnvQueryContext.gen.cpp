// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryContext
void UEnvQueryContext::StaticRegisterNativesUEnvQueryContext()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryContext);
UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister()
{
	return UEnvQueryContext::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryContext.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryContext.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_Statics::ClassParams = {
	&UEnvQueryContext::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryContext()
{
	if (!Z_Registration_Info_UClass_UEnvQueryContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryContext.OuterSingleton, Z_Construct_UClass_UEnvQueryContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryContext.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryContext>()
{
	return UEnvQueryContext::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext);
UEnvQueryContext::~UEnvQueryContext() {}
// End Class UEnvQueryContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryContext, UEnvQueryContext::StaticClass, TEXT("UEnvQueryContext"), &Z_Registration_Info_UClass_UEnvQueryContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryContext), 973814740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_3539356487(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
