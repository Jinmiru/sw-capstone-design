// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneBindingOwnerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingOwnerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneBindingOwnerInterface
void UMovieSceneBindingOwnerInterface::StaticRegisterNativesUMovieSceneBindingOwnerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBindingOwnerInterface);
UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister()
{
	return UMovieSceneBindingOwnerInterface::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBindingOwnerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneBindingOwnerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneBindingOwnerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBindingOwnerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOwnerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBindingOwnerInterface_Statics::ClassParams = {
	&UMovieSceneBindingOwnerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOwnerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBindingOwnerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBindingOwnerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBindingOwnerInterface.OuterSingleton, Z_Construct_UClass_UMovieSceneBindingOwnerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBindingOwnerInterface.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBindingOwnerInterface>()
{
	return UMovieSceneBindingOwnerInterface::StaticClass();
}
UMovieSceneBindingOwnerInterface::UMovieSceneBindingOwnerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBindingOwnerInterface);
UMovieSceneBindingOwnerInterface::~UMovieSceneBindingOwnerInterface() {}
// End Interface UMovieSceneBindingOwnerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBindingOwnerInterface, UMovieSceneBindingOwnerInterface::StaticClass, TEXT("UMovieSceneBindingOwnerInterface"), &Z_Registration_Info_UClass_UMovieSceneBindingOwnerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBindingOwnerInterface), 305914322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_2790840609(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
