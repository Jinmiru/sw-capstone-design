// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BrushShape.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BrushShape_generated_h
#error "BrushShape.generated.h already included, missing '#pragma once' in BrushShape.h"
#endif
#define ENGINE_BrushShape_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABrushShape(); \
	friend struct Z_Construct_UClass_ABrushShape_Statics; \
public: \
	DECLARE_CLASS(ABrushShape, ABrush, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ABrushShape)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ABrushShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrushShape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ABrushShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrushShape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABrushShape(ABrushShape&&); \
	ABrushShape(const ABrushShape&); \
public: \
	ENGINE_API virtual ~ABrushShape();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ABrushShape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
