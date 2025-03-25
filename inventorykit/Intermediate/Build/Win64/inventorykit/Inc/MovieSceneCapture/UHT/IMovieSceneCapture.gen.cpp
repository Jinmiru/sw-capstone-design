// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneCapture/Public/IMovieSceneCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneCapture() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureInterface();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References

// Begin Interface UMovieSceneCaptureInterface
void UMovieSceneCaptureInterface::StaticRegisterNativesUMovieSceneCaptureInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCaptureInterface);
UClass* Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister()
{
	return UMovieSceneCaptureInterface::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCaptureInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IMovieSceneCapture.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneCaptureInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneCaptureInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCaptureInterface_Statics::ClassParams = {
	&UMovieSceneCaptureInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCaptureInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCaptureInterface()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCaptureInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCaptureInterface.OuterSingleton, Z_Construct_UClass_UMovieSceneCaptureInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCaptureInterface.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneCaptureInterface>()
{
	return UMovieSceneCaptureInterface::StaticClass();
}
UMovieSceneCaptureInterface::UMovieSceneCaptureInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCaptureInterface);
UMovieSceneCaptureInterface::~UMovieSceneCaptureInterface() {}
// End Interface UMovieSceneCaptureInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCaptureInterface, UMovieSceneCaptureInterface::StaticClass, TEXT("UMovieSceneCaptureInterface"), &Z_Registration_Info_UClass_UMovieSceneCaptureInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCaptureInterface), 1157917147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_3761569927(TEXT("/Script/MovieSceneCapture"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
