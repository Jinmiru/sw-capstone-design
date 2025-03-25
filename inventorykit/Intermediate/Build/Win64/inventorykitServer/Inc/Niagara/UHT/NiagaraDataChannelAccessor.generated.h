// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannelAccessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FNiagaraDataChannelSearchParameters;
struct FNiagaraID;
struct FNiagaraSpawnInfo;
#ifdef NIAGARA_NiagaraDataChannelAccessor_generated_h
#error "NiagaraDataChannelAccessor.generated.h already included, missing '#pragma once' in NiagaraDataChannelAccessor.h"
#endif
#define NIAGARA_NiagaraDataChannelAccessor_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReadSpawnInfo); \
	DECLARE_FUNCTION(execReadID); \
	DECLARE_FUNCTION(execReadPosition); \
	DECLARE_FUNCTION(execReadBool); \
	DECLARE_FUNCTION(execReadEnum); \
	DECLARE_FUNCTION(execReadInt); \
	DECLARE_FUNCTION(execReadLinearColor); \
	DECLARE_FUNCTION(execReadQuat); \
	DECLARE_FUNCTION(execReadVector4); \
	DECLARE_FUNCTION(execReadVector); \
	DECLARE_FUNCTION(execReadVector2D); \
	DECLARE_FUNCTION(execReadFloat); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInitAccess);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelReader(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannelReader_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannelReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannelReader)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelReader(UNiagaraDataChannelReader&&); \
	UNiagaraDataChannelReader(const UNiagaraDataChannelReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelReader) \
	NIAGARA_API virtual ~UNiagaraDataChannelReader();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_19_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataChannelReader>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteID); \
	DECLARE_FUNCTION(execWritePosition); \
	DECLARE_FUNCTION(execWriteSpawnInfo); \
	DECLARE_FUNCTION(execWriteBool); \
	DECLARE_FUNCTION(execWriteEnum); \
	DECLARE_FUNCTION(execWriteInt); \
	DECLARE_FUNCTION(execWriteLinearColor); \
	DECLARE_FUNCTION(execWriteQuat); \
	DECLARE_FUNCTION(execWriteVector4); \
	DECLARE_FUNCTION(execWriteVector); \
	DECLARE_FUNCTION(execWriteVector2D); \
	DECLARE_FUNCTION(execWriteFloat); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInitWrite);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelWriter(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannelWriter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannelWriter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannelWriter)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelWriter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelWriter(UNiagaraDataChannelWriter&&); \
	UNiagaraDataChannelWriter(const UNiagaraDataChannelWriter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelWriter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelWriter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelWriter) \
	NIAGARA_API virtual ~UNiagaraDataChannelWriter();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_80_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataChannelWriter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
