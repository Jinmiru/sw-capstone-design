// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
#ifdef ENGINE_MeshComponent_generated_h
#error "MeshComponent.generated.h already included, missing '#pragma once' in MeshComponent.h"
#endif
#define ENGINE_MeshComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVectorParameterValueOnMaterials); \
	DECLARE_FUNCTION(execSetScalarParameterValueOnMaterials); \
	DECLARE_FUNCTION(execPrestreamMeshLODs); \
	DECLARE_FUNCTION(execPrestreamTextures); \
	DECLARE_FUNCTION(execSetOverlayMaterialMaxDrawDistance); \
	DECLARE_FUNCTION(execGetOverlayMaterialMaxDrawDistance); \
	DECLARE_FUNCTION(execSetOverlayMaterial); \
	DECLARE_FUNCTION(execGetOverlayMaterial); \
	DECLARE_FUNCTION(execGetMaterials);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMeshComponent(); \
	friend struct Z_Construct_UClass_UMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMeshComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshComponent(UMeshComponent&&); \
	UMeshComponent(const UMeshComponent&); \
public: \
	ENGINE_API virtual ~UMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
