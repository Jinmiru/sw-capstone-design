// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneObjectPropertyTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPropertyTrack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneObjectPropertyTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneObjectPropertyTrack
void UMovieSceneObjectPropertyTrack::StaticRegisterNativesUMovieSceneObjectPropertyTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneObjectPropertyTrack);
UClass* Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister()
{
	return UMovieSceneObjectPropertyTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieSceneObjectPropertyTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneObjectPropertyTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneObjectPropertyTrack.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClassProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneObjectPropertyTrack.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PropertyClass;
#if WITH_EDITORONLY_DATA
	static void NewProp_bClassProperty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClassProperty;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneObjectPropertyTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneObjectPropertyTrack, PropertyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyClass_MetaData), NewProp_PropertyClass_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_bClassProperty_SetBit(void* Obj)
{
	((UMovieSceneObjectPropertyTrack*)Obj)->bClassProperty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_bClassProperty = { "bClassProperty", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneObjectPropertyTrack), &Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_bClassProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClassProperty_MetaData), NewProp_bClassProperty_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_PropertyClass,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_bClassProperty,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::ClassParams = {
	&UMovieSceneObjectPropertyTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneObjectPropertyTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneObjectPropertyTrack>()
{
	return UMovieSceneObjectPropertyTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneObjectPropertyTrack);
UMovieSceneObjectPropertyTrack::~UMovieSceneObjectPropertyTrack() {}
// End Class UMovieSceneObjectPropertyTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneObjectPropertyTrack, UMovieSceneObjectPropertyTrack::StaticClass, TEXT("UMovieSceneObjectPropertyTrack"), &Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneObjectPropertyTrack), 3471588026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h_2085526831(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
