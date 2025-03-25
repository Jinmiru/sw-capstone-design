// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieScene3DTransformTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformTrack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystemSupport_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScene3DTransformTrack
void UMovieScene3DTransformTrack::StaticRegisterNativesUMovieScene3DTransformTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DTransformTrack);
UClass* Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister()
{
	return UMovieScene3DTransformTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieScene3DTransformTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of component transforms in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieScene3DTransformTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScene3DTransformTrack.h" },
		{ "ToolTip", "Handles manipulation of component transforms in a movie scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlenderSystemClass_MetaData[] = {
		{ "Comment", "/** User-defined blender system to use for this track */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScene3DTransformTrack.h" },
		{ "ToolTip", "User-defined blender system to use for this track" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BlenderSystemClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DTransformTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::NewProp_BlenderSystemClass = { "BlenderSystemClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DTransformTrack, BlenderSystemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlenderSystemClass_MetaData), NewProp_BlenderSystemClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::NewProp_BlenderSystemClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneBlenderSystemSupport_NoRegister, (int32)VTABLE_OFFSET(UMovieScene3DTransformTrack, IMovieSceneBlenderSystemSupport), false },  // 489326844
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::ClassParams = {
	&UMovieScene3DTransformTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScene3DTransformTrack()
{
	if (!Z_Registration_Info_UClass_UMovieScene3DTransformTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DTransformTrack.OuterSingleton, Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScene3DTransformTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DTransformTrack>()
{
	return UMovieScene3DTransformTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DTransformTrack);
UMovieScene3DTransformTrack::~UMovieScene3DTransformTrack() {}
// End Class UMovieScene3DTransformTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DTransformTrack, UMovieScene3DTransformTrack::StaticClass, TEXT("UMovieScene3DTransformTrack"), &Z_Registration_Info_UClass_UMovieScene3DTransformTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DTransformTrack), 2125163220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h_3759077234(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
