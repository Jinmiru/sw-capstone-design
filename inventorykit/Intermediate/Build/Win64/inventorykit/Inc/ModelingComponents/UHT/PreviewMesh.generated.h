// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PreviewMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTS_PreviewMesh_generated_h
#error "PreviewMesh.generated.h already included, missing '#pragma once' in PreviewMesh.h"
#endif
#define MODELINGCOMPONENTS_PreviewMesh_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPreviewMeshActor(); \
	friend struct Z_Construct_UClass_APreviewMeshActor_Statics; \
public: \
	DECLARE_CLASS(APreviewMeshActor, AInternalToolFrameworkActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(APreviewMeshActor)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APreviewMeshActor(APreviewMeshActor&&); \
	APreviewMeshActor(const APreviewMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APreviewMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APreviewMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APreviewMeshActor) \
	NO_API virtual ~APreviewMeshActor();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class APreviewMeshActor>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPreviewMesh(); \
	friend struct Z_Construct_UClass_UPreviewMesh_Statics; \
public: \
	DECLARE_CLASS(UPreviewMesh, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UPreviewMesh) \
	virtual UObject* _getUObject() const override { return const_cast<UPreviewMesh*>(this); }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPreviewMesh(UPreviewMesh&&); \
	UPreviewMesh(const UPreviewMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPreviewMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPreviewMesh)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UPreviewMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
