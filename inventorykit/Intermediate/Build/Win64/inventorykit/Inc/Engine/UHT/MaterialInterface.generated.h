// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterial;
class UMaterialFunctionInterface;
class UMaterialInterface;
class UPhysicalMaterial;
class UPhysicalMaterialMask;
struct FMaterialParameterInfo;
#ifdef ENGINE_MaterialInterface_generated_h
#error "MaterialInterface.generated.h already included, missing '#pragma once' in MaterialInterface.h"
#endif
#define ENGINE_MaterialInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLightmassMaterialInterfaceSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialTextureInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_240_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInterfaceEditorOnlyData, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInterfaceEditorOnlyData(); \
	friend struct Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_Statics; \
public: \
	DECLARE_CLASS(UMaterialInterfaceEditorOnlyData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialInterfaceEditorOnlyData) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_240_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_240_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialInterfaceEditorOnlyData(UMaterialInterfaceEditorOnlyData&&); \
	UMaterialInterfaceEditorOnlyData(const UMaterialInterfaceEditorOnlyData&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInterfaceEditorOnlyData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialInterfaceEditorOnlyData)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_237_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_240_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_240_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInterfaceEditorOnlyData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_261_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetForceMipLevelsToBeResident); \
	DECLARE_FUNCTION(execGetBlendMode); \
	DECLARE_FUNCTION(execGetParameterInfo); \
	DECLARE_FUNCTION(execGetNaniteOverideMaterial); \
	DECLARE_FUNCTION(execGetPhysicalMaterialFromMap); \
	DECLARE_FUNCTION(execGetPhysicalMaterialMask); \
	DECLARE_FUNCTION(execGetPhysicalMaterial); \
	DECLARE_FUNCTION(execGetBaseMaterial);


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_261_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInterface, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_261_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInterface(); \
	friend struct Z_Construct_UClass_UMaterialInterface_Statics; \
public: \
	DECLARE_CLASS(UMaterialInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInterface) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_261_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_261_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInterface(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInterface) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialInterface(UMaterialInterface&&); \
	UMaterialInterface(const UMaterialInterface&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_258_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_261_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_261_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_261_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_261_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h


#define FOREACH_ENUM_EMATERIALUSAGE(op) \
	op(MATUSAGE_SkeletalMesh) \
	op(MATUSAGE_ParticleSprites) \
	op(MATUSAGE_BeamTrails) \
	op(MATUSAGE_MeshParticles) \
	op(MATUSAGE_StaticLighting) \
	op(MATUSAGE_MorphTargets) \
	op(MATUSAGE_SplineMesh) \
	op(MATUSAGE_InstancedStaticMeshes) \
	op(MATUSAGE_GeometryCollections) \
	op(MATUSAGE_Clothing) \
	op(MATUSAGE_NiagaraSprites) \
	op(MATUSAGE_NiagaraRibbons) \
	op(MATUSAGE_NiagaraMeshParticles) \
	op(MATUSAGE_GeometryCache) \
	op(MATUSAGE_Water) \
	op(MATUSAGE_HairStrands) \
	op(MATUSAGE_LidarPointCloud) \
	op(MATUSAGE_VirtualHeightfieldMesh) \
	op(MATUSAGE_Nanite) \
	op(MATUSAGE_VolumetricCloud) \
	op(MATUSAGE_HeterogeneousVolumes) 

enum EMaterialUsage : int;
template<> ENGINE_API UEnum* StaticEnum<EMaterialUsage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
