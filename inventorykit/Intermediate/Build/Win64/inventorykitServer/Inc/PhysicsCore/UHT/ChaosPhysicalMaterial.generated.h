// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosPhysicalMaterial.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSCORE_ChaosPhysicalMaterial_generated_h
#error "ChaosPhysicalMaterial.generated.h already included, missing '#pragma once' in ChaosPhysicalMaterial.h"
#endif
#define PHYSICSCORE_ChaosPhysicalMaterial_generated_h

#define FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUChaosPhysicalMaterial(); \
	friend struct Z_Construct_UClass_UChaosPhysicalMaterial_Statics; \
public: \
	DECLARE_CLASS(UChaosPhysicalMaterial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsCore"), PHYSICSCORE_API) \
	DECLARE_SERIALIZER(UChaosPhysicalMaterial)


#define FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSCORE_API UChaosPhysicalMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosPhysicalMaterial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSCORE_API, UChaosPhysicalMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosPhysicalMaterial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosPhysicalMaterial(UChaosPhysicalMaterial&&); \
	UChaosPhysicalMaterial(const UChaosPhysicalMaterial&); \
public: \
	PHYSICSCORE_API virtual ~UChaosPhysicalMaterial();


#define FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_21_PROLOG
#define FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_24_INCLASS \
	FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSCORE_API UClass* StaticClass<class UChaosPhysicalMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
