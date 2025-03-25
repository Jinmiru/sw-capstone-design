// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/FloatChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatChannelEvaluatorSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UFloatChannelEvaluatorSystem
void UFloatChannelEvaluatorSystem::StaticRegisterNativesUFloatChannelEvaluatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatChannelEvaluatorSystem);
UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister()
{
	return UFloatChannelEvaluatorSystem::StaticClass();
}
struct Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating double channels.\n */" },
		{ "IncludePath", "Systems/FloatChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/FloatChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating double channels." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatChannelEvaluatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::ClassParams = {
	&UFloatChannelEvaluatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem()
{
	if (!Z_Registration_Info_UClass_UFloatChannelEvaluatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFloatChannelEvaluatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UFloatChannelEvaluatorSystem>()
{
	return UFloatChannelEvaluatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatChannelEvaluatorSystem);
UFloatChannelEvaluatorSystem::~UFloatChannelEvaluatorSystem() {}
// End Class UFloatChannelEvaluatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatChannelEvaluatorSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFloatChannelEvaluatorSystem, UFloatChannelEvaluatorSystem::StaticClass, TEXT("UFloatChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UFloatChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatChannelEvaluatorSystem), 3714540290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatChannelEvaluatorSystem_h_960821339(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatChannelEvaluatorSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
