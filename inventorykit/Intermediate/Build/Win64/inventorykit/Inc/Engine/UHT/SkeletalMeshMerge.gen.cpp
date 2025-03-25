// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/SkeletalMeshMerge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshMerge() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSkelMeshMergeSectionMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkelMeshMergeSectionMapping;
class UScriptStruct* FSkelMeshMergeSectionMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshMergeSectionMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkelMeshMergeSectionMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshMergeSectionMapping"));
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshMergeSectionMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshMergeSectionMapping>()
{
	return FSkelMeshMergeSectionMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* Info to map all the sections from a single source skeletal mesh to \n* a final section entry in the merged skeletal mesh\n*/" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMerge.h" },
		{ "ToolTip", "Info to map all the sections from a single source skeletal mesh to\na final section entry in the merged skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionIDs_MetaData[] = {
		{ "Category", "Mesh Merge Parameters" },
		{ "Comment", "/** indices to final section entries of the merged skel mesh */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMerge.h" },
		{ "ToolTip", "indices to final section entries of the merged skel mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshMergeSectionMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::NewProp_SectionIDs_Inner = { "SectionIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::NewProp_SectionIDs = { "SectionIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkelMeshMergeSectionMapping, SectionIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionIDs_MetaData), NewProp_SectionIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::NewProp_SectionIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::NewProp_SectionIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkelMeshMergeSectionMapping",
	Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::PropPointers),
	sizeof(FSkelMeshMergeSectionMapping),
	alignof(FSkelMeshMergeSectionMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshMergeSectionMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkelMeshMergeSectionMapping.InnerSingleton, Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshMergeSectionMapping.InnerSingleton;
}
// End ScriptStruct FSkelMeshMergeSectionMapping

// Begin ScriptStruct FSkelMeshMergeMeshUVTransforms
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkelMeshMergeMeshUVTransforms;
class UScriptStruct* FSkelMeshMergeMeshUVTransforms::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshMergeMeshUVTransforms.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkelMeshMergeMeshUVTransforms.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshMergeMeshUVTransforms"));
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshMergeMeshUVTransforms.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshMergeMeshUVTransforms>()
{
	return FSkelMeshMergeMeshUVTransforms::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMerge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVTransforms_MetaData[] = {
		{ "Category", "Mesh Merge Parameters" },
		{ "Comment", "/** A list of how UVs should be transformed on a given mesh, where index represents a specific UV channel. */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMerge.h" },
		{ "ToolTip", "A list of how UVs should be transformed on a given mesh, where index represents a specific UV channel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UVTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshMergeMeshUVTransforms>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::NewProp_UVTransforms_Inner = { "UVTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::NewProp_UVTransforms = { "UVTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkelMeshMergeMeshUVTransforms, UVTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVTransforms_MetaData), NewProp_UVTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::NewProp_UVTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::NewProp_UVTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkelMeshMergeMeshUVTransforms",
	Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::PropPointers),
	sizeof(FSkelMeshMergeMeshUVTransforms),
	alignof(FSkelMeshMergeMeshUVTransforms),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshMergeMeshUVTransforms.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkelMeshMergeMeshUVTransforms.InnerSingleton, Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshMergeMeshUVTransforms.InnerSingleton;
}
// End ScriptStruct FSkelMeshMergeMeshUVTransforms

// Begin ScriptStruct FSkelMeshMergeUVTransformMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkelMeshMergeUVTransformMapping;
class UScriptStruct* FSkelMeshMergeUVTransformMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshMergeUVTransformMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkelMeshMergeUVTransformMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshMergeUVTransformMapping"));
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshMergeUVTransformMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshMergeUVTransformMapping>()
{
	return FSkelMeshMergeUVTransformMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* Info to map all the sections about how to transform their UVs\n*/" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMerge.h" },
		{ "ToolTip", "Info to map all the sections about how to transform their UVs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVTransformsPerMesh_MetaData[] = {
		{ "Category", "Mesh Merge Parameters" },
		{ "Comment", "/** UV coordinates transform datam one entry for each Skeletal Mesh. */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMerge.h" },
		{ "ToolTip", "UV coordinates transform datam one entry for each Skeletal Mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVTransformsPerMesh_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UVTransformsPerMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshMergeUVTransformMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_Inner = { "UVTransformsPerMesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms, METADATA_PARAMS(0, nullptr) }; // 795717813
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh = { "UVTransformsPerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkelMeshMergeUVTransformMapping, UVTransformsPerMesh), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVTransformsPerMesh_MetaData), NewProp_UVTransformsPerMesh_MetaData) }; // 795717813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkelMeshMergeUVTransformMapping",
	Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::PropPointers),
	sizeof(FSkelMeshMergeUVTransformMapping),
	alignof(FSkelMeshMergeUVTransformMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshMergeUVTransformMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkelMeshMergeUVTransformMapping.InnerSingleton, Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshMergeUVTransformMapping.InnerSingleton;
}
// End ScriptStruct FSkelMeshMergeUVTransformMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshMerge_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkelMeshMergeSectionMapping::StaticStruct, Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_Statics::NewStructOps, TEXT("SkelMeshMergeSectionMapping"), &Z_Registration_Info_UScriptStruct_SkelMeshMergeSectionMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkelMeshMergeSectionMapping), 3443849823U) },
		{ FSkelMeshMergeMeshUVTransforms::StaticStruct, Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms_Statics::NewStructOps, TEXT("SkelMeshMergeMeshUVTransforms"), &Z_Registration_Info_UScriptStruct_SkelMeshMergeMeshUVTransforms, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkelMeshMergeMeshUVTransforms), 795717813U) },
		{ FSkelMeshMergeUVTransformMapping::StaticStruct, Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewStructOps, TEXT("SkelMeshMergeUVTransformMapping"), &Z_Registration_Info_UScriptStruct_SkelMeshMergeUVTransformMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkelMeshMergeUVTransformMapping), 3705701818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshMerge_h_1273552675(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshMerge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SkeletalMeshMerge_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
