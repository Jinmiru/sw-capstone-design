// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/FloatPerlinNoiseChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatPerlinNoiseChannelEvaluatorSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UFloatPerlinNoiseChannelEvaluatorSystem
void UFloatPerlinNoiseChannelEvaluatorSystem::StaticRegisterNativesUFloatPerlinNoiseChannelEvaluatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatPerlinNoiseChannelEvaluatorSystem);
UClass* Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem_NoRegister()
{
	return UFloatPerlinNoiseChannelEvaluatorSystem::StaticClass();
}
struct Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating double perlin noise channels.\n */" },
		{ "IncludePath", "Systems/FloatPerlinNoiseChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/FloatPerlinNoiseChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating double perlin noise channels." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatPerlinNoiseChannelEvaluatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem_Statics::ClassParams = {
	&UFloatPerlinNoiseChannelEvaluatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem()
{
	if (!Z_Registration_Info_UClass_UFloatPerlinNoiseChannelEvaluatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatPerlinNoiseChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFloatPerlinNoiseChannelEvaluatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UFloatPerlinNoiseChannelEvaluatorSystem>()
{
	return UFloatPerlinNoiseChannelEvaluatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatPerlinNoiseChannelEvaluatorSystem);
UFloatPerlinNoiseChannelEvaluatorSystem::~UFloatPerlinNoiseChannelEvaluatorSystem() {}
// End Class UFloatPerlinNoiseChannelEvaluatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatPerlinNoiseChannelEvaluatorSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFloatPerlinNoiseChannelEvaluatorSystem, UFloatPerlinNoiseChannelEvaluatorSystem::StaticClass, TEXT("UFloatPerlinNoiseChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UFloatPerlinNoiseChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatPerlinNoiseChannelEvaluatorSystem), 1281762211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatPerlinNoiseChannelEvaluatorSystem_h_912431232(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatPerlinNoiseChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatPerlinNoiseChannelEvaluatorSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
