// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Private/Tests/MovieSceneDecomposerTests.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDecomposerTests() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDecomposerTestObject();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDecomposerTestObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneDecomposerTestObject
void UMovieSceneDecomposerTestObject::StaticRegisterNativesUMovieSceneDecomposerTestObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDecomposerTestObject);
UClass* Z_Construct_UClass_UMovieSceneDecomposerTestObject_NoRegister()
{
	return UMovieSceneDecomposerTestObject::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneDecomposerTests.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneDecomposerTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieSceneDecomposerTests.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDecomposerTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::NewProp_FloatProperty = { "FloatProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDecomposerTestObject, FloatProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatProperty_MetaData), NewProp_FloatProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::NewProp_FloatProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::ClassParams = {
	&UMovieSceneDecomposerTestObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneDecomposerTestObject()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.OuterSingleton, Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDecomposerTestObject>()
{
	return UMovieSceneDecomposerTestObject::StaticClass();
}
UMovieSceneDecomposerTestObject::UMovieSceneDecomposerTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDecomposerTestObject);
UMovieSceneDecomposerTestObject::~UMovieSceneDecomposerTestObject() {}
// End Class UMovieSceneDecomposerTestObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDecomposerTestObject, UMovieSceneDecomposerTestObject::StaticClass, TEXT("UMovieSceneDecomposerTestObject"), &Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDecomposerTestObject), 4290693996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h_3178875046(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
