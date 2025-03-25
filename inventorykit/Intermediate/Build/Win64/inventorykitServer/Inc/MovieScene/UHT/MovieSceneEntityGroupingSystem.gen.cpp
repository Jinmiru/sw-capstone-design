// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntityGroupingSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEntityGroupingSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityGroupingSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneEntityGroupingSystem
void UMovieSceneEntityGroupingSystem::StaticRegisterNativesUMovieSceneEntityGroupingSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEntityGroupingSystem);
UClass* Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister()
{
	return UMovieSceneEntityGroupingSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneEntityGroupingSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE::MovieScene\n" },
		{ "IncludePath", "EntitySystem/MovieSceneEntityGroupingSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntityGroupingSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE::MovieScene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEntityGroupingSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneEntityGroupingSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntityGroupingSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEntityGroupingSystem_Statics::ClassParams = {
	&UMovieSceneEntityGroupingSystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntityGroupingSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneEntityGroupingSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneEntityGroupingSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneEntityGroupingSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEntityGroupingSystem>()
{
	return UMovieSceneEntityGroupingSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEntityGroupingSystem);
UMovieSceneEntityGroupingSystem::~UMovieSceneEntityGroupingSystem() {}
// End Class UMovieSceneEntityGroupingSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEntityGroupingSystem, UMovieSceneEntityGroupingSystem::StaticClass, TEXT("UMovieSceneEntityGroupingSystem"), &Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEntityGroupingSystem), 1048214584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h_1664155696(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
