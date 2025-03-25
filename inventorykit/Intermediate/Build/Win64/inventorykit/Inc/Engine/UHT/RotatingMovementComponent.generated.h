// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/RotatingMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RotatingMovementComponent_generated_h
#error "RotatingMovementComponent.generated.h already included, missing '#pragma once' in RotatingMovementComponent.h"
#endif
#define ENGINE_RotatingMovementComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURotatingMovementComponent(); \
	friend struct Z_Construct_UClass_URotatingMovementComponent_Statics; \
public: \
	DECLARE_CLASS(URotatingMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URotatingMovementComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URotatingMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URotatingMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URotatingMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URotatingMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URotatingMovementComponent(URotatingMovementComponent&&); \
	URotatingMovementComponent(const URotatingMovementComponent&); \
public: \
	ENGINE_API virtual ~URotatingMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URotatingMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RotatingMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
