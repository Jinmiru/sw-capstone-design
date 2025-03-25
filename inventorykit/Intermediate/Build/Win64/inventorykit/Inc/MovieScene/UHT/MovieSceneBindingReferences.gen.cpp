// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneBindingReferences.h"
#include "Runtime/UniversalObjectLocator/Public/UniversalObjectLocator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingReferences() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingReference();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingReferences();
UNIVERSALOBJECTLOCATOR_API UEnum* Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags();
UNIVERSALOBJECTLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUniversalObjectLocator();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneBindingReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBindingReference;
class UScriptStruct* FMovieSceneBindingReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBindingReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingReference, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBindingReference"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingReference.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBindingReference>()
{
	return FMovieSceneBindingReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An array of binding references\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingReferences.h" },
		{ "ToolTip", "An array of binding references" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneBindingReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locator_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneBindingReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolveFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneBindingReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResolveFlags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResolveFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBindingReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingReference, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::NewProp_Locator = { "Locator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingReference, Locator), Z_Construct_UScriptStruct_FUniversalObjectLocator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locator_MetaData), NewProp_Locator_MetaData) }; // 3426119561
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::NewProp_ResolveFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::NewProp_ResolveFlags = { "ResolveFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingReference, ResolveFlags), Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolveFlags_MetaData), NewProp_ResolveFlags_MetaData) }; // 3426674037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::NewProp_Locator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::NewProp_ResolveFlags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::NewProp_ResolveFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneBindingReference",
	Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::PropPointers),
	sizeof(FMovieSceneBindingReference),
	alignof(FMovieSceneBindingReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingReference()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBindingReference.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingReference.InnerSingleton;
}
// End ScriptStruct FMovieSceneBindingReference

// Begin ScriptStruct FMovieSceneBindingReferences
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBindingReferences;
class UScriptStruct* FMovieSceneBindingReferences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingReferences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBindingReferences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingReferences, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBindingReferences"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingReferences.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBindingReferences>()
{
	return FMovieSceneBindingReferences::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingReferences.h" },
		{ "ToolTip", "Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortedReferences_MetaData[] = {
		{ "Comment", "/** The map from object binding ID to an array of references that pertain to that ID */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingReferences.h" },
		{ "ToolTip", "The map from object binding ID to an array of references that pertain to that ID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SortedReferences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SortedReferences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBindingReferences>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::NewProp_SortedReferences_Inner = { "SortedReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBindingReference, METADATA_PARAMS(0, nullptr) }; // 2552109418
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::NewProp_SortedReferences = { "SortedReferences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingReferences, SortedReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortedReferences_MetaData), NewProp_SortedReferences_MetaData) }; // 2552109418
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::NewProp_SortedReferences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::NewProp_SortedReferences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneBindingReferences",
	Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::PropPointers),
	sizeof(FMovieSceneBindingReferences),
	alignof(FMovieSceneBindingReferences),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingReferences()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingReferences.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBindingReferences.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingReferences.InnerSingleton;
}
// End ScriptStruct FMovieSceneBindingReferences

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingReferences_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneBindingReference::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::NewStructOps, TEXT("MovieSceneBindingReference"), &Z_Registration_Info_UScriptStruct_MovieSceneBindingReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBindingReference), 2552109418U) },
		{ FMovieSceneBindingReferences::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::NewStructOps, TEXT("MovieSceneBindingReferences"), &Z_Registration_Info_UScriptStruct_MovieSceneBindingReferences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBindingReferences), 4259460284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingReferences_h_1579527827(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingReferences_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingReferences_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
