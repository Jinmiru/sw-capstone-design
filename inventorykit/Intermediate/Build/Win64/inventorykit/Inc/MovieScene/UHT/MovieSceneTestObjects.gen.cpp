// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Private/Tests/MovieSceneTestObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTestObjects() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneHookSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneEvalHookSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneEvalHookSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneEvalHookTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneEvalHookTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSequence();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSequence_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneTrack_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FTestMovieSceneEvalTemplate
static_assert(std::is_polymorphic<FTestMovieSceneEvalTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FTestMovieSceneEvalTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate;
class UScriptStruct* FTestMovieSceneEvalTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("TestMovieSceneEvalTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FTestMovieSceneEvalTemplate>()
{
	return FTestMovieSceneEvalTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestMovieSceneEvalTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"TestMovieSceneEvalTemplate",
	nullptr,
	0,
	sizeof(FTestMovieSceneEvalTemplate),
	alignof(FTestMovieSceneEvalTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.InnerSingleton, Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.InnerSingleton;
}
// End ScriptStruct FTestMovieSceneEvalTemplate

// Begin Class UTestMovieSceneTrack
void UTestMovieSceneTrack::StaticRegisterNativesUTestMovieSceneTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneTrack);
UClass* Z_Construct_UClass_UTestMovieSceneTrack_NoRegister()
{
	return UTestMovieSceneTrack::StaticClass();
}
struct Z_Construct_UClass_UTestMovieSceneTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighPassFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHighPassFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPassFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_SetBit(void* Obj)
{
	((UTestMovieSceneTrack*)Obj)->bHighPassFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter = { "bHighPassFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTestMovieSceneTrack), &Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighPassFilter_MetaData), NewProp_bHighPassFilter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_Inner = { "SectionArray", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray = { "SectionArray", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestMovieSceneTrack, SectionArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionArray_MetaData), NewProp_SectionArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestMovieSceneTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UTestMovieSceneTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::ClassParams = {
	&UTestMovieSceneTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestMovieSceneTrack()
{
	if (!Z_Registration_Info_UClass_UTestMovieSceneTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneTrack.OuterSingleton, Z_Construct_UClass_UTestMovieSceneTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestMovieSceneTrack.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneTrack>()
{
	return UTestMovieSceneTrack::StaticClass();
}
UTestMovieSceneTrack::UTestMovieSceneTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneTrack);
UTestMovieSceneTrack::~UTestMovieSceneTrack() {}
// End Class UTestMovieSceneTrack

// Begin Class UTestMovieSceneSection
void UTestMovieSceneSection::StaticRegisterNativesUTestMovieSceneSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneSection);
UClass* Z_Construct_UClass_UTestMovieSceneSection_NoRegister()
{
	return UTestMovieSceneSection::StaticClass();
}
struct Z_Construct_UClass_UTestMovieSceneSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTestMovieSceneSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSection_Statics::ClassParams = {
	&UTestMovieSceneSection::StaticClass,
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
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestMovieSceneSection()
{
	if (!Z_Registration_Info_UClass_UTestMovieSceneSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneSection.OuterSingleton, Z_Construct_UClass_UTestMovieSceneSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestMovieSceneSection.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSection>()
{
	return UTestMovieSceneSection::StaticClass();
}
UTestMovieSceneSection::UTestMovieSceneSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSection);
UTestMovieSceneSection::~UTestMovieSceneSection() {}
// End Class UTestMovieSceneSection

// Begin Class UTestMovieSceneSequence
void UTestMovieSceneSequence::StaticRegisterNativesUTestMovieSceneSequence()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneSequence);
UClass* Z_Construct_UClass_UTestMovieSceneSequence_NoRegister()
{
	return UTestMovieSceneSequence::StaticClass();
}
struct Z_Construct_UClass_UTestMovieSceneSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestMovieSceneSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovieScene_MetaData), NewProp_MovieScene_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestMovieSceneSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSequence_Statics::ClassParams = {
	&UTestMovieSceneSequence::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestMovieSceneSequence()
{
	if (!Z_Registration_Info_UClass_UTestMovieSceneSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneSequence.OuterSingleton, Z_Construct_UClass_UTestMovieSceneSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestMovieSceneSequence.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSequence>()
{
	return UTestMovieSceneSequence::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSequence);
UTestMovieSceneSequence::~UTestMovieSceneSequence() {}
// End Class UTestMovieSceneSequence

// Begin Class UTestMovieSceneSubTrack
void UTestMovieSceneSubTrack::StaticRegisterNativesUTestMovieSceneSubTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneSubTrack);
UClass* Z_Construct_UClass_UTestMovieSceneSubTrack_NoRegister()
{
	return UTestMovieSceneSubTrack::StaticClass();
}
struct Z_Construct_UClass_UTestMovieSceneSubTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSubTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_Inner = { "SectionArray", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray = { "SectionArray", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestMovieSceneSubTrack, SectionArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionArray_MetaData), NewProp_SectionArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSubTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::ClassParams = {
	&UTestMovieSceneSubTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestMovieSceneSubTrack()
{
	if (!Z_Registration_Info_UClass_UTestMovieSceneSubTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneSubTrack.OuterSingleton, Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestMovieSceneSubTrack.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSubTrack>()
{
	return UTestMovieSceneSubTrack::StaticClass();
}
UTestMovieSceneSubTrack::UTestMovieSceneSubTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSubTrack);
UTestMovieSceneSubTrack::~UTestMovieSceneSubTrack() {}
// End Class UTestMovieSceneSubTrack

// Begin Class UTestMovieSceneSubSection
void UTestMovieSceneSubSection::StaticRegisterNativesUTestMovieSceneSubSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneSubSection);
UClass* Z_Construct_UClass_UTestMovieSceneSubSection_NoRegister()
{
	return UTestMovieSceneSubSection::StaticClass();
}
struct Z_Construct_UClass_UTestMovieSceneSubSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSubSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTestMovieSceneSubSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSubSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSubSection_Statics::ClassParams = {
	&UTestMovieSceneSubSection::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x002800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestMovieSceneSubSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestMovieSceneSubSection()
{
	if (!Z_Registration_Info_UClass_UTestMovieSceneSubSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneSubSection.OuterSingleton, Z_Construct_UClass_UTestMovieSceneSubSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestMovieSceneSubSection.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSubSection>()
{
	return UTestMovieSceneSubSection::StaticClass();
}
UTestMovieSceneSubSection::UTestMovieSceneSubSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSubSection);
UTestMovieSceneSubSection::~UTestMovieSceneSubSection() {}
// End Class UTestMovieSceneSubSection

// Begin Class UTestMovieSceneEvalHookTrack
void UTestMovieSceneEvalHookTrack::StaticRegisterNativesUTestMovieSceneEvalHookTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneEvalHookTrack);
UClass* Z_Construct_UClass_UTestMovieSceneEvalHookTrack_NoRegister()
{
	return UTestMovieSceneEvalHookTrack::StaticClass();
}
struct Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneEvalHookTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray_Inner = { "SectionArray", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray = { "SectionArray", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestMovieSceneEvalHookTrack, SectionArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionArray_MetaData), NewProp_SectionArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::ClassParams = {
	&UTestMovieSceneEvalHookTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestMovieSceneEvalHookTrack()
{
	if (!Z_Registration_Info_UClass_UTestMovieSceneEvalHookTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneEvalHookTrack.OuterSingleton, Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestMovieSceneEvalHookTrack.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneEvalHookTrack>()
{
	return UTestMovieSceneEvalHookTrack::StaticClass();
}
UTestMovieSceneEvalHookTrack::UTestMovieSceneEvalHookTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneEvalHookTrack);
UTestMovieSceneEvalHookTrack::~UTestMovieSceneEvalHookTrack() {}
// End Class UTestMovieSceneEvalHookTrack

// Begin Class UTestMovieSceneEvalHookSection
void UTestMovieSceneEvalHookSection::StaticRegisterNativesUTestMovieSceneEvalHookSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneEvalHookSection);
UClass* Z_Construct_UClass_UTestMovieSceneEvalHookSection_NoRegister()
{
	return UTestMovieSceneEvalHookSection::StaticClass();
}
struct Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneEvalHookSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneHookSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::ClassParams = {
	&UTestMovieSceneEvalHookSection::StaticClass,
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
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestMovieSceneEvalHookSection()
{
	if (!Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.OuterSingleton, Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneEvalHookSection>()
{
	return UTestMovieSceneEvalHookSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneEvalHookSection);
UTestMovieSceneEvalHookSection::~UTestMovieSceneEvalHookSection() {}
// End Class UTestMovieSceneEvalHookSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTestMovieSceneEvalTemplate::StaticStruct, Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::NewStructOps, TEXT("TestMovieSceneEvalTemplate"), &Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestMovieSceneEvalTemplate), 1475849418U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestMovieSceneTrack, UTestMovieSceneTrack::StaticClass, TEXT("UTestMovieSceneTrack"), &Z_Registration_Info_UClass_UTestMovieSceneTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneTrack), 1110560227U) },
		{ Z_Construct_UClass_UTestMovieSceneSection, UTestMovieSceneSection::StaticClass, TEXT("UTestMovieSceneSection"), &Z_Registration_Info_UClass_UTestMovieSceneSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneSection), 3863372001U) },
		{ Z_Construct_UClass_UTestMovieSceneSequence, UTestMovieSceneSequence::StaticClass, TEXT("UTestMovieSceneSequence"), &Z_Registration_Info_UClass_UTestMovieSceneSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneSequence), 23141043U) },
		{ Z_Construct_UClass_UTestMovieSceneSubTrack, UTestMovieSceneSubTrack::StaticClass, TEXT("UTestMovieSceneSubTrack"), &Z_Registration_Info_UClass_UTestMovieSceneSubTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneSubTrack), 1959283090U) },
		{ Z_Construct_UClass_UTestMovieSceneSubSection, UTestMovieSceneSubSection::StaticClass, TEXT("UTestMovieSceneSubSection"), &Z_Registration_Info_UClass_UTestMovieSceneSubSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneSubSection), 3651073731U) },
		{ Z_Construct_UClass_UTestMovieSceneEvalHookTrack, UTestMovieSceneEvalHookTrack::StaticClass, TEXT("UTestMovieSceneEvalHookTrack"), &Z_Registration_Info_UClass_UTestMovieSceneEvalHookTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneEvalHookTrack), 3822849978U) },
		{ Z_Construct_UClass_UTestMovieSceneEvalHookSection, UTestMovieSceneEvalHookSection::StaticClass, TEXT("UTestMovieSceneEvalHookSection"), &Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneEvalHookSection), 3427903722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_337942447(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
