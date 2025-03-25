// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PlaneReflectionCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlaneReflectionCaptureComponent_generated_h
#error "PlaneReflectionCaptureComponent.generated.h already included, missing '#pragma once' in PlaneReflectionCaptureComponent.h"
#endif
#define ENGINE_PlaneReflectionCaptureComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlaneReflectionCaptureComponent(); \
	friend struct Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UPlaneReflectionCaptureComponent, UReflectionCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlaneReflectionCaptureComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlaneReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlaneReflectionCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlaneReflectionCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlaneReflectionCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlaneReflectionCaptureComponent(UPlaneReflectionCaptureComponent&&); \
	UPlaneReflectionCaptureComponent(const UPlaneReflectionCaptureComponent&); \
public: \
	ENGINE_API virtual ~UPlaneReflectionCaptureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlaneReflectionCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
