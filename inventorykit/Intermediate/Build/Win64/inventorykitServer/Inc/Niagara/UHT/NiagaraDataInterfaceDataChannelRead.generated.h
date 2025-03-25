// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceDataChannelRead.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceDataChannelRead_generated_h
#error "NiagaraDataInterfaceDataChannelRead.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceDataChannelRead.h"
#endif
#define NIAGARA_NiagaraDataInterfaceDataChannelRead_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_58_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceDataChannelRead, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceDataChannelRead(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceDataChannelRead, UNiagaraDataInterfaceRWBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceDataChannelRead) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_58_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceDataChannelRead(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceDataChannelRead) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceDataChannelRead); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceDataChannelRead); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceDataChannelRead(UNiagaraDataInterfaceDataChannelRead&&); \
	UNiagaraDataInterfaceDataChannelRead(const UNiagaraDataInterfaceDataChannelRead&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceDataChannelRead();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_55_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_58_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceDataChannelRead>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h


#define FOREACH_ENUM_ENDIDATACHANNELSPAWNMODE(op) \
	op(ENDIDataChannelSpawnMode::Override) \
	op(ENDIDataChannelSpawnMode::Accumulate) \
	op(ENDIDataChannelSpawnMode::None) \
	op(ENDIDataChannelSpawnMode::Max) 

enum class ENDIDataChannelSpawnMode;
template<> struct TIsUEnumClass<ENDIDataChannelSpawnMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENDIDataChannelSpawnMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
