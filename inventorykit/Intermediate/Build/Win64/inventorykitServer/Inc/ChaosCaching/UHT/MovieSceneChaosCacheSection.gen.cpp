// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCaching/Public/Chaos/Sequencer/MovieSceneChaosCacheSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneChaosCacheSection() {}

// Begin Cross Module References
CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCacheCollection_NoRegister();
CHAOSCACHING_API UClass* Z_Construct_UClass_UMovieSceneChaosCacheSection();
CHAOSCACHING_API UClass* Z_Construct_UClass_UMovieSceneChaosCacheSection_NoRegister();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams();
UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References

// Begin ScriptStruct FMovieSceneChaosCacheParams
static_assert(std::is_polymorphic<FMovieSceneChaosCacheParams>() == std::is_polymorphic<FMovieSceneBaseCacheParams>(), "USTRUCT FMovieSceneChaosCacheParams cannot be polymorphic unless super FMovieSceneBaseCacheParams is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheParams;
class UScriptStruct* FMovieSceneChaosCacheParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("MovieSceneChaosCacheParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheParams.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FMovieSceneChaosCacheParams>()
{
	return FMovieSceneChaosCacheParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/Sequencer/MovieSceneChaosCacheSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheCollection_MetaData[] = {
		{ "Category", "ChaosCache" },
		{ "Comment", "/** The animation this section plays */" },
		{ "ModuleRelativePath", "Public/Chaos/Sequencer/MovieSceneChaosCacheSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CacheCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneChaosCacheParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::NewProp_CacheCollection = { "CacheCollection", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneChaosCacheParams, CacheCollection), Z_Construct_UClass_UChaosCacheCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheCollection_MetaData), NewProp_CacheCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::NewProp_CacheCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams,
	&NewStructOps,
	"MovieSceneChaosCacheParams",
	Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::PropPointers),
	sizeof(FMovieSceneChaosCacheParams),
	alignof(FMovieSceneChaosCacheParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneChaosCacheParams

// Begin Class UMovieSceneChaosCacheSection
void UMovieSceneChaosCacheSection::StaticRegisterNativesUMovieSceneChaosCacheSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneChaosCacheSection);
UClass* Z_Construct_UClass_UMovieSceneChaosCacheSection_NoRegister()
{
	return UMovieSceneChaosCacheSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control ChaosCache playback\n */" },
		{ "IncludePath", "Chaos/Sequencer/MovieSceneChaosCacheSection.h" },
		{ "ModuleRelativePath", "Public/Chaos/Sequencer/MovieSceneChaosCacheSection.h" },
		{ "ToolTip", "Movie scene section that control ChaosCache playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Chaos/Sequencer/MovieSceneChaosCacheSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneChaosCacheSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneChaosCacheSection, Params), Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 340462098
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneBaseCacheSection,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::ClassParams = {
	&UMovieSceneChaosCacheSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneChaosCacheSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneChaosCacheSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneChaosCacheSection.OuterSingleton, Z_Construct_UClass_UMovieSceneChaosCacheSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneChaosCacheSection.OuterSingleton;
}
template<> CHAOSCACHING_API UClass* StaticClass<UMovieSceneChaosCacheSection>()
{
	return UMovieSceneChaosCacheSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneChaosCacheSection);
UMovieSceneChaosCacheSection::~UMovieSceneChaosCacheSection() {}
// End Class UMovieSceneChaosCacheSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneChaosCacheParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams_Statics::NewStructOps, TEXT("MovieSceneChaosCacheParams"), &Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneChaosCacheParams), 340462098U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneChaosCacheSection, UMovieSceneChaosCacheSection::StaticClass, TEXT("UMovieSceneChaosCacheSection"), &Z_Registration_Info_UClass_UMovieSceneChaosCacheSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneChaosCacheSection), 920069712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_2961931851(TEXT("/Script/ChaosCaching"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
