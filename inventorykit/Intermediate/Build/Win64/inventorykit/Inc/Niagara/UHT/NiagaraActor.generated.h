// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
#ifdef NIAGARA_NiagaraActor_generated_h
#error "NiagaraActor.generated.h already included, missing '#pragma once' in NiagaraActor.h"
#endif
#define NIAGARA_NiagaraActor_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNiagaraSystemFinished); \
	DECLARE_FUNCTION(execGetDestroyOnSystemFinish); \
	DECLARE_FUNCTION(execSetDestroyOnSystemFinish);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANiagaraActor(); \
	friend struct Z_Construct_UClass_ANiagaraActor_Statics; \
public: \
	DECLARE_CLASS(ANiagaraActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(ANiagaraActor)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANiagaraActor(ANiagaraActor&&); \
	ANiagaraActor(const ANiagaraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, ANiagaraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraActor) \
	NIAGARA_API virtual ~ANiagaraActor();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_10_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class ANiagaraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
