// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PlaneReflectionCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlaneReflectionCapture_generated_h
#error "PlaneReflectionCapture.generated.h already included, missing '#pragma once' in PlaneReflectionCapture.h"
#endif
#define ENGINE_PlaneReflectionCapture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlaneReflectionCapture(); \
	friend struct Z_Construct_UClass_APlaneReflectionCapture_Statics; \
public: \
	DECLARE_CLASS(APlaneReflectionCapture, AReflectionCapture, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APlaneReflectionCapture)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APlaneReflectionCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlaneReflectionCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlaneReflectionCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlaneReflectionCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlaneReflectionCapture(APlaneReflectionCapture&&); \
	APlaneReflectionCapture(const APlaneReflectionCapture&); \
public: \
	ENGINE_API virtual ~APlaneReflectionCapture();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlaneReflectionCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
