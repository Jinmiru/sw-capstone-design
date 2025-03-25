// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UDynamicMeshComponent;
class UDynamicMeshPool;
#ifdef GEOMETRYFRAMEWORK_DynamicMeshActor_generated_h
#error "DynamicMeshActor.generated.h already included, missing '#pragma once' in DynamicMeshActor.h"
#endif
#define GEOMETRYFRAMEWORK_DynamicMeshActor_generated_h

#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFreeAllComputeMeshes); \
	DECLARE_FUNCTION(execReleaseAllComputeMeshes); \
	DECLARE_FUNCTION(execReleaseComputeMesh); \
	DECLARE_FUNCTION(execAllocateComputeMesh); \
	DECLARE_FUNCTION(execGetComputeMeshPool); \
	DECLARE_FUNCTION(execGetDynamicMeshComponent);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesADynamicMeshActor(); \
	friend struct Z_Construct_UClass_ADynamicMeshActor_Statics; \
public: \
	DECLARE_CLASS(ADynamicMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryFramework"), GEOMETRYFRAMEWORK_API) \
	DECLARE_SERIALIZER(ADynamicMeshActor)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API ADynamicMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADynamicMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, ADynamicMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADynamicMeshActor(ADynamicMeshActor&&); \
	ADynamicMeshActor(const ADynamicMeshActor&); \
public: \
	GEOMETRYFRAMEWORK_API virtual ~ADynamicMeshActor();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_INCLASS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<class ADynamicMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
