// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimBoneCompressionCodec.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimBoneCompressionCodec_generated_h
#error "AnimBoneCompressionCodec.generated.h already included, missing '#pragma once' in AnimBoneCompressionCodec.h"
#endif
#define ENGINE_AnimBoneCompressionCodec_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBoneCompressionCodec(); \
	friend struct Z_Construct_UClass_UAnimBoneCompressionCodec_Statics; \
public: \
	DECLARE_CLASS(UAnimBoneCompressionCodec, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimBoneCompressionCodec)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimBoneCompressionCodec(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBoneCompressionCodec) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimBoneCompressionCodec); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBoneCompressionCodec); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimBoneCompressionCodec(UAnimBoneCompressionCodec&&); \
	UAnimBoneCompressionCodec(const UAnimBoneCompressionCodec&); \
public: \
	ENGINE_API virtual ~UAnimBoneCompressionCodec();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimBoneCompressionCodec>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
