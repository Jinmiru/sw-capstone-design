// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeGizmoRenderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeGizmoRenderComponent_generated_h
#error "LandscapeGizmoRenderComponent.generated.h already included, missing '#pragma once' in LandscapeGizmoRenderComponent.h"
#endif
#define LANDSCAPE_LandscapeGizmoRenderComponent_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeGizmoRenderComponent(); \
	friend struct Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeGizmoRenderComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeGizmoRenderComponent)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeGizmoRenderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeGizmoRenderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeGizmoRenderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeGizmoRenderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeGizmoRenderComponent(ULandscapeGizmoRenderComponent&&); \
	ULandscapeGizmoRenderComponent(const ULandscapeGizmoRenderComponent&); \
public: \
	NO_API virtual ~ULandscapeGizmoRenderComponent();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h_16_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeGizmoRenderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
