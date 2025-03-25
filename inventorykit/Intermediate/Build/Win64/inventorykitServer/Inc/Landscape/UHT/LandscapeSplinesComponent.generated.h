// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSplinesComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineMeshComponent;
#ifdef LANDSCAPE_LandscapeSplinesComponent_generated_h
#error "LandscapeSplinesComponent.generated.h already included, missing '#pragma once' in LandscapeSplinesComponent.h"
#endif
#define LANDSCAPE_LandscapeSplinesComponent_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FForeignControlPointData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FForeignControlPointData>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FForeignSplineSegmentData>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FForeignWorldSplineData>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_104_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetSplineMeshComponents);


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_104_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplinesComponent, LANDSCAPE_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_104_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSplinesComponent(); \
	friend struct Z_Construct_UClass_ULandscapeSplinesComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSplinesComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplinesComponent) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_104_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplinesComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplinesComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplinesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplinesComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeSplinesComponent(ULandscapeSplinesComponent&&); \
	ULandscapeSplinesComponent(const ULandscapeSplinesComponent&); \
public: \
	LANDSCAPE_API virtual ~ULandscapeSplinesComponent();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_101_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_104_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_104_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeSplinesComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
