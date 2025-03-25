// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySetup() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
PHYSICSCORE_API UClass* Z_Construct_UClass_UBodySetupCore();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UBodySetup
void UBodySetup::StaticRegisterNativesUBodySetup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodySetup);
UClass* Z_Construct_UClass_UBodySetup_NoRegister()
{
	return UBodySetup::StaticClass();
}
struct Z_Construct_UClass_UBodySetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * BodySetup contains all collision information that is associated with a single asset.\n * A single BodySetup instance is shared among many BodyInstances so that geometry data is not duplicated.\n * Assets typically implement a GetBodySetup function that is used during physics state creation.\n * \n * @see GetBodySetup\n * @see FBodyInstance\n */" },
		{ "IncludePath", "PhysicsEngine/BodySetup.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "BodySetup contains all collision information that is associated with a single asset.\nA single BodySetup instance is shared among many BodyInstances so that geometry data is not duplicated.\nAssets typically implement a GetBodySetup function that is used during physics state creation.\n\n@see GetBodySetup\n@see FBodyInstance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggGeom_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** Simplified collision representation of this  */" },
		{ "DisplayName", "Primitives" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Simplified collision representation of this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysFullAnimWeight_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09If true (and bEnableFullAnimWeightBodies in SkelMeshComp is true), the physics of this bone will always be blended into the skeletal mesh, regardless of what PhysicsWeight of the SkelMeshComp is. \n\x09 *\x09This is useful for bones that should always be physics, even when blending physics in and out for hit reactions (eg cloth or pony-tails).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true (and bEnableFullAnimWeightBodies in SkelMeshComp is true), the physics of this bone will always be blended into the skeletal mesh, regardless of what PhysicsWeight of the SkelMeshComp is.\nThis is useful for bones that should always be physics, even when blending physics in and out for hit reactions (eg cloth or pony-tails)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderForBounds_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** \n\x09 *\x09Should this BodySetup be considered for the bounding box of the PhysicsAsset (and hence SkeletalMeshComponent).\n\x09 *\x09There is a speed improvement from having less BodySetups processed each frame when updating the bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Should this BodySetup be considered for the bounding box of the PhysicsAsset (and hence SkeletalMeshComponent).\nThere is a speed improvement from having less BodySetups processed each frame when updating the bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshCollideAll_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09If true, the physics of this mesh (only affects static meshes) will always contain ALL elements from the mesh - not just the ones enabled for collision. \n\x09 *\x09This is useful for forcing high detail collisions using the entire render mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true, the physics of this mesh (only affects static meshes) will always contain ALL elements from the mesh - not just the ones enabled for collision.\nThis is useful for forcing high detail collisions using the entire render mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleSidedGeometry_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09*\x09If true, the physics triangle mesh will use double sided faces when doing scene queries.\n\x09*\x09This is useful for planes and single sided meshes that need traces to work on both sides.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces when doing scene queries.\nThis is useful for planes and single sided meshes that need traces to work on both sides." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNonMirroredCollision_MetaData[] = {
		{ "Comment", "/**\x09Should we generate data necessary to support collision on normal (non-mirrored) versions of this body. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Should we generate data necessary to support collision on normal (non-mirrored) versions of this body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSharedCookedData_MetaData[] = {
		{ "Comment", "/** Whether the cooked data is shared by multiple body setups. This is needed for per poly collision case where we don't want to duplicate cooked data, but still need multiple body setups for in place geometry changes */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Whether the cooked data is shared by multiple body setups. This is needed for per poly collision case where we don't want to duplicate cooked data, but still need multiple body setups for in place geometry changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateMirroredCollision_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09Should we generate data necessary to support collision on mirrored versions of this mesh. \n\x09 *\x09This halves the collision data size for this mesh, but disables collision on mirrored instances of the body.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Should we generate data necessary to support collision on mirrored versions of this mesh.\nThis halves the collision data size for this mesh, but disables collision on mirrored instances of the body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportUVsAndFaceRemap_MetaData[] = {
		{ "Comment", "/** \n\x09 * If true, the physics triangle mesh will store UVs and the face remap table. This is needed\n\x09 * to support physical material masks in scene queries. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true, the physics triangle mesh will store UVs and the face remap table. This is needed\nto support physical material masks in scene queries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeverNeedsCookedCollisionData_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * TODO Chaos this is to opt out of CreatePhysicsMeshes for certain meshes\n\x09 * Better long term mesh is to not call CreatePhysicsMeshes until it is known there is a mesh instance that needs it.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "TODO Chaos this is to opt out of CreatePhysicsMeshes for certain meshes\nBetter long term mesh is to not call CreatePhysicsMeshes until it is known there is a mesh instance that needs it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Physical material to use for simple collision on this body. Encodes information about density, friction etc. */" },
		{ "DisplayName", "Simple Collision Physical Material" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Physical material to use for simple collision on this body. Encodes information about density, friction etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Custom walkable slope setting for this body. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Custom walkable slope setting for this body." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstance_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance */" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildScale3D_MetaData[] = {
		{ "Comment", "/** Build scale for this body setup (static mesh settings define this value) */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Build scale for this body setup (static mesh settings define this value)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggGeom;
	static void NewProp_bAlwaysFullAnimWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysFullAnimWeight;
	static void NewProp_bConsiderForBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderForBounds;
	static void NewProp_bMeshCollideAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshCollideAll;
	static void NewProp_bDoubleSidedGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleSidedGeometry;
	static void NewProp_bGenerateNonMirroredCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNonMirroredCollision;
	static void NewProp_bSharedCookedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedCookedData;
	static void NewProp_bGenerateMirroredCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateMirroredCollision;
	static void NewProp_bSupportUVsAndFaceRemap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportUVsAndFaceRemap;
	static void NewProp_bNeverNeedsCookedCollisionData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverNeedsCookedCollisionData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildScale;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildScale3D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodySetup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom = { "AggGeom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySetup, AggGeom), Z_Construct_UScriptStruct_FKAggregateGeom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggGeom_MetaData), NewProp_AggGeom_MetaData) }; // 1026465065
void Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_SetBit(void* Obj)
{
	((UBodySetup*)Obj)->bAlwaysFullAnimWeight_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight = { "bAlwaysFullAnimWeight", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysFullAnimWeight_MetaData), NewProp_bAlwaysFullAnimWeight_MetaData) };
void Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_SetBit(void* Obj)
{
	((UBodySetup*)Obj)->bConsiderForBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds = { "bConsiderForBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsiderForBounds_MetaData), NewProp_bConsiderForBounds_MetaData) };
void Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_SetBit(void* Obj)
{
	((UBodySetup*)Obj)->bMeshCollideAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll = { "bMeshCollideAll", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshCollideAll_MetaData), NewProp_bMeshCollideAll_MetaData) };
void Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_SetBit(void* Obj)
{
	((UBodySetup*)Obj)->bDoubleSidedGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry = { "bDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoubleSidedGeometry_MetaData), NewProp_bDoubleSidedGeometry_MetaData) };
void Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_SetBit(void* Obj)
{
	((UBodySetup*)Obj)->bGenerateNonMirroredCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision = { "bGenerateNonMirroredCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateNonMirroredCollision_MetaData), NewProp_bGenerateNonMirroredCollision_MetaData) };
void Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_SetBit(void* Obj)
{
	((UBodySetup*)Obj)->bSharedCookedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData = { "bSharedCookedData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSharedCookedData_MetaData), NewProp_bSharedCookedData_MetaData) };
void Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_SetBit(void* Obj)
{
	((UBodySetup*)Obj)->bGenerateMirroredCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision = { "bGenerateMirroredCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateMirroredCollision_MetaData), NewProp_bGenerateMirroredCollision_MetaData) };
void Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap_SetBit(void* Obj)
{
	((UBodySetup*)Obj)->bSupportUVsAndFaceRemap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap = { "bSupportUVsAndFaceRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportUVsAndFaceRemap_MetaData), NewProp_bSupportUVsAndFaceRemap_MetaData) };
void Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData_SetBit(void* Obj)
{
	((UBodySetup*)Obj)->bNeverNeedsCookedCollisionData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData = { "bNeverNeedsCookedCollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeverNeedsCookedCollisionData_MetaData), NewProp_bNeverNeedsCookedCollisionData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySetup, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMaterial_MetaData), NewProp_PhysMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride = { "WalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySetup, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkableSlopeOverride_MetaData), NewProp_WalkableSlopeOverride_MetaData) }; // 4238734711
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale = { "BuildScale", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySetup, BuildScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildScale_MetaData), NewProp_BuildScale_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance = { "DefaultInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySetup, DefaultInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInstance_MetaData), NewProp_DefaultInstance_MetaData) }; // 3706165537
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D = { "BuildScale3D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySetup, BuildScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildScale3D_MetaData), NewProp_BuildScale3D_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodySetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBodySetup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBodySetupCore,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodySetup_Statics::ClassParams = {
	&UBodySetup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBodySetup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::PropPointers),
	0,
	0x000820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodySetup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodySetup()
{
	if (!Z_Registration_Info_UClass_UBodySetup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodySetup.OuterSingleton, Z_Construct_UClass_UBodySetup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodySetup.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBodySetup>()
{
	return UBodySetup::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBodySetup)
// End Class UBodySetup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBodySetup, UBodySetup::StaticClass, TEXT("UBodySetup"), &Z_Registration_Info_UClass_UBodySetup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodySetup), 4167090347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_3669983034(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
