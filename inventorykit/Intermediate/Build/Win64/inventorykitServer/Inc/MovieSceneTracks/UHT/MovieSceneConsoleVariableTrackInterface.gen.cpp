// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneConsoleVariableTrackInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneConsoleVariableTrackInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Interface UMovieSceneConsoleVariableTrackInterface
void UMovieSceneConsoleVariableTrackInterface::StaticRegisterNativesUMovieSceneConsoleVariableTrackInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneConsoleVariableTrackInterface);
UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister()
{
	return UMovieSceneConsoleVariableTrackInterface::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneConsoleVariableTrackInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneConsoleVariableTrackInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::ClassParams = {
	&UMovieSceneConsoleVariableTrackInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface()
{
	if (!Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.OuterSingleton, Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneConsoleVariableTrackInterface>()
{
	return UMovieSceneConsoleVariableTrackInterface::StaticClass();
}
UMovieSceneConsoleVariableTrackInterface::UMovieSceneConsoleVariableTrackInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneConsoleVariableTrackInterface);
UMovieSceneConsoleVariableTrackInterface::~UMovieSceneConsoleVariableTrackInterface() {}
// End Interface UMovieSceneConsoleVariableTrackInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface, UMovieSceneConsoleVariableTrackInterface::StaticClass, TEXT("UMovieSceneConsoleVariableTrackInterface"), &Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneConsoleVariableTrackInterface), 3046342456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_1653113627(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
