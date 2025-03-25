// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraStatelessModule_ShapeLocation_generated_h
#error "NiagaraStatelessModule_ShapeLocation.generated.h already included, missing '#pragma once' in NiagaraStatelessModule_ShapeLocation.h"
#endif
#define NIAGARA_NiagaraStatelessModule_ShapeLocation_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStatelessModule_ShapeLocation(); \
	friend struct Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics; \
public: \
	DECLARE_CLASS(UNiagaraStatelessModule_ShapeLocation, UNiagaraStatelessModule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraStatelessModule_ShapeLocation)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraStatelessModule_ShapeLocation(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraStatelessModule_ShapeLocation(UNiagaraStatelessModule_ShapeLocation&&); \
	UNiagaraStatelessModule_ShapeLocation(const UNiagaraStatelessModule_ShapeLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraStatelessModule_ShapeLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStatelessModule_ShapeLocation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStatelessModule_ShapeLocation) \
	NIAGARA_API virtual ~UNiagaraStatelessModule_ShapeLocation();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_20_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraStatelessModule_ShapeLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h


#define FOREACH_ENUM_ENSM_SHAPEPRIMITIVE(op) \
	op(ENSM_ShapePrimitive::Box) \
	op(ENSM_ShapePrimitive::Cylinder) \
	op(ENSM_ShapePrimitive::Plane) \
	op(ENSM_ShapePrimitive::Ring) \
	op(ENSM_ShapePrimitive::Sphere) 

enum class ENSM_ShapePrimitive;
template<> struct TIsUEnumClass<ENSM_ShapePrimitive> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENSM_ShapePrimitive>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
