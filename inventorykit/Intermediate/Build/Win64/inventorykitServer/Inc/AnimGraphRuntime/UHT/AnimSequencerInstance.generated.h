// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequencerInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimSequencerInstance_generated_h
#error "AnimSequencerInstance.generated.h already included, missing '#pragma once' in AnimSequencerInstance.h"
#endif
#define ANIMGRAPHRUNTIME_AnimSequencerInstance_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequencerInstance(); \
	friend struct Z_Construct_UClass_UAnimSequencerInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSequencerInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), ANIMGRAPHRUNTIME_API) \
	DECLARE_SERIALIZER(UAnimSequencerInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimSequencerInstance*>(this); }


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UAnimSequencerInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequencerInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UAnimSequencerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequencerInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimSequencerInstance(UAnimSequencerInstance&&); \
	UAnimSequencerInstance(const UAnimSequencerInstance&); \
public: \
	ANIMGRAPHRUNTIME_API virtual ~UAnimSequencerInstance();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_17_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UAnimSequencerInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
