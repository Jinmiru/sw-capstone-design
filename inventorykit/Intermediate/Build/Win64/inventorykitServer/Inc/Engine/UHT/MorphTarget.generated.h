// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MorphTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MorphTarget_generated_h
#error "MorphTarget.generated.h already included, missing '#pragma once' in MorphTarget.h"
#endif
#define ENGINE_MorphTarget_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMorphTarget, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUMorphTarget(); \
	friend struct Z_Construct_UClass_UMorphTarget_Statics; \
public: \
	DECLARE_CLASS(UMorphTarget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMorphTarget) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMorphTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMorphTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMorphTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMorphTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMorphTarget(UMorphTarget&&); \
	UMorphTarget(const UMorphTarget&); \
public: \
	ENGINE_API virtual ~UMorphTarget();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_124_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMorphTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
