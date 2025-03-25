// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mechanics/CollisionPrimitivesMechanic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTS_CollisionPrimitivesMechanic_generated_h
#error "CollisionPrimitivesMechanic.generated.h already included, missing '#pragma once' in CollisionPrimitivesMechanic.h"
#endif
#define MODELINGCOMPONENTS_CollisionPrimitivesMechanic_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollisionPrimitivesMechanic(); \
	friend struct Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics; \
public: \
	DECLARE_CLASS(UCollisionPrimitivesMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UCollisionPrimitivesMechanic)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollisionPrimitivesMechanic(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCollisionPrimitivesMechanic(UCollisionPrimitivesMechanic&&); \
	UCollisionPrimitivesMechanic(const UCollisionPrimitivesMechanic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollisionPrimitivesMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionPrimitivesMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCollisionPrimitivesMechanic) \
	NO_API virtual ~UCollisionPrimitivesMechanic();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UCollisionPrimitivesMechanic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
