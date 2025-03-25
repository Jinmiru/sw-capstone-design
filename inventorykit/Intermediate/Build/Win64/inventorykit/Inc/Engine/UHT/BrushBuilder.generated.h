// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BrushBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BrushBuilder_generated_h
#error "BrushBuilder.generated.h already included, missing '#pragma once' in BrushBuilder.h"
#endif
#define ENGINE_BrushBuilder_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuilderPoly_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBuilderPoly>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUBrushBuilder(); \
	friend struct Z_Construct_UClass_UBrushBuilder_Statics; \
public: \
	DECLARE_CLASS(UBrushBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBrushBuilder)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBrushBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrushBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBrushBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrushBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBrushBuilder(UBrushBuilder&&); \
	UBrushBuilder(const UBrushBuilder&); \
public: \
	ENGINE_API virtual ~UBrushBuilder();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_51_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBrushBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
