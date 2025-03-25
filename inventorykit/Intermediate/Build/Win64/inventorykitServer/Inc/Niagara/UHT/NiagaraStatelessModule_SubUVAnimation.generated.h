// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraStatelessModule_SubUVAnimation_generated_h
#error "NiagaraStatelessModule_SubUVAnimation.generated.h already included, missing '#pragma once' in NiagaraStatelessModule_SubUVAnimation.h"
#endif
#define NIAGARA_NiagaraStatelessModule_SubUVAnimation_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStatelessModule_SubUVAnimation(); \
	friend struct Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics; \
public: \
	DECLARE_CLASS(UNiagaraStatelessModule_SubUVAnimation, UNiagaraStatelessModule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraStatelessModule_SubUVAnimation)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraStatelessModule_SubUVAnimation(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraStatelessModule_SubUVAnimation(UNiagaraStatelessModule_SubUVAnimation&&); \
	UNiagaraStatelessModule_SubUVAnimation(const UNiagaraStatelessModule_SubUVAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraStatelessModule_SubUVAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStatelessModule_SubUVAnimation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStatelessModule_SubUVAnimation) \
	NIAGARA_API virtual ~UNiagaraStatelessModule_SubUVAnimation();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_19_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraStatelessModule_SubUVAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h


#define FOREACH_ENUM_ENSMSUBUVANIMATION_MODE(op) \
	op(ENSMSubUVAnimation_Mode::InfiniteLoop) \
	op(ENSMSubUVAnimation_Mode::Linear) \
	op(ENSMSubUVAnimation_Mode::Random) 

enum class ENSMSubUVAnimation_Mode;
template<> struct TIsUEnumClass<ENSMSubUVAnimation_Mode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENSMSubUVAnimation_Mode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
