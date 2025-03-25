// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsSpringComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsSpringComponent_generated_h
#error "PhysicsSpringComponent.generated.h already included, missing '#pragma once' in PhysicsSpringComponent.h"
#endif
#define ENGINE_PhysicsSpringComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetSpringDirection); \
	DECLARE_FUNCTION(execGetSpringCurrentEndPoint); \
	DECLARE_FUNCTION(execGetSpringRestingPoint); \
	DECLARE_FUNCTION(execGetNormalizedCompressionScalar);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsSpringComponent(); \
	friend struct Z_Construct_UClass_UPhysicsSpringComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSpringComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsSpringComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsSpringComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSpringComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsSpringComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSpringComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsSpringComponent(UPhysicsSpringComponent&&); \
	UPhysicsSpringComponent(const UPhysicsSpringComponent&); \
public: \
	ENGINE_API virtual ~UPhysicsSpringComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsSpringComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
