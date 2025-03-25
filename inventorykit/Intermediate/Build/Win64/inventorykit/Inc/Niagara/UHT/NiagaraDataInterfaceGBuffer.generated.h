// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceGBuffer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceGBuffer_generated_h
#error "NiagaraDataInterfaceGBuffer.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceGBuffer.h"
#endif
#define NIAGARA_NiagaraDataInterfaceGBuffer_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceGBuffer(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceGBuffer, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceGBuffer)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceGBuffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceGBuffer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceGBuffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceGBuffer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceGBuffer(UNiagaraDataInterfaceGBuffer&&); \
	UNiagaraDataInterfaceGBuffer(const UNiagaraDataInterfaceGBuffer&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceGBuffer();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_11_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_14_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceGBuffer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
