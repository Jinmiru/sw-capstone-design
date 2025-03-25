// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/StringChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringChannelEvaluatorSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UStringChannelEvaluatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UStringChannelEvaluatorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UStringChannelEvaluatorSystem
void UStringChannelEvaluatorSystem::StaticRegisterNativesUStringChannelEvaluatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringChannelEvaluatorSystem);
UClass* Z_Construct_UClass_UStringChannelEvaluatorSystem_NoRegister()
{
	return UStringChannelEvaluatorSystem::StaticClass();
}
struct Z_Construct_UClass_UStringChannelEvaluatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating string channels.\n */" },
		{ "IncludePath", "Systems/StringChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/StringChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating string channels." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringChannelEvaluatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStringChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringChannelEvaluatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringChannelEvaluatorSystem_Statics::ClassParams = {
	&UStringChannelEvaluatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStringChannelEvaluatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UStringChannelEvaluatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStringChannelEvaluatorSystem()
{
	if (!Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UStringChannelEvaluatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UStringChannelEvaluatorSystem>()
{
	return UStringChannelEvaluatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStringChannelEvaluatorSystem);
UStringChannelEvaluatorSystem::~UStringChannelEvaluatorSystem() {}
// End Class UStringChannelEvaluatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_StringChannelEvaluatorSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStringChannelEvaluatorSystem, UStringChannelEvaluatorSystem::StaticClass, TEXT("UStringChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UStringChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringChannelEvaluatorSystem), 2805955366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_StringChannelEvaluatorSystem_h_1298201626(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_StringChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_StringChannelEvaluatorSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
