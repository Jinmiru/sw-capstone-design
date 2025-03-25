// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceSimpleCounter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceSimpleCounter_generated_h
#error "NiagaraDataInterfaceSimpleCounter.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceSimpleCounter.h"
#endif
#define NIAGARA_NiagaraDataInterfaceSimpleCounter_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceSimpleCounter(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceSimpleCounter, UNiagaraDataInterfaceRWBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceSimpleCounter) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceSimpleCounter*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceSimpleCounter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceSimpleCounter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceSimpleCounter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceSimpleCounter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceSimpleCounter(UNiagaraDataInterfaceSimpleCounter&&); \
	UNiagaraDataInterfaceSimpleCounter(const UNiagaraDataInterfaceSimpleCounter&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceSimpleCounter();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_20_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_23_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceSimpleCounter>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDISimpleCounterSimCacheData(); \
	friend struct Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics; \
public: \
	DECLARE_CLASS(UNDISimpleCounterSimCacheData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNDISimpleCounterSimCacheData)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNDISimpleCounterSimCacheData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNDISimpleCounterSimCacheData(UNDISimpleCounterSimCacheData&&); \
	UNDISimpleCounterSimCacheData(const UNDISimpleCounterSimCacheData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNDISimpleCounterSimCacheData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDISimpleCounterSimCacheData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDISimpleCounterSimCacheData) \
	NIAGARA_API virtual ~UNDISimpleCounterSimCacheData();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_95_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNDISimpleCounterSimCacheData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
