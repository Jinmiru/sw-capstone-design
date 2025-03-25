// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TriggerCapsule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TriggerCapsule_generated_h
#error "TriggerCapsule.generated.h already included, missing '#pragma once' in TriggerCapsule.h"
#endif
#define ENGINE_TriggerCapsule_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATriggerCapsule(); \
	friend struct Z_Construct_UClass_ATriggerCapsule_Statics; \
public: \
	DECLARE_CLASS(ATriggerCapsule, ATriggerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ATriggerCapsule)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATriggerCapsule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerCapsule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATriggerCapsule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerCapsule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATriggerCapsule(ATriggerCapsule&&); \
	ATriggerCapsule(const ATriggerCapsule&); \
public: \
	ENGINE_API virtual ~ATriggerCapsule();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ATriggerCapsule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
