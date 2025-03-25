// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerAnimationOverride.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_SequencerAnimationOverride_generated_h
#error "SequencerAnimationOverride.generated.h already included, missing '#pragma once' in SequencerAnimationOverride.h"
#endif
#define ANIMGRAPHRUNTIME_SequencerAnimationOverride_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<FName> GetSequencerAnimSlotNames_Implementation() const { return TArray<FName>(); }; \
	DECLARE_FUNCTION(execGetSequencerAnimSlotNames); \
	DECLARE_FUNCTION(execAllowsCinematicOverride);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerAnimationOverride(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USequencerAnimationOverride(USequencerAnimationOverride&&); \
	USequencerAnimationOverride(const USequencerAnimationOverride&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerAnimationOverride); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerAnimationOverride); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerAnimationOverride) \
	NO_API virtual ~USequencerAnimationOverride();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSequencerAnimationOverride(); \
	friend struct Z_Construct_UClass_USequencerAnimationOverride_Statics; \
public: \
	DECLARE_CLASS(USequencerAnimationOverride, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(USequencerAnimationOverride)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISequencerAnimationOverride() {} \
public: \
	typedef USequencerAnimationOverride UClassType; \
	typedef ISequencerAnimationOverride ThisClass; \
	static bool Execute_AllowsCinematicOverride(const UObject* O); \
	static TArray<FName> Execute_GetSequencerAnimSlotNames(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_18_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class USequencerAnimationOverride>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
