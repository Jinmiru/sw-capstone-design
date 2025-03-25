// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BodySetupCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSCORE_BodySetupCore_generated_h
#error "BodySetupCore.generated.h already included, missing '#pragma once' in BodySetupCore.h"
#endif
#define PHYSICSCORE_BodySetupCore_generated_h

#define FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUBodySetupCore(); \
	friend struct Z_Construct_UClass_UBodySetupCore_Statics; \
public: \
	DECLARE_CLASS(UBodySetupCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsCore"), PHYSICSCORE_API) \
	DECLARE_SERIALIZER(UBodySetupCore)


#define FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSCORE_API UBodySetupCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySetupCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSCORE_API, UBodySetupCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySetupCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBodySetupCore(UBodySetupCore&&); \
	UBodySetupCore(const UBodySetupCore&); \
public: \
	PHYSICSCORE_API virtual ~UBodySetupCore();


#define FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_17_PROLOG
#define FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_INCLASS \
	FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSCORE_API UClass* StaticClass<class UBodySetupCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
