// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsCollisionHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsCollisionHandler_generated_h
#error "PhysicsCollisionHandler.generated.h already included, missing '#pragma once' in PhysicsCollisionHandler.h"
#endif
#define ENGINE_PhysicsCollisionHandler_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsCollisionHandler(); \
	friend struct Z_Construct_UClass_UPhysicsCollisionHandler_Statics; \
public: \
	DECLARE_CLASS(UPhysicsCollisionHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsCollisionHandler)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsCollisionHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsCollisionHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsCollisionHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsCollisionHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsCollisionHandler(UPhysicsCollisionHandler&&); \
	UPhysicsCollisionHandler(const UPhysicsCollisionHandler&); \
public: \
	ENGINE_API virtual ~UPhysicsCollisionHandler();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsCollisionHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
