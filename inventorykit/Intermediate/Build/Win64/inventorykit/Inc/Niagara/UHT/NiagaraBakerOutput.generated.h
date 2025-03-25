// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraBakerOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraBakerOutput_generated_h
#error "NiagaraBakerOutput.generated.h already included, missing '#pragma once' in NiagaraBakerOutput.h"
#endif
#define NIAGARA_NiagaraBakerOutput_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraBakerTextureSource>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraBakerOutput(); \
	friend struct Z_Construct_UClass_UNiagaraBakerOutput_Statics; \
public: \
	DECLARE_CLASS(UNiagaraBakerOutput, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraBakerOutput)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraBakerOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraBakerOutput(UNiagaraBakerOutput&&); \
	UNiagaraBakerOutput(const UNiagaraBakerOutput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraBakerOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraBakerOutput); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraBakerOutput) \
	NIAGARA_API virtual ~UNiagaraBakerOutput();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_25_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraBakerOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
