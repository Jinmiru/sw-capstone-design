// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceGrid2DCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
class UTextureRenderTarget2D;
#ifdef NIAGARA_NiagaraDataInterfaceGrid2DCollection_generated_h
#error "NiagaraDataInterfaceGrid2DCollection.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceGrid2DCollection.h"
#endif
#define NIAGARA_NiagaraDataInterfaceGrid2DCollection_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h_116_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetTextureSize); \
	DECLARE_FUNCTION(execGetRawTextureSize); \
	DECLARE_FUNCTION(execFillRawTexture2D); \
	DECLARE_FUNCTION(execFillTexture2D);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollection(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollection_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceGrid2DCollection, UNiagaraDataInterfaceGrid2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceGrid2DCollection)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceGrid2DCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceGrid2DCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceGrid2DCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceGrid2DCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceGrid2DCollection(UNiagaraDataInterfaceGrid2DCollection&&); \
	UNiagaraDataInterfaceGrid2DCollection(const UNiagaraDataInterfaceGrid2DCollection&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceGrid2DCollection();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h_113_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h_116_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h_116_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceGrid2DCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid2DCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
