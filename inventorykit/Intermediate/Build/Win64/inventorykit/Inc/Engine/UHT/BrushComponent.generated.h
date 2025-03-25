// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BrushComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BrushComponent_generated_h
#error "BrushComponent.generated.h already included, missing '#pragma once' in BrushComponent.h"
#endif
#define ENGINE_BrushComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBrushComponent(); \
	friend struct Z_Construct_UClass_UBrushComponent_Statics; \
public: \
	DECLARE_CLASS(UBrushComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBrushComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBrushComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrushComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBrushComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrushComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBrushComponent(UBrushComponent&&); \
	UBrushComponent(const UBrushComponent&); \
public: \
	ENGINE_API virtual ~UBrushComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBrushComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
