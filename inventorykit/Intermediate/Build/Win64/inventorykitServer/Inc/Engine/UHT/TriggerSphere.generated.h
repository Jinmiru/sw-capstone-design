// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TriggerSphere.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TriggerSphere_generated_h
#error "TriggerSphere.generated.h already included, missing '#pragma once' in TriggerSphere.h"
#endif
#define ENGINE_TriggerSphere_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATriggerSphere(); \
	friend struct Z_Construct_UClass_ATriggerSphere_Statics; \
public: \
	DECLARE_CLASS(ATriggerSphere, ATriggerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ATriggerSphere)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATriggerSphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATriggerSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerSphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATriggerSphere(ATriggerSphere&&); \
	ATriggerSphere(const ATriggerSphere&); \
public: \
	ENGINE_API virtual ~ATriggerSphere();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ATriggerSphere>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
