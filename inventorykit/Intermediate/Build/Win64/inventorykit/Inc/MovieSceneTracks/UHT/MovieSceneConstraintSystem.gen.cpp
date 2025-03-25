// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneConstraintSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneConstraintSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConstraintSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConstraintSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneConstraintSystem
void UMovieSceneConstraintSystem::StaticRegisterNativesUMovieSceneConstraintSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneConstraintSystem);
UClass* Z_Construct_UClass_UMovieSceneConstraintSystem_NoRegister()
{
	return UMovieSceneConstraintSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneConstraintSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for propagating constraints to a bound object's FConstraintsManagerController.\n */" },
		{ "IncludePath", "Systems/MovieSceneConstraintSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneConstraintSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for propagating constraints to a bound object's FConstraintsManagerController." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneConstraintSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::ClassParams = {
	&UMovieSceneConstraintSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneConstraintSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneConstraintSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneConstraintSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneConstraintSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneConstraintSystem>()
{
	return UMovieSceneConstraintSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneConstraintSystem);
UMovieSceneConstraintSystem::~UMovieSceneConstraintSystem() {}
// End Class UMovieSceneConstraintSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneConstraintSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneConstraintSystem, UMovieSceneConstraintSystem::StaticClass, TEXT("UMovieSceneConstraintSystem"), &Z_Registration_Info_UClass_UMovieSceneConstraintSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneConstraintSystem), 3384652537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneConstraintSystem_h_437729612(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneConstraintSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneConstraintSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
