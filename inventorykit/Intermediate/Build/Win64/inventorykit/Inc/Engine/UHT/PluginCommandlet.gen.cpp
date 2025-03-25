// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Commandlets/PluginCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginCommandlet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
ENGINE_API UClass* Z_Construct_UClass_UPluginCommandlet();
ENGINE_API UClass* Z_Construct_UClass_UPluginCommandlet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPluginCommandlet
void UPluginCommandlet::StaticRegisterNativesUPluginCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPluginCommandlet);
UClass* Z_Construct_UClass_UPluginCommandlet_NoRegister()
{
	return UPluginCommandlet::StaticClass();
}
struct Z_Construct_UClass_UPluginCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/PluginCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/PluginCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPluginCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPluginCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPluginCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPluginCommandlet_Statics::ClassParams = {
	&UPluginCommandlet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPluginCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPluginCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPluginCommandlet()
{
	if (!Z_Registration_Info_UClass_UPluginCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPluginCommandlet.OuterSingleton, Z_Construct_UClass_UPluginCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPluginCommandlet.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPluginCommandlet>()
{
	return UPluginCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPluginCommandlet);
UPluginCommandlet::~UPluginCommandlet() {}
// End Class UPluginCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPluginCommandlet, UPluginCommandlet::StaticClass, TEXT("UPluginCommandlet"), &Z_Registration_Info_UClass_UPluginCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPluginCommandlet), 3915623125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_1414101192(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
