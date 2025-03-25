// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Private/Systems/TemplateSequenceSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_NoRegister();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_NoRegister();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSystem();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References

// Begin Class UTemplateSequenceSystem
void UTemplateSequenceSystem::StaticRegisterNativesUTemplateSequenceSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateSequenceSystem);
UClass* Z_Construct_UClass_UTemplateSequenceSystem_NoRegister()
{
	return UTemplateSequenceSystem::StaticClass();
}
struct Z_Construct_UClass_UTemplateSequenceSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/TemplateSequenceSystem.h" },
		{ "ModuleRelativePath", "Private/Systems/TemplateSequenceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequenceSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTemplateSequenceSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequenceSystem_Statics::ClassParams = {
	&UTemplateSequenceSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTemplateSequenceSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTemplateSequenceSystem()
{
	if (!Z_Registration_Info_UClass_UTemplateSequenceSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSequenceSystem.OuterSingleton, Z_Construct_UClass_UTemplateSequenceSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTemplateSequenceSystem.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequenceSystem>()
{
	return UTemplateSequenceSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequenceSystem);
UTemplateSequenceSystem::~UTemplateSequenceSystem() {}
// End Class UTemplateSequenceSystem

// Begin Class UTemplateSequencePropertyScalingInstantiatorSystem
void UTemplateSequencePropertyScalingInstantiatorSystem::StaticRegisterNativesUTemplateSequencePropertyScalingInstantiatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateSequencePropertyScalingInstantiatorSystem);
UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_NoRegister()
{
	return UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass();
}
struct Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/TemplateSequenceSystem.h" },
		{ "ModuleRelativePath", "Private/Systems/TemplateSequenceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequencePropertyScalingInstantiatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::ClassParams = {
	&UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem()
{
	if (!Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequencePropertyScalingInstantiatorSystem>()
{
	return UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequencePropertyScalingInstantiatorSystem);
UTemplateSequencePropertyScalingInstantiatorSystem::~UTemplateSequencePropertyScalingInstantiatorSystem() {}
// End Class UTemplateSequencePropertyScalingInstantiatorSystem

// Begin Class UTemplateSequencePropertyScalingEvaluatorSystem
void UTemplateSequencePropertyScalingEvaluatorSystem::StaticRegisterNativesUTemplateSequencePropertyScalingEvaluatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateSequencePropertyScalingEvaluatorSystem);
UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_NoRegister()
{
	return UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass();
}
struct Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/TemplateSequenceSystem.h" },
		{ "ModuleRelativePath", "Private/Systems/TemplateSequenceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequencePropertyScalingEvaluatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::ClassParams = {
	&UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem()
{
	if (!Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequencePropertyScalingEvaluatorSystem>()
{
	return UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequencePropertyScalingEvaluatorSystem);
UTemplateSequencePropertyScalingEvaluatorSystem::~UTemplateSequencePropertyScalingEvaluatorSystem() {}
// End Class UTemplateSequencePropertyScalingEvaluatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Systems_TemplateSequenceSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateSequenceSystem, UTemplateSequenceSystem::StaticClass, TEXT("UTemplateSequenceSystem"), &Z_Registration_Info_UClass_UTemplateSequenceSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSequenceSystem), 1648347026U) },
		{ Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem, UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass, TEXT("UTemplateSequencePropertyScalingInstantiatorSystem"), &Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSequencePropertyScalingInstantiatorSystem), 564279652U) },
		{ Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem, UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass, TEXT("UTemplateSequencePropertyScalingEvaluatorSystem"), &Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSequencePropertyScalingEvaluatorSystem), 188828995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Systems_TemplateSequenceSystem_h_316564812(TEXT("/Script/TemplateSequence"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Systems_TemplateSequenceSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Systems_TemplateSequenceSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
