// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCompositeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCompositeBase_generated_h
#error "AnimCompositeBase.generated.h already included, missing '#pragma once' in AnimCompositeBase.h"
#endif
#define ENGINE_AnimCompositeBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionExtractionStep>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSegment_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSegment>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_253_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_357_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompositeBase(); \
	friend struct Z_Construct_UClass_UAnimCompositeBase_Statics; \
public: \
	DECLARE_CLASS(UAnimCompositeBase, UAnimSequenceBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimCompositeBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_357_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompositeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompositeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompositeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompositeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimCompositeBase(UAnimCompositeBase&&); \
	UAnimCompositeBase(const UAnimCompositeBase&); \
public: \
	ENGINE_API virtual ~UAnimCompositeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_354_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_357_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_357_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_357_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimCompositeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
