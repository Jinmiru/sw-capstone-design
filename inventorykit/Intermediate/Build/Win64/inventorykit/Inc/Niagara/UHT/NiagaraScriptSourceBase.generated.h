// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraScriptSourceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraScriptSourceBase_generated_h
#error "NiagaraScriptSourceBase.generated.h already included, missing '#pragma once' in NiagaraScriptSourceBase.h"
#endif
#define NIAGARA_NiagaraScriptSourceBase_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScriptSourceBase(); \
	friend struct Z_Construct_UClass_UNiagaraScriptSourceBase_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScriptSourceBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraScriptSourceBase)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraScriptSourceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScriptSourceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraScriptSourceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptSourceBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraScriptSourceBase(UNiagaraScriptSourceBase&&); \
	UNiagaraScriptSourceBase(const UNiagaraScriptSourceBase&); \
public: \
	NIAGARA_API virtual ~UNiagaraScriptSourceBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_108_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_111_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraScriptSourceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
