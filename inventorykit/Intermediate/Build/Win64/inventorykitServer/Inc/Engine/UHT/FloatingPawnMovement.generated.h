// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/FloatingPawnMovement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_FloatingPawnMovement_generated_h
#error "FloatingPawnMovement.generated.h already included, missing '#pragma once' in FloatingPawnMovement.h"
#endif
#define ENGINE_FloatingPawnMovement_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUFloatingPawnMovement(); \
	friend struct Z_Construct_UClass_UFloatingPawnMovement_Statics; \
public: \
	DECLARE_CLASS(UFloatingPawnMovement, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFloatingPawnMovement)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFloatingPawnMovement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatingPawnMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFloatingPawnMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatingPawnMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFloatingPawnMovement(UFloatingPawnMovement&&); \
	UFloatingPawnMovement(const UFloatingPawnMovement&); \
public: \
	ENGINE_API virtual ~UFloatingPawnMovement();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UFloatingPawnMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
