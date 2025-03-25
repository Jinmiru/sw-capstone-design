// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieScenePrimitiveMaterialTrack.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneMaterialTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentMaterialInfo();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScenePrimitiveMaterialTrack
void UMovieScenePrimitiveMaterialTrack::StaticRegisterNativesUMovieScenePrimitiveMaterialTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePrimitiveMaterialTrack);
UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister()
{
	return UMovieScenePrimitiveMaterialTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieScenePrimitiveMaterialTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePrimitiveMaterialTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePrimitiveMaterialTrack.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePrimitiveMaterialTrack.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePrimitiveMaterialTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePrimitiveMaterialTrack, MaterialIndex_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialInfo = { "MaterialInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePrimitiveMaterialTrack, MaterialInfo), Z_Construct_UScriptStruct_FComponentMaterialInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInfo_MetaData), NewProp_MaterialInfo_MetaData) }; // 3517514751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::ClassParams = {
	&UMovieScenePrimitiveMaterialTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack()
{
	if (!Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.OuterSingleton, Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePrimitiveMaterialTrack>()
{
	return UMovieScenePrimitiveMaterialTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePrimitiveMaterialTrack);
UMovieScenePrimitiveMaterialTrack::~UMovieScenePrimitiveMaterialTrack() {}
// End Class UMovieScenePrimitiveMaterialTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack, UMovieScenePrimitiveMaterialTrack::StaticClass, TEXT("UMovieScenePrimitiveMaterialTrack"), &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePrimitiveMaterialTrack), 3957060645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_2757613098(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
