// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannelPublic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataChannelPublic_generated_h
#error "NiagaraDataChannelPublic.generated.h already included, missing '#pragma once' in NiagaraDataChannelPublic.h"
#endif
#define NIAGARA_NiagaraDataChannelPublic_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelAsset(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannelAsset_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannelAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannelAsset)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelAsset(UNiagaraDataChannelAsset&&); \
	UNiagaraDataChannelAsset(const UNiagaraDataChannelAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelAsset) \
	NIAGARA_API virtual ~UNiagaraDataChannelAsset();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_28_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataChannelAsset>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraVariableBase Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDataChannelVariable>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDataChannelSearchParameters>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDataChannelGameDataLayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
