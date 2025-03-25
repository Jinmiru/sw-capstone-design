// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SceneCaptureComponentCube.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SceneCaptureComponentCube_generated_h
#error "SceneCaptureComponentCube.generated.h already included, missing '#pragma once' in SceneCaptureComponentCube.h"
#endif
#define ENGINE_SceneCaptureComponentCube_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCaptureScene);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponentCube(); \
	friend struct Z_Construct_UClass_USceneCaptureComponentCube_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponentCube, USceneCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USceneCaptureComponentCube)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USceneCaptureComponentCube(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponentCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USceneCaptureComponentCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponentCube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USceneCaptureComponentCube(USceneCaptureComponentCube&&); \
	USceneCaptureComponentCube(const USceneCaptureComponentCube&); \
public: \
	ENGINE_API virtual ~USceneCaptureComponentCube();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USceneCaptureComponentCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
