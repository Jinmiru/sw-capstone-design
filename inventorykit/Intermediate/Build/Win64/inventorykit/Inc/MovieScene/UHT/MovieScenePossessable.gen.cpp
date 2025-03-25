// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneDynamicBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePossessable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBinding();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieScenePossessable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePossessable;
class UScriptStruct* FMovieScenePossessable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePossessable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePossessable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePossessable, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePossessable"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePossessable.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieScenePossessable>()
{
	return FMovieScenePossessable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieScenePossessable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * MovieScenePossessable is a \"typed slot\" used to allow the MovieScene to control an already-existing object\n */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "MovieScenePossessable is a \"typed slot\" used to allow the MovieScene to control an already-existing object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Array of tags that can be used for grouping and categorizing. */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Array of tags that can be used for grouping and categorizing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBinding_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/** Optional user-defined possessable lookup information */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Optional user-defined possessable lookup information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Comment", "/** Unique identifier of the possessable object. */// @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//\x09\x09\x09\x09\x09Sometimes we'll need to generate fresh Guids.\n" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Unique identifier of the possessable object. // @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//                                     Sometimes we'll need to generate fresh Guids." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name label for this slot */// @todo sequencer: Should be editor-only probably\n" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Name label for this slot // @todo sequencer: Should be editor-only probably" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PossessedObjectClass_MetaData[] = {
		{ "Comment", "/** Type of the object we'll be possessing */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Type of the object we'll be possessing" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentGuid_MetaData[] = {
		{ "Comment", "/** GUID relating to this possessable's parent, if applicable. */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "GUID relating to this possessable's parent, if applicable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnableObjectBindingID_MetaData[] = {
		{ "Comment", "/** Optional object binding ID if this possessable possesses a spawnable */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Optional object binding ID if this possessable possesses a spawnable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PossessedObjectClass;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnableObjectBindingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePossessable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePossessable, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_DynamicBinding = { "DynamicBinding", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePossessable, DynamicBinding), Z_Construct_UScriptStruct_FMovieSceneDynamicBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicBinding_MetaData), NewProp_DynamicBinding_MetaData) }; // 1420086444
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePossessable, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePossessable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass = { "PossessedObjectClass", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePossessable, PossessedObjectClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PossessedObjectClass_MetaData), NewProp_PossessedObjectClass_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid = { "ParentGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePossessable, ParentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentGuid_MetaData), NewProp_ParentGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_SpawnableObjectBindingID = { "SpawnableObjectBindingID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePossessable, SpawnableObjectBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnableObjectBindingID_MetaData), NewProp_SpawnableObjectBindingID_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_DynamicBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_SpawnableObjectBindingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieScenePossessable",
	Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::PropPointers),
	sizeof(FMovieScenePossessable),
	alignof(FMovieScenePossessable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePossessable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePossessable.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePossessable.InnerSingleton;
}
// End ScriptStruct FMovieScenePossessable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieScenePossessable::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewStructOps, TEXT("MovieScenePossessable"), &Z_Registration_Info_UScriptStruct_MovieScenePossessable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePossessable), 618785430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h_3166025046(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
