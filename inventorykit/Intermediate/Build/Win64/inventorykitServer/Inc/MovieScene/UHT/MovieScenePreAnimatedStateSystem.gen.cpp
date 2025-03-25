// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieScenePreAnimatedStateSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePreAnimatedStateSystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieScenePreAnimatedStateSystemInterface
void UMovieScenePreAnimatedStateSystemInterface::StaticRegisterNativesUMovieScenePreAnimatedStateSystemInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePreAnimatedStateSystemInterface);
UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister()
{
	return UMovieScenePreAnimatedStateSystemInterface::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePreAnimatedStateSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieScenePreAnimatedStateSystemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::ClassParams = {
	&UMovieScenePreAnimatedStateSystemInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface()
{
	if (!Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.OuterSingleton, Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieScenePreAnimatedStateSystemInterface>()
{
	return UMovieScenePreAnimatedStateSystemInterface::StaticClass();
}
UMovieScenePreAnimatedStateSystemInterface::UMovieScenePreAnimatedStateSystemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePreAnimatedStateSystemInterface);
UMovieScenePreAnimatedStateSystemInterface::~UMovieScenePreAnimatedStateSystemInterface() {}
// End Interface UMovieScenePreAnimatedStateSystemInterface

// Begin Class UMovieSceneCachePreAnimatedStateSystem
void UMovieSceneCachePreAnimatedStateSystem::StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCachePreAnimatedStateSystem);
UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister()
{
	return UMovieSceneCachePreAnimatedStateSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that becomes relevant if there are any entites tagged RestoreState,\n * or UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\n * When run this system will iterate the instantiation phase in order, and call \n * IMovieScenePreAnimatedStateSystemInterface::Save(Global)PreAnimatedState on any\n * systems that implement the necessary interface\n */" },
		{ "IncludePath", "EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that becomes relevant if there are any entites tagged RestoreState,\nor UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\nWhen run this system will iterate the instantiation phase in order, and call\nIMovieScenePreAnimatedStateSystemInterface::Save(Global)PreAnimatedState on any\nsystems that implement the necessary interface" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCachePreAnimatedStateSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::ClassParams = {
	&UMovieSceneCachePreAnimatedStateSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCachePreAnimatedStateSystem>()
{
	return UMovieSceneCachePreAnimatedStateSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCachePreAnimatedStateSystem);
UMovieSceneCachePreAnimatedStateSystem::~UMovieSceneCachePreAnimatedStateSystem() {}
// End Class UMovieSceneCachePreAnimatedStateSystem

// Begin Class UMovieSceneRestorePreAnimatedStateSystem
void UMovieSceneRestorePreAnimatedStateSystem::StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneRestorePreAnimatedStateSystem);
UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister()
{
	return UMovieSceneRestorePreAnimatedStateSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that becomes relevant if there are any entites tagged RestoreState,\n * or UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\n * When run this system will iterate the instantiation phase in reverse order, and call \n * IMovieScenePreAnimatedStateSystemInterface::Restore(Global)PreAnimatedState on any\n * systems that implement the necessary interface.\n */" },
		{ "IncludePath", "EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that becomes relevant if there are any entites tagged RestoreState,\nor UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\nWhen run this system will iterate the instantiation phase in reverse order, and call\nIMovieScenePreAnimatedStateSystemInterface::Restore(Global)PreAnimatedState on any\nsystems that implement the necessary interface." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneRestorePreAnimatedStateSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::ClassParams = {
	&UMovieSceneRestorePreAnimatedStateSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneRestorePreAnimatedStateSystem>()
{
	return UMovieSceneRestorePreAnimatedStateSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneRestorePreAnimatedStateSystem);
UMovieSceneRestorePreAnimatedStateSystem::~UMovieSceneRestorePreAnimatedStateSystem() {}
// End Class UMovieSceneRestorePreAnimatedStateSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface, UMovieScenePreAnimatedStateSystemInterface::StaticClass, TEXT("UMovieScenePreAnimatedStateSystemInterface"), &Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePreAnimatedStateSystemInterface), 1017378651U) },
		{ Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem, UMovieSceneCachePreAnimatedStateSystem::StaticClass, TEXT("UMovieSceneCachePreAnimatedStateSystem"), &Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCachePreAnimatedStateSystem), 2309863305U) },
		{ Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem, UMovieSceneRestorePreAnimatedStateSystem::StaticClass, TEXT("UMovieSceneRestorePreAnimatedStateSystem"), &Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneRestorePreAnimatedStateSystem), 2202758231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_1523002248(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
