// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCurveCompressionCodec.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCurveCompressionCodec_generated_h
#error "AnimCurveCompressionCodec.generated.h already included, missing '#pragma once' in AnimCurveCompressionCodec.h"
#endif
#define ENGINE_AnimCurveCompressionCodec_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_35_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimCurveCompressionCodec, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCurveCompressionCodec(); \
	friend struct Z_Construct_UClass_UAnimCurveCompressionCodec_Statics; \
public: \
	DECLARE_CLASS(UAnimCurveCompressionCodec, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimCurveCompressionCodec) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_35_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCurveCompressionCodec(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCurveCompressionCodec) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCurveCompressionCodec); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCurveCompressionCodec); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimCurveCompressionCodec(UAnimCurveCompressionCodec&&); \
	UAnimCurveCompressionCodec(const UAnimCurveCompressionCodec&); \
public: \
	ENGINE_API virtual ~UAnimCurveCompressionCodec();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_35_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimCurveCompressionCodec>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
