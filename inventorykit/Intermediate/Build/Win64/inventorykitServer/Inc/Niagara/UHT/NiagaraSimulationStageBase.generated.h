// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSimulationStageBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSimulationStageBase_generated_h
#error "NiagaraSimulationStageBase.generated.h already included, missing '#pragma once' in NiagaraSimulationStageBase.h"
#endif
#define NIAGARA_NiagaraSimulationStageBase_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSimulationStageBase(); \
	friend struct Z_Construct_UClass_UNiagaraSimulationStageBase_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSimulationStageBase, UNiagaraMergeable, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraSimulationStageBase)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSimulationStageBase(UNiagaraSimulationStageBase&&); \
	UNiagaraSimulationStageBase(const UNiagaraSimulationStageBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSimulationStageBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimulationStageBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSimulationStageBase) \
	NIAGARA_API virtual ~UNiagaraSimulationStageBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_19_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSimulationStageBase>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSimulationStageGeneric(); \
	friend struct Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSimulationStageGeneric, UNiagaraSimulationStageBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraSimulationStageGeneric)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSimulationStageGeneric(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSimulationStageGeneric(UNiagaraSimulationStageGeneric&&); \
	UNiagaraSimulationStageGeneric(const UNiagaraSimulationStageGeneric&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSimulationStageGeneric); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimulationStageGeneric); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSimulationStageGeneric) \
	NIAGARA_API virtual ~UNiagaraSimulationStageGeneric();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_59_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSimulationStageGeneric>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
