// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionObject_generated_h
#error "GeometryCollectionObject.generated.h already included, missing '#pragma once' in GeometryCollectionObject.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionObject_generated_h

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionSource>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionAutoInstanceMesh>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionEmbeddedExemplar>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionLevelSetData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionCollisionParticleData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionCollisionTypeData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionSizeSpecificData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_333_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionProxyMeshData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_342_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionRenderResourceSizeInfo_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionRenderResourceSizeInfo>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_362_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetConvertVertexColorsToSRGB); \
	DECLARE_FUNCTION(execSetEnableNanite);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_362_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCollection, GEOMETRYCOLLECTIONENGINE_API)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_362_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCollection(); \
	friend struct Z_Construct_UClass_UGeometryCollection_Statics; \
public: \
	DECLARE_CLASS(UGeometryCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), GEOMETRYCOLLECTIONENGINE_API) \
	DECLARE_SERIALIZER(UGeometryCollection) \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_362_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCollection*>(this); }


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_362_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONENGINE_API, UGeometryCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryCollection(UGeometryCollection&&); \
	UGeometryCollection(const UGeometryCollection&); \
public: \
	GEOMETRYCOLLECTIONENGINE_API virtual ~UGeometryCollection();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_359_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_362_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_362_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_362_INCLASS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_362_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class UGeometryCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
