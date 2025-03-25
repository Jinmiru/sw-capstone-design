// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/EntitySystem/Interrogation/MovieSceneInterrogatedPropertyInstantiator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneInterrogatedPropertyInstantiator() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneInterrogatedPropertyInstantiatorSystem
void UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticRegisterNativesUMovieSceneInterrogatedPropertyInstantiatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneInterrogatedPropertyInstantiatorSystem);
UClass* Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_NoRegister()
{
	return UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Class responsible for resolving all property types registered with FBuiltInComponentTypes::PropertyRegistry */" },
		{ "IncludePath", "EntitySystem/Interrogation/MovieSceneInterrogatedPropertyInstantiator.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/Interrogation/MovieSceneInterrogatedPropertyInstantiator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class responsible for resolving all property types registered with FBuiltInComponentTypes::PropertyRegistry" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneInterrogatedPropertyInstantiatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::ClassParams = {
	&UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneInterrogatedPropertyInstantiatorSystem>()
{
	return UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneInterrogatedPropertyInstantiatorSystem);
UMovieSceneInterrogatedPropertyInstantiatorSystem::~UMovieSceneInterrogatedPropertyInstantiatorSystem() {}
// End Class UMovieSceneInterrogatedPropertyInstantiatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_EntitySystem_Interrogation_MovieSceneInterrogatedPropertyInstantiator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem, UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass, TEXT("UMovieSceneInterrogatedPropertyInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneInterrogatedPropertyInstantiatorSystem), 4176043895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_EntitySystem_Interrogation_MovieSceneInterrogatedPropertyInstantiator_h_1204894112(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_EntitySystem_Interrogation_MovieSceneInterrogatedPropertyInstantiator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_EntitySystem_Interrogation_MovieSceneInterrogatedPropertyInstantiator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
