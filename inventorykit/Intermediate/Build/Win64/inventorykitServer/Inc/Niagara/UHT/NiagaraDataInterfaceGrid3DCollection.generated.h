// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceGrid3DCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
class UVolumeTexture;
#ifdef NIAGARA_NiagaraDataInterfaceGrid3DCollection_generated_h
#error "NiagaraDataInterfaceGrid3DCollection.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceGrid3DCollection.h"
#endif
#define NIAGARA_NiagaraDataInterfaceGrid3DCollection_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_126_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetTextureSize); \
	DECLARE_FUNCTION(execGetRawTextureSize); \
	DECLARE_FUNCTION(execFillRawVolumeTexture); \
	DECLARE_FUNCTION(execFillVolumeTexture);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_126_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollection(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceGrid3DCollection, UNiagaraDataInterfaceGrid3D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceGrid3DCollection)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceGrid3DCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceGrid3DCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceGrid3DCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceGrid3DCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceGrid3DCollection(UNiagaraDataInterfaceGrid3DCollection&&); \
	UNiagaraDataInterfaceGrid3DCollection(const UNiagaraDataInterfaceGrid3DCollection&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceGrid3DCollection();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_123_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_126_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_126_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceGrid3DCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
