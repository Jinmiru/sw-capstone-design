// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MeshDeformer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshDeformer_generated_h
#error "MeshDeformer.generated.h already included, missing '#pragma once' in MeshDeformer.h"
#endif
#define ENGINE_MeshDeformer_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshDeformer(); \
	friend struct Z_Construct_UClass_UMeshDeformer_Statics; \
public: \
	DECLARE_CLASS(UMeshDeformer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMeshDeformer)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshDeformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshDeformer(UMeshDeformer&&); \
	UMeshDeformer(const UMeshDeformer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshDeformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDeformer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshDeformer) \
	ENGINE_API virtual ~UMeshDeformer();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMeshDeformer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
