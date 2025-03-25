// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Actor() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Actor();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Actor_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryItemType_Actor
void UEnvQueryItemType_Actor::StaticRegisterNativesUEnvQueryItemType_Actor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryItemType_Actor);
UClass* Z_Construct_UClass_UEnvQueryItemType_Actor_NoRegister()
{
	return UEnvQueryItemType_Actor::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryItemType_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Items/EnvQueryItemType_Actor.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Items/EnvQueryItemType_Actor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryItemType_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType_ActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::ClassParams = {
	&UEnvQueryItemType_Actor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryItemType_Actor()
{
	if (!Z_Registration_Info_UClass_UEnvQueryItemType_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryItemType_Actor.OuterSingleton, Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryItemType_Actor.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryItemType_Actor>()
{
	return UEnvQueryItemType_Actor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryItemType_Actor);
UEnvQueryItemType_Actor::~UEnvQueryItemType_Actor() {}
// End Class UEnvQueryItemType_Actor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryItemType_Actor, UEnvQueryItemType_Actor::StaticClass, TEXT("UEnvQueryItemType_Actor"), &Z_Registration_Info_UClass_UEnvQueryItemType_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryItemType_Actor), 2350610286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h_3422875776(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
