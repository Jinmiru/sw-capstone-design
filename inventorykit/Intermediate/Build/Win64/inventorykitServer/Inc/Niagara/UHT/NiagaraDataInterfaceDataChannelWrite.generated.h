// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceDataChannelWrite.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceDataChannelWrite_generated_h
#error "NiagaraDataInterfaceDataChannelWrite.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceDataChannelWrite.h"
#endif
#define NIAGARA_NiagaraDataInterfaceDataChannelWrite_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNDIDataChannelCompiledData Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNDIDataChannelWriteCompiledData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNDIDataChannelWriteSimCacheFrameBuffer>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNDIDataChannelWriteSimCacheFrame>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIDataChannelWriteSimCacheData(); \
	friend struct Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics; \
public: \
	DECLARE_CLASS(UNDIDataChannelWriteSimCacheData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNDIDataChannelWriteSimCacheData)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNDIDataChannelWriteSimCacheData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNDIDataChannelWriteSimCacheData(UNDIDataChannelWriteSimCacheData&&); \
	UNDIDataChannelWriteSimCacheData(const UNDIDataChannelWriteSimCacheData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNDIDataChannelWriteSimCacheData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIDataChannelWriteSimCacheData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIDataChannelWriteSimCacheData) \
	NIAGARA_API virtual ~UNDIDataChannelWriteSimCacheData();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_75_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNDIDataChannelWriteSimCacheData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceDataChannelWrite(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceDataChannelWrite, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceDataChannelWrite) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceDataChannelWrite*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceDataChannelWrite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceDataChannelWrite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceDataChannelWrite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceDataChannelWrite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceDataChannelWrite(UNiagaraDataInterfaceDataChannelWrite&&); \
	UNiagaraDataInterfaceDataChannelWrite(const UNiagaraDataInterfaceDataChannelWrite&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceDataChannelWrite();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_90_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_93_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceDataChannelWrite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
