// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraComponentPool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraComponentPool_generated_h
#error "NiagaraComponentPool.generated.h already included, missing '#pragma once' in NiagaraComponentPool.h"
#endif
#define NIAGARA_NiagaraComponentPool_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNCPoolElement_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNCPoolElement>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNCPool_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNCPool>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraComponentPool(); \
	friend struct Z_Construct_UClass_UNiagaraComponentPool_Statics; \
public: \
	DECLARE_CLASS(UNiagaraComponentPool, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraComponentPool)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraComponentPool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraComponentPool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraComponentPool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraComponentPool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraComponentPool(UNiagaraComponentPool&&); \
	UNiagaraComponentPool(const UNiagaraComponentPool&); \
public:


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_68_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_71_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraComponentPool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
