// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/EngineCustomTimeStep.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EngineCustomTimeStep_generated_h
#error "EngineCustomTimeStep.generated.h already included, missing '#pragma once' in EngineCustomTimeStep.h"
#endif
#define ENGINE_EngineCustomTimeStep_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineCustomTimeStep(); \
	friend struct Z_Construct_UClass_UEngineCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UEngineCustomTimeStep, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEngineCustomTimeStep)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEngineCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEngineCustomTimeStep(UEngineCustomTimeStep&&); \
	UEngineCustomTimeStep(const UEngineCustomTimeStep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEngineCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineCustomTimeStep); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineCustomTimeStep) \
	ENGINE_API virtual ~UEngineCustomTimeStep();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_34_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEngineCustomTimeStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h


#define FOREACH_ENUM_ECUSTOMTIMESTEPSYNCHRONIZATIONSTATE(op) \
	op(ECustomTimeStepSynchronizationState::Closed) \
	op(ECustomTimeStepSynchronizationState::Error) \
	op(ECustomTimeStepSynchronizationState::Synchronized) \
	op(ECustomTimeStepSynchronizationState::Synchronizing) 

enum class ECustomTimeStepSynchronizationState;
template<> struct TIsUEnumClass<ECustomTimeStepSynchronizationState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ECustomTimeStepSynchronizationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
