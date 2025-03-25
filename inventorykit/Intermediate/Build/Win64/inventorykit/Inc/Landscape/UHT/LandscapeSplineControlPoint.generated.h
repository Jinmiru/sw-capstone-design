// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSplineControlPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeSplineControlPoint_generated_h
#error "LandscapeSplineControlPoint.generated.h already included, missing '#pragma once' in LandscapeSplineControlPoint.h"
#endif
#define LANDSCAPE_LandscapeSplineControlPoint_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeSplineConnection>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplineControlPoint, LANDSCAPE_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSplineControlPoint(); \
	friend struct Z_Construct_UClass_ULandscapeSplineControlPoint_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSplineControlPoint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplineControlPoint) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineControlPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineControlPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineControlPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineControlPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeSplineControlPoint(ULandscapeSplineControlPoint&&); \
	ULandscapeSplineControlPoint(const ULandscapeSplineControlPoint&); \
public: \
	LANDSCAPE_API virtual ~ULandscapeSplineControlPoint();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_49_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeSplineControlPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
