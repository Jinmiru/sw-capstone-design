// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DrawSphereComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DrawSphereComponent_generated_h
#error "DrawSphereComponent.generated.h already included, missing '#pragma once' in DrawSphereComponent.h"
#endif
#define ENGINE_DrawSphereComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDrawSphereComponent(); \
	friend struct Z_Construct_UClass_UDrawSphereComponent_Statics; \
public: \
	DECLARE_CLASS(UDrawSphereComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDrawSphereComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDrawSphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDrawSphereComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDrawSphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrawSphereComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDrawSphereComponent(UDrawSphereComponent&&); \
	UDrawSphereComponent(const UDrawSphereComponent&); \
public: \
	ENGINE_API virtual ~UDrawSphereComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDrawSphereComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_DrawSphereComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
