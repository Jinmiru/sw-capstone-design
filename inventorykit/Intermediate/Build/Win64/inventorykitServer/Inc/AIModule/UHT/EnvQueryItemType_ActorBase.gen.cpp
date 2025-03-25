// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_ActorBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryItemType_ActorBase
void UEnvQueryItemType_ActorBase::StaticRegisterNativesUEnvQueryItemType_ActorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryItemType_ActorBase);
UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase_NoRegister()
{
	return UEnvQueryItemType_ActorBase::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryItemType_ActorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryItemType_ActorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryItemType_ActorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType_VectorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_ActorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryItemType_ActorBase_Statics::ClassParams = {
	&UEnvQueryItemType_ActorBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_ActorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryItemType_ActorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase()
{
	if (!Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.OuterSingleton, Z_Construct_UClass_UEnvQueryItemType_ActorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryItemType_ActorBase>()
{
	return UEnvQueryItemType_ActorBase::StaticClass();
}
UEnvQueryItemType_ActorBase::UEnvQueryItemType_ActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryItemType_ActorBase);
UEnvQueryItemType_ActorBase::~UEnvQueryItemType_ActorBase() {}
// End Class UEnvQueryItemType_ActorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryItemType_ActorBase, UEnvQueryItemType_ActorBase::StaticClass, TEXT("UEnvQueryItemType_ActorBase"), &Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryItemType_ActorBase), 233956065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h_1133316476(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
