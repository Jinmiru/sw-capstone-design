// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Commandlets/SmokeTestCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmokeTestCommandlet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
ENGINE_API UClass* Z_Construct_UClass_USmokeTestCommandlet();
ENGINE_API UClass* Z_Construct_UClass_USmokeTestCommandlet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USmokeTestCommandlet
void USmokeTestCommandlet::StaticRegisterNativesUSmokeTestCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmokeTestCommandlet);
UClass* Z_Construct_UClass_USmokeTestCommandlet_NoRegister()
{
	return USmokeTestCommandlet::StaticClass();
}
struct Z_Construct_UClass_USmokeTestCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/SmokeTestCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/SmokeTestCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmokeTestCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USmokeTestCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmokeTestCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmokeTestCommandlet_Statics::ClassParams = {
	&USmokeTestCommandlet::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmokeTestCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_USmokeTestCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmokeTestCommandlet()
{
	if (!Z_Registration_Info_UClass_USmokeTestCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmokeTestCommandlet.OuterSingleton, Z_Construct_UClass_USmokeTestCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmokeTestCommandlet.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USmokeTestCommandlet>()
{
	return USmokeTestCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmokeTestCommandlet);
USmokeTestCommandlet::~USmokeTestCommandlet() {}
// End Class USmokeTestCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USmokeTestCommandlet, USmokeTestCommandlet::StaticClass, TEXT("USmokeTestCommandlet"), &Z_Registration_Info_UClass_USmokeTestCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmokeTestCommandlet), 2656880621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h_210627774(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
