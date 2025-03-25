// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicalMaterials/PhysicalMaterial.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSCORE_PhysicalMaterial_generated_h
#error "PhysicalMaterial.generated.h already included, missing '#pragma once' in PhysicalMaterial.h"
#endif
#define PHYSICSCORE_PhysicalMaterial_generated_h

#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics; \
	PHYSICSCORE_API static class UScriptStruct* StaticStruct();


template<> PHYSICSCORE_API UScriptStruct* StaticStruct<struct FPhysicalMaterialStrength>();

#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics; \
	PHYSICSCORE_API static class UScriptStruct* StaticStruct();


template<> PHYSICSCORE_API UScriptStruct* StaticStruct<struct FPhysicalMaterialDamageModifier>();

#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicalMaterial(); \
	friend struct Z_Construct_UClass_UPhysicalMaterial_Statics; \
public: \
	DECLARE_CLASS(UPhysicalMaterial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsCore"), PHYSICSCORE_API) \
	DECLARE_SERIALIZER(UPhysicalMaterial)


#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSCORE_API UPhysicalMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalMaterial) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalMaterial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicalMaterial(UPhysicalMaterial&&); \
	UPhysicalMaterial(const UPhysicalMaterial&); \
public:


#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_102_PROLOG
#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_105_INCLASS \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSCORE_API UClass* StaticClass<class UPhysicalMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h


#define FOREACH_ENUM_EPHYSICALMATERIALSOFTCOLLISIONMODE(op) \
	op(EPhysicalMaterialSoftCollisionMode::None) \
	op(EPhysicalMaterialSoftCollisionMode::RelativeThickness) \
	op(EPhysicalMaterialSoftCollisionMode::AbsoluteThickess) 

enum class EPhysicalMaterialSoftCollisionMode : uint8;
template<> struct TIsUEnumClass<EPhysicalMaterialSoftCollisionMode> { enum { Value = true }; };
template<> PHYSICSCORE_API UEnum* StaticEnum<EPhysicalMaterialSoftCollisionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
