// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/DoublePerlinNoiseChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoublePerlinNoiseChannelEvaluatorSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UDoublePerlinNoiseChannelEvaluatorSystem
void UDoublePerlinNoiseChannelEvaluatorSystem::StaticRegisterNativesUDoublePerlinNoiseChannelEvaluatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoublePerlinNoiseChannelEvaluatorSystem);
UClass* Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_NoRegister()
{
	return UDoublePerlinNoiseChannelEvaluatorSystem::StaticClass();
}
struct Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating double perlin noise channels.\n */" },
		{ "IncludePath", "Systems/DoublePerlinNoiseChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/DoublePerlinNoiseChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating double perlin noise channels." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoublePerlinNoiseChannelEvaluatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::ClassParams = {
	&UDoublePerlinNoiseChannelEvaluatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem()
{
	if (!Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UDoublePerlinNoiseChannelEvaluatorSystem>()
{
	return UDoublePerlinNoiseChannelEvaluatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDoublePerlinNoiseChannelEvaluatorSystem);
UDoublePerlinNoiseChannelEvaluatorSystem::~UDoublePerlinNoiseChannelEvaluatorSystem() {}
// End Class UDoublePerlinNoiseChannelEvaluatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_DoublePerlinNoiseChannelEvaluatorSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem, UDoublePerlinNoiseChannelEvaluatorSystem::StaticClass, TEXT("UDoublePerlinNoiseChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoublePerlinNoiseChannelEvaluatorSystem), 123330652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_DoublePerlinNoiseChannelEvaluatorSystem_h_3077610524(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_DoublePerlinNoiseChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_DoublePerlinNoiseChannelEvaluatorSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
