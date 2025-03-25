// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionDebugDrawActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionDebugDrawActor_generated_h
#error "GeometryCollectionDebugDrawActor.generated.h already included, missing '#pragma once' in GeometryCollectionDebugDrawActor.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionDebugDrawActor_generated_h

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionDebugDrawWarningMessage>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionDebugDrawActorSelectedRigidBody>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_88_INCLASS \
private: \
	static void StaticRegisterNativesAGeometryCollectionDebugDrawActor(); \
	friend struct Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics; \
public: \
	DECLARE_CLASS(AGeometryCollectionDebugDrawActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), GEOMETRYCOLLECTIONENGINE_API) \
	DECLARE_SERIALIZER(AGeometryCollectionDebugDrawActor)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONENGINE_API AGeometryCollectionDebugDrawActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCollectionDebugDrawActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONENGINE_API, AGeometryCollectionDebugDrawActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCollectionDebugDrawActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGeometryCollectionDebugDrawActor(AGeometryCollectionDebugDrawActor&&); \
	AGeometryCollectionDebugDrawActor(const AGeometryCollectionDebugDrawActor&); \
public: \
	GEOMETRYCOLLECTIONENGINE_API virtual ~AGeometryCollectionDebugDrawActor();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_85_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_88_INCLASS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class AGeometryCollectionDebugDrawActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h


#define FOREACH_ENUM_EGEOMETRYCOLLECTIONDEBUGDRAWACTORHIDEGEOMETRY(op) \
	op(EGeometryCollectionDebugDrawActorHideGeometry::HideNone) \
	op(EGeometryCollectionDebugDrawActorHideGeometry::HideWithCollision) \
	op(EGeometryCollectionDebugDrawActorHideGeometry::HideSelected) \
	op(EGeometryCollectionDebugDrawActorHideGeometry::HideWholeCollection) \
	op(EGeometryCollectionDebugDrawActorHideGeometry::HideAll) 

enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8;
template<> struct TIsUEnumClass<EGeometryCollectionDebugDrawActorHideGeometry> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EGeometryCollectionDebugDrawActorHideGeometry>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
