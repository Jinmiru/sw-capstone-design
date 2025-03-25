// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseBlueprintListener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseBlueprintListener_generated_h
#error "AISenseBlueprintListener.generated.h already included, missing '#pragma once' in AISenseBlueprintListener.h"
#endif
#define AIMODULE_AISenseBlueprintListener_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseBlueprintListener(); \
	friend struct Z_Construct_UClass_UAISenseBlueprintListener_Statics; \
public: \
	DECLARE_CLASS(UAISenseBlueprintListener, UUserDefinedStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISenseBlueprintListener)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseBlueprintListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISenseBlueprintListener(UAISenseBlueprintListener&&); \
	UAISenseBlueprintListener(const UAISenseBlueprintListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseBlueprintListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseBlueprintListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseBlueprintListener) \
	AIMODULE_API virtual ~UAISenseBlueprintListener();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_8_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseBlueprintListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
