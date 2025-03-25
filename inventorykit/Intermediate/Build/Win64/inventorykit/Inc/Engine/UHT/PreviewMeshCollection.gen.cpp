// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/PreviewMeshCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewMeshCollection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UPreviewCollectionInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPreviewMeshCollection();
ENGINE_API UClass* Z_Construct_UClass_UPreviewMeshCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FPreviewMeshCollectionEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PreviewMeshCollectionEntry;
class UScriptStruct* FPreviewMeshCollectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PreviewMeshCollectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PreviewMeshCollectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PreviewMeshCollectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PreviewMeshCollectionEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPreviewMeshCollectionEntry>()
{
	return FPreviewMeshCollectionEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** An entry in a preview mesh collection */" },
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
		{ "ToolTip", "An entry in a preview mesh collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Skeletal Mesh" },
		{ "Comment", "/** The skeletal mesh to display */" },
		{ "DisallowedClasses", "/Script/ApexDestruction.DestructibleMesh" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
		{ "ToolTip", "The skeletal mesh to display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprint_MetaData[] = {
		{ "Category", "Anim Blueprint" },
		{ "Comment", "/** The custom animation blueprint for the mesh */" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
		{ "ToolTip", "The custom animation blueprint for the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnimBlueprint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewMeshCollectionEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPreviewMeshCollectionEntry, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewProp_AnimBlueprint = { "AnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPreviewMeshCollectionEntry, AnimBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimBlueprint_MetaData), NewProp_AnimBlueprint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewProp_AnimBlueprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PreviewMeshCollectionEntry",
	Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::PropPointers),
	sizeof(FPreviewMeshCollectionEntry),
	alignof(FPreviewMeshCollectionEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry()
{
	if (!Z_Registration_Info_UScriptStruct_PreviewMeshCollectionEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PreviewMeshCollectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PreviewMeshCollectionEntry.InnerSingleton;
}
// End ScriptStruct FPreviewMeshCollectionEntry

// Begin Class UPreviewMeshCollection
void UPreviewMeshCollection::StaticRegisterNativesUPreviewMeshCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPreviewMeshCollection);
UClass* Z_Construct_UClass_UPreviewMeshCollection_NoRegister()
{
	return UPreviewMeshCollection::StaticClass();
}
struct Z_Construct_UClass_UPreviewMeshCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A simple collection of skeletal meshes used for in-editor preview */" },
		{ "IncludePath", "Engine/PreviewMeshCollection.h" },
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
		{ "ToolTip", "A simple collection of skeletal meshes used for in-editor preview" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshes_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** The skeletal meshes that this collection contains */" },
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
		{ "ToolTip", "The skeletal meshes that this collection contains" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreviewMeshCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0114010000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPreviewMeshCollection, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes_Inner = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry, METADATA_PARAMS(0, nullptr) }; // 888567260
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPreviewMeshCollection, SkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshes_MetaData), NewProp_SkeletalMeshes_MetaData) }; // 888567260
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPreviewMeshCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPreviewMeshCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPreviewMeshCollection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPreviewCollectionInterface_NoRegister, (int32)VTABLE_OFFSET(UPreviewMeshCollection, IPreviewCollectionInterface), false },  // 301644452
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPreviewMeshCollection_Statics::ClassParams = {
	&UPreviewMeshCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPreviewMeshCollection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPreviewMeshCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPreviewMeshCollection()
{
	if (!Z_Registration_Info_UClass_UPreviewMeshCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPreviewMeshCollection.OuterSingleton, Z_Construct_UClass_UPreviewMeshCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPreviewMeshCollection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPreviewMeshCollection>()
{
	return UPreviewMeshCollection::StaticClass();
}
UPreviewMeshCollection::UPreviewMeshCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPreviewMeshCollection);
UPreviewMeshCollection::~UPreviewMeshCollection() {}
// End Class UPreviewMeshCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPreviewMeshCollectionEntry::StaticStruct, Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewStructOps, TEXT("PreviewMeshCollectionEntry"), &Z_Registration_Info_UScriptStruct_PreviewMeshCollectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPreviewMeshCollectionEntry), 888567260U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPreviewMeshCollection, UPreviewMeshCollection::StaticClass, TEXT("UPreviewMeshCollection"), &Z_Registration_Info_UClass_UPreviewMeshCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPreviewMeshCollection), 3085247688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_4172953645(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
