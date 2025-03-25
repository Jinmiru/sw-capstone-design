// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseEvent_Damage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseEvent_Damage_generated_h
#error "AISenseEvent_Damage.generated.h already included, missing '#pragma once' in AISenseEvent_Damage.h"
#endif
#define AIMODULE_AISenseEvent_Damage_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseEvent_Damage(); \
	friend struct Z_Construct_UClass_UAISenseEvent_Damage_Statics; \
public: \
	DECLARE_CLASS(UAISenseEvent_Damage, UAISenseEvent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISenseEvent_Damage)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseEvent_Damage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISenseEvent_Damage(UAISenseEvent_Damage&&); \
	UAISenseEvent_Damage(const UAISenseEvent_Damage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseEvent_Damage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseEvent_Damage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseEvent_Damage) \
	AIMODULE_API virtual ~UAISenseEvent_Damage();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_11_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseEvent_Damage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
