// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/Modules/NiagaraStatelessModule_CurlNoiseForce.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraStatelessModule_CurlNoiseForce_generated_h
#error "NiagaraStatelessModule_CurlNoiseForce.generated.h already included, missing '#pragma once' in NiagaraStatelessModule_CurlNoiseForce.h"
#endif
#define NIAGARA_NiagaraStatelessModule_CurlNoiseForce_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStatelessModule_CurlNoiseForce(); \
	friend struct Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics; \
public: \
	DECLARE_CLASS(UNiagaraStatelessModule_CurlNoiseForce, UNiagaraStatelessModule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraStatelessModule_CurlNoiseForce)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraStatelessModule_CurlNoiseForce(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraStatelessModule_CurlNoiseForce(UNiagaraStatelessModule_CurlNoiseForce&&); \
	UNiagaraStatelessModule_CurlNoiseForce(const UNiagaraStatelessModule_CurlNoiseForce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraStatelessModule_CurlNoiseForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStatelessModule_CurlNoiseForce); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStatelessModule_CurlNoiseForce) \
	NIAGARA_API virtual ~UNiagaraStatelessModule_CurlNoiseForce();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_23_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraStatelessModule_CurlNoiseForce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h


#define FOREACH_ENUM_ENSM_NOISEMODE(op) \
	op(ENSM_NoiseMode::VectorField) \
	op(ENSM_NoiseMode::JacobNoise) \
	op(ENSM_NoiseMode::LUTJacob) \
	op(ENSM_NoiseMode::LUTJacobBicubic) 

enum class ENSM_NoiseMode;
template<> struct TIsUEnumClass<ENSM_NoiseMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENSM_NoiseMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
