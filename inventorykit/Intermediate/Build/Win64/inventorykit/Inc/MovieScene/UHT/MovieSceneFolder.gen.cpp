// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFolder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneFolder
void UMovieSceneFolder::StaticRegisterNativesUMovieSceneFolder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFolder);
UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister()
{
	return UMovieSceneFolder::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneFolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents a folder used for organizing objects in tracks in a movie scene. */" },
		{ "IncludePath", "MovieSceneFolder.h" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "Represents a folder used for organizing objects in tracks in a movie scene." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[] = {
		{ "Comment", "/** The name of this folder. */" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The name of this folder." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildFolders_MetaData[] = {
		{ "Comment", "/** The folders contained by this folder. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The folders contained by this folder." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildTracks_MetaData[] = {
		{ "Comment", "/** The tracks contained by this folder. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The tracks contained by this folder." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildObjectBindingStrings_MetaData[] = {
		{ "Comment", "/** The guid strings used to serialize the guids for the object bindings contained by this folder. */" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The guid strings used to serialize the guids for the object bindings contained by this folder." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderColor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** This folder's color */" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "This folder's color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortingOrder_MetaData[] = {
		{ "Comment", "/** This folder's desired sorting order */" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "This folder's desired sorting order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildMasterTracks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FolderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildFolders;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildTracks;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChildObjectBindingStrings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildObjectBindingStrings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FolderColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortingOrder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildMasterTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildMasterTracks;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFolder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneFolder, FolderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderName_MetaData), NewProp_FolderName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_Inner = { "ChildFolders", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders = { "ChildFolders", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneFolder, ChildFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildFolders_MetaData), NewProp_ChildFolders_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks_Inner = { "ChildTracks", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks = { "ChildTracks", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneFolder, ChildTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildTracks_MetaData), NewProp_ChildTracks_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_Inner = { "ChildObjectBindingStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings = { "ChildObjectBindingStrings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneFolder, ChildObjectBindingStrings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildObjectBindingStrings_MetaData), NewProp_ChildObjectBindingStrings_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor = { "FolderColor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneFolder, FolderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderColor_MetaData), NewProp_FolderColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder = { "SortingOrder", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneFolder, SortingOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortingOrder_MetaData), NewProp_SortingOrder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_Inner = { "ChildMasterTracks", nullptr, (EPropertyFlags)0x0104000820080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks = { "ChildMasterTracks", nullptr, (EPropertyFlags)0x0144008820000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneFolder, ChildMasterTracks_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildMasterTracks_MetaData), NewProp_ChildMasterTracks_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneFolder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFolder_Statics::ClassParams = {
	&UMovieSceneFolder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneFolder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneFolder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneFolder()
{
	if (!Z_Registration_Info_UClass_UMovieSceneFolder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFolder.OuterSingleton, Z_Construct_UClass_UMovieSceneFolder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneFolder.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneFolder>()
{
	return UMovieSceneFolder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFolder);
UMovieSceneFolder::~UMovieSceneFolder() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneFolder)
// End Class UMovieSceneFolder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFolder, UMovieSceneFolder::StaticClass, TEXT("UMovieSceneFolder"), &Z_Registration_Info_UClass_UMovieSceneFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFolder), 2322443665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_1083759127(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
