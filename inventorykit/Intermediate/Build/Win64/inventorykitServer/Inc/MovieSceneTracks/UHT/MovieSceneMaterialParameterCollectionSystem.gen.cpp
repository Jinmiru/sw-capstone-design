// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneMaterialParameterCollectionSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterCollectionSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneMaterialParameterCollectionSystem
void UMovieSceneMaterialParameterCollectionSystem::StaticRegisterNativesUMovieSceneMaterialParameterCollectionSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMaterialParameterCollectionSystem);
UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem_NoRegister()
{
	return UMovieSceneMaterialParameterCollectionSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that resolves MPC components into BoundMaterial components that can be used by downstream\n * parameter systems\n */" },
		{ "IncludePath", "Systems/MovieSceneMaterialParameterCollectionSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialParameterCollectionSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that resolves MPC components into BoundMaterial components that can be used by downstream\nparameter systems" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMaterialParameterCollectionSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem_Statics::ClassParams = {
	&UMovieSceneMaterialParameterCollectionSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneMaterialParameterCollectionSystem>()
{
	return UMovieSceneMaterialParameterCollectionSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialParameterCollectionSystem);
UMovieSceneMaterialParameterCollectionSystem::~UMovieSceneMaterialParameterCollectionSystem() {}
// End Class UMovieSceneMaterialParameterCollectionSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterCollectionSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMaterialParameterCollectionSystem, UMovieSceneMaterialParameterCollectionSystem::StaticClass, TEXT("UMovieSceneMaterialParameterCollectionSystem"), &Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMaterialParameterCollectionSystem), 2983653619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterCollectionSystem_h_1438527691(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterCollectionSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterCollectionSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
