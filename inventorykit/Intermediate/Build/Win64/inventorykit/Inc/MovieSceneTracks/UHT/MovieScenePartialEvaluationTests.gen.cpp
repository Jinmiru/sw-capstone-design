// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Private/Tests/MovieScenePartialEvaluationTests.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePartialEvaluationTests() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePartialEvaluationTestObject();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScenePartialEvaluationTestObject
void UMovieScenePartialEvaluationTestObject::StaticRegisterNativesUMovieScenePartialEvaluationTestObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePartialEvaluationTestObject);
UClass* Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_NoRegister()
{
	return UMovieScenePartialEvaluationTestObject::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieScenePartialEvaluationTests.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieScenePartialEvaluationTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieScenePartialEvaluationTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieScenePartialEvaluationTests.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePartialEvaluationTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::NewProp_FloatProperty = { "FloatProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePartialEvaluationTestObject, FloatProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatProperty_MetaData), NewProp_FloatProperty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::NewProp_VectorProperty = { "VectorProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePartialEvaluationTestObject, VectorProperty), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorProperty_MetaData), NewProp_VectorProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::NewProp_FloatProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::NewProp_VectorProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::ClassParams = {
	&UMovieScenePartialEvaluationTestObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePartialEvaluationTestObject()
{
	if (!Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.OuterSingleton, Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePartialEvaluationTestObject>()
{
	return UMovieScenePartialEvaluationTestObject::StaticClass();
}
UMovieScenePartialEvaluationTestObject::UMovieScenePartialEvaluationTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePartialEvaluationTestObject);
UMovieScenePartialEvaluationTestObject::~UMovieScenePartialEvaluationTestObject() {}
// End Class UMovieScenePartialEvaluationTestObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieScenePartialEvaluationTests_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePartialEvaluationTestObject, UMovieScenePartialEvaluationTestObject::StaticClass, TEXT("UMovieScenePartialEvaluationTestObject"), &Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePartialEvaluationTestObject), 2966224221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieScenePartialEvaluationTests_h_51007196(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieScenePartialEvaluationTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieScenePartialEvaluationTests_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
