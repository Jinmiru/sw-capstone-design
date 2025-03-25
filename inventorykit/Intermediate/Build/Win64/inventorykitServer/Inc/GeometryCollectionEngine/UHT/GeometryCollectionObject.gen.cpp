// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionObject.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionDamagePropagationData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionObject() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ECollisionTypeEnum();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EDamageModelTypeEnum();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EImplicitTypeEnum();
CHAOSSOLVERENGINE_API UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSource();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin ScriptStruct FGeometryCollectionSource
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionSource;
class UScriptStruct* FGeometryCollectionSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSource, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionSource"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionSource.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionSource>()
{
	return FGeometryCollectionSource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceGeometryObject_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh, /Script/Engine.SkeletalMesh, /Script/GeometryCollectionEngine.GeometryCollection" },
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaterial_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceCustomData_MetaData[] = {
		{ "Category", "GeometrySource|Instance" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddInternalMaterials_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "Comment", "/** (Legacy) Whether source materials will be duplicated to create new slots for internal materials, or existing odd materials will be considered internal. (For non-Geometry Collection inputs only.) */" },
		{ "DisplayName", "(Legacy) Add Internal Materials" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "(Legacy) Whether source materials will be duplicated to create new slots for internal materials, or existing odd materials will be considered internal. (For non-Geometry Collection inputs only.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitComponents_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "Comment", "/** Whether individual source mesh components should be split into separate pieces of geometry based on mesh connectivity. If checked, triangles that are not topologically connected will be assigned separate bones. (For non-Geometry Collection inputs only.) */" },
		{ "DisplayName", "Split Meshes" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Whether individual source mesh components should be split into separate pieces of geometry based on mesh connectivity. If checked, triangles that are not topologically connected will be assigned separate bones. (For non-Geometry Collection inputs only.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetInternalFromMaterialIndex_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "Comment", "/** Whether to set the 'internal' flag for faces with odd-numbered materials slots. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Whether to set the 'internal' flag for faces with odd-numbered materials slots." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceGeometryObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMaterial_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InstanceCustomData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceCustomData;
	static void NewProp_bAddInternalMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddInternalMaterials;
	static void NewProp_bSplitComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitComponents;
	static void NewProp_bSetInternalFromMaterialIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetInternalFromMaterialIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionSource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject = { "SourceGeometryObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSource, SourceGeometryObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceGeometryObject_MetaData), NewProp_SourceGeometryObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSource, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalTransform_MetaData), NewProp_LocalTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_Inner = { "SourceMaterial", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial = { "SourceMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSource, SourceMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMaterial_MetaData), NewProp_SourceMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_InstanceCustomData_Inner = { "InstanceCustomData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_InstanceCustomData = { "InstanceCustomData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSource, InstanceCustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceCustomData_MetaData), NewProp_InstanceCustomData_MetaData) };
void Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials_SetBit(void* Obj)
{
	((FGeometryCollectionSource*)Obj)->bAddInternalMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials = { "bAddInternalMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeometryCollectionSource), &Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddInternalMaterials_MetaData), NewProp_bAddInternalMaterials_MetaData) };
void Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents_SetBit(void* Obj)
{
	((FGeometryCollectionSource*)Obj)->bSplitComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents = { "bSplitComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeometryCollectionSource), &Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitComponents_MetaData), NewProp_bSplitComponents_MetaData) };
void Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSetInternalFromMaterialIndex_SetBit(void* Obj)
{
	((FGeometryCollectionSource*)Obj)->bSetInternalFromMaterialIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSetInternalFromMaterialIndex = { "bSetInternalFromMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeometryCollectionSource), &Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSetInternalFromMaterialIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetInternalFromMaterialIndex_MetaData), NewProp_bSetInternalFromMaterialIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_InstanceCustomData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_InstanceCustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSetInternalFromMaterialIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionSource",
	Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::PropPointers),
	sizeof(FGeometryCollectionSource),
	alignof(FGeometryCollectionSource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSource()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionSource.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionSource.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionSource

// Begin ScriptStruct FGeometryCollectionAutoInstanceMesh
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh;
class UScriptStruct* FGeometryCollectionAutoInstanceMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionAutoInstanceMesh"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionAutoInstanceMesh>()
{
	return FGeometryCollectionAutoInstanceMesh::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Mesh instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh" },
		{ "Category", "AutoInstance" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "AutoInstance" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInstances_MetaData[] = {
		{ "Category", "AutoInstance" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "Category", "AutoInstance" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionAutoInstanceMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionAutoInstanceMesh, StaticMesh_DEPRECATED), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionAutoInstanceMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionAutoInstanceMesh, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionAutoInstanceMesh, NumInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInstances_MetaData), NewProp_NumInstances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionAutoInstanceMesh, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_StaticMesh,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_NumInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_CustomData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_CustomData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionAutoInstanceMesh",
	Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::PropPointers),
	sizeof(FGeometryCollectionAutoInstanceMesh),
	alignof(FGeometryCollectionAutoInstanceMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionAutoInstanceMesh

// Begin ScriptStruct FGeometryCollectionEmbeddedExemplar
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar;
class UScriptStruct* FGeometryCollectionEmbeddedExemplar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionEmbeddedExemplar"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionEmbeddedExemplar>()
{
	return FGeometryCollectionEmbeddedExemplar::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshExemplar_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh" },
		{ "Category", "EmbeddedExemplar" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[] = {
		{ "Category", "EmbeddedExemplar" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[] = {
		{ "Category", "EmbeddedExemplar" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceCount_MetaData[] = {
		{ "Category", "EmbeddedExemplar" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshExemplar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartCullDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndCullDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionEmbeddedExemplar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StaticMeshExemplar = { "StaticMeshExemplar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionEmbeddedExemplar, StaticMeshExemplar), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshExemplar_MetaData), NewProp_StaticMeshExemplar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionEmbeddedExemplar, StartCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartCullDistance_MetaData), NewProp_StartCullDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionEmbeddedExemplar, EndCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndCullDistance_MetaData), NewProp_EndCullDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_InstanceCount = { "InstanceCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionEmbeddedExemplar, InstanceCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceCount_MetaData), NewProp_InstanceCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StaticMeshExemplar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StartCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_EndCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_InstanceCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionEmbeddedExemplar",
	Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::PropPointers),
	sizeof(FGeometryCollectionEmbeddedExemplar),
	alignof(FGeometryCollectionEmbeddedExemplar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionEmbeddedExemplar

// Begin ScriptStruct FGeometryCollectionLevelSetData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData;
class UScriptStruct* FGeometryCollectionLevelSetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionLevelSetData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionLevelSetData>()
{
	return FGeometryCollectionLevelSetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Category", "LevelSet" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Category", "LevelSet" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinClusterLevelSetResolution_MetaData[] = {
		{ "Category", "LevelSet" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevelSetResolution_MetaData[] = {
		{ "Category", "LevelSet" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinClusterLevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevelSetResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionLevelSetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionLevelSetData, MinLevelSetResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLevelSetResolution_MetaData), NewProp_MinLevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionLevelSetData, MaxLevelSetResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevelSetResolution_MetaData), NewProp_MaxLevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinClusterLevelSetResolution = { "MinClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionLevelSetData, MinClusterLevelSetResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinClusterLevelSetResolution_MetaData), NewProp_MinClusterLevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxClusterLevelSetResolution = { "MaxClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionLevelSetData, MaxClusterLevelSetResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClusterLevelSetResolution_MetaData), NewProp_MaxClusterLevelSetResolution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinClusterLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxClusterLevelSetResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionLevelSetData",
	Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::PropPointers),
	sizeof(FGeometryCollectionLevelSetData),
	alignof(FGeometryCollectionLevelSetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionLevelSetData

// Begin ScriptStruct FGeometryCollectionCollisionParticleData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData;
class UScriptStruct* FGeometryCollectionCollisionParticleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionCollisionParticleData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionCollisionParticleData>()
{
	return FGeometryCollectionCollisionParticleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionParticlesFraction_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/**\n\x09 * Number of particles on the triangulated surface to use for collisions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Number of particles on the triangulated surface to use for collisions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumCollisionParticles_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/**\n\x09 * Max number of particles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Max number of particles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionParticlesFraction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumCollisionParticles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionCollisionParticleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_CollisionParticlesFraction = { "CollisionParticlesFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionCollisionParticleData, CollisionParticlesFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionParticlesFraction_MetaData), NewProp_CollisionParticlesFraction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_MaximumCollisionParticles = { "MaximumCollisionParticles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionCollisionParticleData, MaximumCollisionParticles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumCollisionParticles_MetaData), NewProp_MaximumCollisionParticles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_CollisionParticlesFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_MaximumCollisionParticles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionCollisionParticleData",
	Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::PropPointers),
	sizeof(FGeometryCollectionCollisionParticleData),
	alignof(FGeometryCollectionCollisionParticleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionCollisionParticleData

// Begin ScriptStruct FGeometryCollectionCollisionTypeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData;
class UScriptStruct* FGeometryCollectionCollisionTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionCollisionTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionCollisionTypeData>()
{
	return FGeometryCollectionCollisionTypeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImplicitType_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSet_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  LevelSet Resolution data for rasterization.\n\x09*/" },
		{ "EditCondition", "ImplicitType == EImplicitTypeEnum::Chaos_Implicit_LevelSet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  LevelSet Resolution data for rasterization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionParticles_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Collision Particle data for surface samples during Particle-LevelSet collisions.\n\x09*/" },
		{ "EditCondition", "CollisionType == ECollisionTypeEnum::Chaos_Surface_Volumetric" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Collision Particle data for surface samples during Particle-LevelSet collisions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectReductionPercentage_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Uniform scale on the collision body. (def: 0)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Uniform scale on the collision body. (def: 0)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMarginFraction_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* A collision margin is a fraction of size used by some boxes and convex shapes to improve collision detection results.\n\x09* The core geometry of shapes that support a margin are reduced in size by the margin, and the margin\n\x09* is added back on during collision detection. The net result is a shape of the same size but with rounded corners.\n\x09*/" },
		{ "EditCondition", "ImplicitType == EImplicitTypeEnum::Chaos_Implicit_Convex || ImplicitType == EImplicitTypeEnum::Chaos_Implicit_Box" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "A collision margin is a fraction of size used by some boxes and convex shapes to improve collision detection results.\nThe core geometry of shapes that support a margin are reduced in size by the margin, and the margin\nis added back on during collision detection. The net result is a shape of the same size but with rounded corners." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImplicitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImplicitType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionParticles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionObjectReductionPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMarginFraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionCollisionTypeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, CollisionType), Z_Construct_UEnum_Chaos_ECollisionTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 2902345281
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType = { "ImplicitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, ImplicitType), Z_Construct_UEnum_Chaos_EImplicitTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImplicitType_MetaData), NewProp_ImplicitType_MetaData) }; // 1153760466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_LevelSet = { "LevelSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, LevelSet), Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSet_MetaData), NewProp_LevelSet_MetaData) }; // 493327649
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionParticles = { "CollisionParticles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, CollisionParticles), Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionParticles_MetaData), NewProp_CollisionParticles_MetaData) }; // 781805023
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionObjectReductionPercentage = { "CollisionObjectReductionPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, CollisionObjectReductionPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionObjectReductionPercentage_MetaData), NewProp_CollisionObjectReductionPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionMarginFraction = { "CollisionMarginFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, CollisionMarginFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMarginFraction_MetaData), NewProp_CollisionMarginFraction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_LevelSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionObjectReductionPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionMarginFraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionCollisionTypeData",
	Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::PropPointers),
	sizeof(FGeometryCollectionCollisionTypeData),
	alignof(FGeometryCollectionCollisionTypeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionCollisionTypeData

// Begin ScriptStruct FGeometryCollectionSizeSpecificData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData;
class UScriptStruct* FGeometryCollectionSizeSpecificData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionSizeSpecificData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionSizeSpecificData>()
{
	return FGeometryCollectionSizeSpecificData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/** The max size these settings apply to*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "The max size these settings apply to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionShapes_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09* Collision Shapes allow kfor multiple collision types per rigid body. \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "* Collision Shapes allow kfor multiple collision types per rigid body." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Comment", "/*\n\x09 *  CollisionType defines how to initialize the rigid collision structures.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.CollisionType instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImplicitType_MetaData[] = {
		{ "Comment", "/*\n\x09 *  CollisionType defines how to initialize the rigid collision structures.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.ImplicitType instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09 *  Resolution on the smallest axes for the level set. (def: 5)\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.LevelSet.MinLevelSetResolution instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09 *  Resolution on the smallest axes for the level set. (def: 10)\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.LevelSet.MaxLevelSetResolution instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinClusterLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09 *  Resolution on the smallest axes for the level set. (def: 5)\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.LevelSet.MinClusterLevelSetResolution instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09 *  Resolution on the smallest axes for the level set. (def: 10)\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.LevelSet.MaxClusterLevelSetResolution instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectReductionPercentage_MetaData[] = {
		{ "Comment", "/*\n\x09 *  Resolution on the smallest axes for the level set. (def: 10)\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.CollisionObjectReductionPercentage instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionParticlesFraction_MetaData[] = {
		{ "Comment", "/**\n\x09 * Number of particles on the triangulated surface to use for collisions.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.CollisionParticlesFraction instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Number of particles on the triangulated surface to use for collisions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumCollisionParticles_MetaData[] = {
		{ "Comment", "/**\n\x09 * Max number of particles.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.MaximumCollisionParticles instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Max number of particles." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09 * Max number of particles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Max number of particles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionShapes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionShapes;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImplicitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImplicitType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinClusterLevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionObjectReductionPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionParticlesFraction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumCollisionParticles;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DamageThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionSizeSpecificData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaxSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSize_MetaData), NewProp_MaxSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes_Inner = { "CollisionShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData, METADATA_PARAMS(0, nullptr) }; // 1049918610
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes = { "CollisionShapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionShapes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionShapes_MetaData), NewProp_CollisionShapes_MetaData) }; // 1049918610
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionType_DEPRECATED), Z_Construct_UEnum_Chaos_ECollisionTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 2902345281
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType = { "ImplicitType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, ImplicitType_DEPRECATED), Z_Construct_UEnum_Chaos_EImplicitTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImplicitType_MetaData), NewProp_ImplicitType_MetaData) }; // 1153760466
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MinLevelSetResolution_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLevelSetResolution_MetaData), NewProp_MinLevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaxLevelSetResolution_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevelSetResolution_MetaData), NewProp_MaxLevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution = { "MinClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MinClusterLevelSetResolution_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinClusterLevelSetResolution_MetaData), NewProp_MinClusterLevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution = { "MaxClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaxClusterLevelSetResolution_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClusterLevelSetResolution_MetaData), NewProp_MaxClusterLevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage = { "CollisionObjectReductionPercentage", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionObjectReductionPercentage_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionObjectReductionPercentage_MetaData), NewProp_CollisionObjectReductionPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction = { "CollisionParticlesFraction", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionParticlesFraction_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionParticlesFraction_MetaData), NewProp_CollisionParticlesFraction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles = { "MaximumCollisionParticles", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaximumCollisionParticles_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumCollisionParticles_MetaData), NewProp_MaximumCollisionParticles_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, DamageThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageThreshold_MetaData), NewProp_DamageThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_DamageThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionSizeSpecificData",
	Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::PropPointers),
	sizeof(FGeometryCollectionSizeSpecificData),
	alignof(FGeometryCollectionSizeSpecificData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionSizeSpecificData

// Begin ScriptStruct FGeometryCollectionProxyMeshData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionProxyMeshData;
class UScriptStruct* FGeometryCollectionProxyMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionProxyMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionProxyMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionProxyMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionProxyMeshData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionProxyMeshData>()
{
	return FGeometryCollectionProxyMeshData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshes_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh" },
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProxyMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProxyMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionProxyMeshData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::NewProp_ProxyMeshes_Inner = { "ProxyMeshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::NewProp_ProxyMeshes = { "ProxyMeshes", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionProxyMeshData, ProxyMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyMeshes_MetaData), NewProp_ProxyMeshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::NewProp_ProxyMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::NewProp_ProxyMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionProxyMeshData",
	Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::PropPointers),
	sizeof(FGeometryCollectionProxyMeshData),
	alignof(FGeometryCollectionProxyMeshData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionProxyMeshData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionProxyMeshData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionProxyMeshData.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionProxyMeshData

// Begin ScriptStruct FGeometryCollectionRenderResourceSizeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionRenderResourceSizeInfo;
class UScriptStruct* FGeometryCollectionRenderResourceSizeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionRenderResourceSizeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionRenderResourceSizeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionRenderResourceSizeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionRenderResourceSizeInfo.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionRenderResourceSizeInfo>()
{
	return FGeometryCollectionRenderResourceSizeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshResourcesSize_MetaData[] = {
		{ "Comment", "// Total size of the arrays for the MeshResources\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Total size of the arrays for the MeshResources" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteResourcesSize_MetaData[] = {
		{ "Comment", "// Total size of the arrays for the NaniteResources\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Total size of the arrays for the NaniteResources" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_MeshResourcesSize;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_NaniteResourcesSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionRenderResourceSizeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::NewProp_MeshResourcesSize = { "MeshResourcesSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionRenderResourceSizeInfo, MeshResourcesSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshResourcesSize_MetaData), NewProp_MeshResourcesSize_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::NewProp_NaniteResourcesSize = { "NaniteResourcesSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionRenderResourceSizeInfo, NaniteResourcesSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteResourcesSize_MetaData), NewProp_NaniteResourcesSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::NewProp_MeshResourcesSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::NewProp_NaniteResourcesSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionRenderResourceSizeInfo",
	Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::PropPointers),
	sizeof(FGeometryCollectionRenderResourceSizeInfo),
	alignof(FGeometryCollectionRenderResourceSizeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionRenderResourceSizeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionRenderResourceSizeInfo.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionRenderResourceSizeInfo.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionRenderResourceSizeInfo

// Begin Class UGeometryCollection Function SetConvertVertexColorsToSRGB
struct Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics
{
	struct GeometryCollection_eventSetConvertVertexColorsToSRGB_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((GeometryCollection_eventSetConvertVertexColorsToSRGB_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollection_eventSetConvertVertexColorsToSRGB_Parms), &Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollection, nullptr, "SetConvertVertexColorsToSRGB", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::GeometryCollection_eventSetConvertVertexColorsToSRGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::GeometryCollection_eventSetConvertVertexColorsToSRGB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollection::execSetConvertVertexColorsToSRGB)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConvertVertexColorsToSRGB(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class UGeometryCollection Function SetConvertVertexColorsToSRGB

// Begin Class UGeometryCollection Function SetEnableNanite
struct Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics
{
	struct GeometryCollection_eventSetEnableNanite_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((GeometryCollection_eventSetEnableNanite_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollection_eventSetEnableNanite_Parms), &Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollection, nullptr, "SetEnableNanite", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::GeometryCollection_eventSetEnableNanite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::GeometryCollection_eventSetEnableNanite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollection_SetEnableNanite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollection_SetEnableNanite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollection::execSetEnableNanite)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableNanite(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class UGeometryCollection Function SetEnableNanite

// Begin Class UGeometryCollection
void UGeometryCollection::StaticRegisterNativesUGeometryCollection()
{
	UClass* Class = UGeometryCollection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetConvertVertexColorsToSRGB", &UGeometryCollection::execSetConvertVertexColorsToSRGB },
		{ "SetEnableNanite", &UGeometryCollection::execSetEnableNanite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollection);
UClass* Z_Construct_UClass_UGeometryCollection_NoRegister()
{
	return UGeometryCollection::StaticClass();
}
struct Z_Construct_UClass_UGeometryCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* UGeometryCollectionObject (UObject)\n*\n* UObject wrapper for the FGeometryCollection\n*\n*/" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionObject.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UGeometryCollectionObject (UObject)\n\nUObject wrapper for the FGeometryCollection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableClustering_MetaData[] = {
		{ "Category", "Clustering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGroupIndex_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Maximum level for cluster breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Maximum level for cluster breaks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevel_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Maximum level for cluster breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Maximum level for cluster breaks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageModel_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Damage model to use for evaluating destruction. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Damage model to use for evaluating destruction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Damage threshold for clusters at different levels. */" },
		{ "EditCondition", "!bUseSizeSpecificDamageThreshold && DamageModel == EDamageModelTypeEnum::Chaos_Damage_Model_UserDefined_Damage_Threshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Damage threshold for clusters at different levels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSizeSpecificDamageThreshold_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** whether to use size specific damage threshold instead of level based ones ( see Size Specific Data array ). */" },
		{ "EditCondition", "DamageModel == EDamageModelTypeEnum::Chaos_Damage_Model_UserDefined_Damage_Threshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "whether to use size specific damage threshold instead of level based ones ( see Size Specific Data array )." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialDamageModifiers_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** When on , use the modifiers on the material to adjust the user defined damage threshold values */" },
		{ "EditCondition", "DamageModel == EDamageModelTypeEnum::Chaos_Damage_Model_UserDefined_Damage_Threshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "When on , use the modifiers on the material to adjust the user defined damage threshold values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerClusterOnlyDamageThreshold_MetaData[] = {
		{ "Category", "Compatibility" },
		{ "Comment", "/** compatibility check, when true, only cluster compute damage from parameters and propagate to direct children\n\x09 *  when false, each child will compute it's damage threshold allowing for more precise and intuitive destruction behavior\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "compatibility check, when true, only cluster compute damage from parameters and propagate to direct children\nwhen false, each child will compute it's damage threshold allowing for more precise and intuitive destruction behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePropagationData_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Data about how damage propagation shoudl behave. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Data about how damage propagation shoudl behave." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterConnectionType_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionGraphBoundsFilteringMargin_MetaData[] = {
		{ "Category", "Clustering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySource_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmbeddedGeometryExemplar_MetaData[] = {
		{ "Category", "EmbeddedGeometry" },
		{ "Comment", "/** References for embedded geometry generation */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "References for embedded geometry generation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Whether to use full precision UVs when rendering this geometry. (Does not apply to Nanite rendering) */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Whether to use full precision UVs when rendering this geometry. (Does not apply to Nanite rendering)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStripOnCook_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Strip unnecessary data from the Geometry Collection to keep the memory footprint as small as possible.\n\x09 */" },
		{ "DisplayName", "Strip Source Data On Cook" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Strip unnecessary data from the Geometry Collection to keep the memory footprint as small as possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStripRenderDataOnCook_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Strip unnecessary render data from the Geometry Collection to keep the memory footprint as small as possible.\n\x09 * This may be used if the cooked build uses a custom renderer such as the ISMPool renderer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Strip unnecessary render data from the Geometry Collection to keep the memory footprint as small as possible.\nThis may be used if the cooked build uses a custom renderer such as the ISMPool renderer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRendererType_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Custom class type that will be used to render the geometry collection instead of using the native rendering. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "MustImplement", "/Script/GeometryCollectionEngine.GeometryCollectionExternalRenderInterface" },
		{ "ToolTip", "Custom class type that will be used to render the geometry collection instead of using the native rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootProxyData_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Static mesh to use as a proxy for rendering until the geometry collection is broken. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Static mesh to use as a proxy for rendering until the geometry collection is broken." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoInstanceMeshes_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** List of unique static mesh / materials pairs for auto instancing. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "List of unique static mesh / materials pairs for auto instancing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableNanite_MetaData[] = {
		{ "BlueprintSetter", "SetEnableNanite" },
		{ "Category", "Nanite" },
		{ "Comment", "/**\n\x09 * Enable support for Nanite.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Enable support for Nanite." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertVertexColorsToSRGB_MetaData[] = {
		{ "BlueprintSetter", "SetConvertVertexColorsToSRGB" },
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Convert vertex colors to sRGB for rendering. Exposed to avoid changing vertex color rendering for legacy assets; should typically be true for new geometry collections.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Convert vertex colors to sRGB for rendering. Exposed to avoid changing vertex color rendering for legacy assets; should typically be true for new geometry collections." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImplicitType_MetaData[] = {
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinClusterLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectReductionPercentage_MetaData[] = {
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootProxy_MetaData[] = {
		{ "Comment", "/** static mesh to use as a proxy for rendering until the geometry collection is broken */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use RootProxyData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "static mesh to use as a proxy for rendering until the geometry collection is broken" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsMaterial_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\x09Physics material to use for the geometry collection */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Physics material to use for the geometry collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDensityFromPhysicsMaterial_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* Whether to use density ( for mass computation ) from physics material ( if physics material is not set, use the component one or defaults )\n\x09*/" },
		{ "EditCondition", "PhysicsMaterial != nullptr" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Whether to use density ( for mass computation ) from physics material ( if physics material is not set, use the component one or defaults )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDensityFromPhysicsMaterialInGCm3_MetaData[] = {
		{ "Comment", "/**\n\x09* Cached Material density value used to compute the Mass attribute  ( In gram per cm3 )\n\x09* this is necessary because the material properties could be changed after without causing the mass attribute to be recomputed ( because the GC asset will not get notified )\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Cached Material density value used to compute the Mass attribute  ( In gram per cm3 )\nthis is necessary because the material properties could be changed after without causing the mass attribute to be recomputed ( because the GC asset will not get notified )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMassAsDensity_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* Mass As Density, units are in kg/m^3 ( only enabled if physics material is not set )\n\x09*/" },
		{ "EditCondition", "!bDensityFromPhysicsMaterial" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Mass As Density, units are in kg/m^3 ( only enabled if physics material is not set )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* Total Mass of Collection. If density, units are in kg/m^3 ( only enabled if physics material is not set )\n\x09*/" },
		{ "EditCondition", "!bDensityFromPhysicsMaterial" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Total Mass of Collection. If density, units are in kg/m^3 ( only enabled if physics material is not set )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumMassClamp_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* Smallest allowable mass (def:0.1)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Smallest allowable mass (def:0.1)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportCollisionFromSource_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* whether to import collision from the source asset\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "whether to import collision from the source asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeConvexes_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* whether to optimize convexes for collisions. If true the convex optimizer will generate at runtime one \n\x09* single convex shape for physics collisions ignoring all the user defined ones. \n\x09* Enable p.Chaos.Convex.SimplifyUnion cvar to be able to use it (experimental)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "whether to optimize convexes for collisions. If true the convex optimizer will generate at runtime one\nsingle convex shape for physics collisions ignoring all the user defined ones.\nEnable p.Chaos.Convex.SimplifyUnion cvar to be able to use it (experimental)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionParticlesFraction_MetaData[] = {
		{ "Comment", "/**\n\x09 * Number of particles on the triangulated surface to use for collisions.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Number of particles on the triangulated surface to use for collisions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumCollisionParticles_MetaData[] = {
		{ "Comment", "/**\n\x09 * Max number of particles.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Max number of particles." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleOnRemoval_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** When enabled, particle will scale down (shrink) when using being removed ( using both remove on sleep or remove on break ) - Enabled by default */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "When enabled, particle will scale down (shrink) when using being removed ( using both remove on sleep or remove on break ) - Enabled by default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOnMaxSleep_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** Remove particle from simulation and dissolve rendered geometry once sleep threshold has been exceeded. */" },
		{ "DisplayName", "Remove on Sleep" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Remove particle from simulation and dissolve rendered geometry once sleep threshold has been exceeded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumSleepTime_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** How long may the particle sleep before initiating removal (in seconds). */" },
		{ "DisplayName", "Sleep Min Max" },
		{ "EditCondition", "bRemoveOnMaxSleep" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "How long may the particle sleep before initiating removal (in seconds)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalDuration_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** How long does the removal process take (in seconds). */" },
		{ "DisplayName", "Removal Duration" },
		{ "EditCondition", "bRemoveOnMaxSleep" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "How long does the removal process take (in seconds)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSlowMovingAsSleeping_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** when on non-sleeping, slow moving pieces will be considered as sleeping, this helps removal of jittery but not really moving objects. */" },
		{ "DisplayName", "Slow-Moving as sleeping" },
		{ "EditCondition", "bRemoveOnMaxSleep" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "when on non-sleeping, slow moving pieces will be considered as sleeping, this helps removal of jittery but not really moving objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowMovingVelocityThreshold_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** When slow moving detection is on, this defines the linear velocity thresholds in cm/s to consider the object as sleeping . */" },
		{ "DisplayName", "Slow-Moving Velocity Threshold" },
		{ "EditCondition", "bRemoveOnMaxSleep && bSlowMovingAsSleeping" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "When slow moving detection is on, this defines the linear velocity thresholds in cm/s to consider the object as sleeping ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeSpecificData_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09* Size Specfic Data reflects the default geometry to bind to rigid bodies smaller\n\x09* than the max size volume. This can also be empty to reflect no collision geometry\n\x09* for the collection. \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "* Size Specfic Data reflects the default geometry to bind to rigid bodies smaller\n* than the max size volume. This can also be empty to reflect no collision geometry\n* for the collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableRemovePiecesOnFracture_MetaData[] = {
		{ "Comment", "/**\n\x09* Enable remove pieces on fracture\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use remove on break feature instead ( Fracture editor tools )." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Enable remove pieces on fracture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveOnFractureMaterials_MetaData[] = {
		{ "Comment", "/**\n\x09* Materials relating to remove on fracture\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use remove on break feature instead ( Fracture editor tools )." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Materials relating to remove on fracture" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this geometry collection */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Importing data and options used for this geometry collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataflowAsset_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//\n// Dataflow\n//\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Dataflow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataflowTerminal_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DisplayName", "DataFlow Overrides" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentGuid_MetaData[] = {
		{ "Comment", "/** Guid created on construction of this collection. It should be used to uniquely identify this collection */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Guid created on construction of this collection. It should be used to uniquely identify this collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateGuid_MetaData[] = {
		{ "Comment", "/** \n\x09 * Guid that can be invalidated on demand - essentially a 'version' that should be changed when a structural change is made to\n\x09 * the geometry collection. This signals to any caches that attempt to link to a geometry collection whether the collection\n\x09 * is still valid (hasn't structurally changed post-recording)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Guid that can be invalidated on demand - essentially a 'version' that should be changed when a structural change is made to\nthe geometry collection. This signals to any caches that attempt to link to a geometry collection whether the collection\nis still valid (hasn't structurally changed post-recording)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootIndex_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "// cached root index for faster queries\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "cached root index for faster queries" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreadthFirstTransformIndices_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "// cache transform indices in breadth-first order\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "cache transform indices in breadth-first order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoInstanceTransformRemapIndices_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "// cache transform remapping for instanced meshes indices\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "cache transform remapping for instanced meshes indices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneSelectedMaterialIndex_MetaData[] = {
		{ "Comment", "// #todo(dmp): rename to be consistent BoneSelectedMaterialID?\n// Legacy index of the bone selected material in the object's Materials array, or INDEX_NONE if it is not stored there.\n// Note for new objects the bone selected material should not be stored in the Materials array, so this should be INDEX_NONE\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "#todo(dmp): rename to be consistent BoneSelectedMaterialID?\nLegacy index of the bone selected material in the object's Materials array, or INDEX_NONE if it is not stored there.\nNote for new objects the bone selected material should not be stored in the Materials array, so this should be INDEX_NONE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneSelectedMaterial_MetaData[] = {
		{ "Comment", "// The material to use for rendering bone selections in the editor, or nullptr\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "The material to use for rendering bone selections in the editor, or nullptr" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "AssetUserData" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "AssetUserData" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableClustering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableClustering;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGroupIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageModel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageThreshold_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DamageThreshold;
	static void NewProp_bUseSizeSpecificDamageThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSizeSpecificDamageThreshold;
	static void NewProp_bUseMaterialDamageModifiers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialDamageModifiers;
	static void NewProp_PerClusterOnlyDamageThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PerClusterOnlyDamageThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamagePropagationData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterConnectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterConnectionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConnectionGraphBoundsFilteringMargin;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometrySource_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometrySource;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmbeddedGeometryExemplar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EmbeddedGeometryExemplar;
	static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
	static void NewProp_bStripOnCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripOnCook;
	static void NewProp_bStripRenderDataOnCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripRenderDataOnCook;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomRendererType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootProxyData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoInstanceMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoInstanceMeshes;
	static void NewProp_EnableNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableNanite;
	static void NewProp_bConvertVertexColorsToSRGB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertVertexColorsToSRGB;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImplicitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImplicitType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinClusterLevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevelSetResolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionObjectReductionPercentage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootProxy;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsMaterial;
	static void NewProp_bDensityFromPhysicsMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDensityFromPhysicsMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedDensityFromPhysicsMaterialInGCm3;
	static void NewProp_bMassAsDensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMassAsDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumMassClamp;
	static void NewProp_bImportCollisionFromSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportCollisionFromSource;
	static void NewProp_bOptimizeConvexes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeConvexes;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionParticlesFraction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumCollisionParticles;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bScaleOnRemoval_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleOnRemoval;
	static void NewProp_bRemoveOnMaxSleep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOnMaxSleep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumSleepTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalDuration;
	static void NewProp_bSlowMovingAsSleeping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlowMovingAsSleeping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowMovingVelocityThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SizeSpecificData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SizeSpecificData;
	static void NewProp_EnableRemovePiecesOnFracture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableRemovePiecesOnFracture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveOnFractureMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoveOnFractureMaterials;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataflowAsset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataflowTerminal;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Overrides_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Overrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Overrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RootIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BreadthFirstTransformIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BreadthFirstTransformIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoInstanceTransformRemapIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoInstanceTransformRemapIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneSelectedMaterialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoneSelectedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryCollection_SetConvertVertexColorsToSRGB, "SetConvertVertexColorsToSRGB" }, // 1736615720
		{ &Z_Construct_UFunction_UGeometryCollection_SetEnableNanite, "SetEnableNanite" }, // 3538666575
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->EnableClustering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering = { "EnableClustering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableClustering_MetaData), NewProp_EnableClustering_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex = { "ClusterGroupIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, ClusterGroupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterGroupIndex_MetaData), NewProp_ClusterGroupIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel = { "MaxClusterLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, MaxClusterLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClusterLevel_MetaData), NewProp_MaxClusterLevel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageModel = { "DamageModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, DamageModel), Z_Construct_UEnum_Chaos_EDamageModelTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageModel_MetaData), NewProp_DamageModel_MetaData) }; // 1555958943
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_Inner = { "DamageThreshold", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, DamageThreshold), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageThreshold_MetaData), NewProp_DamageThreshold_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bUseSizeSpecificDamageThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold = { "bUseSizeSpecificDamageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSizeSpecificDamageThreshold_MetaData), NewProp_bUseSizeSpecificDamageThreshold_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseMaterialDamageModifiers_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bUseMaterialDamageModifiers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseMaterialDamageModifiers = { "bUseMaterialDamageModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseMaterialDamageModifiers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaterialDamageModifiers_MetaData), NewProp_bUseMaterialDamageModifiers_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->PerClusterOnlyDamageThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold = { "PerClusterOnlyDamageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerClusterOnlyDamageThreshold_MetaData), NewProp_PerClusterOnlyDamageThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamagePropagationData = { "DamagePropagationData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, DamagePropagationData), Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePropagationData_MetaData), NewProp_DamagePropagationData_MetaData) }; // 2094228416
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType = { "ClusterConnectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, ClusterConnectionType), Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterConnectionType_MetaData), NewProp_ClusterConnectionType_MetaData) }; // 842739165
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ConnectionGraphBoundsFilteringMargin = { "ConnectionGraphBoundsFilteringMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, ConnectionGraphBoundsFilteringMargin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionGraphBoundsFilteringMargin_MetaData), NewProp_ConnectionGraphBoundsFilteringMargin_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_Inner = { "GeometrySource", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionSource, METADATA_PARAMS(0, nullptr) }; // 189315013
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource = { "GeometrySource", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, GeometrySource), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometrySource_MetaData), NewProp_GeometrySource_MetaData) }; // 189315013
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar_Inner = { "EmbeddedGeometryExemplar", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar, METADATA_PARAMS(0, nullptr) }; // 2108247393
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar = { "EmbeddedGeometryExemplar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, EmbeddedGeometryExemplar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmbeddedGeometryExemplar_MetaData), NewProp_EmbeddedGeometryExemplar_MetaData) }; // 2108247393
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bUseFullPrecisionUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFullPrecisionUVs_MetaData), NewProp_bUseFullPrecisionUVs_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bStripOnCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook = { "bStripOnCook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStripOnCook_MetaData), NewProp_bStripOnCook_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripRenderDataOnCook_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bStripRenderDataOnCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripRenderDataOnCook = { "bStripRenderDataOnCook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripRenderDataOnCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStripRenderDataOnCook_MetaData), NewProp_bStripRenderDataOnCook_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CustomRendererType = { "CustomRendererType", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, CustomRendererType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRendererType_MetaData), NewProp_CustomRendererType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootProxyData = { "RootProxyData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, RootProxyData), Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootProxyData_MetaData), NewProp_RootProxyData_MetaData) }; // 3833441113
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes_Inner = { "AutoInstanceMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh, METADATA_PARAMS(0, nullptr) }; // 472253674
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes = { "AutoInstanceMeshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, AutoInstanceMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoInstanceMeshes_MetaData), NewProp_AutoInstanceMeshes_MetaData) }; // 472253674
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->EnableNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite = { "EnableNanite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableNanite_MetaData), NewProp_EnableNanite_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bConvertVertexColorsToSRGB_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bConvertVertexColorsToSRGB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bConvertVertexColorsToSRGB = { "bConvertVertexColorsToSRGB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bConvertVertexColorsToSRGB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertVertexColorsToSRGB_MetaData), NewProp_bConvertVertexColorsToSRGB_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, CollisionType_DEPRECATED), Z_Construct_UEnum_Chaos_ECollisionTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 2902345281
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType = { "ImplicitType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, ImplicitType_DEPRECATED), Z_Construct_UEnum_Chaos_EImplicitTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImplicitType_MetaData), NewProp_ImplicitType_MetaData) }; // 1153760466
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, MinLevelSetResolution_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLevelSetResolution_MetaData), NewProp_MinLevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, MaxLevelSetResolution_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevelSetResolution_MetaData), NewProp_MaxLevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution = { "MinClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, MinClusterLevelSetResolution_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinClusterLevelSetResolution_MetaData), NewProp_MinClusterLevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution = { "MaxClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, MaxClusterLevelSetResolution_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClusterLevelSetResolution_MetaData), NewProp_MaxClusterLevelSetResolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage = { "CollisionObjectReductionPercentage", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, CollisionObjectReductionPercentage_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionObjectReductionPercentage_MetaData), NewProp_CollisionObjectReductionPercentage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootProxy = { "RootProxy", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, RootProxy_DEPRECATED), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootProxy_MetaData), NewProp_RootProxy_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PhysicsMaterial = { "PhysicsMaterial", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, PhysicsMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsMaterial_MetaData), NewProp_PhysicsMaterial_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bDensityFromPhysicsMaterial_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bDensityFromPhysicsMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bDensityFromPhysicsMaterial = { "bDensityFromPhysicsMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bDensityFromPhysicsMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDensityFromPhysicsMaterial_MetaData), NewProp_bDensityFromPhysicsMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CachedDensityFromPhysicsMaterialInGCm3 = { "CachedDensityFromPhysicsMaterialInGCm3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, CachedDensityFromPhysicsMaterialInGCm3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDensityFromPhysicsMaterialInGCm3_MetaData), NewProp_CachedDensityFromPhysicsMaterialInGCm3_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bMassAsDensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity = { "bMassAsDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMassAsDensity_MetaData), NewProp_bMassAsDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp = { "MinimumMassClamp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, MinimumMassClamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumMassClamp_MetaData), NewProp_MinimumMassClamp_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bImportCollisionFromSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource = { "bImportCollisionFromSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportCollisionFromSource_MetaData), NewProp_bImportCollisionFromSource_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bOptimizeConvexes_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bOptimizeConvexes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bOptimizeConvexes = { "bOptimizeConvexes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bOptimizeConvexes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeConvexes_MetaData), NewProp_bOptimizeConvexes_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction = { "CollisionParticlesFraction", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, CollisionParticlesFraction_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionParticlesFraction_MetaData), NewProp_CollisionParticlesFraction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles = { "MaximumCollisionParticles", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, MaximumCollisionParticles_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumCollisionParticles_MetaData), NewProp_MaximumCollisionParticles_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bScaleOnRemoval_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bScaleOnRemoval = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bScaleOnRemoval = { "bScaleOnRemoval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bScaleOnRemoval_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleOnRemoval_MetaData), NewProp_bScaleOnRemoval_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bRemoveOnMaxSleep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep = { "bRemoveOnMaxSleep", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveOnMaxSleep_MetaData), NewProp_bRemoveOnMaxSleep_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumSleepTime = { "MaximumSleepTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, MaximumSleepTime), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumSleepTime_MetaData), NewProp_MaximumSleepTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemovalDuration = { "RemovalDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, RemovalDuration), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalDuration_MetaData), NewProp_RemovalDuration_MetaData) };
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->bSlowMovingAsSleeping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping = { "bSlowMovingAsSleeping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSlowMovingAsSleeping_MetaData), NewProp_bSlowMovingAsSleeping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SlowMovingVelocityThreshold = { "SlowMovingVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, SlowMovingVelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowMovingVelocityThreshold_MetaData), NewProp_SlowMovingVelocityThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_Inner = { "SizeSpecificData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData, METADATA_PARAMS(0, nullptr) }; // 3100450304
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData = { "SizeSpecificData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, SizeSpecificData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeSpecificData_MetaData), NewProp_SizeSpecificData_MetaData) }; // 3100450304
void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_SetBit(void* Obj)
{
	((UGeometryCollection*)Obj)->EnableRemovePiecesOnFracture_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture = { "EnableRemovePiecesOnFracture", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableRemovePiecesOnFracture_MetaData), NewProp_EnableRemovePiecesOnFracture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_Inner = { "RemoveOnFractureMaterials", nullptr, (EPropertyFlags)0x0104000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials = { "RemoveOnFractureMaterials", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, RemoveOnFractureMaterials_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveOnFractureMaterials_MetaData), NewProp_RemoveOnFractureMaterials_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x011600080008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x01160408000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData), NewProp_ThumbnailInfo_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowAsset = { "DataflowAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, DataflowAsset), Z_Construct_UClass_UDataflow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataflowAsset_MetaData), NewProp_DataflowAsset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowTerminal = { "DataflowTerminal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, DataflowTerminal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataflowTerminal_MetaData), NewProp_DataflowTerminal_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Overrides_ValueProp = { "Overrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Overrides_Key_KeyProp = { "Overrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, Overrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overrides_MetaData), NewProp_Overrides_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid = { "PersistentGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, PersistentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentGuid_MetaData), NewProp_PersistentGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid = { "StateGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, StateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateGuid_MetaData), NewProp_StateGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootIndex = { "RootIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, RootIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootIndex_MetaData), NewProp_RootIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BreadthFirstTransformIndices_Inner = { "BreadthFirstTransformIndices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BreadthFirstTransformIndices = { "BreadthFirstTransformIndices", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, BreadthFirstTransformIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreadthFirstTransformIndices_MetaData), NewProp_BreadthFirstTransformIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceTransformRemapIndices_Inner = { "AutoInstanceTransformRemapIndices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceTransformRemapIndices = { "AutoInstanceTransformRemapIndices", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, AutoInstanceTransformRemapIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoInstanceTransformRemapIndices_MetaData), NewProp_AutoInstanceTransformRemapIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex = { "BoneSelectedMaterialIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, BoneSelectedMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneSelectedMaterialIndex_MetaData), NewProp_BoneSelectedMaterialIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterial = { "BoneSelectedMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, BoneSelectedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneSelectedMaterial_MetaData), NewProp_BoneSelectedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0144048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollection, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseMaterialDamageModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamagePropagationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ConnectionGraphBoundsFilteringMargin,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripRenderDataOnCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CustomRendererType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootProxyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bConvertVertexColorsToSRGB,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootProxy,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PhysicsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bDensityFromPhysicsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CachedDensityFromPhysicsMaterialInGCm3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bOptimizeConvexes,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bScaleOnRemoval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumSleepTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemovalDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SlowMovingVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowTerminal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Overrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Overrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Overrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BreadthFirstTransformIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BreadthFirstTransformIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceTransformRemapIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceTransformRemapIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetUserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeometryCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGeometryCollection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UGeometryCollection, IInterface_AssetUserData), false },  // 505316468
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollection_Statics::ClassParams = {
	&UGeometryCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGeometryCollection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCollection()
{
	if (!Z_Registration_Info_UClass_UGeometryCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollection.OuterSingleton, Z_Construct_UClass_UGeometryCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCollection.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollection>()
{
	return UGeometryCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollection);
UGeometryCollection::~UGeometryCollection() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCollection)
// End Class UGeometryCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeometryCollectionSource::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewStructOps, TEXT("GeometryCollectionSource"), &Z_Registration_Info_UScriptStruct_GeometryCollectionSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionSource), 189315013U) },
		{ FGeometryCollectionAutoInstanceMesh::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewStructOps, TEXT("GeometryCollectionAutoInstanceMesh"), &Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionAutoInstanceMesh), 472253674U) },
		{ FGeometryCollectionEmbeddedExemplar::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewStructOps, TEXT("GeometryCollectionEmbeddedExemplar"), &Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionEmbeddedExemplar), 2108247393U) },
		{ FGeometryCollectionLevelSetData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewStructOps, TEXT("GeometryCollectionLevelSetData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionLevelSetData), 493327649U) },
		{ FGeometryCollectionCollisionParticleData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewStructOps, TEXT("GeometryCollectionCollisionParticleData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionCollisionParticleData), 781805023U) },
		{ FGeometryCollectionCollisionTypeData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewStructOps, TEXT("GeometryCollectionCollisionTypeData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionCollisionTypeData), 1049918610U) },
		{ FGeometryCollectionSizeSpecificData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewStructOps, TEXT("GeometryCollectionSizeSpecificData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionSizeSpecificData), 3100450304U) },
		{ FGeometryCollectionProxyMeshData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics::NewStructOps, TEXT("GeometryCollectionProxyMeshData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionProxyMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionProxyMeshData), 3833441113U) },
		{ FGeometryCollectionRenderResourceSizeInfo::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics::NewStructOps, TEXT("GeometryCollectionRenderResourceSizeInfo"), &Z_Registration_Info_UScriptStruct_GeometryCollectionRenderResourceSizeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionRenderResourceSizeInfo), 981094149U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollection, UGeometryCollection::StaticClass, TEXT("UGeometryCollection"), &Z_Registration_Info_UClass_UGeometryCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollection), 3015425267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_1331795848(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
