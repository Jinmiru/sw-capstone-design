// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieScenePiecewiseDoubleBlenderSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePiecewiseDoubleBlenderSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScenePiecewiseDoubleBlenderSystem
void UMovieScenePiecewiseDoubleBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseDoubleBlenderSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePiecewiseDoubleBlenderSystem);
UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister()
{
	return UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Weighted per-channel" },
		{ "IncludePath", "Systems/MovieScenePiecewiseDoubleBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePiecewiseDoubleBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "Tooltip", "Blends each channel of this object's transform as separate scalar components. Useful for blending to/from over-rotated objects (ie, 0 < rotation > 360." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePiecewiseDoubleBlenderSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister, (int32)VTABLE_OFFSET(UMovieScenePiecewiseDoubleBlenderSystem, IMovieSceneValueDecomposer), false },  // 2513564584
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::ClassParams = {
	&UMovieScenePiecewiseDoubleBlenderSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem()
{
	if (!Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePiecewiseDoubleBlenderSystem>()
{
	return UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePiecewiseDoubleBlenderSystem);
UMovieScenePiecewiseDoubleBlenderSystem::~UMovieScenePiecewiseDoubleBlenderSystem() {}
// End Class UMovieScenePiecewiseDoubleBlenderSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseDoubleBlenderSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem, UMovieScenePiecewiseDoubleBlenderSystem::StaticClass, TEXT("UMovieScenePiecewiseDoubleBlenderSystem"), &Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePiecewiseDoubleBlenderSystem), 1631070053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseDoubleBlenderSystem_h_3663237322(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseDoubleBlenderSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseDoubleBlenderSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
