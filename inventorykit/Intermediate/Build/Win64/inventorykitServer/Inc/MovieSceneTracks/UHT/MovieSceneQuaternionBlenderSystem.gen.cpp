// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneQuaternionBlenderSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneQuaternionBlenderSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneQuaternionBlenderSystem
void UMovieSceneQuaternionBlenderSystem::StaticRegisterNativesUMovieSceneQuaternionBlenderSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneQuaternionBlenderSystem);
UClass* Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_NoRegister()
{
	return UMovieSceneQuaternionBlenderSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Shortest Rotation (quaternion slerp)" },
		{ "IncludePath", "Systems/MovieSceneQuaternionBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneQuaternionBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "Tooltip", "Uses a quaternion spherical interpolation (slerp) to blend between transforms using the shortest rotation path. Does not support over-rotation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneQuaternionBlenderSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneQuaternionBlenderSystem, IMovieSceneValueDecomposer), false },  // 2513564584
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::ClassParams = {
	&UMovieSceneQuaternionBlenderSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneQuaternionBlenderSystem>()
{
	return UMovieSceneQuaternionBlenderSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneQuaternionBlenderSystem);
UMovieSceneQuaternionBlenderSystem::~UMovieSceneQuaternionBlenderSystem() {}
// End Class UMovieSceneQuaternionBlenderSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionBlenderSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem, UMovieSceneQuaternionBlenderSystem::StaticClass, TEXT("UMovieSceneQuaternionBlenderSystem"), &Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneQuaternionBlenderSystem), 105289840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionBlenderSystem_h_505088504(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionBlenderSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionBlenderSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
