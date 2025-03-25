// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneBaseCacheSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBaseCacheSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneBaseCacheParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams;
class UScriptStruct* FMovieSceneBaseCacheParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneBaseCacheParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneBaseCacheParams>()
{
	return FMovieSceneBaseCacheParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for the cache parameters that will be used in all the cache sections\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "Base class for the cache parameters that will be used in all the cache sections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstLoopStartFrameOffset_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** The offset for the first loop of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "The offset for the first loop of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** Reverse the playback of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "Reverse the playback of the animation clip" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstLoopStartFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndFrameOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBaseCacheParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_FirstLoopStartFrameOffset = { "FirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBaseCacheParams, FirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstLoopStartFrameOffset_MetaData), NewProp_FirstLoopStartFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBaseCacheParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameOffset_MetaData), NewProp_StartFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBaseCacheParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrameOffset_MetaData), NewProp_EndFrameOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBaseCacheParams, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((FMovieSceneBaseCacheParams*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneBaseCacheParams), &Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_FirstLoopStartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_StartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_EndFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneBaseCacheParams",
	Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::PropPointers),
	sizeof(FMovieSceneBaseCacheParams),
	alignof(FMovieSceneBaseCacheParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneBaseCacheParams

// Begin Class UMovieSceneBaseCacheSection
void UMovieSceneBaseCacheSection::StaticRegisterNativesUMovieSceneBaseCacheSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBaseCacheSection);
UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection_NoRegister()
{
	return UMovieSceneBaseCacheSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control base cache playback\n */" },
		{ "IncludePath", "Sections/MovieSceneBaseCacheSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "Movie scene section that control base cache playback" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBaseCacheSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::ClassParams = {
	&UMovieSceneBaseCacheSection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.OuterSingleton, Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBaseCacheSection>()
{
	return UMovieSceneBaseCacheSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBaseCacheSection);
UMovieSceneBaseCacheSection::~UMovieSceneBaseCacheSection() {}
// End Class UMovieSceneBaseCacheSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneBaseCacheParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewStructOps, TEXT("MovieSceneBaseCacheParams"), &Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBaseCacheParams), 1537543269U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBaseCacheSection, UMovieSceneBaseCacheSection::StaticClass, TEXT("UMovieSceneBaseCacheSection"), &Z_Registration_Info_UClass_UMovieSceneBaseCacheSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBaseCacheSection), 600799931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_3713932629(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
