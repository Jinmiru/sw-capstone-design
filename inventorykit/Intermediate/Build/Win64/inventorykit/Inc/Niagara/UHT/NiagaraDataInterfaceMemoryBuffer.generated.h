// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceMemoryBuffer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceMemoryBuffer_generated_h
#error "NiagaraDataInterfaceMemoryBuffer.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceMemoryBuffer.h"
#endif
#define NIAGARA_NiagaraDataInterfaceMemoryBuffer_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceMemoryBuffer(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceMemoryBuffer, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceMemoryBuffer) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceMemoryBuffer*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceMemoryBuffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceMemoryBuffer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceMemoryBuffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceMemoryBuffer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceMemoryBuffer(UNiagaraDataInterfaceMemoryBuffer&&); \
	UNiagaraDataInterfaceMemoryBuffer(const UNiagaraDataInterfaceMemoryBuffer&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceMemoryBuffer();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_25_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_28_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceMemoryBuffer>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNDIMemoryBufferSimCacheDataFrame>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMemoryBufferSimCacheData(); \
	friend struct Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics; \
public: \
	DECLARE_CLASS(UNDIMemoryBufferSimCacheData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNDIMemoryBufferSimCacheData)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNDIMemoryBufferSimCacheData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNDIMemoryBufferSimCacheData(UNDIMemoryBufferSimCacheData&&); \
	UNDIMemoryBufferSimCacheData(const UNDIMemoryBufferSimCacheData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNDIMemoryBufferSimCacheData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMemoryBufferSimCacheData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMemoryBufferSimCacheData) \
	NIAGARA_API virtual ~UNDIMemoryBufferSimCacheData();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_97_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_100_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNDIMemoryBufferSimCacheData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
