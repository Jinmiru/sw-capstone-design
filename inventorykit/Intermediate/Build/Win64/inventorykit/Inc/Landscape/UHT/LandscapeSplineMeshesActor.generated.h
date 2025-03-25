// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSplineMeshesActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeSplineMeshesActor_generated_h
#error "LandscapeSplineMeshesActor.generated.h already included, missing '#pragma once' in LandscapeSplineMeshesActor.h"
#endif
#define LANDSCAPE_LandscapeSplineMeshesActor_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeSplineMeshesActor(); \
	friend struct Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics; \
public: \
	DECLARE_CLASS(ALandscapeSplineMeshesActor, APartitionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeSplineMeshesActor)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeSplineMeshesActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeSplineMeshesActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeSplineMeshesActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeSplineMeshesActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandscapeSplineMeshesActor(ALandscapeSplineMeshesActor&&); \
	ALandscapeSplineMeshesActor(const ALandscapeSplineMeshesActor&); \
public: \
	LANDSCAPE_API virtual ~ALandscapeSplineMeshesActor();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h_14_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h_17_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeSplineMeshesActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
