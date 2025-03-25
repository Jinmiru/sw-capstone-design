// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlPointMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_ControlPointMeshComponent_generated_h
#error "ControlPointMeshComponent.generated.h already included, missing '#pragma once' in ControlPointMeshComponent.h"
#endif
#define LANDSCAPE_ControlPointMeshComponent_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUControlPointMeshComponent(); \
	friend struct Z_Construct_UClass_UControlPointMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UControlPointMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(UControlPointMeshComponent)


#define FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API UControlPointMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlPointMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, UControlPointMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlPointMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlPointMeshComponent(UControlPointMeshComponent&&); \
	UControlPointMeshComponent(const UControlPointMeshComponent&); \
public: \
	LANDSCAPE_API virtual ~UControlPointMeshComponent();


#define FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_10_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_13_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class UControlPointMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
