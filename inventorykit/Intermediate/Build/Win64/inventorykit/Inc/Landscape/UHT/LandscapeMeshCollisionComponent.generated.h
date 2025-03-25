// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeMeshCollisionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeMeshCollisionComponent_generated_h
#error "LandscapeMeshCollisionComponent.generated.h already included, missing '#pragma once' in LandscapeMeshCollisionComponent.h"
#endif
#define LANDSCAPE_LandscapeMeshCollisionComponent_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeMeshCollisionComponent, NO_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeMeshCollisionComponent(); \
	friend struct Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeMeshCollisionComponent, ULandscapeHeightfieldCollisionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeMeshCollisionComponent) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_29_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeMeshCollisionComponent(ULandscapeMeshCollisionComponent&&); \
	ULandscapeMeshCollisionComponent(const ULandscapeMeshCollisionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeMeshCollisionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeMeshCollisionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULandscapeMeshCollisionComponent)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_26_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeMeshCollisionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
