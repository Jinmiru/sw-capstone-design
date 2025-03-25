// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/Modules/NiagaraStatelessModule_AddVelocity.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraStatelessModule_AddVelocity_generated_h
#error "NiagaraStatelessModule_AddVelocity.generated.h already included, missing '#pragma once' in NiagaraStatelessModule_AddVelocity.h"
#endif
#define NIAGARA_NiagaraStatelessModule_AddVelocity_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStatelessModule_AddVelocity(); \
	friend struct Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics; \
public: \
	DECLARE_CLASS(UNiagaraStatelessModule_AddVelocity, UNiagaraStatelessModule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraStatelessModule_AddVelocity)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraStatelessModule_AddVelocity(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraStatelessModule_AddVelocity(UNiagaraStatelessModule_AddVelocity&&); \
	UNiagaraStatelessModule_AddVelocity(const UNiagaraStatelessModule_AddVelocity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraStatelessModule_AddVelocity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStatelessModule_AddVelocity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStatelessModule_AddVelocity) \
	NIAGARA_API virtual ~UNiagaraStatelessModule_AddVelocity();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_20_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraStatelessModule_AddVelocity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h


#define FOREACH_ENUM_ENSM_VELOCITYTYPE(op) \
	op(ENSM_VelocityType::Linear) \
	op(ENSM_VelocityType::FromPoint) \
	op(ENSM_VelocityType::InCone) 

enum class ENSM_VelocityType;
template<> struct TIsUEnumClass<ENSM_VelocityType> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENSM_VelocityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
