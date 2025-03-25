// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISense_generated_h
#error "AISense.generated.h already included, missing '#pragma once' in AISense.h"
#endif
#define AIMODULE_AISense_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAISense(); \
	friend struct Z_Construct_UClass_UAISense_Statics; \
public: \
	DECLARE_CLASS(UAISense, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISense) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISense(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISense); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISense(UAISense&&); \
	UAISense(const UAISense&); \
public: \
	AIMODULE_API virtual ~UAISense();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_19_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_22_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
