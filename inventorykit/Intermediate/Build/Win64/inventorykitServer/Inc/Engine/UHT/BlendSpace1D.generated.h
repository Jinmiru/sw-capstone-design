// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/BlendSpace1D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlendSpace1D_generated_h
#error "BlendSpace1D.generated.h already included, missing '#pragma once' in BlendSpace1D.h"
#endif
#define ENGINE_BlendSpace1D_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpace1D(); \
	friend struct Z_Construct_UClass_UBlendSpace1D_Statics; \
public: \
	DECLARE_CLASS(UBlendSpace1D, UBlendSpace, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpace1D)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpace1D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpace1D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpace1D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpace1D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlendSpace1D(UBlendSpace1D&&); \
	UBlendSpace1D(const UBlendSpace1D&); \
public: \
	ENGINE_API virtual ~UBlendSpace1D();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlendSpace1D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
